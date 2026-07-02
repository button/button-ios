import SwiftUI
import Button

class NightOwlCard: Card {
    
    var onAction: (() -> Void)?
    
    override class func createView() -> UIView {
        let viewModel = NightOwlCard.ViewModel()
        let rootView = NightOwlCard.CardView(viewModel: viewModel)
        return HostingView(rootView: rootView)
    }
    
    override func prepareView(_ cardView: UIView) {
        guard let host = cardView as? HostingView<NightOwlCard.CardView> else {
            return
        }
        host.rootView.viewModel.onAction = self.onAction
    }
}

extension NightOwlCard {
    
    class ViewModel: ObservableObject {
        enum State {
            case processing
            case unredeemed
            case redeemed
            
            var imageName: String {
                switch self {
                case .unredeemed, .processing: return "nightowl"
                case .redeemed: return "moneyowl"
                }
            }
            
            var buttonTitle: String {
                switch self {
                case .processing: return ""
                case .unredeemed: return "Tap to Hoot"
                case .redeemed: return "Offer Redeemed"
                }
            }
            
            var buttonColor: Color {
                switch self {
                case .processing: return .white.opacity(0.15)
                case .unredeemed: return Color("btn-unredeemed")
                case .redeemed: return Color("btn-redeemed")
                }
            }
        }
        
        @Published var state: State = .unredeemed
        var isRedeemed: Bool { state == .redeemed }
        var onAction: (() -> Void)?
        
        func onButtonAction() {
            state = .processing
            DispatchQueue.main.asyncAfter(deadline: .now() + 1) {
                self.state = .redeemed
                self.onAction?()
            }
        }
    }
    
    struct CardView: View {
        
        @ObservedObject var viewModel: ViewModel
        
        var body: some View {
            VStack(spacing: 10) {
                HStack(spacing: 0) {
                    VStack(alignment: .leading, spacing: 5) {
                        Text("Night Owl Bonus +1%").bold()
                        Text("Whoooo's up late shopping? Here's an extra 1% cash back when you shop before 6AM.")
                            .font(.system(size: 14))
                    }
                    Image(viewModel.state.imageName)
                }
                Button {
                    viewModel.onButtonAction()
                } label: {
                    VStack {
                        if viewModel.state == .processing {
                            ProgressView().colorInvert()
                        } else {
                            Text(viewModel.state.buttonTitle)
                                .fontWeight(.semibold)
                        }
                    }
                    .frame(maxWidth: .infinity)
                    .frame(height: 54)
                    .background(viewModel.state.buttonColor)
                    .cornerRadius(4)
                }.disabled(viewModel.isRedeemed)

            }
            .padding()
            .foregroundColor(.white)
            .background(Color("bg-card"))
        }
    }

}

struct NightOwlCard_Previews: PreviewProvider {
    static var previews: some View {
        NightOwlCard.CardView(viewModel: NightOwlCard.ViewModel())
    }
}

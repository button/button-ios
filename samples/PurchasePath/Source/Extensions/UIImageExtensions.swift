import UIKit
import AVFoundation

extension UIImage {
    
    func with(_ size: CGSize) -> UIImage? {
        guard size.height > 0.0, size.width > 0.0 else {
            return nil
        }
        
        var bounds = CGRect.zero
        bounds.size = size
        
        var scaled = AVMakeRect(aspectRatio: self.size, insideRect: bounds)
        scaled.origin = .zero
        
        UIGraphicsBeginImageContextWithOptions(scaled.size, false, 0.0)
        
        draw(in: scaled)
        
        let image = UIGraphicsGetImageFromCurrentImageContext()
        UIGraphicsEndImageContext()
        return image
    }
    
}

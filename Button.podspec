Pod::Spec.new do |s|

  s.name    = "Button"
  s.version = "6.26.0"
  s.summary = "Button iOS SDK."

  s.description = <<-DESC
                    Button iOS SDK.

                    http://usebutton.com
                    DESC

  s.homepage    = "http://www.usebutton.com"
  s.license     = "Private"
  s.author      = "Button, Inc"

  s.platform    = :ios, "9.0"
  s.source      = { :git => "https://github.com/button/button-ios.git",
                    :tag => "v#{s.version}" }

  s.requires_arc   = true
  s.compiler_flags = '-w'

  s.preserve_paths      = 'Button.framework'
  s.public_header_files = 'Button.framework/Versions/A/Headers/*.h'
  s.source_files        = 'Button.framework/Versions/A/Headers/*.h'
  s.vendored_frameworks = 'Button.framework'
  s.resource            = 'Button.bundle'
  s.framework           = "AdSupport"
  s.swift_version       = '5.0'

  #
  # A workaound to trigger CocoaPods to link Swift libraries when linting.
  # See: https://github.com/CocoaPods/CocoaPods/issues/8649#issuecomment-535590208
  #
  # The deploy step runs `pod truk push --skip-tests`
  # Note: Tests specs are not downloaded when consuming the pod.
  #
  s.test_spec 'Tests' do |spec|
    spec.dependency 'ButtonMerchant', '~> 1.0'
  end  

end

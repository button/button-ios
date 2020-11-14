Pod::Spec.new do |s|

  s.name    = "ButtonStatic"
  s.version = "6.29.0"
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

  s.vendored_frameworks = '.static/Button.xcframework'
  s.swift_version       = '5.0'

  s.cocoapods_version = '>= 1.10.0'

end

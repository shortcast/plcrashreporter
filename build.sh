xcodebuild -configuration Release -target 'CrashReporter-iOS' 
lipo -output libCrashReporter.a -create build/Release-iphoneos/libCrashReporter-iphoneos.a  build/Release-iphonesimulator/libCrashReporter-iphonesimulator.a

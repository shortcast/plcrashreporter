xcodebuild -configuration Release -target 'Disk Image' 
lipo -output libCrashReporter.a -create build/Release-iphoneos/libCrashReporter-iphoneos.a  build/Release-iphonesimulator/libCrashReporter-iphonesimulator.a

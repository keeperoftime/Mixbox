import Foundation
import MixboxTestsFoundation
import MixboxFoundation
import MixboxReporting

// If you want to customize returned ApplicationPermissionsSetter's
// do not use this class (I mean it is not required) and implement your own factory.
public final class ApplicationPermissionsSetterFactory {
    private let notificationsApplicationPermissionSetterFactory: NotificationsApplicationPermissionSetterFactory
    private let tccDbApplicationPermissionSetterFactory: TccDbApplicationPermissionSetterFactory
    
    // Your options for NotificationsApplicationPermissionSetterFactory:
    // - FakeSettingsAppNotificationsApplicationPermissionSetterFactory, see README.md in MixboxFakeSettingsAppMain
    //   for instructions.
    // - AlwaysFailingNotificationsApplicationPermissionSetterFactory if you don't want to set up this permission
    // - maybe an alternative implementation that uses UI of real Settings.app, supports every locale, and is 100% stable
    //
    // Your options for TccDbApplicationPermissionSetterFactory:
    // - For xcodebuild: TccDbApplicationPermissionSetterFactory
    // - For fbxctest: AtApplicationLaunchTccDbApplicationPermissionSetterFactory
    //
    public init(
        notificationsApplicationPermissionSetterFactory: NotificationsApplicationPermissionSetterFactory,
        tccDbApplicationPermissionSetterFactory: TccDbApplicationPermissionSetterFactory)
    {
        self.notificationsApplicationPermissionSetterFactory = notificationsApplicationPermissionSetterFactory
        self.tccDbApplicationPermissionSetterFactory = tccDbApplicationPermissionSetterFactory
    }
    
    public func applicationPermissionsSetter(
        bundleId: String,
        displayName: String,
        testFailureRecorder: TestFailureRecorder)
        -> ApplicationPermissionsSetter
    {
        func tccDbApplicationPermissionSetter(_ service: TccService) -> ApplicationPermissionSetter {
            return tccDbApplicationPermissionSetterFactory.tccDbApplicationPermissionSetter(
                service: service,
                bundleId: bundleId,
                testFailureRecorder: testFailureRecorder
            )
        }
        
        return ApplicationPermissionsSetterImpl(
            notifications: notificationsApplicationPermissionSetterFactory.notificationsApplicationPermissionSetter(
                bundleId: bundleId,
                displayName: displayName
            ),
            geolocation: GeolocationApplicationPermissionSetter(
                bundleId: bundleId
            ),
            calendar: tccDbApplicationPermissionSetter(.calendar),
            camera: tccDbApplicationPermissionSetter(.camera),
            mso: tccDbApplicationPermissionSetter(.mso),
            mediaLibrary: tccDbApplicationPermissionSetter(.mediaLibrary),
            microphone: tccDbApplicationPermissionSetter(.microphone),
            motion: tccDbApplicationPermissionSetter(.motion),
            photos: tccDbApplicationPermissionSetter(.photos),
            reminders: tccDbApplicationPermissionSetter(.reminders),
            siri: tccDbApplicationPermissionSetter(.siri),
            willow: tccDbApplicationPermissionSetter(.willow),
            addressBook: tccDbApplicationPermissionSetter(.addressBook),
            bluetoothPeripheral: tccDbApplicationPermissionSetter(.bluetoothPeripheral),
            calls: tccDbApplicationPermissionSetter(.calls),
            facebook: tccDbApplicationPermissionSetter(.facebook),
            keyboardNetwork: tccDbApplicationPermissionSetter(.keyboardNetwork),
            liverpool: tccDbApplicationPermissionSetter(.liverpool),
            shareKit: tccDbApplicationPermissionSetter(.shareKit),
            sinaWeibo: tccDbApplicationPermissionSetter(.sinaWeibo),
            speechRecognition: tccDbApplicationPermissionSetter(.speechRecognition),
            tencentWeibo: tccDbApplicationPermissionSetter(.tencentWeibo),
            twitter: tccDbApplicationPermissionSetter(.twitter),
            ubiquity: tccDbApplicationPermissionSetter(.ubiquity)
        )
    }
}

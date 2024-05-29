/*
 * Copyright (c) 2024, NeXTech Corporation. All rights reserved.
 * DO NOT ALTER OR REMOVE COPYRIGHT NOTICES OR THIS FILE HEADER.
 *
 * This code is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * version 2 for more details (a copy is included in the LICENSE file that
 * accompanied this code).
 *
 * Contact with ITGSS, 640 N McCarthy Blvd, in the
 * city of Milpitas, zip code 95035, state of California.
 * or visit www.it-gss.com if you need additional information or have any
 * questions.
 *
 */

#pragma once
#ifndef LLM_OS_ApplicationModel_Activation_0_H
#define LLM_OS_ApplicationModel_Activation_0_H
LLM_EXPORT namespace llm::OS::ApplicationModel::Appointments::AppointmentsProvider
{
    struct AddAppointmentOperation;
    struct RemoveAppointmentOperation;
    struct ReplaceAppointmentOperation;
}
LLM_EXPORT namespace llm::OS::ApplicationModel::Background
{
    struct IBackgroundTaskInstance;
}
LLM_EXPORT namespace llm::OS::ApplicationModel::Calls
{
    struct LockScreenCallUI;
}
LLM_EXPORT namespace llm::OS::ApplicationModel::Contacts
{
    struct Contact;
    struct ContactAddress;
    struct ContactPanel;
}
LLM_EXPORT namespace llm::OS::ApplicationModel::Contacts::Provider
{
    struct ContactPickerUI;
}
LLM_EXPORT namespace llm::OS::ApplicationModel::DataTransfer::ShareTarget
{
    struct ShareOperation;
}
LLM_EXPORT namespace llm::OS::ApplicationModel::Search
{
    struct SearchPaneQueryLinguisticDetails;
}
LLM_EXPORT namespace llm::OS::ApplicationModel::UserDataAccounts::Provider
{
    struct IUserDataAccountProviderOperation;
}
LLM_EXPORT namespace llm::OS::ApplicationModel::Wallet
{
    enum class WalletActionKind : int32_t;
}
LLM_EXPORT namespace llm::OS::Devices::Enumeration
{
    struct DeviceInformation;
}
LLM_EXPORT namespace llm::OS::Devices::Printers::Extensions
{
    struct Print3DWorkflow;
    struct PrintTaskConfiguration;
}
LLM_EXPORT namespace llm::OS::Foundation
{
    struct Deferral;
    struct EventRegistrationToken;
    template <typename T> struct __declspec(empty_bases) IReference;
    struct Rect;
    template <typename TSender, typename TResult> struct __declspec(empty_bases) TypedEventHandler;
    struct Uri;
}
LLM_EXPORT namespace llm::OS::Foundation::Collections
{
    template <typename T> struct __declspec(empty_bases) IVectorView;
    struct ValueSet;
}
LLM_EXPORT namespace llm::OS::Media::SpeechRecognition
{
    struct SpeechRecognitionResult;
}
LLM_EXPORT namespace llm::OS::Security::Authentication::Web
{
    struct WebAuthenticationResult;
}
LLM_EXPORT namespace llm::OS::Security::Authentication::Web::Provider
{
    struct IWebAccountProviderOperation;
}
LLM_EXPORT namespace llm::OS::Storage
{
    struct IStorageItem;
    struct StorageFile;
    struct StorageFolder;
}
LLM_EXPORT namespace llm::OS::Storage::Pickers::Provider
{
    struct FileOpenPickerUI;
    struct FileSavePickerUI;
}
LLM_EXPORT namespace llm::OS::Storage::Provider
{
    struct CachedFileUpdaterUI;
}
LLM_EXPORT namespace llm::OS::Storage::Search
{
    struct StorageFileQueryResult;
}
LLM_EXPORT namespace llm::OS::System
{
    struct ProtocolForResultsOperation;
    struct User;
}
LLM_EXPORT namespace llm::OS::UI::Notifications
{
    struct ShownTileNotification;
}
LLM_EXPORT namespace llm::OS::UI::ViewManagement
{
    struct ActivationViewSwitcher;
}
LLM_EXPORT namespace llm::OS::ApplicationModel::Activation
{
    enum class ActivationKind : int32_t
    {
        Launch = 0,
        Search = 1,
        ShareTarget = 2,
        File = 3,
        Protocol = 4,
        FileOpenPicker = 5,
        FileSavePicker = 6,
        CachedFileUpdater = 7,
        ContactPicker = 8,
        Device = 9,
        PrintTaskSettings = 10,
        CameraSettings = 11,
        RestrictedLaunch = 12,
        AppointmentsProvider = 13,
        Contact = 14,
        LockScreenCall = 15,
        VoiceCommand = 16,
        LockScreen = 17,
        PickerReturned = 1000,
        WalletAction = 1001,
        PickFileContinuation = 1002,
        PickSaveFileContinuation = 1003,
        PickFolderContinuation = 1004,
        WebAuthenticationBrokerContinuation = 1005,
        WebAccountProvider = 1006,
        ComponentUI = 1007,
        ProtocolForResults = 1009,
        ToastNotification = 1010,
        Print3DWorkflow = 1011,
        DialReceiver = 1012,
        DevicePairing = 1013,
        UserDataAccountsProvider = 1014,
        FilePickerExperience = 1015,
        LockScreenComponent = 1016,
        ContactPanel = 1017,
        PrintWorkflowForegroundTask = 1018,
        GameUIProvider = 1019,
        StartupTask = 1020,
        CommandLineLaunch = 1021,
        BarcodeScannerProvider = 1022,
        PrintSupportJobUI = 1023,
        PrintSupportSettingsUI = 1024,
        PhoneCallActivation = 1025,
        VpnForeground = 1026,
    };
    enum class ApplicationExecutionState : int32_t
    {
        NotRunning = 0,
        Running = 1,
        Suspended = 2,
        Terminated = 3,
        ClosedByUser = 4,
    };
    struct IActivatedEventArgs;
    struct IActivatedEventArgsWithUser;
    struct IApplicationViewActivatedEventArgs;
    struct IAppointmentsProviderActivatedEventArgs;
    struct IAppointmentsProviderAddAppointmentActivatedEventArgs;
    struct IAppointmentsProviderRemoveAppointmentActivatedEventArgs;
    struct IAppointmentsProviderReplaceAppointmentActivatedEventArgs;
    struct IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs;
    struct IAppointmentsProviderShowTimeFrameActivatedEventArgs;
    struct IBackgroundActivatedEventArgs;
    struct IBarcodeScannerPreviewActivatedEventArgs;
    struct ICachedFileUpdaterActivatedEventArgs;
    struct ICameraSettingsActivatedEventArgs;
    struct ICommandLineActivatedEventArgs;
    struct ICommandLineActivationOperation;
    struct IContactActivatedEventArgs;
    struct IContactCallActivatedEventArgs;
    struct IContactMapActivatedEventArgs;
    struct IContactMessageActivatedEventArgs;
    struct IContactPanelActivatedEventArgs;
    struct IContactPickerActivatedEventArgs;
    struct IContactPostActivatedEventArgs;
    struct IContactVideoCallActivatedEventArgs;
    struct IContactsProviderActivatedEventArgs;
    struct IContinuationActivatedEventArgs;
    struct IDeviceActivatedEventArgs;
    struct IDevicePairingActivatedEventArgs;
    struct IDialReceiverActivatedEventArgs;
    struct IFileActivatedEventArgs;
    struct IFileActivatedEventArgsWithCallerPackageFamilyName;
    struct IFileActivatedEventArgsWithNeighboringFiles;
    struct IFileOpenPickerActivatedEventArgs;
    struct IFileOpenPickerActivatedEventArgs2;
    struct IFileOpenPickerContinuationEventArgs;
    struct IFileSavePickerActivatedEventArgs;
    struct IFileSavePickerActivatedEventArgs2;
    struct IFileSavePickerContinuationEventArgs;
    struct IFolderPickerContinuationEventArgs;
    struct ILaunchActivatedEventArgs;
    struct ILaunchActivatedEventArgs2;
    struct ILockScreenActivatedEventArgs;
    struct ILockScreenCallActivatedEventArgs;
    struct IPhoneCallActivatedEventArgs;
    struct IPickerReturnedActivatedEventArgs;
    struct IPrelaunchActivatedEventArgs;
    struct IPrint3DWorkflowActivatedEventArgs;
    struct IPrintTaskSettingsActivatedEventArgs;
    struct IProtocolActivatedEventArgs;
    struct IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData;
    struct IProtocolForResultsActivatedEventArgs;
    struct IRestrictedLaunchActivatedEventArgs;
    struct ISearchActivatedEventArgs;
    struct ISearchActivatedEventArgsWithLinguisticDetails;
    struct IShareTargetActivatedEventArgs;
    struct ISplashScreen;
    struct IStartupTaskActivatedEventArgs;
    struct ITileActivatedInfo;
    struct IToastNotificationActivatedEventArgs;
    struct IUserDataAccountProviderActivatedEventArgs;
    struct IViewSwitcherProvider;
    struct IVoiceCommandActivatedEventArgs;
    struct IWalletActionActivatedEventArgs;
    struct IWebAccountProviderActivatedEventArgs;
    struct IWebAuthenticationBrokerContinuationEventArgs;
    struct AppointmentsProviderAddAppointmentActivatedEventArgs;
    struct AppointmentsProviderRemoveAppointmentActivatedEventArgs;
    struct AppointmentsProviderReplaceAppointmentActivatedEventArgs;
    struct AppointmentsProviderShowAppointmentDetailsActivatedEventArgs;
    struct AppointmentsProviderShowTimeFrameActivatedEventArgs;
    struct BackgroundActivatedEventArgs;
    struct BarcodeScannerPreviewActivatedEventArgs;
    struct CachedFileUpdaterActivatedEventArgs;
    struct CameraSettingsActivatedEventArgs;
    struct CommandLineActivatedEventArgs;
    struct CommandLineActivationOperation;
    struct ContactCallActivatedEventArgs;
    struct ContactMapActivatedEventArgs;
    struct ContactMessageActivatedEventArgs;
    struct ContactPanelActivatedEventArgs;
    struct ContactPickerActivatedEventArgs;
    struct ContactPostActivatedEventArgs;
    struct ContactVideoCallActivatedEventArgs;
    struct DeviceActivatedEventArgs;
    struct DevicePairingActivatedEventArgs;
    struct DialReceiverActivatedEventArgs;
    struct FileActivatedEventArgs;
    struct FileOpenPickerActivatedEventArgs;
    struct FileOpenPickerContinuationEventArgs;
    struct FileSavePickerActivatedEventArgs;
    struct FileSavePickerContinuationEventArgs;
    struct FolderPickerContinuationEventArgs;
    struct LaunchActivatedEventArgs;
    struct LockScreenActivatedEventArgs;
    struct LockScreenCallActivatedEventArgs;
    struct LockScreenComponentActivatedEventArgs;
    struct PhoneCallActivatedEventArgs;
    struct PickerReturnedActivatedEventArgs;
    struct Print3DWorkflowActivatedEventArgs;
    struct PrintTaskSettingsActivatedEventArgs;
    struct ProtocolActivatedEventArgs;
    struct ProtocolForResultsActivatedEventArgs;
    struct RestrictedLaunchActivatedEventArgs;
    struct SearchActivatedEventArgs;
    struct ShareTargetActivatedEventArgs;
    struct SplashScreen;
    struct StartupTaskActivatedEventArgs;
    struct TileActivatedInfo;
    struct ToastNotificationActivatedEventArgs;
    struct UserDataAccountProviderActivatedEventArgs;
    struct VoiceCommandActivatedEventArgs;
    struct WalletActionActivatedEventArgs;
    struct WebAccountProviderActivatedEventArgs;
    struct WebAuthenticationBrokerContinuationEventArgs;
}
namespace llm::impl
{
    template <> struct category<llm::OS::ApplicationModel::Activation::IActivatedEventArgs>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::IActivatedEventArgsWithUser>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::IApplicationViewActivatedEventArgs>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::IAppointmentsProviderActivatedEventArgs>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::IAppointmentsProviderAddAppointmentActivatedEventArgs>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::IAppointmentsProviderRemoveAppointmentActivatedEventArgs>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::IAppointmentsProviderReplaceAppointmentActivatedEventArgs>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::IAppointmentsProviderShowTimeFrameActivatedEventArgs>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::IBackgroundActivatedEventArgs>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::IBarcodeScannerPreviewActivatedEventArgs>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::ICachedFileUpdaterActivatedEventArgs>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::ICameraSettingsActivatedEventArgs>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::ICommandLineActivatedEventArgs>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::ICommandLineActivationOperation>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::IContactActivatedEventArgs>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::IContactCallActivatedEventArgs>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::IContactMapActivatedEventArgs>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::IContactMessageActivatedEventArgs>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::IContactPanelActivatedEventArgs>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::IContactPickerActivatedEventArgs>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::IContactPostActivatedEventArgs>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::IContactVideoCallActivatedEventArgs>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::IContactsProviderActivatedEventArgs>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::IContinuationActivatedEventArgs>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::IDeviceActivatedEventArgs>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::IDevicePairingActivatedEventArgs>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::IDialReceiverActivatedEventArgs>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::IFileActivatedEventArgs>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::IFileActivatedEventArgsWithCallerPackageFamilyName>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::IFileActivatedEventArgsWithNeighboringFiles>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::IFileOpenPickerActivatedEventArgs>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::IFileOpenPickerActivatedEventArgs2>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::IFileOpenPickerContinuationEventArgs>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::IFileSavePickerActivatedEventArgs>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::IFileSavePickerActivatedEventArgs2>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::IFileSavePickerContinuationEventArgs>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::IFolderPickerContinuationEventArgs>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::ILaunchActivatedEventArgs>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::ILaunchActivatedEventArgs2>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::ILockScreenActivatedEventArgs>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::ILockScreenCallActivatedEventArgs>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::IPhoneCallActivatedEventArgs>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::IPickerReturnedActivatedEventArgs>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::IPrelaunchActivatedEventArgs>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::IPrint3DWorkflowActivatedEventArgs>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::IPrintTaskSettingsActivatedEventArgs>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::IProtocolActivatedEventArgs>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::IProtocolForResultsActivatedEventArgs>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::IRestrictedLaunchActivatedEventArgs>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::ISearchActivatedEventArgs>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::ISearchActivatedEventArgsWithLinguisticDetails>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::IShareTargetActivatedEventArgs>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::ISplashScreen>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::IStartupTaskActivatedEventArgs>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::ITileActivatedInfo>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::IToastNotificationActivatedEventArgs>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::IUserDataAccountProviderActivatedEventArgs>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::IViewSwitcherProvider>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::IVoiceCommandActivatedEventArgs>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::IWalletActionActivatedEventArgs>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::IWebAccountProviderActivatedEventArgs>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::IWebAuthenticationBrokerContinuationEventArgs>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::AppointmentsProviderAddAppointmentActivatedEventArgs>{ using type = class_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::AppointmentsProviderRemoveAppointmentActivatedEventArgs>{ using type = class_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::AppointmentsProviderReplaceAppointmentActivatedEventArgs>{ using type = class_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::AppointmentsProviderShowAppointmentDetailsActivatedEventArgs>{ using type = class_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::AppointmentsProviderShowTimeFrameActivatedEventArgs>{ using type = class_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::BackgroundActivatedEventArgs>{ using type = class_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::BarcodeScannerPreviewActivatedEventArgs>{ using type = class_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::CachedFileUpdaterActivatedEventArgs>{ using type = class_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::CameraSettingsActivatedEventArgs>{ using type = class_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::CommandLineActivatedEventArgs>{ using type = class_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::CommandLineActivationOperation>{ using type = class_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::ContactCallActivatedEventArgs>{ using type = class_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::ContactMapActivatedEventArgs>{ using type = class_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::ContactMessageActivatedEventArgs>{ using type = class_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::ContactPanelActivatedEventArgs>{ using type = class_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::ContactPickerActivatedEventArgs>{ using type = class_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::ContactPostActivatedEventArgs>{ using type = class_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::ContactVideoCallActivatedEventArgs>{ using type = class_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::DeviceActivatedEventArgs>{ using type = class_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::DevicePairingActivatedEventArgs>{ using type = class_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::DialReceiverActivatedEventArgs>{ using type = class_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::FileActivatedEventArgs>{ using type = class_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::FileOpenPickerActivatedEventArgs>{ using type = class_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::FileOpenPickerContinuationEventArgs>{ using type = class_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::FileSavePickerActivatedEventArgs>{ using type = class_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::FileSavePickerContinuationEventArgs>{ using type = class_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::FolderPickerContinuationEventArgs>{ using type = class_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::LaunchActivatedEventArgs>{ using type = class_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::LockScreenActivatedEventArgs>{ using type = class_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::LockScreenCallActivatedEventArgs>{ using type = class_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::LockScreenComponentActivatedEventArgs>{ using type = class_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::PhoneCallActivatedEventArgs>{ using type = class_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::PickerReturnedActivatedEventArgs>{ using type = class_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::Print3DWorkflowActivatedEventArgs>{ using type = class_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::PrintTaskSettingsActivatedEventArgs>{ using type = class_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::ProtocolActivatedEventArgs>{ using type = class_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::ProtocolForResultsActivatedEventArgs>{ using type = class_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::RestrictedLaunchActivatedEventArgs>{ using type = class_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::SearchActivatedEventArgs>{ using type = class_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::ShareTargetActivatedEventArgs>{ using type = class_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::SplashScreen>{ using type = class_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::StartupTaskActivatedEventArgs>{ using type = class_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::TileActivatedInfo>{ using type = class_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::ToastNotificationActivatedEventArgs>{ using type = class_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::UserDataAccountProviderActivatedEventArgs>{ using type = class_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::VoiceCommandActivatedEventArgs>{ using type = class_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::WalletActionActivatedEventArgs>{ using type = class_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::WebAccountProviderActivatedEventArgs>{ using type = class_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::WebAuthenticationBrokerContinuationEventArgs>{ using type = class_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::ActivationKind>{ using type = enum_category; };
    template <> struct category<llm::OS::ApplicationModel::Activation::ApplicationExecutionState>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::AppointmentsProviderAddAppointmentActivatedEventArgs> = L"Windows.ApplicationModel.Activation.AppointmentsProviderAddAppointmentActivatedEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::AppointmentsProviderRemoveAppointmentActivatedEventArgs> = L"Windows.ApplicationModel.Activation.AppointmentsProviderRemoveAppointmentActivatedEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::AppointmentsProviderReplaceAppointmentActivatedEventArgs> = L"Windows.ApplicationModel.Activation.AppointmentsProviderReplaceAppointmentActivatedEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::AppointmentsProviderShowAppointmentDetailsActivatedEventArgs> = L"Windows.ApplicationModel.Activation.AppointmentsProviderShowAppointmentDetailsActivatedEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::AppointmentsProviderShowTimeFrameActivatedEventArgs> = L"Windows.ApplicationModel.Activation.AppointmentsProviderShowTimeFrameActivatedEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::BackgroundActivatedEventArgs> = L"Windows.ApplicationModel.Activation.BackgroundActivatedEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::BarcodeScannerPreviewActivatedEventArgs> = L"Windows.ApplicationModel.Activation.BarcodeScannerPreviewActivatedEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::CachedFileUpdaterActivatedEventArgs> = L"Windows.ApplicationModel.Activation.CachedFileUpdaterActivatedEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::CameraSettingsActivatedEventArgs> = L"Windows.ApplicationModel.Activation.CameraSettingsActivatedEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::CommandLineActivatedEventArgs> = L"Windows.ApplicationModel.Activation.CommandLineActivatedEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::CommandLineActivationOperation> = L"Windows.ApplicationModel.Activation.CommandLineActivationOperation";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::ContactCallActivatedEventArgs> = L"Windows.ApplicationModel.Activation.ContactCallActivatedEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::ContactMapActivatedEventArgs> = L"Windows.ApplicationModel.Activation.ContactMapActivatedEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::ContactMessageActivatedEventArgs> = L"Windows.ApplicationModel.Activation.ContactMessageActivatedEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::ContactPanelActivatedEventArgs> = L"Windows.ApplicationModel.Activation.ContactPanelActivatedEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::ContactPickerActivatedEventArgs> = L"Windows.ApplicationModel.Activation.ContactPickerActivatedEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::ContactPostActivatedEventArgs> = L"Windows.ApplicationModel.Activation.ContactPostActivatedEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::ContactVideoCallActivatedEventArgs> = L"Windows.ApplicationModel.Activation.ContactVideoCallActivatedEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::DeviceActivatedEventArgs> = L"Windows.ApplicationModel.Activation.DeviceActivatedEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::DevicePairingActivatedEventArgs> = L"Windows.ApplicationModel.Activation.DevicePairingActivatedEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::DialReceiverActivatedEventArgs> = L"Windows.ApplicationModel.Activation.DialReceiverActivatedEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::FileActivatedEventArgs> = L"Windows.ApplicationModel.Activation.FileActivatedEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::FileOpenPickerActivatedEventArgs> = L"Windows.ApplicationModel.Activation.FileOpenPickerActivatedEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::FileOpenPickerContinuationEventArgs> = L"Windows.ApplicationModel.Activation.FileOpenPickerContinuationEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::FileSavePickerActivatedEventArgs> = L"Windows.ApplicationModel.Activation.FileSavePickerActivatedEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::FileSavePickerContinuationEventArgs> = L"Windows.ApplicationModel.Activation.FileSavePickerContinuationEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::FolderPickerContinuationEventArgs> = L"Windows.ApplicationModel.Activation.FolderPickerContinuationEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::LaunchActivatedEventArgs> = L"Windows.ApplicationModel.Activation.LaunchActivatedEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::LockScreenActivatedEventArgs> = L"Windows.ApplicationModel.Activation.LockScreenActivatedEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::LockScreenCallActivatedEventArgs> = L"Windows.ApplicationModel.Activation.LockScreenCallActivatedEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::LockScreenComponentActivatedEventArgs> = L"Windows.ApplicationModel.Activation.LockScreenComponentActivatedEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::PhoneCallActivatedEventArgs> = L"Windows.ApplicationModel.Activation.PhoneCallActivatedEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::PickerReturnedActivatedEventArgs> = L"Windows.ApplicationModel.Activation.PickerReturnedActivatedEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::Print3DWorkflowActivatedEventArgs> = L"Windows.ApplicationModel.Activation.Print3DWorkflowActivatedEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::PrintTaskSettingsActivatedEventArgs> = L"Windows.ApplicationModel.Activation.PrintTaskSettingsActivatedEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::ProtocolActivatedEventArgs> = L"Windows.ApplicationModel.Activation.ProtocolActivatedEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::ProtocolForResultsActivatedEventArgs> = L"Windows.ApplicationModel.Activation.ProtocolForResultsActivatedEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::RestrictedLaunchActivatedEventArgs> = L"Windows.ApplicationModel.Activation.RestrictedLaunchActivatedEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::SearchActivatedEventArgs> = L"Windows.ApplicationModel.Activation.SearchActivatedEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::ShareTargetActivatedEventArgs> = L"Windows.ApplicationModel.Activation.ShareTargetActivatedEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::SplashScreen> = L"Windows.ApplicationModel.Activation.SplashScreen";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::StartupTaskActivatedEventArgs> = L"Windows.ApplicationModel.Activation.StartupTaskActivatedEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::TileActivatedInfo> = L"Windows.ApplicationModel.Activation.TileActivatedInfo";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::ToastNotificationActivatedEventArgs> = L"Windows.ApplicationModel.Activation.ToastNotificationActivatedEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::UserDataAccountProviderActivatedEventArgs> = L"Windows.ApplicationModel.Activation.UserDataAccountProviderActivatedEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::VoiceCommandActivatedEventArgs> = L"Windows.ApplicationModel.Activation.VoiceCommandActivatedEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::WalletActionActivatedEventArgs> = L"Windows.ApplicationModel.Activation.WalletActionActivatedEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::WebAccountProviderActivatedEventArgs> = L"Windows.ApplicationModel.Activation.WebAccountProviderActivatedEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::WebAuthenticationBrokerContinuationEventArgs> = L"Windows.ApplicationModel.Activation.WebAuthenticationBrokerContinuationEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::ActivationKind> = L"Windows.ApplicationModel.Activation.ActivationKind";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::ApplicationExecutionState> = L"Windows.ApplicationModel.Activation.ApplicationExecutionState";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::IActivatedEventArgs> = L"Windows.ApplicationModel.Activation.IActivatedEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::IActivatedEventArgsWithUser> = L"Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::IApplicationViewActivatedEventArgs> = L"Windows.ApplicationModel.Activation.IApplicationViewActivatedEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::IAppointmentsProviderActivatedEventArgs> = L"Windows.ApplicationModel.Activation.IAppointmentsProviderActivatedEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::IAppointmentsProviderAddAppointmentActivatedEventArgs> = L"Windows.ApplicationModel.Activation.IAppointmentsProviderAddAppointmentActivatedEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::IAppointmentsProviderRemoveAppointmentActivatedEventArgs> = L"Windows.ApplicationModel.Activation.IAppointmentsProviderRemoveAppointmentActivatedEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::IAppointmentsProviderReplaceAppointmentActivatedEventArgs> = L"Windows.ApplicationModel.Activation.IAppointmentsProviderReplaceAppointmentActivatedEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs> = L"Windows.ApplicationModel.Activation.IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::IAppointmentsProviderShowTimeFrameActivatedEventArgs> = L"Windows.ApplicationModel.Activation.IAppointmentsProviderShowTimeFrameActivatedEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::IBackgroundActivatedEventArgs> = L"Windows.ApplicationModel.Activation.IBackgroundActivatedEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::IBarcodeScannerPreviewActivatedEventArgs> = L"Windows.ApplicationModel.Activation.IBarcodeScannerPreviewActivatedEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::ICachedFileUpdaterActivatedEventArgs> = L"Windows.ApplicationModel.Activation.ICachedFileUpdaterActivatedEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::ICameraSettingsActivatedEventArgs> = L"Windows.ApplicationModel.Activation.ICameraSettingsActivatedEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::ICommandLineActivatedEventArgs> = L"Windows.ApplicationModel.Activation.ICommandLineActivatedEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::ICommandLineActivationOperation> = L"Windows.ApplicationModel.Activation.ICommandLineActivationOperation";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::IContactActivatedEventArgs> = L"Windows.ApplicationModel.Activation.IContactActivatedEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::IContactCallActivatedEventArgs> = L"Windows.ApplicationModel.Activation.IContactCallActivatedEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::IContactMapActivatedEventArgs> = L"Windows.ApplicationModel.Activation.IContactMapActivatedEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::IContactMessageActivatedEventArgs> = L"Windows.ApplicationModel.Activation.IContactMessageActivatedEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::IContactPanelActivatedEventArgs> = L"Windows.ApplicationModel.Activation.IContactPanelActivatedEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::IContactPickerActivatedEventArgs> = L"Windows.ApplicationModel.Activation.IContactPickerActivatedEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::IContactPostActivatedEventArgs> = L"Windows.ApplicationModel.Activation.IContactPostActivatedEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::IContactVideoCallActivatedEventArgs> = L"Windows.ApplicationModel.Activation.IContactVideoCallActivatedEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::IContactsProviderActivatedEventArgs> = L"Windows.ApplicationModel.Activation.IContactsProviderActivatedEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::IContinuationActivatedEventArgs> = L"Windows.ApplicationModel.Activation.IContinuationActivatedEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::IDeviceActivatedEventArgs> = L"Windows.ApplicationModel.Activation.IDeviceActivatedEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::IDevicePairingActivatedEventArgs> = L"Windows.ApplicationModel.Activation.IDevicePairingActivatedEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::IDialReceiverActivatedEventArgs> = L"Windows.ApplicationModel.Activation.IDialReceiverActivatedEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::IFileActivatedEventArgs> = L"Windows.ApplicationModel.Activation.IFileActivatedEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::IFileActivatedEventArgsWithCallerPackageFamilyName> = L"Windows.ApplicationModel.Activation.IFileActivatedEventArgsWithCallerPackageFamilyName";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::IFileActivatedEventArgsWithNeighboringFiles> = L"Windows.ApplicationModel.Activation.IFileActivatedEventArgsWithNeighboringFiles";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::IFileOpenPickerActivatedEventArgs> = L"Windows.ApplicationModel.Activation.IFileOpenPickerActivatedEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::IFileOpenPickerActivatedEventArgs2> = L"Windows.ApplicationModel.Activation.IFileOpenPickerActivatedEventArgs2";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::IFileOpenPickerContinuationEventArgs> = L"Windows.ApplicationModel.Activation.IFileOpenPickerContinuationEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::IFileSavePickerActivatedEventArgs> = L"Windows.ApplicationModel.Activation.IFileSavePickerActivatedEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::IFileSavePickerActivatedEventArgs2> = L"Windows.ApplicationModel.Activation.IFileSavePickerActivatedEventArgs2";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::IFileSavePickerContinuationEventArgs> = L"Windows.ApplicationModel.Activation.IFileSavePickerContinuationEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::IFolderPickerContinuationEventArgs> = L"Windows.ApplicationModel.Activation.IFolderPickerContinuationEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::ILaunchActivatedEventArgs> = L"Windows.ApplicationModel.Activation.ILaunchActivatedEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::ILaunchActivatedEventArgs2> = L"Windows.ApplicationModel.Activation.ILaunchActivatedEventArgs2";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::ILockScreenActivatedEventArgs> = L"Windows.ApplicationModel.Activation.ILockScreenActivatedEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::ILockScreenCallActivatedEventArgs> = L"Windows.ApplicationModel.Activation.ILockScreenCallActivatedEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::IPhoneCallActivatedEventArgs> = L"Windows.ApplicationModel.Activation.IPhoneCallActivatedEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::IPickerReturnedActivatedEventArgs> = L"Windows.ApplicationModel.Activation.IPickerReturnedActivatedEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::IPrelaunchActivatedEventArgs> = L"Windows.ApplicationModel.Activation.IPrelaunchActivatedEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::IPrint3DWorkflowActivatedEventArgs> = L"Windows.ApplicationModel.Activation.IPrint3DWorkflowActivatedEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::IPrintTaskSettingsActivatedEventArgs> = L"Windows.ApplicationModel.Activation.IPrintTaskSettingsActivatedEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::IProtocolActivatedEventArgs> = L"Windows.ApplicationModel.Activation.IProtocolActivatedEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData> = L"Windows.ApplicationModel.Activation.IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::IProtocolForResultsActivatedEventArgs> = L"Windows.ApplicationModel.Activation.IProtocolForResultsActivatedEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::IRestrictedLaunchActivatedEventArgs> = L"Windows.ApplicationModel.Activation.IRestrictedLaunchActivatedEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::ISearchActivatedEventArgs> = L"Windows.ApplicationModel.Activation.ISearchActivatedEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::ISearchActivatedEventArgsWithLinguisticDetails> = L"Windows.ApplicationModel.Activation.ISearchActivatedEventArgsWithLinguisticDetails";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::IShareTargetActivatedEventArgs> = L"Windows.ApplicationModel.Activation.IShareTargetActivatedEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::ISplashScreen> = L"Windows.ApplicationModel.Activation.ISplashScreen";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::IStartupTaskActivatedEventArgs> = L"Windows.ApplicationModel.Activation.IStartupTaskActivatedEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::ITileActivatedInfo> = L"Windows.ApplicationModel.Activation.ITileActivatedInfo";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::IToastNotificationActivatedEventArgs> = L"Windows.ApplicationModel.Activation.IToastNotificationActivatedEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::IUserDataAccountProviderActivatedEventArgs> = L"Windows.ApplicationModel.Activation.IUserDataAccountProviderActivatedEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::IViewSwitcherProvider> = L"Windows.ApplicationModel.Activation.IViewSwitcherProvider";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::IVoiceCommandActivatedEventArgs> = L"Windows.ApplicationModel.Activation.IVoiceCommandActivatedEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::IWalletActionActivatedEventArgs> = L"Windows.ApplicationModel.Activation.IWalletActionActivatedEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::IWebAccountProviderActivatedEventArgs> = L"Windows.ApplicationModel.Activation.IWebAccountProviderActivatedEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Activation::IWebAuthenticationBrokerContinuationEventArgs> = L"Windows.ApplicationModel.Activation.IWebAuthenticationBrokerContinuationEventArgs";
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Activation::IActivatedEventArgs>{ 0xCF651713,0xCD08,0x4FD8,{ 0xB6,0x97,0xA2,0x81,0xB6,0x54,0x4E,0x2E } }; // CF651713-CD08-4FD8-B697-A281B6544E2E
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Activation::IActivatedEventArgsWithUser>{ 0x1CF09B9E,0x9962,0x4936,{ 0x80,0xFF,0xAF,0xC8,0xE8,0xAE,0x5C,0x8C } }; // 1CF09B9E-9962-4936-80FF-AFC8E8AE5C8C
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Activation::IApplicationViewActivatedEventArgs>{ 0x930CEF4B,0xB829,0x40FC,{ 0x88,0xF4,0x85,0x13,0xE8,0xA6,0x47,0x38 } }; // 930CEF4B-B829-40FC-88F4-8513E8A64738
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Activation::IAppointmentsProviderActivatedEventArgs>{ 0x3364C405,0x933C,0x4E7D,{ 0xA0,0x34,0x50,0x0F,0xB8,0xDC,0xD9,0xF3 } }; // 3364C405-933C-4E7D-A034-500FB8DCD9F3
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Activation::IAppointmentsProviderAddAppointmentActivatedEventArgs>{ 0xA2861367,0xCEE5,0x4E4D,{ 0x9E,0xD7,0x41,0xC3,0x4E,0xC1,0x8B,0x02 } }; // A2861367-CEE5-4E4D-9ED7-41C34EC18B02
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Activation::IAppointmentsProviderRemoveAppointmentActivatedEventArgs>{ 0x751F3AB8,0x0B8E,0x451C,{ 0x9F,0x15,0x96,0x6E,0x69,0x9B,0xAC,0x25 } }; // 751F3AB8-0B8E-451C-9F15-966E699BAC25
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Activation::IAppointmentsProviderReplaceAppointmentActivatedEventArgs>{ 0x1551B7D4,0xA981,0x4067,{ 0x8A,0x62,0x05,0x24,0xE4,0xAD,0xE1,0x21 } }; // 1551B7D4-A981-4067-8A62-0524E4ADE121
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Activation::IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs>{ 0x3958F065,0x9841,0x4CA5,{ 0x99,0x9B,0x88,0x51,0x98,0xB9,0xEF,0x2A } }; // 3958F065-9841-4CA5-999B-885198B9EF2A
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Activation::IAppointmentsProviderShowTimeFrameActivatedEventArgs>{ 0x9BAEABA6,0x0E0B,0x49AA,{ 0xBA,0xBC,0x12,0xB1,0xDC,0x77,0x49,0x86 } }; // 9BAEABA6-0E0B-49AA-BABC-12B1DC774986
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Activation::IBackgroundActivatedEventArgs>{ 0xAB14BEE0,0xE760,0x440E,{ 0xA9,0x1C,0x44,0x79,0x6D,0xE3,0xA9,0x2D } }; // AB14BEE0-E760-440E-A91C-44796DE3A92D
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Activation::IBarcodeScannerPreviewActivatedEventArgs>{ 0x6772797C,0x99BF,0x4349,{ 0xAF,0x22,0xE4,0x12,0x35,0x60,0x37,0x1C } }; // 6772797C-99BF-4349-AF22-E4123560371C
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Activation::ICachedFileUpdaterActivatedEventArgs>{ 0xD06EB1C7,0x3805,0x4ECB,{ 0xB7,0x57,0x6C,0xF1,0x5E,0x26,0xFE,0xF3 } }; // D06EB1C7-3805-4ECB-B757-6CF15E26FEF3
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Activation::ICameraSettingsActivatedEventArgs>{ 0xFB67A508,0x2DAD,0x490A,{ 0x91,0x70,0xDC,0xA0,0x36,0xEB,0x11,0x4B } }; // FB67A508-2DAD-490A-9170-DCA036EB114B
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Activation::ICommandLineActivatedEventArgs>{ 0x4506472C,0x006A,0x48EB,{ 0x8A,0xFB,0xD0,0x7A,0xB2,0x5E,0x33,0x66 } }; // 4506472C-006A-48EB-8AFB-D07AB25E3366
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Activation::ICommandLineActivationOperation>{ 0x994B2841,0xC59E,0x4F69,{ 0xBC,0xFD,0xB6,0x1E,0xD4,0xE6,0x22,0xEB } }; // 994B2841-C59E-4F69-BCFD-B61ED4E622EB
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Activation::IContactActivatedEventArgs>{ 0xD627A1C4,0xC025,0x4C41,{ 0x9D,0xEF,0xF1,0xEA,0xFA,0xD0,0x75,0xE7 } }; // D627A1C4-C025-4C41-9DEF-F1EAFAD075E7
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Activation::IContactCallActivatedEventArgs>{ 0xC2DF14C7,0x30EB,0x41C6,{ 0xB3,0xBC,0x5B,0x16,0x94,0xF9,0xDA,0xB3 } }; // C2DF14C7-30EB-41C6-B3BC-5B1694F9DAB3
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Activation::IContactMapActivatedEventArgs>{ 0xB32BF870,0xEEE7,0x4AD2,{ 0xAA,0xF1,0xA8,0x7E,0xFF,0xCF,0x00,0xA4 } }; // B32BF870-EEE7-4AD2-AAF1-A87EFFCF00A4
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Activation::IContactMessageActivatedEventArgs>{ 0xDE598DB2,0x0E03,0x43B0,{ 0xBF,0x56,0xBC,0xC4,0x0B,0x31,0x62,0xDF } }; // DE598DB2-0E03-43B0-BF56-BCC40B3162DF
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Activation::IContactPanelActivatedEventArgs>{ 0x52BB63E4,0xD3D4,0x4B63,{ 0x80,0x51,0x4A,0xF2,0x08,0x2C,0xAB,0x80 } }; // 52BB63E4-D3D4-4B63-8051-4AF2082CAB80
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Activation::IContactPickerActivatedEventArgs>{ 0xCE57AAE7,0x6449,0x45A7,{ 0x97,0x1F,0xD1,0x13,0xBE,0x7A,0x89,0x36 } }; // CE57AAE7-6449-45A7-971F-D113BE7A8936
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Activation::IContactPostActivatedEventArgs>{ 0xB35A3C67,0xF1E7,0x4655,{ 0xAD,0x6E,0x48,0x57,0x58,0x8F,0x55,0x2F } }; // B35A3C67-F1E7-4655-AD6E-4857588F552F
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Activation::IContactVideoCallActivatedEventArgs>{ 0x61079DB8,0xE3E7,0x4B4F,{ 0x85,0x8D,0x5C,0x63,0xA9,0x6E,0xF6,0x84 } }; // 61079DB8-E3E7-4B4F-858D-5C63A96EF684
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Activation::IContactsProviderActivatedEventArgs>{ 0x4580DCA8,0x5750,0x4916,{ 0xAA,0x52,0xC0,0x82,0x95,0x21,0xEB,0x94 } }; // 4580DCA8-5750-4916-AA52-C0829521EB94
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Activation::IContinuationActivatedEventArgs>{ 0xE58106B5,0x155F,0x4A94,{ 0xA7,0x42,0xC7,0xE0,0x8F,0x4E,0x18,0x8C } }; // E58106B5-155F-4A94-A742-C7E08F4E188C
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Activation::IDeviceActivatedEventArgs>{ 0xCD50B9A9,0xCE10,0x44D2,{ 0x82,0x34,0xC3,0x55,0xA0,0x73,0xEF,0x33 } }; // CD50B9A9-CE10-44D2-8234-C355A073EF33
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Activation::IDevicePairingActivatedEventArgs>{ 0xEBA0D1E4,0xECC6,0x4148,{ 0x94,0xED,0xF4,0xB3,0x7E,0xC0,0x5B,0x3E } }; // EBA0D1E4-ECC6-4148-94ED-F4B37EC05B3E
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Activation::IDialReceiverActivatedEventArgs>{ 0xFB777ED7,0x85EE,0x456E,{ 0xA4,0x4D,0x85,0xD7,0x30,0xE7,0x0A,0xED } }; // FB777ED7-85EE-456E-A44D-85D730E70AED
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Activation::IFileActivatedEventArgs>{ 0xBB2AFC33,0x93B1,0x42ED,{ 0x8B,0x26,0x23,0x6D,0xD9,0xC7,0x84,0x96 } }; // BB2AFC33-93B1-42ED-8B26-236DD9C78496
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Activation::IFileActivatedEventArgsWithCallerPackageFamilyName>{ 0x2D60F06B,0xD25F,0x4D25,{ 0x86,0x53,0xE1,0xC5,0xE1,0x10,0x83,0x09 } }; // 2D60F06B-D25F-4D25-8653-E1C5E1108309
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Activation::IFileActivatedEventArgsWithNeighboringFiles>{ 0x433BA1A4,0xE1E2,0x48FD,{ 0xB7,0xFC,0xB5,0xD6,0xEE,0xE6,0x50,0x33 } }; // 433BA1A4-E1E2-48FD-B7FC-B5D6EEE65033
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Activation::IFileOpenPickerActivatedEventArgs>{ 0x72827082,0x5525,0x4BF2,{ 0xBC,0x09,0x1F,0x50,0x95,0xD4,0x96,0x4D } }; // 72827082-5525-4BF2-BC09-1F5095D4964D
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Activation::IFileOpenPickerActivatedEventArgs2>{ 0x5E731F66,0x8D1F,0x45FB,{ 0xAF,0x1D,0x73,0x20,0x5C,0x8F,0xC7,0xA1 } }; // 5E731F66-8D1F-45FB-AF1D-73205C8FC7A1
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Activation::IFileOpenPickerContinuationEventArgs>{ 0xF0FA3F3A,0xD4E8,0x4AD3,{ 0x9C,0x34,0x23,0x08,0xF3,0x2F,0xCE,0xC9 } }; // F0FA3F3A-D4E8-4AD3-9C34-2308F32FCEC9
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Activation::IFileSavePickerActivatedEventArgs>{ 0x81C19CF1,0x74E6,0x4387,{ 0x82,0xEB,0xBB,0x8F,0xD6,0x4B,0x43,0x46 } }; // 81C19CF1-74E6-4387-82EB-BB8FD64B4346
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Activation::IFileSavePickerActivatedEventArgs2>{ 0x6B73FE13,0x2CF2,0x4D48,{ 0x8C,0xBC,0xAF,0x67,0xD2,0x3F,0x1C,0xE7 } }; // 6B73FE13-2CF2-4D48-8CBC-AF67D23F1CE7
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Activation::IFileSavePickerContinuationEventArgs>{ 0x2C846FE1,0x3BAD,0x4F33,{ 0x8C,0x8B,0xE4,0x6F,0xAE,0x82,0x4B,0x4B } }; // 2C846FE1-3BAD-4F33-8C8B-E46FAE824B4B
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Activation::IFolderPickerContinuationEventArgs>{ 0x51882366,0x9F4B,0x498F,{ 0xBE,0xB0,0x42,0x68,0x4F,0x6E,0x1C,0x29 } }; // 51882366-9F4B-498F-BEB0-42684F6E1C29
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Activation::ILaunchActivatedEventArgs>{ 0xFBC93E26,0xA14A,0x4B4F,{ 0x82,0xB0,0x33,0xBE,0xD9,0x20,0xAF,0x52 } }; // FBC93E26-A14A-4B4F-82B0-33BED920AF52
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Activation::ILaunchActivatedEventArgs2>{ 0x0FD37EBC,0x9DC9,0x46B5,{ 0x9A,0xCE,0xBD,0x95,0xD4,0x56,0x53,0x45 } }; // 0FD37EBC-9DC9-46B5-9ACE-BD95D4565345
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Activation::ILockScreenActivatedEventArgs>{ 0x3CA77966,0x6108,0x4A41,{ 0x82,0x20,0xEE,0x7D,0x13,0x3C,0x85,0x32 } }; // 3CA77966-6108-4A41-8220-EE7D133C8532
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Activation::ILockScreenCallActivatedEventArgs>{ 0x06F37FBE,0xB5F2,0x448B,{ 0xB1,0x3E,0xE3,0x28,0xAC,0x1C,0x51,0x6A } }; // 06F37FBE-B5F2-448B-B13E-E328AC1C516A
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Activation::IPhoneCallActivatedEventArgs>{ 0x54615221,0xA3C1,0x4CED,{ 0xB6,0x2F,0x8C,0x60,0x52,0x36,0x19,0xAD } }; // 54615221-A3C1-4CED-B62F-8C60523619AD
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Activation::IPickerReturnedActivatedEventArgs>{ 0x360DEFB9,0xA9D3,0x4984,{ 0xA4,0xED,0x9E,0xC7,0x34,0x60,0x49,0x21 } }; // 360DEFB9-A9D3-4984-A4ED-9EC734604921
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Activation::IPrelaunchActivatedEventArgs>{ 0x0C44717B,0x19F7,0x48D6,{ 0xB0,0x46,0xCF,0x22,0x82,0x6E,0xAA,0x74 } }; // 0C44717B-19F7-48D6-B046-CF22826EAA74
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Activation::IPrint3DWorkflowActivatedEventArgs>{ 0x3F57E78B,0xF2AC,0x4619,{ 0x83,0x02,0xEF,0x85,0x5E,0x1C,0x9B,0x90 } }; // 3F57E78B-F2AC-4619-8302-EF855E1C9B90
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Activation::IPrintTaskSettingsActivatedEventArgs>{ 0xEE30A0C9,0xCE56,0x4865,{ 0xBA,0x8E,0x89,0x54,0xAC,0x27,0x11,0x07 } }; // EE30A0C9-CE56-4865-BA8E-8954AC271107
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Activation::IProtocolActivatedEventArgs>{ 0x6095F4DD,0xB7C0,0x46AB,{ 0x81,0xFE,0xD9,0x0F,0x36,0xD0,0x0D,0x24 } }; // 6095F4DD-B7C0-46AB-81FE-D90F36D00D24
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Activation::IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData>{ 0xD84A0C12,0x5C8F,0x438C,{ 0x83,0xCB,0xC2,0x8F,0xCC,0x0B,0x2F,0xDB } }; // D84A0C12-5C8F-438C-83CB-C28FCC0B2FDB
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Activation::IProtocolForResultsActivatedEventArgs>{ 0xE75132C2,0x7AE7,0x4517,{ 0x80,0xAC,0xDB,0xE8,0xD7,0xCC,0x5B,0x9C } }; // E75132C2-7AE7-4517-80AC-DBE8D7CC5B9C
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Activation::IRestrictedLaunchActivatedEventArgs>{ 0xE0B7AC81,0xBFC3,0x4344,{ 0xA5,0xDA,0x19,0xFD,0x5A,0x27,0xBA,0xAE } }; // E0B7AC81-BFC3-4344-A5DA-19FD5A27BAAE
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Activation::ISearchActivatedEventArgs>{ 0x8CB36951,0x58C8,0x43E3,{ 0x94,0xBC,0x41,0xD3,0x3F,0x8B,0x63,0x0E } }; // 8CB36951-58C8-43E3-94BC-41D33F8B630E
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Activation::ISearchActivatedEventArgsWithLinguisticDetails>{ 0xC09F33DA,0x08AB,0x4931,{ 0x9B,0x7C,0x45,0x10,0x25,0xF2,0x1F,0x81 } }; // C09F33DA-08AB-4931-9B7C-451025F21F81
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Activation::IShareTargetActivatedEventArgs>{ 0x4BDAF9C8,0xCDB2,0x4ACB,{ 0xBF,0xC3,0x66,0x48,0x56,0x33,0x78,0xEC } }; // 4BDAF9C8-CDB2-4ACB-BFC3-6648563378EC
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Activation::ISplashScreen>{ 0xCA4D975C,0xD4D6,0x43F0,{ 0x97,0xC0,0x08,0x33,0xC6,0x39,0x1C,0x24 } }; // CA4D975C-D4D6-43F0-97C0-0833C6391C24
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Activation::IStartupTaskActivatedEventArgs>{ 0x03B11A58,0x5276,0x4D91,{ 0x86,0x21,0x54,0x61,0x18,0x64,0xD5,0xFA } }; // 03B11A58-5276-4D91-8621-54611864D5FA
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Activation::ITileActivatedInfo>{ 0x80E4A3B1,0x3980,0x4F17,{ 0xB7,0x38,0x89,0x19,0x4E,0x0B,0x8F,0x65 } }; // 80E4A3B1-3980-4F17-B738-89194E0B8F65
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Activation::IToastNotificationActivatedEventArgs>{ 0x92A86F82,0x5290,0x431D,{ 0xBE,0x85,0xC4,0xAA,0xEE,0xB8,0x68,0x5F } }; // 92A86F82-5290-431D-BE85-C4AAEEB8685F
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Activation::IUserDataAccountProviderActivatedEventArgs>{ 0x1BC9F723,0x8EF1,0x4A51,{ 0xA6,0x3A,0xFE,0x71,0x1E,0xEA,0xB6,0x07 } }; // 1BC9F723-8EF1-4A51-A63A-FE711EEAB607
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Activation::IViewSwitcherProvider>{ 0x33F288A6,0x5C2C,0x4D27,{ 0xBA,0xC7,0x75,0x36,0x08,0x8F,0x12,0x19 } }; // 33F288A6-5C2C-4D27-BAC7-7536088F1219
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Activation::IVoiceCommandActivatedEventArgs>{ 0xAB92DCFD,0x8D43,0x4DE6,{ 0x97,0x75,0x20,0x70,0x4B,0x58,0x1B,0x00 } }; // AB92DCFD-8D43-4DE6-9775-20704B581B00
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Activation::IWalletActionActivatedEventArgs>{ 0xFCFC027B,0x1A1A,0x4D22,{ 0x92,0x3F,0xAE,0x6F,0x45,0xFA,0x52,0xD9 } }; // FCFC027B-1A1A-4D22-923F-AE6F45FA52D9
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Activation::IWebAccountProviderActivatedEventArgs>{ 0x72B71774,0x98EA,0x4CCF,{ 0x97,0x52,0x46,0xD9,0x05,0x10,0x04,0xF1 } }; // 72B71774-98EA-4CCF-9752-46D9051004F1
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Activation::IWebAuthenticationBrokerContinuationEventArgs>{ 0x75DDA3D4,0x7714,0x453D,{ 0xB7,0xFF,0xB9,0x5E,0x3A,0x17,0x09,0xDA } }; // 75DDA3D4-7714-453D-B7FF-B95E3A1709DA
    template <> struct default_interface<llm::OS::ApplicationModel::Activation::AppointmentsProviderAddAppointmentActivatedEventArgs>{ using type = llm::OS::ApplicationModel::Activation::IAppointmentsProviderAddAppointmentActivatedEventArgs; };
    template <> struct default_interface<llm::OS::ApplicationModel::Activation::AppointmentsProviderRemoveAppointmentActivatedEventArgs>{ using type = llm::OS::ApplicationModel::Activation::IAppointmentsProviderRemoveAppointmentActivatedEventArgs; };
    template <> struct default_interface<llm::OS::ApplicationModel::Activation::AppointmentsProviderReplaceAppointmentActivatedEventArgs>{ using type = llm::OS::ApplicationModel::Activation::IAppointmentsProviderReplaceAppointmentActivatedEventArgs; };
    template <> struct default_interface<llm::OS::ApplicationModel::Activation::AppointmentsProviderShowAppointmentDetailsActivatedEventArgs>{ using type = llm::OS::ApplicationModel::Activation::IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs; };
    template <> struct default_interface<llm::OS::ApplicationModel::Activation::AppointmentsProviderShowTimeFrameActivatedEventArgs>{ using type = llm::OS::ApplicationModel::Activation::IAppointmentsProviderShowTimeFrameActivatedEventArgs; };
    template <> struct default_interface<llm::OS::ApplicationModel::Activation::BackgroundActivatedEventArgs>{ using type = llm::OS::ApplicationModel::Activation::IBackgroundActivatedEventArgs; };
    template <> struct default_interface<llm::OS::ApplicationModel::Activation::BarcodeScannerPreviewActivatedEventArgs>{ using type = llm::OS::ApplicationModel::Activation::IBarcodeScannerPreviewActivatedEventArgs; };
    template <> struct default_interface<llm::OS::ApplicationModel::Activation::CachedFileUpdaterActivatedEventArgs>{ using type = llm::OS::ApplicationModel::Activation::ICachedFileUpdaterActivatedEventArgs; };
    template <> struct default_interface<llm::OS::ApplicationModel::Activation::CameraSettingsActivatedEventArgs>{ using type = llm::OS::ApplicationModel::Activation::ICameraSettingsActivatedEventArgs; };
    template <> struct default_interface<llm::OS::ApplicationModel::Activation::CommandLineActivatedEventArgs>{ using type = llm::OS::ApplicationModel::Activation::ICommandLineActivatedEventArgs; };
    template <> struct default_interface<llm::OS::ApplicationModel::Activation::CommandLineActivationOperation>{ using type = llm::OS::ApplicationModel::Activation::ICommandLineActivationOperation; };
    template <> struct default_interface<llm::OS::ApplicationModel::Activation::ContactCallActivatedEventArgs>{ using type = llm::OS::ApplicationModel::Activation::IContactCallActivatedEventArgs; };
    template <> struct default_interface<llm::OS::ApplicationModel::Activation::ContactMapActivatedEventArgs>{ using type = llm::OS::ApplicationModel::Activation::IContactMapActivatedEventArgs; };
    template <> struct default_interface<llm::OS::ApplicationModel::Activation::ContactMessageActivatedEventArgs>{ using type = llm::OS::ApplicationModel::Activation::IContactMessageActivatedEventArgs; };
    template <> struct default_interface<llm::OS::ApplicationModel::Activation::ContactPanelActivatedEventArgs>{ using type = llm::OS::ApplicationModel::Activation::IContactPanelActivatedEventArgs; };
    template <> struct default_interface<llm::OS::ApplicationModel::Activation::ContactPickerActivatedEventArgs>{ using type = llm::OS::ApplicationModel::Activation::IContactPickerActivatedEventArgs; };
    template <> struct default_interface<llm::OS::ApplicationModel::Activation::ContactPostActivatedEventArgs>{ using type = llm::OS::ApplicationModel::Activation::IContactPostActivatedEventArgs; };
    template <> struct default_interface<llm::OS::ApplicationModel::Activation::ContactVideoCallActivatedEventArgs>{ using type = llm::OS::ApplicationModel::Activation::IContactVideoCallActivatedEventArgs; };
    template <> struct default_interface<llm::OS::ApplicationModel::Activation::DeviceActivatedEventArgs>{ using type = llm::OS::ApplicationModel::Activation::IDeviceActivatedEventArgs; };
    template <> struct default_interface<llm::OS::ApplicationModel::Activation::DevicePairingActivatedEventArgs>{ using type = llm::OS::ApplicationModel::Activation::IDevicePairingActivatedEventArgs; };
    template <> struct default_interface<llm::OS::ApplicationModel::Activation::DialReceiverActivatedEventArgs>{ using type = llm::OS::ApplicationModel::Activation::IDialReceiverActivatedEventArgs; };
    template <> struct default_interface<llm::OS::ApplicationModel::Activation::FileActivatedEventArgs>{ using type = llm::OS::ApplicationModel::Activation::IFileActivatedEventArgs; };
    template <> struct default_interface<llm::OS::ApplicationModel::Activation::FileOpenPickerActivatedEventArgs>{ using type = llm::OS::ApplicationModel::Activation::IFileOpenPickerActivatedEventArgs; };
    template <> struct default_interface<llm::OS::ApplicationModel::Activation::FileOpenPickerContinuationEventArgs>{ using type = llm::OS::ApplicationModel::Activation::IFileOpenPickerContinuationEventArgs; };
    template <> struct default_interface<llm::OS::ApplicationModel::Activation::FileSavePickerActivatedEventArgs>{ using type = llm::OS::ApplicationModel::Activation::IFileSavePickerActivatedEventArgs; };
    template <> struct default_interface<llm::OS::ApplicationModel::Activation::FileSavePickerContinuationEventArgs>{ using type = llm::OS::ApplicationModel::Activation::IFileSavePickerContinuationEventArgs; };
    template <> struct default_interface<llm::OS::ApplicationModel::Activation::FolderPickerContinuationEventArgs>{ using type = llm::OS::ApplicationModel::Activation::IFolderPickerContinuationEventArgs; };
    template <> struct default_interface<llm::OS::ApplicationModel::Activation::LaunchActivatedEventArgs>{ using type = llm::OS::ApplicationModel::Activation::ILaunchActivatedEventArgs; };
    template <> struct default_interface<llm::OS::ApplicationModel::Activation::LockScreenActivatedEventArgs>{ using type = llm::OS::ApplicationModel::Activation::ILockScreenActivatedEventArgs; };
    template <> struct default_interface<llm::OS::ApplicationModel::Activation::LockScreenCallActivatedEventArgs>{ using type = llm::OS::ApplicationModel::Activation::ILockScreenCallActivatedEventArgs; };
    template <> struct default_interface<llm::OS::ApplicationModel::Activation::LockScreenComponentActivatedEventArgs>{ using type = llm::OS::ApplicationModel::Activation::IActivatedEventArgs; };
    template <> struct default_interface<llm::OS::ApplicationModel::Activation::PhoneCallActivatedEventArgs>{ using type = llm::OS::ApplicationModel::Activation::IPhoneCallActivatedEventArgs; };
    template <> struct default_interface<llm::OS::ApplicationModel::Activation::PickerReturnedActivatedEventArgs>{ using type = llm::OS::ApplicationModel::Activation::IPickerReturnedActivatedEventArgs; };
    template <> struct default_interface<llm::OS::ApplicationModel::Activation::Print3DWorkflowActivatedEventArgs>{ using type = llm::OS::ApplicationModel::Activation::IPrint3DWorkflowActivatedEventArgs; };
    template <> struct default_interface<llm::OS::ApplicationModel::Activation::PrintTaskSettingsActivatedEventArgs>{ using type = llm::OS::ApplicationModel::Activation::IPrintTaskSettingsActivatedEventArgs; };
    template <> struct default_interface<llm::OS::ApplicationModel::Activation::ProtocolActivatedEventArgs>{ using type = llm::OS::ApplicationModel::Activation::IProtocolActivatedEventArgs; };
    template <> struct default_interface<llm::OS::ApplicationModel::Activation::ProtocolForResultsActivatedEventArgs>{ using type = llm::OS::ApplicationModel::Activation::IProtocolForResultsActivatedEventArgs; };
    template <> struct default_interface<llm::OS::ApplicationModel::Activation::RestrictedLaunchActivatedEventArgs>{ using type = llm::OS::ApplicationModel::Activation::IRestrictedLaunchActivatedEventArgs; };
    template <> struct default_interface<llm::OS::ApplicationModel::Activation::SearchActivatedEventArgs>{ using type = llm::OS::ApplicationModel::Activation::ISearchActivatedEventArgs; };
    template <> struct default_interface<llm::OS::ApplicationModel::Activation::ShareTargetActivatedEventArgs>{ using type = llm::OS::ApplicationModel::Activation::IShareTargetActivatedEventArgs; };
    template <> struct default_interface<llm::OS::ApplicationModel::Activation::SplashScreen>{ using type = llm::OS::ApplicationModel::Activation::ISplashScreen; };
    template <> struct default_interface<llm::OS::ApplicationModel::Activation::StartupTaskActivatedEventArgs>{ using type = llm::OS::ApplicationModel::Activation::IStartupTaskActivatedEventArgs; };
    template <> struct default_interface<llm::OS::ApplicationModel::Activation::TileActivatedInfo>{ using type = llm::OS::ApplicationModel::Activation::ITileActivatedInfo; };
    template <> struct default_interface<llm::OS::ApplicationModel::Activation::ToastNotificationActivatedEventArgs>{ using type = llm::OS::ApplicationModel::Activation::IToastNotificationActivatedEventArgs; };
    template <> struct default_interface<llm::OS::ApplicationModel::Activation::UserDataAccountProviderActivatedEventArgs>{ using type = llm::OS::ApplicationModel::Activation::IUserDataAccountProviderActivatedEventArgs; };
    template <> struct default_interface<llm::OS::ApplicationModel::Activation::VoiceCommandActivatedEventArgs>{ using type = llm::OS::ApplicationModel::Activation::IVoiceCommandActivatedEventArgs; };
    template <> struct default_interface<llm::OS::ApplicationModel::Activation::WalletActionActivatedEventArgs>{ using type = llm::OS::ApplicationModel::Activation::IWalletActionActivatedEventArgs; };
    template <> struct default_interface<llm::OS::ApplicationModel::Activation::WebAccountProviderActivatedEventArgs>{ using type = llm::OS::ApplicationModel::Activation::IWebAccountProviderActivatedEventArgs; };
    template <> struct default_interface<llm::OS::ApplicationModel::Activation::WebAuthenticationBrokerContinuationEventArgs>{ using type = llm::OS::ApplicationModel::Activation::IWebAuthenticationBrokerContinuationEventArgs; };
    template <> struct abi<llm::OS::ApplicationModel::Activation::IActivatedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Kind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_PreviousExecutionState(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_SplashScreen(void**) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Activation::IActivatedEventArgsWithUser>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_User(void**) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Activation::IApplicationViewActivatedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CurrentlyShownApplicationViewId(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Activation::IAppointmentsProviderActivatedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Verb(void**) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Activation::IAppointmentsProviderAddAppointmentActivatedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AddAppointmentOperation(void**) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Activation::IAppointmentsProviderRemoveAppointmentActivatedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RemoveAppointmentOperation(void**) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Activation::IAppointmentsProviderReplaceAppointmentActivatedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ReplaceAppointmentOperation(void**) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Activation::IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_InstanceStartDate(void**) noexcept = 0;
            virtual int32_t __stdcall get_LocalId(void**) noexcept = 0;
            virtual int32_t __stdcall get_RoamingId(void**) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Activation::IAppointmentsProviderShowTimeFrameActivatedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TimeToShow(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_Duration(int64_t*) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Activation::IBackgroundActivatedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TaskInstance(void**) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Activation::IBarcodeScannerPreviewActivatedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ConnectionId(void**) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Activation::ICachedFileUpdaterActivatedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CachedFileUpdaterUI(void**) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Activation::ICameraSettingsActivatedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_VideoDeviceController(void**) noexcept = 0;
            virtual int32_t __stdcall get_VideoDeviceExtension(void**) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Activation::ICommandLineActivatedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Operation(void**) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Activation::ICommandLineActivationOperation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Arguments(void**) noexcept = 0;
            virtual int32_t __stdcall get_CurrentDirectoryPath(void**) noexcept = 0;
            virtual int32_t __stdcall put_ExitCode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_ExitCode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Activation::IContactActivatedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Verb(void**) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Activation::IContactCallActivatedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ServiceId(void**) noexcept = 0;
            virtual int32_t __stdcall get_ServiceUserId(void**) noexcept = 0;
            virtual int32_t __stdcall get_Contact(void**) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Activation::IContactMapActivatedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Address(void**) noexcept = 0;
            virtual int32_t __stdcall get_Contact(void**) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Activation::IContactMessageActivatedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ServiceId(void**) noexcept = 0;
            virtual int32_t __stdcall get_ServiceUserId(void**) noexcept = 0;
            virtual int32_t __stdcall get_Contact(void**) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Activation::IContactPanelActivatedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ContactPanel(void**) noexcept = 0;
            virtual int32_t __stdcall get_Contact(void**) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Activation::IContactPickerActivatedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ContactPickerUI(void**) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Activation::IContactPostActivatedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ServiceId(void**) noexcept = 0;
            virtual int32_t __stdcall get_ServiceUserId(void**) noexcept = 0;
            virtual int32_t __stdcall get_Contact(void**) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Activation::IContactVideoCallActivatedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ServiceId(void**) noexcept = 0;
            virtual int32_t __stdcall get_ServiceUserId(void**) noexcept = 0;
            virtual int32_t __stdcall get_Contact(void**) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Activation::IContactsProviderActivatedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Verb(void**) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Activation::IContinuationActivatedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ContinuationData(void**) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Activation::IDeviceActivatedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DeviceInformationId(void**) noexcept = 0;
            virtual int32_t __stdcall get_Verb(void**) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Activation::IDevicePairingActivatedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DeviceInformation(void**) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Activation::IDialReceiverActivatedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AppName(void**) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Activation::IFileActivatedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Files(void**) noexcept = 0;
            virtual int32_t __stdcall get_Verb(void**) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Activation::IFileActivatedEventArgsWithCallerPackageFamilyName>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CallerPackageFamilyName(void**) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Activation::IFileActivatedEventArgsWithNeighboringFiles>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_NeighboringFilesQuery(void**) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Activation::IFileOpenPickerActivatedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FileOpenPickerUI(void**) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Activation::IFileOpenPickerActivatedEventArgs2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CallerPackageFamilyName(void**) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Activation::IFileOpenPickerContinuationEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Files(void**) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Activation::IFileSavePickerActivatedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FileSavePickerUI(void**) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Activation::IFileSavePickerActivatedEventArgs2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CallerPackageFamilyName(void**) noexcept = 0;
            virtual int32_t __stdcall get_EnterpriseId(void**) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Activation::IFileSavePickerContinuationEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_File(void**) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Activation::IFolderPickerContinuationEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Folder(void**) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Activation::ILaunchActivatedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Arguments(void**) noexcept = 0;
            virtual int32_t __stdcall get_TileId(void**) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Activation::ILaunchActivatedEventArgs2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TileActivatedInfo(void**) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Activation::ILockScreenActivatedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Info(void**) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Activation::ILockScreenCallActivatedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CallUI(void**) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Activation::IPhoneCallActivatedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_LineId(llm::guid*) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Activation::IPickerReturnedActivatedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PickerOperationId(void**) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Activation::IPrelaunchActivatedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PrelaunchActivated(bool*) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Activation::IPrint3DWorkflowActivatedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Workflow(void**) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Activation::IPrintTaskSettingsActivatedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Configuration(void**) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Activation::IProtocolActivatedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Uri(void**) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Activation::IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CallerPackageFamilyName(void**) noexcept = 0;
            virtual int32_t __stdcall get_Data(void**) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Activation::IProtocolForResultsActivatedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ProtocolForResultsOperation(void**) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Activation::IRestrictedLaunchActivatedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SharedContext(void**) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Activation::ISearchActivatedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_QueryText(void**) noexcept = 0;
            virtual int32_t __stdcall get_Language(void**) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Activation::ISearchActivatedEventArgsWithLinguisticDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_LinguisticDetails(void**) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Activation::IShareTargetActivatedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ShareOperation(void**) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Activation::ISplashScreen>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ImageLocation(llm::OS::Foundation::Rect*) noexcept = 0;
            virtual int32_t __stdcall add_Dismissed(void*, llm::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Dismissed(llm::event_token) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Activation::IStartupTaskActivatedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TaskId(void**) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Activation::ITileActivatedInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RecentlyShownNotifications(void**) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Activation::IToastNotificationActivatedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Argument(void**) noexcept = 0;
            virtual int32_t __stdcall get_UserInput(void**) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Activation::IUserDataAccountProviderActivatedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Operation(void**) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Activation::IViewSwitcherProvider>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ViewSwitcher(void**) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Activation::IVoiceCommandActivatedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Result(void**) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Activation::IWalletActionActivatedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ItemId(void**) noexcept = 0;
            virtual int32_t __stdcall get_ActionKind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ActionId(void**) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Activation::IWebAccountProviderActivatedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Operation(void**) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Activation::IWebAuthenticationBrokerContinuationEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_WebAuthenticationResult(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Activation_IActivatedEventArgs
    {
        [[nodiscard]] LLM_IMPL_AUTO(llm::OS::ApplicationModel::Activation::ActivationKind) Kind() const;
        [[nodiscard]] LLM_IMPL_AUTO(llm::OS::ApplicationModel::Activation::ApplicationExecutionState) PreviousExecutionState() const;
        [[nodiscard]] LLM_IMPL_AUTO(llm::OS::ApplicationModel::Activation::SplashScreen) SplashScreen() const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Activation::IActivatedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Activation_IActivatedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Activation_IActivatedEventArgsWithUser
    {
        [[nodiscard]] LLM_IMPL_AUTO(llm::OS::System::User) User() const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Activation::IActivatedEventArgsWithUser>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Activation_IActivatedEventArgsWithUser<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Activation_IApplicationViewActivatedEventArgs
    {
        [[nodiscard]] LLM_IMPL_AUTO(int32_t) CurrentlyShownApplicationViewId() const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Activation::IApplicationViewActivatedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Activation_IApplicationViewActivatedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Activation_IAppointmentsProviderActivatedEventArgs
    {
        [[nodiscard]] LLM_IMPL_AUTO(hstring) Verb() const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Activation::IAppointmentsProviderActivatedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Activation_IAppointmentsProviderActivatedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Activation_IAppointmentsProviderAddAppointmentActivatedEventArgs
    {
        [[nodiscard]] LLM_IMPL_AUTO(llm::OS::ApplicationModel::Appointments::AppointmentsProvider::AddAppointmentOperation) AddAppointmentOperation() const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Activation::IAppointmentsProviderAddAppointmentActivatedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Activation_IAppointmentsProviderAddAppointmentActivatedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Activation_IAppointmentsProviderRemoveAppointmentActivatedEventArgs
    {
        [[nodiscard]] LLM_IMPL_AUTO(llm::OS::ApplicationModel::Appointments::AppointmentsProvider::RemoveAppointmentOperation) RemoveAppointmentOperation() const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Activation::IAppointmentsProviderRemoveAppointmentActivatedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Activation_IAppointmentsProviderRemoveAppointmentActivatedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Activation_IAppointmentsProviderReplaceAppointmentActivatedEventArgs
    {
        [[nodiscard]] LLM_IMPL_AUTO(llm::OS::ApplicationModel::Appointments::AppointmentsProvider::ReplaceAppointmentOperation) ReplaceAppointmentOperation() const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Activation::IAppointmentsProviderReplaceAppointmentActivatedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Activation_IAppointmentsProviderReplaceAppointmentActivatedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Activation_IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs
    {
        [[nodiscard]] LLM_IMPL_AUTO(llm::OS::Foundation::IReference<llm::OS::Foundation::DateTime>) InstanceStartDate() const;
        [[nodiscard]] LLM_IMPL_AUTO(hstring) LocalId() const;
        [[nodiscard]] LLM_IMPL_AUTO(hstring) RoamingId() const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Activation::IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Activation_IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Activation_IAppointmentsProviderShowTimeFrameActivatedEventArgs
    {
        [[nodiscard]] LLM_IMPL_AUTO(llm::OS::Foundation::DateTime) TimeToShow() const;
        [[nodiscard]] LLM_IMPL_AUTO(llm::OS::Foundation::TimeSpan) Duration() const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Activation::IAppointmentsProviderShowTimeFrameActivatedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Activation_IAppointmentsProviderShowTimeFrameActivatedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Activation_IBackgroundActivatedEventArgs
    {
        [[nodiscard]] LLM_IMPL_AUTO(llm::OS::ApplicationModel::Background::IBackgroundTaskInstance) TaskInstance() const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Activation::IBackgroundActivatedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Activation_IBackgroundActivatedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Activation_IBarcodeScannerPreviewActivatedEventArgs
    {
        [[nodiscard]] LLM_IMPL_AUTO(hstring) ConnectionId() const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Activation::IBarcodeScannerPreviewActivatedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Activation_IBarcodeScannerPreviewActivatedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Activation_ICachedFileUpdaterActivatedEventArgs
    {
        [[nodiscard]] LLM_IMPL_AUTO(llm::OS::Storage::Provider::CachedFileUpdaterUI) CachedFileUpdaterUI() const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Activation::ICachedFileUpdaterActivatedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Activation_ICachedFileUpdaterActivatedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Activation_ICameraSettingsActivatedEventArgs
    {
        [[nodiscard]] LLM_IMPL_AUTO(llm::OS::Foundation::IInspectable) VideoDeviceController() const;
        [[nodiscard]] LLM_IMPL_AUTO(llm::OS::Foundation::IInspectable) VideoDeviceExtension() const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Activation::ICameraSettingsActivatedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Activation_ICameraSettingsActivatedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Activation_ICommandLineActivatedEventArgs
    {
        [[nodiscard]] LLM_IMPL_AUTO(llm::OS::ApplicationModel::Activation::CommandLineActivationOperation) Operation() const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Activation::ICommandLineActivatedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Activation_ICommandLineActivatedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Activation_ICommandLineActivationOperation
    {
        [[nodiscard]] LLM_IMPL_AUTO(hstring) Arguments() const;
        [[nodiscard]] LLM_IMPL_AUTO(hstring) CurrentDirectoryPath() const;
        LLM_IMPL_AUTO(void) ExitCode(int32_t value) const;
        [[nodiscard]] LLM_IMPL_AUTO(int32_t) ExitCode() const;
        LLM_IMPL_AUTO(llm::OS::Foundation::Deferral) GetDeferral() const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Activation::ICommandLineActivationOperation>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Activation_ICommandLineActivationOperation<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Activation_IContactActivatedEventArgs
    {
        [[nodiscard]] LLM_IMPL_AUTO(hstring) Verb() const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Activation::IContactActivatedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Activation_IContactActivatedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Activation_IContactCallActivatedEventArgs
    {
        [[nodiscard]] LLM_IMPL_AUTO(hstring) ServiceId() const;
        [[nodiscard]] LLM_IMPL_AUTO(hstring) ServiceUserId() const;
        [[nodiscard]] LLM_IMPL_AUTO(llm::OS::ApplicationModel::Contacts::Contact) Contact() const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Activation::IContactCallActivatedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Activation_IContactCallActivatedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Activation_IContactMapActivatedEventArgs
    {
        [[nodiscard]] LLM_IMPL_AUTO(llm::OS::ApplicationModel::Contacts::ContactAddress) Address() const;
        [[nodiscard]] LLM_IMPL_AUTO(llm::OS::ApplicationModel::Contacts::Contact) Contact() const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Activation::IContactMapActivatedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Activation_IContactMapActivatedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Activation_IContactMessageActivatedEventArgs
    {
        [[nodiscard]] LLM_IMPL_AUTO(hstring) ServiceId() const;
        [[nodiscard]] LLM_IMPL_AUTO(hstring) ServiceUserId() const;
        [[nodiscard]] LLM_IMPL_AUTO(llm::OS::ApplicationModel::Contacts::Contact) Contact() const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Activation::IContactMessageActivatedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Activation_IContactMessageActivatedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Activation_IContactPanelActivatedEventArgs
    {
        [[nodiscard]] LLM_IMPL_AUTO(llm::OS::ApplicationModel::Contacts::ContactPanel) ContactPanel() const;
        [[nodiscard]] LLM_IMPL_AUTO(llm::OS::ApplicationModel::Contacts::Contact) Contact() const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Activation::IContactPanelActivatedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Activation_IContactPanelActivatedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Activation_IContactPickerActivatedEventArgs
    {
        [[nodiscard]] LLM_IMPL_AUTO(llm::OS::ApplicationModel::Contacts::Provider::ContactPickerUI) ContactPickerUI() const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Activation::IContactPickerActivatedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Activation_IContactPickerActivatedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Activation_IContactPostActivatedEventArgs
    {
        [[nodiscard]] LLM_IMPL_AUTO(hstring) ServiceId() const;
        [[nodiscard]] LLM_IMPL_AUTO(hstring) ServiceUserId() const;
        [[nodiscard]] LLM_IMPL_AUTO(llm::OS::ApplicationModel::Contacts::Contact) Contact() const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Activation::IContactPostActivatedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Activation_IContactPostActivatedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Activation_IContactVideoCallActivatedEventArgs
    {
        [[nodiscard]] LLM_IMPL_AUTO(hstring) ServiceId() const;
        [[nodiscard]] LLM_IMPL_AUTO(hstring) ServiceUserId() const;
        [[nodiscard]] LLM_IMPL_AUTO(llm::OS::ApplicationModel::Contacts::Contact) Contact() const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Activation::IContactVideoCallActivatedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Activation_IContactVideoCallActivatedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Activation_IContactsProviderActivatedEventArgs
    {
        [[nodiscard]] LLM_IMPL_AUTO(hstring) Verb() const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Activation::IContactsProviderActivatedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Activation_IContactsProviderActivatedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Activation_IContinuationActivatedEventArgs
    {
        [[nodiscard]] LLM_IMPL_AUTO(llm::OS::Foundation::Collections::ValueSet) ContinuationData() const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Activation::IContinuationActivatedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Activation_IContinuationActivatedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Activation_IDeviceActivatedEventArgs
    {
        [[nodiscard]] LLM_IMPL_AUTO(hstring) DeviceInformationId() const;
        [[nodiscard]] LLM_IMPL_AUTO(hstring) Verb() const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Activation::IDeviceActivatedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Activation_IDeviceActivatedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Activation_IDevicePairingActivatedEventArgs
    {
        [[nodiscard]] LLM_IMPL_AUTO(llm::OS::Devices::Enumeration::DeviceInformation) DeviceInformation() const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Activation::IDevicePairingActivatedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Activation_IDevicePairingActivatedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Activation_IDialReceiverActivatedEventArgs
    {
        [[nodiscard]] LLM_IMPL_AUTO(hstring) AppName() const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Activation::IDialReceiverActivatedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Activation_IDialReceiverActivatedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Activation_IFileActivatedEventArgs
    {
        [[nodiscard]] LLM_IMPL_AUTO(llm::OS::Foundation::Collections::IVectorView<llm::OS::Storage::IStorageItem>) Files() const;
        [[nodiscard]] LLM_IMPL_AUTO(hstring) Verb() const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Activation::IFileActivatedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Activation_IFileActivatedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Activation_IFileActivatedEventArgsWithCallerPackageFamilyName
    {
        [[nodiscard]] LLM_IMPL_AUTO(hstring) CallerPackageFamilyName() const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Activation::IFileActivatedEventArgsWithCallerPackageFamilyName>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Activation_IFileActivatedEventArgsWithCallerPackageFamilyName<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Activation_IFileActivatedEventArgsWithNeighboringFiles
    {
        [[nodiscard]] LLM_IMPL_AUTO(llm::OS::Storage::Search::StorageFileQueryResult) NeighboringFilesQuery() const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Activation::IFileActivatedEventArgsWithNeighboringFiles>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Activation_IFileActivatedEventArgsWithNeighboringFiles<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Activation_IFileOpenPickerActivatedEventArgs
    {
        [[nodiscard]] LLM_IMPL_AUTO(llm::OS::Storage::Pickers::Provider::FileOpenPickerUI) FileOpenPickerUI() const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Activation::IFileOpenPickerActivatedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Activation_IFileOpenPickerActivatedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Activation_IFileOpenPickerActivatedEventArgs2
    {
        [[nodiscard]] LLM_IMPL_AUTO(hstring) CallerPackageFamilyName() const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Activation::IFileOpenPickerActivatedEventArgs2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Activation_IFileOpenPickerActivatedEventArgs2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Activation_IFileOpenPickerContinuationEventArgs
    {
        [[nodiscard]] LLM_IMPL_AUTO(llm::OS::Foundation::Collections::IVectorView<llm::OS::Storage::StorageFile>) Files() const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Activation::IFileOpenPickerContinuationEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Activation_IFileOpenPickerContinuationEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Activation_IFileSavePickerActivatedEventArgs
    {
        [[nodiscard]] LLM_IMPL_AUTO(llm::OS::Storage::Pickers::Provider::FileSavePickerUI) FileSavePickerUI() const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Activation::IFileSavePickerActivatedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Activation_IFileSavePickerActivatedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Activation_IFileSavePickerActivatedEventArgs2
    {
        [[nodiscard]] LLM_IMPL_AUTO(hstring) CallerPackageFamilyName() const;
        [[nodiscard]] LLM_IMPL_AUTO(hstring) EnterpriseId() const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Activation::IFileSavePickerActivatedEventArgs2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Activation_IFileSavePickerActivatedEventArgs2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Activation_IFileSavePickerContinuationEventArgs
    {
        [[nodiscard]] LLM_IMPL_AUTO(llm::OS::Storage::StorageFile) File() const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Activation::IFileSavePickerContinuationEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Activation_IFileSavePickerContinuationEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Activation_IFolderPickerContinuationEventArgs
    {
        [[nodiscard]] LLM_IMPL_AUTO(llm::OS::Storage::StorageFolder) Folder() const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Activation::IFolderPickerContinuationEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Activation_IFolderPickerContinuationEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Activation_ILaunchActivatedEventArgs
    {
        [[nodiscard]] LLM_IMPL_AUTO(hstring) Arguments() const;
        [[nodiscard]] LLM_IMPL_AUTO(hstring) TileId() const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Activation::ILaunchActivatedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Activation_ILaunchActivatedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Activation_ILaunchActivatedEventArgs2
    {
        [[nodiscard]] LLM_IMPL_AUTO(llm::OS::ApplicationModel::Activation::TileActivatedInfo) TileActivatedInfo() const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Activation::ILaunchActivatedEventArgs2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Activation_ILaunchActivatedEventArgs2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Activation_ILockScreenActivatedEventArgs
    {
        [[nodiscard]] LLM_IMPL_AUTO(llm::OS::Foundation::IInspectable) Info() const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Activation::ILockScreenActivatedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Activation_ILockScreenActivatedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Activation_ILockScreenCallActivatedEventArgs
    {
        [[nodiscard]] LLM_IMPL_AUTO(llm::OS::ApplicationModel::Calls::LockScreenCallUI) CallUI() const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Activation::ILockScreenCallActivatedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Activation_ILockScreenCallActivatedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Activation_IPhoneCallActivatedEventArgs
    {
        [[nodiscard]] LLM_IMPL_AUTO(llm::guid) LineId() const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Activation::IPhoneCallActivatedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Activation_IPhoneCallActivatedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Activation_IPickerReturnedActivatedEventArgs
    {
        [[nodiscard]] LLM_IMPL_AUTO(hstring) PickerOperationId() const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Activation::IPickerReturnedActivatedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Activation_IPickerReturnedActivatedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Activation_IPrelaunchActivatedEventArgs
    {
        [[nodiscard]] LLM_IMPL_AUTO(bool) PrelaunchActivated() const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Activation::IPrelaunchActivatedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Activation_IPrelaunchActivatedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Activation_IPrint3DWorkflowActivatedEventArgs
    {
        [[nodiscard]] LLM_IMPL_AUTO(llm::OS::Devices::Printers::Extensions::Print3DWorkflow) Workflow() const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Activation::IPrint3DWorkflowActivatedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Activation_IPrint3DWorkflowActivatedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Activation_IPrintTaskSettingsActivatedEventArgs
    {
        [[nodiscard]] LLM_IMPL_AUTO(llm::OS::Devices::Printers::Extensions::PrintTaskConfiguration) Configuration() const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Activation::IPrintTaskSettingsActivatedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Activation_IPrintTaskSettingsActivatedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Activation_IProtocolActivatedEventArgs
    {
        [[nodiscard]] LLM_IMPL_AUTO(llm::OS::Foundation::Uri) Uri() const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Activation::IProtocolActivatedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Activation_IProtocolActivatedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Activation_IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData
    {
        [[nodiscard]] LLM_IMPL_AUTO(hstring) CallerPackageFamilyName() const;
        [[nodiscard]] LLM_IMPL_AUTO(llm::OS::Foundation::Collections::ValueSet) Data() const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Activation::IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Activation_IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Activation_IProtocolForResultsActivatedEventArgs
    {
        [[nodiscard]] LLM_IMPL_AUTO(llm::OS::System::ProtocolForResultsOperation) ProtocolForResultsOperation() const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Activation::IProtocolForResultsActivatedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Activation_IProtocolForResultsActivatedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Activation_IRestrictedLaunchActivatedEventArgs
    {
        [[nodiscard]] LLM_IMPL_AUTO(llm::OS::Foundation::IInspectable) SharedContext() const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Activation::IRestrictedLaunchActivatedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Activation_IRestrictedLaunchActivatedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Activation_ISearchActivatedEventArgs
    {
        [[nodiscard]] LLM_IMPL_AUTO(hstring) QueryText() const;
        [[nodiscard]] LLM_IMPL_AUTO(hstring) Language() const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Activation::ISearchActivatedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Activation_ISearchActivatedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Activation_ISearchActivatedEventArgsWithLinguisticDetails
    {
        [[nodiscard]] LLM_IMPL_AUTO(llm::OS::ApplicationModel::Search::SearchPaneQueryLinguisticDetails) LinguisticDetails() const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Activation::ISearchActivatedEventArgsWithLinguisticDetails>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Activation_ISearchActivatedEventArgsWithLinguisticDetails<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Activation_IShareTargetActivatedEventArgs
    {
        [[nodiscard]] LLM_IMPL_AUTO(llm::OS::ApplicationModel::DataTransfer::ShareTarget::ShareOperation) ShareOperation() const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Activation::IShareTargetActivatedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Activation_IShareTargetActivatedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Activation_ISplashScreen
    {
        [[nodiscard]] LLM_IMPL_AUTO(llm::OS::Foundation::Rect) ImageLocation() const;
        LLM_IMPL_AUTO(llm::event_token) Dismissed(llm::OS::Foundation::TypedEventHandler<llm::OS::ApplicationModel::Activation::SplashScreen, llm::OS::Foundation::IInspectable> const& handler) const;
        using Dismissed_revoker = impl::event_revoker<llm::OS::ApplicationModel::Activation::ISplashScreen, &impl::abi_t<llm::OS::ApplicationModel::Activation::ISplashScreen>::remove_Dismissed>;
        [[nodiscard]] Dismissed_revoker Dismissed(auto_revoke_t, llm::OS::Foundation::TypedEventHandler<llm::OS::ApplicationModel::Activation::SplashScreen, llm::OS::Foundation::IInspectable> const& handler) const;
        LLM_IMPL_AUTO(void) Dismissed(llm::event_token const& cookie) const noexcept;
    };
    template <> struct consume<llm::OS::ApplicationModel::Activation::ISplashScreen>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Activation_ISplashScreen<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Activation_IStartupTaskActivatedEventArgs
    {
        [[nodiscard]] LLM_IMPL_AUTO(hstring) TaskId() const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Activation::IStartupTaskActivatedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Activation_IStartupTaskActivatedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Activation_ITileActivatedInfo
    {
        [[nodiscard]] LLM_IMPL_AUTO(llm::OS::Foundation::Collections::IVectorView<llm::OS::UI::Notifications::ShownTileNotification>) RecentlyShownNotifications() const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Activation::ITileActivatedInfo>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Activation_ITileActivatedInfo<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Activation_IToastNotificationActivatedEventArgs
    {
        [[nodiscard]] LLM_IMPL_AUTO(hstring) Argument() const;
        [[nodiscard]] LLM_IMPL_AUTO(llm::OS::Foundation::Collections::ValueSet) UserInput() const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Activation::IToastNotificationActivatedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Activation_IToastNotificationActivatedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Activation_IUserDataAccountProviderActivatedEventArgs
    {
        [[nodiscard]] LLM_IMPL_AUTO(llm::OS::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountProviderOperation) Operation() const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Activation::IUserDataAccountProviderActivatedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Activation_IUserDataAccountProviderActivatedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Activation_IViewSwitcherProvider
    {
        [[nodiscard]] LLM_IMPL_AUTO(llm::OS::UI::ViewManagement::ActivationViewSwitcher) ViewSwitcher() const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Activation::IViewSwitcherProvider>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Activation_IViewSwitcherProvider<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Activation_IVoiceCommandActivatedEventArgs
    {
        [[nodiscard]] LLM_IMPL_AUTO(llm::OS::Media::SpeechRecognition::SpeechRecognitionResult) Result() const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Activation::IVoiceCommandActivatedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Activation_IVoiceCommandActivatedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Activation_IWalletActionActivatedEventArgs
    {
        [[nodiscard]] LLM_IMPL_AUTO(hstring) ItemId() const;
        [[nodiscard]] LLM_IMPL_AUTO(llm::OS::ApplicationModel::Wallet::WalletActionKind) ActionKind() const;
        [[nodiscard]] LLM_IMPL_AUTO(hstring) ActionId() const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Activation::IWalletActionActivatedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Activation_IWalletActionActivatedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Activation_IWebAccountProviderActivatedEventArgs
    {
        [[nodiscard]] LLM_IMPL_AUTO(llm::OS::Security::Authentication::Web::Provider::IWebAccountProviderOperation) Operation() const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Activation::IWebAccountProviderActivatedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Activation_IWebAccountProviderActivatedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Activation_IWebAuthenticationBrokerContinuationEventArgs
    {
        [[nodiscard]] LLM_IMPL_AUTO(llm::OS::Security::Authentication::Web::WebAuthenticationResult) WebAuthenticationResult() const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Activation::IWebAuthenticationBrokerContinuationEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Activation_IWebAuthenticationBrokerContinuationEventArgs<D>;
    };
}
#endif

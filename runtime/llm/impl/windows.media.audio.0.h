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
#ifndef LLM_OS_Media_Audio_0_H
#define LLM_OS_Media_Audio_0_H
LLM_EXPORT namespace llm:OS::Devices::Enumeration
{
    struct DeviceInformation;
}
LLM_EXPORT namespace llm:OS::Foundation
{
    struct EventRegistrationToken;
    struct HResult;
    struct IAsyncAction;
    template <typename TResult> struct __declspec(empty_bases) IAsyncOperation;
    struct IClosable;
    template <typename T> struct __declspec(empty_bases) IReference;
    template <typename TSender, typename TResult> struct __declspec(empty_bases) TypedEventHandler;
}
LLM_EXPORT namespace llm:OS::Foundation::Collections
{
    template <typename T> struct __declspec(empty_bases) IVectorView;
    template <typename T> struct __declspec(empty_bases) IVector;
}
LLM_EXPORT namespace llm:OS::Foundation::Numerics
{
}
LLM_EXPORT namespace llm:OS::Media
{
    struct AudioFrame;
    enum class AudioProcessing : int32_t;
    enum class SoundLevel : int32_t;
}
LLM_EXPORT namespace llm:OS::Media::Capture
{
    enum class MediaCategory : int32_t;
}
LLM_EXPORT namespace llm:OS::Media::Core
{
    struct MediaSource;
}
LLM_EXPORT namespace llm:OS::Media::Devices
{
    enum class AudioDeviceRole : int32_t;
}
LLM_EXPORT namespace llm:OS::Media::Effects
{
    struct IAudioEffectDefinition;
}
LLM_EXPORT namespace llm:OS::Media::MediaProperties
{
    struct AudioEncodingProperties;
    struct MediaEncodingProfile;
}
LLM_EXPORT namespace llm:OS::Media::Render
{
    enum class AudioRenderCategory : int32_t;
}
LLM_EXPORT namespace llm:OS::Media::Transcoding
{
    enum class TranscodeFailureReason : int32_t;
}
LLM_EXPORT namespace llm:OS::Storage
{
    struct IStorageFile;
    struct StorageFile;
}
LLM_EXPORT namespace llm:OS::Media::Audio
{
    enum class AudioDeviceNodeCreationStatus : int32_t
    {
        Success = 0,
        DeviceNotAvailable = 1,
        FormatNotSupported = 2,
        UnknownFailure = 3,
        AccessDenied = 4,
    };
    enum class AudioFileNodeCreationStatus : int32_t
    {
        Success = 0,
        FileNotFound = 1,
        InvalidFileType = 2,
        FormatNotSupported = 3,
        UnknownFailure = 4,
    };
    enum class AudioGraphCreationStatus : int32_t
    {
        Success = 0,
        DeviceNotAvailable = 1,
        FormatNotSupported = 2,
        UnknownFailure = 3,
    };
    enum class AudioGraphUnrecoverableError : int32_t
    {
        None = 0,
        AudioDeviceLost = 1,
        AudioSessionDisconnected = 2,
        UnknownFailure = 3,
    };
    enum class AudioNodeEmitterDecayKind : int32_t
    {
        Natural = 0,
        Custom = 1,
    };
    enum class AudioNodeEmitterSettings : uint32_t
    {
        None = 0,
        DisableDoppler = 0x1,
    };
    enum class AudioNodeEmitterShapeKind : int32_t
    {
        Omnidirectional = 0,
        Cone = 1,
    };
    enum class AudioPlaybackConnectionOpenResultStatus : int32_t
    {
        Success = 0,
        RequestTimedOut = 1,
        DeniedBySystem = 2,
        UnknownFailure = 3,
    };
    enum class AudioPlaybackConnectionState : int32_t
    {
        Closed = 0,
        Opened = 1,
    };
    enum class MediaSourceAudioInputNodeCreationStatus : int32_t
    {
        Success = 0,
        FormatNotSupported = 1,
        NetworkError = 2,
        UnknownFailure = 3,
    };
    enum class MixedRealitySpatialAudioFormatPolicy : int32_t
    {
        UseMixedRealityDefaultSpatialAudioFormat = 0,
        UseDeviceConfigurationDefaultSpatialAudioFormat = 1,
    };
    enum class QuantumSizeSelectionMode : int32_t
    {
        SystemDefault = 0,
        LowestLatency = 1,
        ClosestToDesired = 2,
    };
    enum class SetDefaultSpatialAudioFormatStatus : int32_t
    {
        Succeeded = 0,
        AccessDenied = 1,
        LicenseExpired = 2,
        LicenseNotValidForAudioEndpoint = 3,
        NotSupportedOnAudioEndpoint = 4,
        UnknownError = 5,
    };
    enum class SpatialAudioModel : int32_t
    {
        ObjectBased = 0,
        FoldDown = 1,
    };
    struct IAudioDeviceInputNode;
    struct IAudioDeviceOutputNode;
    struct IAudioFileInputNode;
    struct IAudioFileOutputNode;
    struct IAudioFrameCompletedEventArgs;
    struct IAudioFrameInputNode;
    struct IAudioFrameOutputNode;
    struct IAudioGraph;
    struct IAudioGraph2;
    struct IAudioGraph3;
    struct IAudioGraphConnection;
    struct IAudioGraphSettings;
    struct IAudioGraphSettings2;
    struct IAudioGraphSettingsFactory;
    struct IAudioGraphStatics;
    struct IAudioGraphUnrecoverableErrorOccurredEventArgs;
    struct IAudioInputNode;
    struct IAudioInputNode2;
    struct IAudioNode;
    struct IAudioNodeEmitter;
    struct IAudioNodeEmitter2;
    struct IAudioNodeEmitterConeProperties;
    struct IAudioNodeEmitterDecayModel;
    struct IAudioNodeEmitterDecayModelStatics;
    struct IAudioNodeEmitterFactory;
    struct IAudioNodeEmitterNaturalDecayModelProperties;
    struct IAudioNodeEmitterShape;
    struct IAudioNodeEmitterShapeStatics;
    struct IAudioNodeListener;
    struct IAudioNodeWithListener;
    struct IAudioPlaybackConnection;
    struct IAudioPlaybackConnectionOpenResult;
    struct IAudioPlaybackConnectionStatics;
    struct IAudioStateMonitor;
    struct IAudioStateMonitorStatics;
    struct ICreateAudioDeviceInputNodeResult;
    struct ICreateAudioDeviceInputNodeResult2;
    struct ICreateAudioDeviceOutputNodeResult;
    struct ICreateAudioDeviceOutputNodeResult2;
    struct ICreateAudioFileInputNodeResult;
    struct ICreateAudioFileInputNodeResult2;
    struct ICreateAudioFileOutputNodeResult;
    struct ICreateAudioFileOutputNodeResult2;
    struct ICreateAudioGraphResult;
    struct ICreateAudioGraphResult2;
    struct ICreateMediaSourceAudioInputNodeResult;
    struct ICreateMediaSourceAudioInputNodeResult2;
    struct IEchoEffectDefinition;
    struct IEchoEffectDefinitionFactory;
    struct IEqualizerBand;
    struct IEqualizerEffectDefinition;
    struct IEqualizerEffectDefinitionFactory;
    struct IFrameInputNodeQuantumStartedEventArgs;
    struct ILimiterEffectDefinition;
    struct ILimiterEffectDefinitionFactory;
    struct IMediaSourceAudioInputNode;
    struct IReverbEffectDefinition;
    struct IReverbEffectDefinitionFactory;
    struct ISetDefaultSpatialAudioFormatResult;
    struct ISpatialAudioDeviceConfiguration;
    struct ISpatialAudioDeviceConfigurationStatics;
    struct ISpatialAudioFormatConfiguration;
    struct ISpatialAudioFormatConfigurationStatics;
    struct ISpatialAudioFormatSubtypeStatics;
    struct ISpatialAudioFormatSubtypeStatics2;
    struct AudioDeviceInputNode;
    struct AudioDeviceOutputNode;
    struct AudioFileInputNode;
    struct AudioFileOutputNode;
    struct AudioFrameCompletedEventArgs;
    struct AudioFrameInputNode;
    struct AudioFrameOutputNode;
    struct AudioGraph;
    struct AudioGraphBatchUpdater;
    struct AudioGraphConnection;
    struct AudioGraphSettings;
    struct AudioGraphUnrecoverableErrorOccurredEventArgs;
    struct AudioNodeEmitter;
    struct AudioNodeEmitterConeProperties;
    struct AudioNodeEmitterDecayModel;
    struct AudioNodeEmitterNaturalDecayModelProperties;
    struct AudioNodeEmitterShape;
    struct AudioNodeListener;
    struct AudioPlaybackConnection;
    struct AudioPlaybackConnectionOpenResult;
    struct AudioStateMonitor;
    struct AudioSubmixNode;
    struct CreateAudioDeviceInputNodeResult;
    struct CreateAudioDeviceOutputNodeResult;
    struct CreateAudioFileInputNodeResult;
    struct CreateAudioFileOutputNodeResult;
    struct CreateAudioGraphResult;
    struct CreateMediaSourceAudioInputNodeResult;
    struct EchoEffectDefinition;
    struct EqualizerBand;
    struct EqualizerEffectDefinition;
    struct FrameInputNodeQuantumStartedEventArgs;
    struct LimiterEffectDefinition;
    struct MediaSourceAudioInputNode;
    struct ReverbEffectDefinition;
    struct SetDefaultSpatialAudioFormatResult;
    struct SpatialAudioDeviceConfiguration;
    struct SpatialAudioFormatConfiguration;
    struct SpatialAudioFormatSubtype;
}
namespace llm::impl
{
    template <> struct category<llm:OS::Media::Audio::IAudioDeviceInputNode>{ using type = interface_category; };
    template <> struct category<llm:OS::Media::Audio::IAudioDeviceOutputNode>{ using type = interface_category; };
    template <> struct category<llm:OS::Media::Audio::IAudioFileInputNode>{ using type = interface_category; };
    template <> struct category<llm:OS::Media::Audio::IAudioFileOutputNode>{ using type = interface_category; };
    template <> struct category<llm:OS::Media::Audio::IAudioFrameCompletedEventArgs>{ using type = interface_category; };
    template <> struct category<llm:OS::Media::Audio::IAudioFrameInputNode>{ using type = interface_category; };
    template <> struct category<llm:OS::Media::Audio::IAudioFrameOutputNode>{ using type = interface_category; };
    template <> struct category<llm:OS::Media::Audio::IAudioGraph>{ using type = interface_category; };
    template <> struct category<llm:OS::Media::Audio::IAudioGraph2>{ using type = interface_category; };
    template <> struct category<llm:OS::Media::Audio::IAudioGraph3>{ using type = interface_category; };
    template <> struct category<llm:OS::Media::Audio::IAudioGraphConnection>{ using type = interface_category; };
    template <> struct category<llm:OS::Media::Audio::IAudioGraphSettings>{ using type = interface_category; };
    template <> struct category<llm:OS::Media::Audio::IAudioGraphSettings2>{ using type = interface_category; };
    template <> struct category<llm:OS::Media::Audio::IAudioGraphSettingsFactory>{ using type = interface_category; };
    template <> struct category<llm:OS::Media::Audio::IAudioGraphStatics>{ using type = interface_category; };
    template <> struct category<llm:OS::Media::Audio::IAudioGraphUnrecoverableErrorOccurredEventArgs>{ using type = interface_category; };
    template <> struct category<llm:OS::Media::Audio::IAudioInputNode>{ using type = interface_category; };
    template <> struct category<llm:OS::Media::Audio::IAudioInputNode2>{ using type = interface_category; };
    template <> struct category<llm:OS::Media::Audio::IAudioNode>{ using type = interface_category; };
    template <> struct category<llm:OS::Media::Audio::IAudioNodeEmitter>{ using type = interface_category; };
    template <> struct category<llm:OS::Media::Audio::IAudioNodeEmitter2>{ using type = interface_category; };
    template <> struct category<llm:OS::Media::Audio::IAudioNodeEmitterConeProperties>{ using type = interface_category; };
    template <> struct category<llm:OS::Media::Audio::IAudioNodeEmitterDecayModel>{ using type = interface_category; };
    template <> struct category<llm:OS::Media::Audio::IAudioNodeEmitterDecayModelStatics>{ using type = interface_category; };
    template <> struct category<llm:OS::Media::Audio::IAudioNodeEmitterFactory>{ using type = interface_category; };
    template <> struct category<llm:OS::Media::Audio::IAudioNodeEmitterNaturalDecayModelProperties>{ using type = interface_category; };
    template <> struct category<llm:OS::Media::Audio::IAudioNodeEmitterShape>{ using type = interface_category; };
    template <> struct category<llm:OS::Media::Audio::IAudioNodeEmitterShapeStatics>{ using type = interface_category; };
    template <> struct category<llm:OS::Media::Audio::IAudioNodeListener>{ using type = interface_category; };
    template <> struct category<llm:OS::Media::Audio::IAudioNodeWithListener>{ using type = interface_category; };
    template <> struct category<llm:OS::Media::Audio::IAudioPlaybackConnection>{ using type = interface_category; };
    template <> struct category<llm:OS::Media::Audio::IAudioPlaybackConnectionOpenResult>{ using type = interface_category; };
    template <> struct category<llm:OS::Media::Audio::IAudioPlaybackConnectionStatics>{ using type = interface_category; };
    template <> struct category<llm:OS::Media::Audio::IAudioStateMonitor>{ using type = interface_category; };
    template <> struct category<llm:OS::Media::Audio::IAudioStateMonitorStatics>{ using type = interface_category; };
    template <> struct category<llm:OS::Media::Audio::ICreateAudioDeviceInputNodeResult>{ using type = interface_category; };
    template <> struct category<llm:OS::Media::Audio::ICreateAudioDeviceInputNodeResult2>{ using type = interface_category; };
    template <> struct category<llm:OS::Media::Audio::ICreateAudioDeviceOutputNodeResult>{ using type = interface_category; };
    template <> struct category<llm:OS::Media::Audio::ICreateAudioDeviceOutputNodeResult2>{ using type = interface_category; };
    template <> struct category<llm:OS::Media::Audio::ICreateAudioFileInputNodeResult>{ using type = interface_category; };
    template <> struct category<llm:OS::Media::Audio::ICreateAudioFileInputNodeResult2>{ using type = interface_category; };
    template <> struct category<llm:OS::Media::Audio::ICreateAudioFileOutputNodeResult>{ using type = interface_category; };
    template <> struct category<llm:OS::Media::Audio::ICreateAudioFileOutputNodeResult2>{ using type = interface_category; };
    template <> struct category<llm:OS::Media::Audio::ICreateAudioGraphResult>{ using type = interface_category; };
    template <> struct category<llm:OS::Media::Audio::ICreateAudioGraphResult2>{ using type = interface_category; };
    template <> struct category<llm:OS::Media::Audio::ICreateMediaSourceAudioInputNodeResult>{ using type = interface_category; };
    template <> struct category<llm:OS::Media::Audio::ICreateMediaSourceAudioInputNodeResult2>{ using type = interface_category; };
    template <> struct category<llm:OS::Media::Audio::IEchoEffectDefinition>{ using type = interface_category; };
    template <> struct category<llm:OS::Media::Audio::IEchoEffectDefinitionFactory>{ using type = interface_category; };
    template <> struct category<llm:OS::Media::Audio::IEqualizerBand>{ using type = interface_category; };
    template <> struct category<llm:OS::Media::Audio::IEqualizerEffectDefinition>{ using type = interface_category; };
    template <> struct category<llm:OS::Media::Audio::IEqualizerEffectDefinitionFactory>{ using type = interface_category; };
    template <> struct category<llm:OS::Media::Audio::IFrameInputNodeQuantumStartedEventArgs>{ using type = interface_category; };
    template <> struct category<llm:OS::Media::Audio::ILimiterEffectDefinition>{ using type = interface_category; };
    template <> struct category<llm:OS::Media::Audio::ILimiterEffectDefinitionFactory>{ using type = interface_category; };
    template <> struct category<llm:OS::Media::Audio::IMediaSourceAudioInputNode>{ using type = interface_category; };
    template <> struct category<llm:OS::Media::Audio::IReverbEffectDefinition>{ using type = interface_category; };
    template <> struct category<llm:OS::Media::Audio::IReverbEffectDefinitionFactory>{ using type = interface_category; };
    template <> struct category<llm:OS::Media::Audio::ISetDefaultSpatialAudioFormatResult>{ using type = interface_category; };
    template <> struct category<llm:OS::Media::Audio::ISpatialAudioDeviceConfiguration>{ using type = interface_category; };
    template <> struct category<llm:OS::Media::Audio::ISpatialAudioDeviceConfigurationStatics>{ using type = interface_category; };
    template <> struct category<llm:OS::Media::Audio::ISpatialAudioFormatConfiguration>{ using type = interface_category; };
    template <> struct category<llm:OS::Media::Audio::ISpatialAudioFormatConfigurationStatics>{ using type = interface_category; };
    template <> struct category<llm:OS::Media::Audio::ISpatialAudioFormatSubtypeStatics>{ using type = interface_category; };
    template <> struct category<llm:OS::Media::Audio::ISpatialAudioFormatSubtypeStatics2>{ using type = interface_category; };
    template <> struct category<llm:OS::Media::Audio::AudioDeviceInputNode>{ using type = class_category; };
    template <> struct category<llm:OS::Media::Audio::AudioDeviceOutputNode>{ using type = class_category; };
    template <> struct category<llm:OS::Media::Audio::AudioFileInputNode>{ using type = class_category; };
    template <> struct category<llm:OS::Media::Audio::AudioFileOutputNode>{ using type = class_category; };
    template <> struct category<llm:OS::Media::Audio::AudioFrameCompletedEventArgs>{ using type = class_category; };
    template <> struct category<llm:OS::Media::Audio::AudioFrameInputNode>{ using type = class_category; };
    template <> struct category<llm:OS::Media::Audio::AudioFrameOutputNode>{ using type = class_category; };
    template <> struct category<llm:OS::Media::Audio::AudioGraph>{ using type = class_category; };
    template <> struct category<llm:OS::Media::Audio::AudioGraphBatchUpdater>{ using type = class_category; };
    template <> struct category<llm:OS::Media::Audio::AudioGraphConnection>{ using type = class_category; };
    template <> struct category<llm:OS::Media::Audio::AudioGraphSettings>{ using type = class_category; };
    template <> struct category<llm:OS::Media::Audio::AudioGraphUnrecoverableErrorOccurredEventArgs>{ using type = class_category; };
    template <> struct category<llm:OS::Media::Audio::AudioNodeEmitter>{ using type = class_category; };
    template <> struct category<llm:OS::Media::Audio::AudioNodeEmitterConeProperties>{ using type = class_category; };
    template <> struct category<llm:OS::Media::Audio::AudioNodeEmitterDecayModel>{ using type = class_category; };
    template <> struct category<llm:OS::Media::Audio::AudioNodeEmitterNaturalDecayModelProperties>{ using type = class_category; };
    template <> struct category<llm:OS::Media::Audio::AudioNodeEmitterShape>{ using type = class_category; };
    template <> struct category<llm:OS::Media::Audio::AudioNodeListener>{ using type = class_category; };
    template <> struct category<llm:OS::Media::Audio::AudioPlaybackConnection>{ using type = class_category; };
    template <> struct category<llm:OS::Media::Audio::AudioPlaybackConnectionOpenResult>{ using type = class_category; };
    template <> struct category<llm:OS::Media::Audio::AudioStateMonitor>{ using type = class_category; };
    template <> struct category<llm:OS::Media::Audio::AudioSubmixNode>{ using type = class_category; };
    template <> struct category<llm:OS::Media::Audio::CreateAudioDeviceInputNodeResult>{ using type = class_category; };
    template <> struct category<llm:OS::Media::Audio::CreateAudioDeviceOutputNodeResult>{ using type = class_category; };
    template <> struct category<llm:OS::Media::Audio::CreateAudioFileInputNodeResult>{ using type = class_category; };
    template <> struct category<llm:OS::Media::Audio::CreateAudioFileOutputNodeResult>{ using type = class_category; };
    template <> struct category<llm:OS::Media::Audio::CreateAudioGraphResult>{ using type = class_category; };
    template <> struct category<llm:OS::Media::Audio::CreateMediaSourceAudioInputNodeResult>{ using type = class_category; };
    template <> struct category<llm:OS::Media::Audio::EchoEffectDefinition>{ using type = class_category; };
    template <> struct category<llm:OS::Media::Audio::EqualizerBand>{ using type = class_category; };
    template <> struct category<llm:OS::Media::Audio::EqualizerEffectDefinition>{ using type = class_category; };
    template <> struct category<llm:OS::Media::Audio::FrameInputNodeQuantumStartedEventArgs>{ using type = class_category; };
    template <> struct category<llm:OS::Media::Audio::LimiterEffectDefinition>{ using type = class_category; };
    template <> struct category<llm:OS::Media::Audio::MediaSourceAudioInputNode>{ using type = class_category; };
    template <> struct category<llm:OS::Media::Audio::ReverbEffectDefinition>{ using type = class_category; };
    template <> struct category<llm:OS::Media::Audio::SetDefaultSpatialAudioFormatResult>{ using type = class_category; };
    template <> struct category<llm:OS::Media::Audio::SpatialAudioDeviceConfiguration>{ using type = class_category; };
    template <> struct category<llm:OS::Media::Audio::SpatialAudioFormatConfiguration>{ using type = class_category; };
    template <> struct category<llm:OS::Media::Audio::SpatialAudioFormatSubtype>{ using type = class_category; };
    template <> struct category<llm:OS::Media::Audio::AudioDeviceNodeCreationStatus>{ using type = enum_category; };
    template <> struct category<llm:OS::Media::Audio::AudioFileNodeCreationStatus>{ using type = enum_category; };
    template <> struct category<llm:OS::Media::Audio::AudioGraphCreationStatus>{ using type = enum_category; };
    template <> struct category<llm:OS::Media::Audio::AudioGraphUnrecoverableError>{ using type = enum_category; };
    template <> struct category<llm:OS::Media::Audio::AudioNodeEmitterDecayKind>{ using type = enum_category; };
    template <> struct category<llm:OS::Media::Audio::AudioNodeEmitterSettings>{ using type = enum_category; };
    template <> struct category<llm:OS::Media::Audio::AudioNodeEmitterShapeKind>{ using type = enum_category; };
    template <> struct category<llm:OS::Media::Audio::AudioPlaybackConnectionOpenResultStatus>{ using type = enum_category; };
    template <> struct category<llm:OS::Media::Audio::AudioPlaybackConnectionState>{ using type = enum_category; };
    template <> struct category<llm:OS::Media::Audio::MediaSourceAudioInputNodeCreationStatus>{ using type = enum_category; };
    template <> struct category<llm:OS::Media::Audio::MixedRealitySpatialAudioFormatPolicy>{ using type = enum_category; };
    template <> struct category<llm:OS::Media::Audio::QuantumSizeSelectionMode>{ using type = enum_category; };
    template <> struct category<llm:OS::Media::Audio::SetDefaultSpatialAudioFormatStatus>{ using type = enum_category; };
    template <> struct category<llm:OS::Media::Audio::SpatialAudioModel>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::AudioDeviceInputNode> = L"Windows.Media.Audio.AudioDeviceInputNode";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::AudioDeviceOutputNode> = L"Windows.Media.Audio.AudioDeviceOutputNode";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::AudioFileInputNode> = L"Windows.Media.Audio.AudioFileInputNode";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::AudioFileOutputNode> = L"Windows.Media.Audio.AudioFileOutputNode";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::AudioFrameCompletedEventArgs> = L"Windows.Media.Audio.AudioFrameCompletedEventArgs";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::AudioFrameInputNode> = L"Windows.Media.Audio.AudioFrameInputNode";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::AudioFrameOutputNode> = L"Windows.Media.Audio.AudioFrameOutputNode";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::AudioGraph> = L"Windows.Media.Audio.AudioGraph";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::AudioGraphBatchUpdater> = L"Windows.Media.Audio.AudioGraphBatchUpdater";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::AudioGraphConnection> = L"Windows.Media.Audio.AudioGraphConnection";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::AudioGraphSettings> = L"Windows.Media.Audio.AudioGraphSettings";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::AudioGraphUnrecoverableErrorOccurredEventArgs> = L"Windows.Media.Audio.AudioGraphUnrecoverableErrorOccurredEventArgs";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::AudioNodeEmitter> = L"Windows.Media.Audio.AudioNodeEmitter";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::AudioNodeEmitterConeProperties> = L"Windows.Media.Audio.AudioNodeEmitterConeProperties";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::AudioNodeEmitterDecayModel> = L"Windows.Media.Audio.AudioNodeEmitterDecayModel";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::AudioNodeEmitterNaturalDecayModelProperties> = L"Windows.Media.Audio.AudioNodeEmitterNaturalDecayModelProperties";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::AudioNodeEmitterShape> = L"Windows.Media.Audio.AudioNodeEmitterShape";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::AudioNodeListener> = L"Windows.Media.Audio.AudioNodeListener";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::AudioPlaybackConnection> = L"Windows.Media.Audio.AudioPlaybackConnection";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::AudioPlaybackConnectionOpenResult> = L"Windows.Media.Audio.AudioPlaybackConnectionOpenResult";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::AudioStateMonitor> = L"Windows.Media.Audio.AudioStateMonitor";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::AudioSubmixNode> = L"Windows.Media.Audio.AudioSubmixNode";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::CreateAudioDeviceInputNodeResult> = L"Windows.Media.Audio.CreateAudioDeviceInputNodeResult";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::CreateAudioDeviceOutputNodeResult> = L"Windows.Media.Audio.CreateAudioDeviceOutputNodeResult";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::CreateAudioFileInputNodeResult> = L"Windows.Media.Audio.CreateAudioFileInputNodeResult";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::CreateAudioFileOutputNodeResult> = L"Windows.Media.Audio.CreateAudioFileOutputNodeResult";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::CreateAudioGraphResult> = L"Windows.Media.Audio.CreateAudioGraphResult";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::CreateMediaSourceAudioInputNodeResult> = L"Windows.Media.Audio.CreateMediaSourceAudioInputNodeResult";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::EchoEffectDefinition> = L"Windows.Media.Audio.EchoEffectDefinition";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::EqualizerBand> = L"Windows.Media.Audio.EqualizerBand";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::EqualizerEffectDefinition> = L"Windows.Media.Audio.EqualizerEffectDefinition";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::FrameInputNodeQuantumStartedEventArgs> = L"Windows.Media.Audio.FrameInputNodeQuantumStartedEventArgs";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::LimiterEffectDefinition> = L"Windows.Media.Audio.LimiterEffectDefinition";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::MediaSourceAudioInputNode> = L"Windows.Media.Audio.MediaSourceAudioInputNode";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::ReverbEffectDefinition> = L"Windows.Media.Audio.ReverbEffectDefinition";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::SetDefaultSpatialAudioFormatResult> = L"Windows.Media.Audio.SetDefaultSpatialAudioFormatResult";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::SpatialAudioDeviceConfiguration> = L"Windows.Media.Audio.SpatialAudioDeviceConfiguration";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::SpatialAudioFormatConfiguration> = L"Windows.Media.Audio.SpatialAudioFormatConfiguration";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::SpatialAudioFormatSubtype> = L"Windows.Media.Audio.SpatialAudioFormatSubtype";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::AudioDeviceNodeCreationStatus> = L"Windows.Media.Audio.AudioDeviceNodeCreationStatus";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::AudioFileNodeCreationStatus> = L"Windows.Media.Audio.AudioFileNodeCreationStatus";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::AudioGraphCreationStatus> = L"Windows.Media.Audio.AudioGraphCreationStatus";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::AudioGraphUnrecoverableError> = L"Windows.Media.Audio.AudioGraphUnrecoverableError";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::AudioNodeEmitterDecayKind> = L"Windows.Media.Audio.AudioNodeEmitterDecayKind";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::AudioNodeEmitterSettings> = L"Windows.Media.Audio.AudioNodeEmitterSettings";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::AudioNodeEmitterShapeKind> = L"Windows.Media.Audio.AudioNodeEmitterShapeKind";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::AudioPlaybackConnectionOpenResultStatus> = L"Windows.Media.Audio.AudioPlaybackConnectionOpenResultStatus";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::AudioPlaybackConnectionState> = L"Windows.Media.Audio.AudioPlaybackConnectionState";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::MediaSourceAudioInputNodeCreationStatus> = L"Windows.Media.Audio.MediaSourceAudioInputNodeCreationStatus";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::MixedRealitySpatialAudioFormatPolicy> = L"Windows.Media.Audio.MixedRealitySpatialAudioFormatPolicy";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::QuantumSizeSelectionMode> = L"Windows.Media.Audio.QuantumSizeSelectionMode";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::SetDefaultSpatialAudioFormatStatus> = L"Windows.Media.Audio.SetDefaultSpatialAudioFormatStatus";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::SpatialAudioModel> = L"Windows.Media.Audio.SpatialAudioModel";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::IAudioDeviceInputNode> = L"Windows.Media.Audio.IAudioDeviceInputNode";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::IAudioDeviceOutputNode> = L"Windows.Media.Audio.IAudioDeviceOutputNode";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::IAudioFileInputNode> = L"Windows.Media.Audio.IAudioFileInputNode";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::IAudioFileOutputNode> = L"Windows.Media.Audio.IAudioFileOutputNode";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::IAudioFrameCompletedEventArgs> = L"Windows.Media.Audio.IAudioFrameCompletedEventArgs";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::IAudioFrameInputNode> = L"Windows.Media.Audio.IAudioFrameInputNode";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::IAudioFrameOutputNode> = L"Windows.Media.Audio.IAudioFrameOutputNode";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::IAudioGraph> = L"Windows.Media.Audio.IAudioGraph";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::IAudioGraph2> = L"Windows.Media.Audio.IAudioGraph2";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::IAudioGraph3> = L"Windows.Media.Audio.IAudioGraph3";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::IAudioGraphConnection> = L"Windows.Media.Audio.IAudioGraphConnection";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::IAudioGraphSettings> = L"Windows.Media.Audio.IAudioGraphSettings";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::IAudioGraphSettings2> = L"Windows.Media.Audio.IAudioGraphSettings2";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::IAudioGraphSettingsFactory> = L"Windows.Media.Audio.IAudioGraphSettingsFactory";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::IAudioGraphStatics> = L"Windows.Media.Audio.IAudioGraphStatics";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::IAudioGraphUnrecoverableErrorOccurredEventArgs> = L"Windows.Media.Audio.IAudioGraphUnrecoverableErrorOccurredEventArgs";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::IAudioInputNode> = L"Windows.Media.Audio.IAudioInputNode";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::IAudioInputNode2> = L"Windows.Media.Audio.IAudioInputNode2";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::IAudioNode> = L"Windows.Media.Audio.IAudioNode";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::IAudioNodeEmitter> = L"Windows.Media.Audio.IAudioNodeEmitter";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::IAudioNodeEmitter2> = L"Windows.Media.Audio.IAudioNodeEmitter2";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::IAudioNodeEmitterConeProperties> = L"Windows.Media.Audio.IAudioNodeEmitterConeProperties";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::IAudioNodeEmitterDecayModel> = L"Windows.Media.Audio.IAudioNodeEmitterDecayModel";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::IAudioNodeEmitterDecayModelStatics> = L"Windows.Media.Audio.IAudioNodeEmitterDecayModelStatics";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::IAudioNodeEmitterFactory> = L"Windows.Media.Audio.IAudioNodeEmitterFactory";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::IAudioNodeEmitterNaturalDecayModelProperties> = L"Windows.Media.Audio.IAudioNodeEmitterNaturalDecayModelProperties";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::IAudioNodeEmitterShape> = L"Windows.Media.Audio.IAudioNodeEmitterShape";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::IAudioNodeEmitterShapeStatics> = L"Windows.Media.Audio.IAudioNodeEmitterShapeStatics";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::IAudioNodeListener> = L"Windows.Media.Audio.IAudioNodeListener";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::IAudioNodeWithListener> = L"Windows.Media.Audio.IAudioNodeWithListener";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::IAudioPlaybackConnection> = L"Windows.Media.Audio.IAudioPlaybackConnection";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::IAudioPlaybackConnectionOpenResult> = L"Windows.Media.Audio.IAudioPlaybackConnectionOpenResult";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::IAudioPlaybackConnectionStatics> = L"Windows.Media.Audio.IAudioPlaybackConnectionStatics";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::IAudioStateMonitor> = L"Windows.Media.Audio.IAudioStateMonitor";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::IAudioStateMonitorStatics> = L"Windows.Media.Audio.IAudioStateMonitorStatics";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::ICreateAudioDeviceInputNodeResult> = L"Windows.Media.Audio.ICreateAudioDeviceInputNodeResult";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::ICreateAudioDeviceInputNodeResult2> = L"Windows.Media.Audio.ICreateAudioDeviceInputNodeResult2";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::ICreateAudioDeviceOutputNodeResult> = L"Windows.Media.Audio.ICreateAudioDeviceOutputNodeResult";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::ICreateAudioDeviceOutputNodeResult2> = L"Windows.Media.Audio.ICreateAudioDeviceOutputNodeResult2";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::ICreateAudioFileInputNodeResult> = L"Windows.Media.Audio.ICreateAudioFileInputNodeResult";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::ICreateAudioFileInputNodeResult2> = L"Windows.Media.Audio.ICreateAudioFileInputNodeResult2";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::ICreateAudioFileOutputNodeResult> = L"Windows.Media.Audio.ICreateAudioFileOutputNodeResult";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::ICreateAudioFileOutputNodeResult2> = L"Windows.Media.Audio.ICreateAudioFileOutputNodeResult2";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::ICreateAudioGraphResult> = L"Windows.Media.Audio.ICreateAudioGraphResult";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::ICreateAudioGraphResult2> = L"Windows.Media.Audio.ICreateAudioGraphResult2";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::ICreateMediaSourceAudioInputNodeResult> = L"Windows.Media.Audio.ICreateMediaSourceAudioInputNodeResult";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::ICreateMediaSourceAudioInputNodeResult2> = L"Windows.Media.Audio.ICreateMediaSourceAudioInputNodeResult2";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::IEchoEffectDefinition> = L"Windows.Media.Audio.IEchoEffectDefinition";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::IEchoEffectDefinitionFactory> = L"Windows.Media.Audio.IEchoEffectDefinitionFactory";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::IEqualizerBand> = L"Windows.Media.Audio.IEqualizerBand";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::IEqualizerEffectDefinition> = L"Windows.Media.Audio.IEqualizerEffectDefinition";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::IEqualizerEffectDefinitionFactory> = L"Windows.Media.Audio.IEqualizerEffectDefinitionFactory";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::IFrameInputNodeQuantumStartedEventArgs> = L"Windows.Media.Audio.IFrameInputNodeQuantumStartedEventArgs";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::ILimiterEffectDefinition> = L"Windows.Media.Audio.ILimiterEffectDefinition";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::ILimiterEffectDefinitionFactory> = L"Windows.Media.Audio.ILimiterEffectDefinitionFactory";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::IMediaSourceAudioInputNode> = L"Windows.Media.Audio.IMediaSourceAudioInputNode";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::IReverbEffectDefinition> = L"Windows.Media.Audio.IReverbEffectDefinition";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::IReverbEffectDefinitionFactory> = L"Windows.Media.Audio.IReverbEffectDefinitionFactory";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::ISetDefaultSpatialAudioFormatResult> = L"Windows.Media.Audio.ISetDefaultSpatialAudioFormatResult";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::ISpatialAudioDeviceConfiguration> = L"Windows.Media.Audio.ISpatialAudioDeviceConfiguration";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::ISpatialAudioDeviceConfigurationStatics> = L"Windows.Media.Audio.ISpatialAudioDeviceConfigurationStatics";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::ISpatialAudioFormatConfiguration> = L"Windows.Media.Audio.ISpatialAudioFormatConfiguration";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::ISpatialAudioFormatConfigurationStatics> = L"Windows.Media.Audio.ISpatialAudioFormatConfigurationStatics";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::ISpatialAudioFormatSubtypeStatics> = L"Windows.Media.Audio.ISpatialAudioFormatSubtypeStatics";
    template <> inline constexpr auto& name_v<llm:OS::Media::Audio::ISpatialAudioFormatSubtypeStatics2> = L"Windows.Media.Audio.ISpatialAudioFormatSubtypeStatics2";
    template <> inline constexpr guid guid_v<llm:OS::Media::Audio::IAudioDeviceInputNode>{ 0xB01B6BE1,0x6F4E,0x49E2,{ 0xAC,0x01,0x55,0x9D,0x62,0xBE,0xB3,0xA9 } }; // B01B6BE1-6F4E-49E2-AC01-559D62BEB3A9
    template <> inline constexpr guid guid_v<llm:OS::Media::Audio::IAudioDeviceOutputNode>{ 0x362EDBFF,0xFF1C,0x4434,{ 0x9E,0x0F,0xBD,0x2E,0xF5,0x22,0xAC,0x82 } }; // 362EDBFF-FF1C-4434-9E0F-BD2EF522AC82
    template <> inline constexpr guid guid_v<llm:OS::Media::Audio::IAudioFileInputNode>{ 0x905B67C8,0x6F65,0x4CD4,{ 0x88,0x90,0x46,0x94,0x84,0x3C,0x27,0x6D } }; // 905B67C8-6F65-4CD4-8890-4694843C276D
    template <> inline constexpr guid guid_v<llm:OS::Media::Audio::IAudioFileOutputNode>{ 0x50E01980,0x5166,0x4093,{ 0x80,0xF8,0xAD,0xA0,0x00,0x89,0xE9,0xCF } }; // 50E01980-5166-4093-80F8-ADA00089E9CF
    template <> inline constexpr guid guid_v<llm:OS::Media::Audio::IAudioFrameCompletedEventArgs>{ 0xDC7C829E,0x0208,0x4504,{ 0xA5,0xA8,0xF0,0xF2,0x68,0x92,0x0A,0x65 } }; // DC7C829E-0208-4504-A5A8-F0F268920A65
    template <> inline constexpr guid guid_v<llm:OS::Media::Audio::IAudioFrameInputNode>{ 0x01B266C7,0xFD96,0x4FF5,{ 0xA3,0xC5,0xD2,0x7A,0x9B,0xF4,0x42,0x37 } }; // 01B266C7-FD96-4FF5-A3C5-D27A9BF44237
    template <> inline constexpr guid guid_v<llm:OS::Media::Audio::IAudioFrameOutputNode>{ 0xB847371B,0x3299,0x45F5,{ 0x88,0xB3,0xC9,0xD1,0x2A,0x3F,0x1C,0xC8 } }; // B847371B-3299-45F5-88B3-C9D12A3F1CC8
    template <> inline constexpr guid guid_v<llm:OS::Media::Audio::IAudioGraph>{ 0x1AD46EED,0xE48C,0x4E14,{ 0x96,0x60,0x2C,0x4F,0x83,0xE9,0xCD,0xD8 } }; // 1AD46EED-E48C-4E14-9660-2C4F83E9CDD8
    template <> inline constexpr guid guid_v<llm:OS::Media::Audio::IAudioGraph2>{ 0x4E4C3BD5,0x4FC1,0x45F6,{ 0xA9,0x47,0x3C,0xD3,0x8F,0x4F,0xD8,0x39 } }; // 4E4C3BD5-4FC1-45F6-A947-3CD38F4FD839
    template <> inline constexpr guid guid_v<llm:OS::Media::Audio::IAudioGraph3>{ 0xDDCD25AE,0x1185,0x42A7,{ 0x83,0x1D,0x6A,0x9B,0x0F,0xC8,0x68,0x20 } }; // DDCD25AE-1185-42A7-831D-6A9B0FC86820
    template <> inline constexpr guid guid_v<llm:OS::Media::Audio::IAudioGraphConnection>{ 0x763070ED,0xD04E,0x4FAC,{ 0xB2,0x33,0x60,0x0B,0x42,0xED,0xD4,0x69 } }; // 763070ED-D04E-4FAC-B233-600B42EDD469
    template <> inline constexpr guid guid_v<llm:OS::Media::Audio::IAudioGraphSettings>{ 0x1D59647F,0xE6FE,0x4628,{ 0x84,0xF8,0x9D,0x8B,0xDB,0xA2,0x57,0x85 } }; // 1D59647F-E6FE-4628-84F8-9D8BDBA25785
    template <> inline constexpr guid guid_v<llm:OS::Media::Audio::IAudioGraphSettings2>{ 0x72919787,0x4DAB,0x46E3,{ 0xB4,0xC9,0xD8,0xE1,0xA2,0x63,0x60,0x62 } }; // 72919787-4DAB-46E3-B4C9-D8E1A2636062
    template <> inline constexpr guid guid_v<llm:OS::Media::Audio::IAudioGraphSettingsFactory>{ 0xA5D91CC6,0xC2EB,0x4A61,{ 0xA2,0x14,0x1D,0x66,0xD7,0x5F,0x83,0xDA } }; // A5D91CC6-C2EB-4A61-A214-1D66D75F83DA
    template <> inline constexpr guid guid_v<llm:OS::Media::Audio::IAudioGraphStatics>{ 0x76EC3132,0xE159,0x4AB7,{ 0xA8,0x2A,0x17,0xBE,0xB4,0xB3,0x1E,0x94 } }; // 76EC3132-E159-4AB7-A82A-17BEB4B31E94
    template <> inline constexpr guid guid_v<llm:OS::Media::Audio::IAudioGraphUnrecoverableErrorOccurredEventArgs>{ 0xC3D9CBE0,0x3FF6,0x4FB3,{ 0xB2,0x62,0x50,0xD4,0x35,0xC5,0x54,0x23 } }; // C3D9CBE0-3FF6-4FB3-B262-50D435C55423
    template <> inline constexpr guid guid_v<llm:OS::Media::Audio::IAudioInputNode>{ 0xD148005C,0x8428,0x4784,{ 0xB7,0xFD,0xA9,0x9D,0x46,0x8C,0x5D,0x20 } }; // D148005C-8428-4784-B7FD-A99D468C5D20
    template <> inline constexpr guid guid_v<llm:OS::Media::Audio::IAudioInputNode2>{ 0x905156B7,0xCA68,0x4C6D,{ 0xA8,0xBC,0xE3,0xEE,0x17,0xFE,0x3F,0xD2 } }; // 905156B7-CA68-4C6D-A8BC-E3EE17FE3FD2
    template <> inline constexpr guid guid_v<llm:OS::Media::Audio::IAudioNode>{ 0x15389D7F,0xDBD8,0x4819,{ 0xBF,0x03,0x66,0x8E,0x93,0x57,0xCD,0x6D } }; // 15389D7F-DBD8-4819-BF03-668E9357CD6D
    template <> inline constexpr guid guid_v<llm:OS::Media::Audio::IAudioNodeEmitter>{ 0x3676971D,0x880A,0x47B8,{ 0xAD,0xF7,0x13,0x23,0xA9,0xD9,0x65,0xBE } }; // 3676971D-880A-47B8-ADF7-1323A9D965BE
    template <> inline constexpr guid guid_v<llm:OS::Media::Audio::IAudioNodeEmitter2>{ 0x4AB6EECB,0xEC29,0x47F8,{ 0x81,0x8C,0xB6,0xB6,0x60,0xA5,0xAE,0xB1 } }; // 4AB6EECB-EC29-47F8-818C-B6B660A5AEB1
    template <> inline constexpr guid guid_v<llm:OS::Media::Audio::IAudioNodeEmitterConeProperties>{ 0xE99B2CEE,0x02CA,0x4375,{ 0x93,0x26,0x0C,0x6A,0xE4,0xBC,0xDF,0xB5 } }; // E99B2CEE-02CA-4375-9326-0C6AE4BCDFB5
    template <> inline constexpr guid guid_v<llm:OS::Media::Audio::IAudioNodeEmitterDecayModel>{ 0x1D1D5AF7,0x0D53,0x4FA9,{ 0xBD,0x84,0xD5,0x81,0x6A,0x86,0xF3,0xFF } }; // 1D1D5AF7-0D53-4FA9-BD84-D5816A86F3FF
    template <> inline constexpr guid guid_v<llm:OS::Media::Audio::IAudioNodeEmitterDecayModelStatics>{ 0xC7787CA8,0xF178,0x462F,{ 0xBC,0x81,0x8D,0xD5,0xCB,0xE5,0xDA,0xE8 } }; // C7787CA8-F178-462F-BC81-8DD5CBE5DAE8
    template <> inline constexpr guid guid_v<llm:OS::Media::Audio::IAudioNodeEmitterFactory>{ 0xFDC8489A,0x6AD6,0x4CE4,{ 0xB7,0xF7,0xA9,0x93,0x70,0xDF,0x7E,0xE9 } }; // FDC8489A-6AD6-4CE4-B7F7-A99370DF7EE9
    template <> inline constexpr guid guid_v<llm:OS::Media::Audio::IAudioNodeEmitterNaturalDecayModelProperties>{ 0x48934BCF,0xCF2C,0x4EFC,{ 0x93,0x31,0x75,0xBD,0x22,0xDF,0x1F,0x0C } }; // 48934BCF-CF2C-4EFC-9331-75BD22DF1F0C
    template <> inline constexpr guid guid_v<llm:OS::Media::Audio::IAudioNodeEmitterShape>{ 0xEA0311C5,0xE73D,0x44BC,{ 0x85,0x9C,0x45,0x55,0x3B,0xBC,0x48,0x28 } }; // EA0311C5-E73D-44BC-859C-45553BBC4828
    template <> inline constexpr guid guid_v<llm:OS::Media::Audio::IAudioNodeEmitterShapeStatics>{ 0x57BB2771,0xFFA5,0x4B86,{ 0xA7,0x79,0xE2,0x64,0xAE,0xB9,0x14,0x5F } }; // 57BB2771-FFA5-4B86-A779-E264AEB9145F
    template <> inline constexpr guid guid_v<llm:OS::Media::Audio::IAudioNodeListener>{ 0xD9722E16,0x0C0A,0x41DA,{ 0xB7,0x55,0x6C,0x77,0x83,0x5F,0xB1,0xEB } }; // D9722E16-0C0A-41DA-B755-6C77835FB1EB
    template <> inline constexpr guid guid_v<llm:OS::Media::Audio::IAudioNodeWithListener>{ 0x0E0F907C,0x79FF,0x4544,{ 0x9E,0xEB,0x01,0x25,0x7B,0x15,0x10,0x5A } }; // 0E0F907C-79FF-4544-9EEB-01257B15105A
    template <> inline constexpr guid guid_v<llm:OS::Media::Audio::IAudioPlaybackConnection>{ 0x1A4C1DEA,0xCAFC,0x50E7,{ 0x87,0x18,0xEA,0x3F,0x81,0xCB,0xFA,0x51 } }; // 1A4C1DEA-CAFC-50E7-8718-EA3F81CBFA51
    template <> inline constexpr guid guid_v<llm:OS::Media::Audio::IAudioPlaybackConnectionOpenResult>{ 0x4E656AEF,0x39F9,0x5FC9,{ 0xA5,0x19,0xA5,0xBB,0xFD,0x9F,0xE9,0x21 } }; // 4E656AEF-39F9-5FC9-A519-A5BBFD9FE921
    template <> inline constexpr guid guid_v<llm:OS::Media::Audio::IAudioPlaybackConnectionStatics>{ 0xE60963A2,0x69E6,0x5FFC,{ 0x9E,0x13,0x82,0x4A,0x85,0x21,0x3D,0xAF } }; // E60963A2-69E6-5FFC-9E13-824A85213DAF
    template <> inline constexpr guid guid_v<llm:OS::Media::Audio::IAudioStateMonitor>{ 0x1D13D136,0x0199,0x4CDC,{ 0xB8,0x4E,0xE7,0x2C,0x2B,0x58,0x1E,0xCE } }; // 1D13D136-0199-4CDC-B84E-E72C2B581ECE
    template <> inline constexpr guid guid_v<llm:OS::Media::Audio::IAudioStateMonitorStatics>{ 0x6374EA4C,0x1B3B,0x4001,{ 0x94,0xD9,0xDD,0x22,0x53,0x30,0xFA,0x40 } }; // 6374EA4C-1B3B-4001-94D9-DD225330FA40
    template <> inline constexpr guid guid_v<llm:OS::Media::Audio::ICreateAudioDeviceInputNodeResult>{ 0x16EEC7A8,0x1CA7,0x40EF,{ 0x91,0xA4,0xD3,0x46,0xE0,0xAA,0x1B,0xBA } }; // 16EEC7A8-1CA7-40EF-91A4-D346E0AA1BBA
    template <> inline constexpr guid guid_v<llm:OS::Media::Audio::ICreateAudioDeviceInputNodeResult2>{ 0x921C69CE,0x3F35,0x41C7,{ 0x96,0x22,0x79,0xF6,0x08,0xBA,0xED,0xC2 } }; // 921C69CE-3F35-41C7-9622-79F608BAEDC2
    template <> inline constexpr guid guid_v<llm:OS::Media::Audio::ICreateAudioDeviceOutputNodeResult>{ 0xF7776D27,0x1D9A,0x47F7,{ 0x9C,0xD4,0x28,0x59,0xCC,0x1B,0x7B,0xFF } }; // F7776D27-1D9A-47F7-9CD4-2859CC1B7BFF
    template <> inline constexpr guid guid_v<llm:OS::Media::Audio::ICreateAudioDeviceOutputNodeResult2>{ 0x4864269F,0xBDCE,0x4AB1,{ 0xBD,0x38,0xFB,0xAE,0x93,0xAE,0xDA,0xCA } }; // 4864269F-BDCE-4AB1-BD38-FBAE93AEDACA
    template <> inline constexpr guid guid_v<llm:OS::Media::Audio::ICreateAudioFileInputNodeResult>{ 0xCE83D61C,0xE297,0x4C50,{ 0x9C,0xE7,0x1C,0x7A,0x69,0xD6,0xBD,0x09 } }; // CE83D61C-E297-4C50-9CE7-1C7A69D6BD09
    template <> inline constexpr guid guid_v<llm:OS::Media::Audio::ICreateAudioFileInputNodeResult2>{ 0xF9082020,0x3D80,0x4FE0,{ 0x81,0xC1,0x76,0x8F,0xEA,0x7C,0xA7,0xE0 } }; // F9082020-3D80-4FE0-81C1-768FEA7CA7E0
    template <> inline constexpr guid guid_v<llm:OS::Media::Audio::ICreateAudioFileOutputNodeResult>{ 0x47D6BA7B,0xE909,0x453F,{ 0x86,0x6E,0x55,0x40,0xCD,0xA7,0x34,0xFF } }; // 47D6BA7B-E909-453F-866E-5540CDA734FF
    template <> inline constexpr guid guid_v<llm:OS::Media::Audio::ICreateAudioFileOutputNodeResult2>{ 0x9F01B50D,0x3318,0x47B3,{ 0xA6,0x0A,0x1B,0x49,0x2B,0xE7,0xFC,0x0D } }; // 9F01B50D-3318-47B3-A60A-1B492BE7FC0D
    template <> inline constexpr guid guid_v<llm:OS::Media::Audio::ICreateAudioGraphResult>{ 0x5453EF7E,0x7BDE,0x4B76,{ 0xBB,0x5D,0x48,0xF7,0x9C,0xFC,0x8C,0x0B } }; // 5453EF7E-7BDE-4B76-BB5D-48F79CFC8C0B
    template <> inline constexpr guid guid_v<llm:OS::Media::Audio::ICreateAudioGraphResult2>{ 0x6D738DFC,0x88C6,0x4FCB,{ 0xA5,0x34,0x85,0xCE,0xDD,0x40,0x50,0xA1 } }; // 6D738DFC-88C6-4FCB-A534-85CEDD4050A1
    template <> inline constexpr guid guid_v<llm:OS::Media::Audio::ICreateMediaSourceAudioInputNodeResult>{ 0x46A658A3,0x53C0,0x4D59,{ 0x9E,0x51,0xCC,0x1D,0x10,0x44,0xA4,0xC4 } }; // 46A658A3-53C0-4D59-9E51-CC1D1044A4C4
    template <> inline constexpr guid guid_v<llm:OS::Media::Audio::ICreateMediaSourceAudioInputNodeResult2>{ 0x63514CE8,0x6A1A,0x49E3,{ 0x97,0xEC,0x28,0xFD,0x5B,0xE1,0x14,0xE5 } }; // 63514CE8-6A1A-49E3-97EC-28FD5BE114E5
    template <> inline constexpr guid guid_v<llm:OS::Media::Audio::IEchoEffectDefinition>{ 0x0E4D3FAA,0x36B8,0x4C91,{ 0xB9,0xDA,0x11,0xF4,0x4A,0x8A,0x66,0x10 } }; // 0E4D3FAA-36B8-4C91-B9DA-11F44A8A6610
    template <> inline constexpr guid guid_v<llm:OS::Media::Audio::IEchoEffectDefinitionFactory>{ 0x0D4E2257,0xAAF2,0x4E86,{ 0xA5,0x4C,0xFB,0x79,0xDB,0x8F,0x6C,0x12 } }; // 0D4E2257-AAF2-4E86-A54C-FB79DB8F6C12
    template <> inline constexpr guid guid_v<llm:OS::Media::Audio::IEqualizerBand>{ 0xC00A5A6A,0x262D,0x4B85,{ 0x9B,0xB7,0x43,0x28,0x0B,0x62,0xED,0x0C } }; // C00A5A6A-262D-4B85-9BB7-43280B62ED0C
    template <> inline constexpr guid guid_v<llm:OS::Media::Audio::IEqualizerEffectDefinition>{ 0x023F6F1F,0x83FE,0x449A,{ 0xA8,0x22,0xC6,0x96,0x44,0x2D,0x16,0xB0 } }; // 023F6F1F-83FE-449A-A822-C696442D16B0
    template <> inline constexpr guid guid_v<llm:OS::Media::Audio::IEqualizerEffectDefinitionFactory>{ 0xD2876FC4,0xD410,0x4EB5,{ 0x9E,0x69,0xC9,0xAA,0x12,0x77,0xEA,0xF0 } }; // D2876FC4-D410-4EB5-9E69-C9AA1277EAF0
    template <> inline constexpr guid guid_v<llm:OS::Media::Audio::IFrameInputNodeQuantumStartedEventArgs>{ 0x3D9BD498,0xA306,0x4F06,{ 0xBD,0x9F,0xE9,0xEF,0xC8,0x22,0x63,0x04 } }; // 3D9BD498-A306-4F06-BD9F-E9EFC8226304
    template <> inline constexpr guid guid_v<llm:OS::Media::Audio::ILimiterEffectDefinition>{ 0x6B755D19,0x2603,0x47BA,{ 0xBD,0xEB,0x39,0x05,0x5E,0x34,0x86,0xDC } }; // 6B755D19-2603-47BA-BDEB-39055E3486DC
    template <> inline constexpr guid guid_v<llm:OS::Media::Audio::ILimiterEffectDefinitionFactory>{ 0xECBAE6F1,0x61FF,0x45EF,{ 0xB8,0xF5,0x48,0x65,0x9A,0x57,0xC7,0x2D } }; // ECBAE6F1-61FF-45EF-B8F5-48659A57C72D
    template <> inline constexpr guid guid_v<llm:OS::Media::Audio::IMediaSourceAudioInputNode>{ 0x99D8983B,0xA88A,0x4041,{ 0x8E,0x4F,0xDD,0xBA,0xC0,0xC9,0x1F,0xD3 } }; // 99D8983B-A88A-4041-8E4F-DDBAC0C91FD3
    template <> inline constexpr guid guid_v<llm:OS::Media::Audio::IReverbEffectDefinition>{ 0x4606AA89,0xF563,0x4D0A,{ 0x8F,0x6E,0xF0,0xCD,0xDF,0xF3,0x5D,0x84 } }; // 4606AA89-F563-4D0A-8F6E-F0CDDFF35D84
    template <> inline constexpr guid guid_v<llm:OS::Media::Audio::IReverbEffectDefinitionFactory>{ 0xA7D5CBFE,0x100B,0x4FF0,{ 0x9D,0xA6,0xDC,0x4E,0x05,0xA7,0x59,0xF0 } }; // A7D5CBFE-100B-4FF0-9DA6-DC4E05A759F0
    template <> inline constexpr guid guid_v<llm:OS::Media::Audio::ISetDefaultSpatialAudioFormatResult>{ 0x1C2AA511,0x1400,0x5E70,{ 0x9E,0xA9,0xAE,0x15,0x12,0x41,0xE8,0xEA } }; // 1C2AA511-1400-5E70-9EA9-AE151241E8EA
    template <> inline constexpr guid guid_v<llm:OS::Media::Audio::ISpatialAudioDeviceConfiguration>{ 0xEE830034,0x61CF,0x5749,{ 0x9D,0xA4,0x10,0xF0,0xFE,0x02,0x81,0x99 } }; // EE830034-61CF-5749-9DA4-10F0FE028199
    template <> inline constexpr guid guid_v<llm:OS::Media::Audio::ISpatialAudioDeviceConfigurationStatics>{ 0x3EC37F7B,0x936D,0x4E04,{ 0x97,0x28,0x28,0x27,0xD9,0xF7,0x58,0xC4 } }; // 3EC37F7B-936D-4E04-9728-2827D9F758C4
    template <> inline constexpr guid guid_v<llm:OS::Media::Audio::ISpatialAudioFormatConfiguration>{ 0x32DF09A8,0x50F0,0x5395,{ 0x99,0x23,0x7D,0x44,0xCA,0x71,0xED,0x6D } }; // 32DF09A8-50F0-5395-9923-7D44CA71ED6D
    template <> inline constexpr guid guid_v<llm:OS::Media::Audio::ISpatialAudioFormatConfigurationStatics>{ 0x2B5FEF71,0x67C9,0x4E5F,{ 0xA3,0x5B,0x41,0x68,0x07,0x11,0xF8,0xC7 } }; // 2B5FEF71-67C9-4E5F-A35B-41680711F8C7
    template <> inline constexpr guid guid_v<llm:OS::Media::Audio::ISpatialAudioFormatSubtypeStatics>{ 0xB3DE8A47,0x83EE,0x4266,{ 0xA9,0x45,0xBE,0xDF,0x50,0x7A,0xFE,0xED } }; // B3DE8A47-83EE-4266-A945-BEDF507AFEED
    template <> inline constexpr guid guid_v<llm:OS::Media::Audio::ISpatialAudioFormatSubtypeStatics2>{ 0x4565E6CB,0xD95B,0x5621,{ 0xB6,0xAF,0x0E,0x88,0x49,0xC5,0x7C,0x80 } }; // 4565E6CB-D95B-5621-B6AF-0E8849C57C80
    template <> struct default_interface<llm:OS::Media::Audio::AudioDeviceInputNode>{ using type = llm:OS::Media::Audio::IAudioDeviceInputNode; };
    template <> struct default_interface<llm:OS::Media::Audio::AudioDeviceOutputNode>{ using type = llm:OS::Media::Audio::IAudioDeviceOutputNode; };
    template <> struct default_interface<llm:OS::Media::Audio::AudioFileInputNode>{ using type = llm:OS::Media::Audio::IAudioFileInputNode; };
    template <> struct default_interface<llm:OS::Media::Audio::AudioFileOutputNode>{ using type = llm:OS::Media::Audio::IAudioFileOutputNode; };
    template <> struct default_interface<llm:OS::Media::Audio::AudioFrameCompletedEventArgs>{ using type = llm:OS::Media::Audio::IAudioFrameCompletedEventArgs; };
    template <> struct default_interface<llm:OS::Media::Audio::AudioFrameInputNode>{ using type = llm:OS::Media::Audio::IAudioFrameInputNode; };
    template <> struct default_interface<llm:OS::Media::Audio::AudioFrameOutputNode>{ using type = llm:OS::Media::Audio::IAudioFrameOutputNode; };
    template <> struct default_interface<llm:OS::Media::Audio::AudioGraph>{ using type = llm:OS::Media::Audio::IAudioGraph; };
    template <> struct default_interface<llm:OS::Media::Audio::AudioGraphBatchUpdater>{ using type = llm:OS::Foundation::IClosable; };
    template <> struct default_interface<llm:OS::Media::Audio::AudioGraphConnection>{ using type = llm:OS::Media::Audio::IAudioGraphConnection; };
    template <> struct default_interface<llm:OS::Media::Audio::AudioGraphSettings>{ using type = llm:OS::Media::Audio::IAudioGraphSettings; };
    template <> struct default_interface<llm:OS::Media::Audio::AudioGraphUnrecoverableErrorOccurredEventArgs>{ using type = llm:OS::Media::Audio::IAudioGraphUnrecoverableErrorOccurredEventArgs; };
    template <> struct default_interface<llm:OS::Media::Audio::AudioNodeEmitter>{ using type = llm:OS::Media::Audio::IAudioNodeEmitter; };
    template <> struct default_interface<llm:OS::Media::Audio::AudioNodeEmitterConeProperties>{ using type = llm:OS::Media::Audio::IAudioNodeEmitterConeProperties; };
    template <> struct default_interface<llm:OS::Media::Audio::AudioNodeEmitterDecayModel>{ using type = llm:OS::Media::Audio::IAudioNodeEmitterDecayModel; };
    template <> struct default_interface<llm:OS::Media::Audio::AudioNodeEmitterNaturalDecayModelProperties>{ using type = llm:OS::Media::Audio::IAudioNodeEmitterNaturalDecayModelProperties; };
    template <> struct default_interface<llm:OS::Media::Audio::AudioNodeEmitterShape>{ using type = llm:OS::Media::Audio::IAudioNodeEmitterShape; };
    template <> struct default_interface<llm:OS::Media::Audio::AudioNodeListener>{ using type = llm:OS::Media::Audio::IAudioNodeListener; };
    template <> struct default_interface<llm:OS::Media::Audio::AudioPlaybackConnection>{ using type = llm:OS::Media::Audio::IAudioPlaybackConnection; };
    template <> struct default_interface<llm:OS::Media::Audio::AudioPlaybackConnectionOpenResult>{ using type = llm:OS::Media::Audio::IAudioPlaybackConnectionOpenResult; };
    template <> struct default_interface<llm:OS::Media::Audio::AudioStateMonitor>{ using type = llm:OS::Media::Audio::IAudioStateMonitor; };
    template <> struct default_interface<llm:OS::Media::Audio::AudioSubmixNode>{ using type = llm:OS::Media::Audio::IAudioInputNode; };
    template <> struct default_interface<llm:OS::Media::Audio::CreateAudioDeviceInputNodeResult>{ using type = llm:OS::Media::Audio::ICreateAudioDeviceInputNodeResult; };
    template <> struct default_interface<llm:OS::Media::Audio::CreateAudioDeviceOutputNodeResult>{ using type = llm:OS::Media::Audio::ICreateAudioDeviceOutputNodeResult; };
    template <> struct default_interface<llm:OS::Media::Audio::CreateAudioFileInputNodeResult>{ using type = llm:OS::Media::Audio::ICreateAudioFileInputNodeResult; };
    template <> struct default_interface<llm:OS::Media::Audio::CreateAudioFileOutputNodeResult>{ using type = llm:OS::Media::Audio::ICreateAudioFileOutputNodeResult; };
    template <> struct default_interface<llm:OS::Media::Audio::CreateAudioGraphResult>{ using type = llm:OS::Media::Audio::ICreateAudioGraphResult; };
    template <> struct default_interface<llm:OS::Media::Audio::CreateMediaSourceAudioInputNodeResult>{ using type = llm:OS::Media::Audio::ICreateMediaSourceAudioInputNodeResult; };
    template <> struct default_interface<llm:OS::Media::Audio::EchoEffectDefinition>{ using type = llm:OS::Media::Audio::IEchoEffectDefinition; };
    template <> struct default_interface<llm:OS::Media::Audio::EqualizerBand>{ using type = llm:OS::Media::Audio::IEqualizerBand; };
    template <> struct default_interface<llm:OS::Media::Audio::EqualizerEffectDefinition>{ using type = llm:OS::Media::Audio::IEqualizerEffectDefinition; };
    template <> struct default_interface<llm:OS::Media::Audio::FrameInputNodeQuantumStartedEventArgs>{ using type = llm:OS::Media::Audio::IFrameInputNodeQuantumStartedEventArgs; };
    template <> struct default_interface<llm:OS::Media::Audio::LimiterEffectDefinition>{ using type = llm:OS::Media::Audio::ILimiterEffectDefinition; };
    template <> struct default_interface<llm:OS::Media::Audio::MediaSourceAudioInputNode>{ using type = llm:OS::Media::Audio::IMediaSourceAudioInputNode; };
    template <> struct default_interface<llm:OS::Media::Audio::ReverbEffectDefinition>{ using type = llm:OS::Media::Audio::IReverbEffectDefinition; };
    template <> struct default_interface<llm:OS::Media::Audio::SetDefaultSpatialAudioFormatResult>{ using type = llm:OS::Media::Audio::ISetDefaultSpatialAudioFormatResult; };
    template <> struct default_interface<llm:OS::Media::Audio::SpatialAudioDeviceConfiguration>{ using type = llm:OS::Media::Audio::ISpatialAudioDeviceConfiguration; };
    template <> struct default_interface<llm:OS::Media::Audio::SpatialAudioFormatConfiguration>{ using type = llm:OS::Media::Audio::ISpatialAudioFormatConfiguration; };
    template <> struct abi<llm:OS::Media::Audio::IAudioDeviceInputNode>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Device(void**) noexcept = 0;
        };
    };
    template <> struct abi<llm:OS::Media::Audio::IAudioDeviceOutputNode>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Device(void**) noexcept = 0;
        };
    };
    template <> struct abi<llm:OS::Media::Audio::IAudioFileInputNode>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_PlaybackSpeedFactor(double) noexcept = 0;
            virtual int32_t __stdcall get_PlaybackSpeedFactor(double*) noexcept = 0;
            virtual int32_t __stdcall get_Position(int64_t*) noexcept = 0;
            virtual int32_t __stdcall Seek(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_StartTime(void**) noexcept = 0;
            virtual int32_t __stdcall put_StartTime(void*) noexcept = 0;
            virtual int32_t __stdcall get_EndTime(void**) noexcept = 0;
            virtual int32_t __stdcall put_EndTime(void*) noexcept = 0;
            virtual int32_t __stdcall get_LoopCount(void**) noexcept = 0;
            virtual int32_t __stdcall put_LoopCount(void*) noexcept = 0;
            virtual int32_t __stdcall get_Duration(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_SourceFile(void**) noexcept = 0;
            virtual int32_t __stdcall add_FileCompleted(void*, llm::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_FileCompleted(llm::event_token) noexcept = 0;
        };
    };
    template <> struct abi<llm:OS::Media::Audio::IAudioFileOutputNode>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_File(void**) noexcept = 0;
            virtual int32_t __stdcall get_FileEncodingProfile(void**) noexcept = 0;
            virtual int32_t __stdcall FinalizeAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<llm:OS::Media::Audio::IAudioFrameCompletedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Frame(void**) noexcept = 0;
        };
    };
    template <> struct abi<llm:OS::Media::Audio::IAudioFrameInputNode>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_PlaybackSpeedFactor(double) noexcept = 0;
            virtual int32_t __stdcall get_PlaybackSpeedFactor(double*) noexcept = 0;
            virtual int32_t __stdcall AddFrame(void*) noexcept = 0;
            virtual int32_t __stdcall DiscardQueuedFrames() noexcept = 0;
            virtual int32_t __stdcall get_QueuedSampleCount(uint64_t*) noexcept = 0;
            virtual int32_t __stdcall add_AudioFrameCompleted(void*, llm::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_AudioFrameCompleted(llm::event_token) noexcept = 0;
            virtual int32_t __stdcall add_QuantumStarted(void*, llm::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_QuantumStarted(llm::event_token) noexcept = 0;
        };
    };
    template <> struct abi<llm:OS::Media::Audio::IAudioFrameOutputNode>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetFrame(void**) noexcept = 0;
        };
    };
    template <> struct abi<llm:OS::Media::Audio::IAudioGraph>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFrameInputNode(void**) noexcept = 0;
            virtual int32_t __stdcall CreateFrameInputNodeWithFormat(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateDeviceInputNodeAsync(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall CreateDeviceInputNodeWithFormatAsync(int32_t, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateDeviceInputNodeWithFormatOnDeviceAsync(int32_t, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFrameOutputNode(void**) noexcept = 0;
            virtual int32_t __stdcall CreateFrameOutputNodeWithFormat(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateDeviceOutputNodeAsync(void**) noexcept = 0;
            virtual int32_t __stdcall CreateFileInputNodeAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFileOutputNodeAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFileOutputNodeWithFileProfileAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateSubmixNode(void**) noexcept = 0;
            virtual int32_t __stdcall CreateSubmixNodeWithFormat(void*, void**) noexcept = 0;
            virtual int32_t __stdcall Start() noexcept = 0;
            virtual int32_t __stdcall Stop() noexcept = 0;
            virtual int32_t __stdcall ResetAllNodes() noexcept = 0;
            virtual int32_t __stdcall add_QuantumStarted(void*, llm::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_QuantumStarted(llm::event_token) noexcept = 0;
            virtual int32_t __stdcall add_QuantumProcessed(void*, llm::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_QuantumProcessed(llm::event_token) noexcept = 0;
            virtual int32_t __stdcall add_UnrecoverableErrorOccurred(void*, llm::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_UnrecoverableErrorOccurred(llm::event_token) noexcept = 0;
            virtual int32_t __stdcall get_CompletedQuantumCount(uint64_t*) noexcept = 0;
            virtual int32_t __stdcall get_EncodingProperties(void**) noexcept = 0;
            virtual int32_t __stdcall get_LatencyInSamples(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_PrimaryRenderDevice(void**) noexcept = 0;
            virtual int32_t __stdcall get_RenderDeviceAudioProcessing(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_SamplesPerQuantum(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<llm:OS::Media::Audio::IAudioGraph2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFrameInputNodeWithFormatAndEmitter(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateDeviceInputNodeWithFormatAndEmitterOnDeviceAsync(int32_t, void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFileInputNodeWithEmitterAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateSubmixNodeWithFormatAndEmitter(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateBatchUpdater(void**) noexcept = 0;
        };
    };
    template <> struct abi<llm:OS::Media::Audio::IAudioGraph3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateMediaSourceAudioInputNodeAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateMediaSourceAudioInputNodeWithEmitterAsync(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<llm:OS::Media::Audio::IAudioGraphConnection>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Destination(void**) noexcept = 0;
            virtual int32_t __stdcall put_Gain(double) noexcept = 0;
            virtual int32_t __stdcall get_Gain(double*) noexcept = 0;
        };
    };
    template <> struct abi<llm:OS::Media::Audio::IAudioGraphSettings>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EncodingProperties(void**) noexcept = 0;
            virtual int32_t __stdcall put_EncodingProperties(void*) noexcept = 0;
            virtual int32_t __stdcall get_PrimaryRenderDevice(void**) noexcept = 0;
            virtual int32_t __stdcall put_PrimaryRenderDevice(void*) noexcept = 0;
            virtual int32_t __stdcall get_QuantumSizeSelectionMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_QuantumSizeSelectionMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_DesiredSamplesPerQuantum(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_DesiredSamplesPerQuantum(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_AudioRenderCategory(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_AudioRenderCategory(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_DesiredRenderDeviceAudioProcessing(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_DesiredRenderDeviceAudioProcessing(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<llm:OS::Media::Audio::IAudioGraphSettings2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_MaxPlaybackSpeedFactor(double) noexcept = 0;
            virtual int32_t __stdcall get_MaxPlaybackSpeedFactor(double*) noexcept = 0;
        };
    };
    template <> struct abi<llm:OS::Media::Audio::IAudioGraphSettingsFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<llm:OS::Media::Audio::IAudioGraphStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<llm:OS::Media::Audio::IAudioGraphUnrecoverableErrorOccurredEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Error(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<llm:OS::Media::Audio::IAudioInputNode>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_OutgoingConnections(void**) noexcept = 0;
            virtual int32_t __stdcall AddOutgoingConnection(void*) noexcept = 0;
            virtual int32_t __stdcall AddOutgoingConnectionWithGain(void*, double) noexcept = 0;
            virtual int32_t __stdcall RemoveOutgoingConnection(void*) noexcept = 0;
        };
    };
    template <> struct abi<llm:OS::Media::Audio::IAudioInputNode2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Emitter(void**) noexcept = 0;
        };
    };
    template <> struct abi<llm:OS::Media::Audio::IAudioNode>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EffectDefinitions(void**) noexcept = 0;
            virtual int32_t __stdcall put_OutgoingGain(double) noexcept = 0;
            virtual int32_t __stdcall get_OutgoingGain(double*) noexcept = 0;
            virtual int32_t __stdcall get_EncodingProperties(void**) noexcept = 0;
            virtual int32_t __stdcall get_ConsumeInput(bool*) noexcept = 0;
            virtual int32_t __stdcall put_ConsumeInput(bool) noexcept = 0;
            virtual int32_t __stdcall Start() noexcept = 0;
            virtual int32_t __stdcall Stop() noexcept = 0;
            virtual int32_t __stdcall Reset() noexcept = 0;
            virtual int32_t __stdcall DisableEffectsByDefinition(void*) noexcept = 0;
            virtual int32_t __stdcall EnableEffectsByDefinition(void*) noexcept = 0;
        };
    };
    template <> struct abi<llm:OS::Media::Audio::IAudioNodeEmitter>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Position(llm:OS::Foundation::Numerics::float3*) noexcept = 0;
            virtual int32_t __stdcall put_Position(llm:OS::Foundation::Numerics::float3) noexcept = 0;
            virtual int32_t __stdcall get_Direction(llm:OS::Foundation::Numerics::float3*) noexcept = 0;
            virtual int32_t __stdcall put_Direction(llm:OS::Foundation::Numerics::float3) noexcept = 0;
            virtual int32_t __stdcall get_Shape(void**) noexcept = 0;
            virtual int32_t __stdcall get_DecayModel(void**) noexcept = 0;
            virtual int32_t __stdcall get_Gain(double*) noexcept = 0;
            virtual int32_t __stdcall put_Gain(double) noexcept = 0;
            virtual int32_t __stdcall get_DistanceScale(double*) noexcept = 0;
            virtual int32_t __stdcall put_DistanceScale(double) noexcept = 0;
            virtual int32_t __stdcall get_DopplerScale(double*) noexcept = 0;
            virtual int32_t __stdcall put_DopplerScale(double) noexcept = 0;
            virtual int32_t __stdcall get_DopplerVelocity(llm:OS::Foundation::Numerics::float3*) noexcept = 0;
            virtual int32_t __stdcall put_DopplerVelocity(llm:OS::Foundation::Numerics::float3) noexcept = 0;
            virtual int32_t __stdcall get_IsDopplerDisabled(bool*) noexcept = 0;
        };
    };
    template <> struct abi<llm:OS::Media::Audio::IAudioNodeEmitter2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SpatialAudioModel(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_SpatialAudioModel(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<llm:OS::Media::Audio::IAudioNodeEmitterConeProperties>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_InnerAngle(double*) noexcept = 0;
            virtual int32_t __stdcall get_OuterAngle(double*) noexcept = 0;
            virtual int32_t __stdcall get_OuterAngleGain(double*) noexcept = 0;
        };
    };
    template <> struct abi<llm:OS::Media::Audio::IAudioNodeEmitterDecayModel>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Kind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MinGain(double*) noexcept = 0;
            virtual int32_t __stdcall get_MaxGain(double*) noexcept = 0;
            virtual int32_t __stdcall get_NaturalProperties(void**) noexcept = 0;
        };
    };
    template <> struct abi<llm:OS::Media::Audio::IAudioNodeEmitterDecayModelStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateNatural(double, double, double, double, void**) noexcept = 0;
            virtual int32_t __stdcall CreateCustom(double, double, void**) noexcept = 0;
        };
    };
    template <> struct abi<llm:OS::Media::Audio::IAudioNodeEmitterFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateAudioNodeEmitter(void*, void*, uint32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<llm:OS::Media::Audio::IAudioNodeEmitterNaturalDecayModelProperties>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_UnityGainDistance(double*) noexcept = 0;
            virtual int32_t __stdcall get_CutoffDistance(double*) noexcept = 0;
        };
    };
    template <> struct abi<llm:OS::Media::Audio::IAudioNodeEmitterShape>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Kind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ConeProperties(void**) noexcept = 0;
        };
    };
    template <> struct abi<llm:OS::Media::Audio::IAudioNodeEmitterShapeStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateCone(double, double, double, void**) noexcept = 0;
            virtual int32_t __stdcall CreateOmnidirectional(void**) noexcept = 0;
        };
    };
    template <> struct abi<llm:OS::Media::Audio::IAudioNodeListener>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Position(llm:OS::Foundation::Numerics::float3*) noexcept = 0;
            virtual int32_t __stdcall put_Position(llm:OS::Foundation::Numerics::float3) noexcept = 0;
            virtual int32_t __stdcall get_Orientation(llm:OS::Foundation::Numerics::quaternion*) noexcept = 0;
            virtual int32_t __stdcall put_Orientation(llm:OS::Foundation::Numerics::quaternion) noexcept = 0;
            virtual int32_t __stdcall get_SpeedOfSound(double*) noexcept = 0;
            virtual int32_t __stdcall put_SpeedOfSound(double) noexcept = 0;
            virtual int32_t __stdcall get_DopplerVelocity(llm:OS::Foundation::Numerics::float3*) noexcept = 0;
            virtual int32_t __stdcall put_DopplerVelocity(llm:OS::Foundation::Numerics::float3) noexcept = 0;
        };
    };
    template <> struct abi<llm:OS::Media::Audio::IAudioNodeWithListener>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_Listener(void*) noexcept = 0;
            virtual int32_t __stdcall get_Listener(void**) noexcept = 0;
        };
    };
    template <> struct abi<llm:OS::Media::Audio::IAudioPlaybackConnection>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Start() noexcept = 0;
            virtual int32_t __stdcall StartAsync(void**) noexcept = 0;
            virtual int32_t __stdcall get_DeviceId(void**) noexcept = 0;
            virtual int32_t __stdcall get_State(int32_t*) noexcept = 0;
            virtual int32_t __stdcall Open(void**) noexcept = 0;
            virtual int32_t __stdcall OpenAsync(void**) noexcept = 0;
            virtual int32_t __stdcall add_StateChanged(void*, llm::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_StateChanged(llm::event_token) noexcept = 0;
        };
    };
    template <> struct abi<llm:OS::Media::Audio::IAudioPlaybackConnectionOpenResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ExtendedError(llm::hresult*) noexcept = 0;
        };
    };
    template <> struct abi<llm:OS::Media::Audio::IAudioPlaybackConnectionStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDeviceSelector(void**) noexcept = 0;
            virtual int32_t __stdcall TryCreateFromId(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<llm:OS::Media::Audio::IAudioStateMonitor>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_SoundLevelChanged(void*, llm::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SoundLevelChanged(llm::event_token) noexcept = 0;
            virtual int32_t __stdcall get_SoundLevel(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<llm:OS::Media::Audio::IAudioStateMonitorStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateForRenderMonitoring(void**) noexcept = 0;
            virtual int32_t __stdcall CreateForRenderMonitoringWithCategory(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall CreateForRenderMonitoringWithCategoryAndDeviceRole(int32_t, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall CreateForRenderMonitoringWithCategoryAndDeviceId(int32_t, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateForCaptureMonitoring(void**) noexcept = 0;
            virtual int32_t __stdcall CreateForCaptureMonitoringWithCategory(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall CreateForCaptureMonitoringWithCategoryAndDeviceRole(int32_t, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall CreateForCaptureMonitoringWithCategoryAndDeviceId(int32_t, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<llm:OS::Media::Audio::ICreateAudioDeviceInputNodeResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_DeviceInputNode(void**) noexcept = 0;
        };
    };
    template <> struct abi<llm:OS::Media::Audio::ICreateAudioDeviceInputNodeResult2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ExtendedError(llm::hresult*) noexcept = 0;
        };
    };
    template <> struct abi<llm:OS::Media::Audio::ICreateAudioDeviceOutputNodeResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_DeviceOutputNode(void**) noexcept = 0;
        };
    };
    template <> struct abi<llm:OS::Media::Audio::ICreateAudioDeviceOutputNodeResult2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ExtendedError(llm::hresult*) noexcept = 0;
        };
    };
    template <> struct abi<llm:OS::Media::Audio::ICreateAudioFileInputNodeResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_FileInputNode(void**) noexcept = 0;
        };
    };
    template <> struct abi<llm:OS::Media::Audio::ICreateAudioFileInputNodeResult2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ExtendedError(llm::hresult*) noexcept = 0;
        };
    };
    template <> struct abi<llm:OS::Media::Audio::ICreateAudioFileOutputNodeResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_FileOutputNode(void**) noexcept = 0;
        };
    };
    template <> struct abi<llm:OS::Media::Audio::ICreateAudioFileOutputNodeResult2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ExtendedError(llm::hresult*) noexcept = 0;
        };
    };
    template <> struct abi<llm:OS::Media::Audio::ICreateAudioGraphResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Graph(void**) noexcept = 0;
        };
    };
    template <> struct abi<llm:OS::Media::Audio::ICreateAudioGraphResult2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ExtendedError(llm::hresult*) noexcept = 0;
        };
    };
    template <> struct abi<llm:OS::Media::Audio::ICreateMediaSourceAudioInputNodeResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Node(void**) noexcept = 0;
        };
    };
    template <> struct abi<llm:OS::Media::Audio::ICreateMediaSourceAudioInputNodeResult2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ExtendedError(llm::hresult*) noexcept = 0;
        };
    };
    template <> struct abi<llm:OS::Media::Audio::IEchoEffectDefinition>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_WetDryMix(double) noexcept = 0;
            virtual int32_t __stdcall get_WetDryMix(double*) noexcept = 0;
            virtual int32_t __stdcall put_Feedback(double) noexcept = 0;
            virtual int32_t __stdcall get_Feedback(double*) noexcept = 0;
            virtual int32_t __stdcall put_Delay(double) noexcept = 0;
            virtual int32_t __stdcall get_Delay(double*) noexcept = 0;
        };
    };
    template <> struct abi<llm:OS::Media::Audio::IEchoEffectDefinitionFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<llm:OS::Media::Audio::IEqualizerBand>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Bandwidth(double*) noexcept = 0;
            virtual int32_t __stdcall put_Bandwidth(double) noexcept = 0;
            virtual int32_t __stdcall get_FrequencyCenter(double*) noexcept = 0;
            virtual int32_t __stdcall put_FrequencyCenter(double) noexcept = 0;
            virtual int32_t __stdcall get_Gain(double*) noexcept = 0;
            virtual int32_t __stdcall put_Gain(double) noexcept = 0;
        };
    };
    template <> struct abi<llm:OS::Media::Audio::IEqualizerEffectDefinition>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Bands(void**) noexcept = 0;
        };
    };
    template <> struct abi<llm:OS::Media::Audio::IEqualizerEffectDefinitionFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<llm:OS::Media::Audio::IFrameInputNodeQuantumStartedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RequiredSamples(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<llm:OS::Media::Audio::ILimiterEffectDefinition>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_Release(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_Release(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Loudness(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_Loudness(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<llm:OS::Media::Audio::ILimiterEffectDefinitionFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<llm:OS::Media::Audio::IMediaSourceAudioInputNode>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_PlaybackSpeedFactor(double) noexcept = 0;
            virtual int32_t __stdcall get_PlaybackSpeedFactor(double*) noexcept = 0;
            virtual int32_t __stdcall get_Position(int64_t*) noexcept = 0;
            virtual int32_t __stdcall Seek(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_StartTime(void**) noexcept = 0;
            virtual int32_t __stdcall put_StartTime(void*) noexcept = 0;
            virtual int32_t __stdcall get_EndTime(void**) noexcept = 0;
            virtual int32_t __stdcall put_EndTime(void*) noexcept = 0;
            virtual int32_t __stdcall get_LoopCount(void**) noexcept = 0;
            virtual int32_t __stdcall put_LoopCount(void*) noexcept = 0;
            virtual int32_t __stdcall get_Duration(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_MediaSource(void**) noexcept = 0;
            virtual int32_t __stdcall add_MediaSourceCompleted(void*, llm::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_MediaSourceCompleted(llm::event_token) noexcept = 0;
        };
    };
    template <> struct abi<llm:OS::Media::Audio::IReverbEffectDefinition>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_WetDryMix(double) noexcept = 0;
            virtual int32_t __stdcall get_WetDryMix(double*) noexcept = 0;
            virtual int32_t __stdcall put_ReflectionsDelay(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_ReflectionsDelay(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ReverbDelay(uint8_t) noexcept = 0;
            virtual int32_t __stdcall get_ReverbDelay(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall put_RearDelay(uint8_t) noexcept = 0;
            virtual int32_t __stdcall get_RearDelay(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall put_PositionLeft(uint8_t) noexcept = 0;
            virtual int32_t __stdcall get_PositionLeft(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall put_PositionRight(uint8_t) noexcept = 0;
            virtual int32_t __stdcall get_PositionRight(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall put_PositionMatrixLeft(uint8_t) noexcept = 0;
            virtual int32_t __stdcall get_PositionMatrixLeft(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall put_PositionMatrixRight(uint8_t) noexcept = 0;
            virtual int32_t __stdcall get_PositionMatrixRight(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall put_EarlyDiffusion(uint8_t) noexcept = 0;
            virtual int32_t __stdcall get_EarlyDiffusion(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall put_LateDiffusion(uint8_t) noexcept = 0;
            virtual int32_t __stdcall get_LateDiffusion(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall put_LowEQGain(uint8_t) noexcept = 0;
            virtual int32_t __stdcall get_LowEQGain(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall put_LowEQCutoff(uint8_t) noexcept = 0;
            virtual int32_t __stdcall get_LowEQCutoff(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall put_HighEQGain(uint8_t) noexcept = 0;
            virtual int32_t __stdcall get_HighEQGain(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall put_HighEQCutoff(uint8_t) noexcept = 0;
            virtual int32_t __stdcall get_HighEQCutoff(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall put_RoomFilterFreq(double) noexcept = 0;
            virtual int32_t __stdcall get_RoomFilterFreq(double*) noexcept = 0;
            virtual int32_t __stdcall put_RoomFilterMain(double) noexcept = 0;
            virtual int32_t __stdcall get_RoomFilterMain(double*) noexcept = 0;
            virtual int32_t __stdcall put_RoomFilterHF(double) noexcept = 0;
            virtual int32_t __stdcall get_RoomFilterHF(double*) noexcept = 0;
            virtual int32_t __stdcall put_ReflectionsGain(double) noexcept = 0;
            virtual int32_t __stdcall get_ReflectionsGain(double*) noexcept = 0;
            virtual int32_t __stdcall put_ReverbGain(double) noexcept = 0;
            virtual int32_t __stdcall get_ReverbGain(double*) noexcept = 0;
            virtual int32_t __stdcall put_DecayTime(double) noexcept = 0;
            virtual int32_t __stdcall get_DecayTime(double*) noexcept = 0;
            virtual int32_t __stdcall put_Density(double) noexcept = 0;
            virtual int32_t __stdcall get_Density(double*) noexcept = 0;
            virtual int32_t __stdcall put_RoomSize(double) noexcept = 0;
            virtual int32_t __stdcall get_RoomSize(double*) noexcept = 0;
            virtual int32_t __stdcall put_DisableLateField(bool) noexcept = 0;
            virtual int32_t __stdcall get_DisableLateField(bool*) noexcept = 0;
        };
    };
    template <> struct abi<llm:OS::Media::Audio::IReverbEffectDefinitionFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<llm:OS::Media::Audio::ISetDefaultSpatialAudioFormatResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<llm:OS::Media::Audio::ISpatialAudioDeviceConfiguration>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DeviceId(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsSpatialAudioSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall IsSpatialAudioFormatSupported(void*, bool*) noexcept = 0;
            virtual int32_t __stdcall get_ActiveSpatialAudioFormat(void**) noexcept = 0;
            virtual int32_t __stdcall get_DefaultSpatialAudioFormat(void**) noexcept = 0;
            virtual int32_t __stdcall SetDefaultSpatialAudioFormatAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall add_ConfigurationChanged(void*, llm::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ConfigurationChanged(llm::event_token) noexcept = 0;
        };
    };
    template <> struct abi<llm:OS::Media::Audio::ISpatialAudioDeviceConfigurationStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetForDeviceId(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<llm:OS::Media::Audio::ISpatialAudioFormatConfiguration>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ReportLicenseChangedAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall ReportConfigurationChangedAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall get_MixedRealityExclusiveModePolicy(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_MixedRealityExclusiveModePolicy(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<llm:OS::Media::Audio::ISpatialAudioFormatConfigurationStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDefault(void**) noexcept = 0;
        };
    };
    template <> struct abi<llm:OS::Media::Audio::ISpatialAudioFormatSubtypeStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_WindowsSonic(void**) noexcept = 0;
            virtual int32_t __stdcall get_DolbyAtmosForHeadphones(void**) noexcept = 0;
            virtual int32_t __stdcall get_DolbyAtmosForHomeTheater(void**) noexcept = 0;
            virtual int32_t __stdcall get_DolbyAtmosForSpeakers(void**) noexcept = 0;
            virtual int32_t __stdcall get_DTSHeadphoneX(void**) noexcept = 0;
            virtual int32_t __stdcall get_DTSXUltra(void**) noexcept = 0;
        };
    };
    template <> struct abi<llm:OS::Media::Audio::ISpatialAudioFormatSubtypeStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DTSXForHomeTheater(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Media_Audio_IAudioDeviceInputNode
    {
        [[nodiscard]] LLM_IMPL_AUTO(llm:OS::Devices::Enumeration::DeviceInformation) Device() const;
    };
    template <> struct consume<llm:OS::Media::Audio::IAudioDeviceInputNode>
    {
        template <typename D> using type = consume_Windows_Media_Audio_IAudioDeviceInputNode<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_IAudioDeviceOutputNode
    {
        [[nodiscard]] LLM_IMPL_AUTO(llm:OS::Devices::Enumeration::DeviceInformation) Device() const;
    };
    template <> struct consume<llm:OS::Media::Audio::IAudioDeviceOutputNode>
    {
        template <typename D> using type = consume_Windows_Media_Audio_IAudioDeviceOutputNode<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_IAudioFileInputNode
    {
        LLM_IMPL_AUTO(void) PlaybackSpeedFactor(double value) const;
        [[nodiscard]] LLM_IMPL_AUTO(double) PlaybackSpeedFactor() const;
        [[nodiscard]] LLM_IMPL_AUTO(llm:OS::Foundation::TimeSpan) Position() const;
        LLM_IMPL_AUTO(void) Seek(llm:OS::Foundation::TimeSpan const& position) const;
        [[nodiscard]] LLM_IMPL_AUTO(llm:OS::Foundation::IReference<llm:OS::Foundation::TimeSpan>) StartTime() const;
        LLM_IMPL_AUTO(void) StartTime(llm:OS::Foundation::IReference<llm:OS::Foundation::TimeSpan> const& value) const;
        [[nodiscard]] LLM_IMPL_AUTO(llm:OS::Foundation::IReference<llm:OS::Foundation::TimeSpan>) EndTime() const;
        LLM_IMPL_AUTO(void) EndTime(llm:OS::Foundation::IReference<llm:OS::Foundation::TimeSpan> const& value) const;
        [[nodiscard]] LLM_IMPL_AUTO(llm:OS::Foundation::IReference<int32_t>) LoopCount() const;
        LLM_IMPL_AUTO(void) LoopCount(llm:OS::Foundation::IReference<int32_t> const& value) const;
        [[nodiscard]] LLM_IMPL_AUTO(llm:OS::Foundation::TimeSpan) Duration() const;
        [[nodiscard]] LLM_IMPL_AUTO(llm:OS::Storage::StorageFile) SourceFile() const;
        LLM_IMPL_AUTO(llm::event_token) FileCompleted(llm:OS::Foundation::TypedEventHandler<llm:OS::Media::Audio::AudioFileInputNode, llm:OS::Foundation::IInspectable> const& handler) const;
        using FileCompleted_revoker = impl::event_revoker<llm:OS::Media::Audio::IAudioFileInputNode, &impl::abi_t<llm:OS::Media::Audio::IAudioFileInputNode>::remove_FileCompleted>;
        [[nodiscard]] FileCompleted_revoker FileCompleted(auto_revoke_t, llm:OS::Foundation::TypedEventHandler<llm:OS::Media::Audio::AudioFileInputNode, llm:OS::Foundation::IInspectable> const& handler) const;
        LLM_IMPL_AUTO(void) FileCompleted(llm::event_token const& token) const noexcept;
    };
    template <> struct consume<llm:OS::Media::Audio::IAudioFileInputNode>
    {
        template <typename D> using type = consume_Windows_Media_Audio_IAudioFileInputNode<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_IAudioFileOutputNode
    {
        [[nodiscard]] LLM_IMPL_AUTO(llm:OS::Storage::IStorageFile) File() const;
        [[nodiscard]] LLM_IMPL_AUTO(llm:OS::Media::MediaProperties::MediaEncodingProfile) FileEncodingProfile() const;
        LLM_IMPL_AUTO(llm:OS::Foundation::IAsyncOperation<llm:OS::Media::Transcoding::TranscodeFailureReason>) FinalizeAsync() const;
    };
    template <> struct consume<llm:OS::Media::Audio::IAudioFileOutputNode>
    {
        template <typename D> using type = consume_Windows_Media_Audio_IAudioFileOutputNode<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_IAudioFrameCompletedEventArgs
    {
        [[nodiscard]] LLM_IMPL_AUTO(llm:OS::Media::AudioFrame) Frame() const;
    };
    template <> struct consume<llm:OS::Media::Audio::IAudioFrameCompletedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Audio_IAudioFrameCompletedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_IAudioFrameInputNode
    {
        LLM_IMPL_AUTO(void) PlaybackSpeedFactor(double value) const;
        [[nodiscard]] LLM_IMPL_AUTO(double) PlaybackSpeedFactor() const;
        LLM_IMPL_AUTO(void) AddFrame(llm:OS::Media::AudioFrame const& frame) const;
        LLM_IMPL_AUTO(void) DiscardQueuedFrames() const;
        [[nodiscard]] LLM_IMPL_AUTO(uint64_t) QueuedSampleCount() const;
        LLM_IMPL_AUTO(llm::event_token) AudioFrameCompleted(llm:OS::Foundation::TypedEventHandler<llm:OS::Media::Audio::AudioFrameInputNode, llm:OS::Media::Audio::AudioFrameCompletedEventArgs> const& handler) const;
        using AudioFrameCompleted_revoker = impl::event_revoker<llm:OS::Media::Audio::IAudioFrameInputNode, &impl::abi_t<llm:OS::Media::Audio::IAudioFrameInputNode>::remove_AudioFrameCompleted>;
        [[nodiscard]] AudioFrameCompleted_revoker AudioFrameCompleted(auto_revoke_t, llm:OS::Foundation::TypedEventHandler<llm:OS::Media::Audio::AudioFrameInputNode, llm:OS::Media::Audio::AudioFrameCompletedEventArgs> const& handler) const;
        LLM_IMPL_AUTO(void) AudioFrameCompleted(llm::event_token const& token) const noexcept;
        LLM_IMPL_AUTO(llm::event_token) QuantumStarted(llm:OS::Foundation::TypedEventHandler<llm:OS::Media::Audio::AudioFrameInputNode, llm:OS::Media::Audio::FrameInputNodeQuantumStartedEventArgs> const& handler) const;
        using QuantumStarted_revoker = impl::event_revoker<llm:OS::Media::Audio::IAudioFrameInputNode, &impl::abi_t<llm:OS::Media::Audio::IAudioFrameInputNode>::remove_QuantumStarted>;
        [[nodiscard]] QuantumStarted_revoker QuantumStarted(auto_revoke_t, llm:OS::Foundation::TypedEventHandler<llm:OS::Media::Audio::AudioFrameInputNode, llm:OS::Media::Audio::FrameInputNodeQuantumStartedEventArgs> const& handler) const;
        LLM_IMPL_AUTO(void) QuantumStarted(llm::event_token const& token) const noexcept;
    };
    template <> struct consume<llm:OS::Media::Audio::IAudioFrameInputNode>
    {
        template <typename D> using type = consume_Windows_Media_Audio_IAudioFrameInputNode<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_IAudioFrameOutputNode
    {
        LLM_IMPL_AUTO(llm:OS::Media::AudioFrame) GetFrame() const;
    };
    template <> struct consume<llm:OS::Media::Audio::IAudioFrameOutputNode>
    {
        template <typename D> using type = consume_Windows_Media_Audio_IAudioFrameOutputNode<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_IAudioGraph
    {
        LLM_IMPL_AUTO(llm:OS::Media::Audio::AudioFrameInputNode) CreateFrameInputNode() const;
        LLM_IMPL_AUTO(llm:OS::Media::Audio::AudioFrameInputNode) CreateFrameInputNode(llm:OS::Media::MediaProperties::AudioEncodingProperties const& encodingProperties) const;
        LLM_IMPL_AUTO(llm:OS::Foundation::IAsyncOperation<llm:OS::Media::Audio::CreateAudioDeviceInputNodeResult>) CreateDeviceInputNodeAsync(llm:OS::Media::Capture::MediaCategory const& category) const;
        LLM_IMPL_AUTO(llm:OS::Foundation::IAsyncOperation<llm:OS::Media::Audio::CreateAudioDeviceInputNodeResult>) CreateDeviceInputNodeAsync(llm:OS::Media::Capture::MediaCategory const& category, llm:OS::Media::MediaProperties::AudioEncodingProperties const& encodingProperties) const;
        LLM_IMPL_AUTO(llm:OS::Foundation::IAsyncOperation<llm:OS::Media::Audio::CreateAudioDeviceInputNodeResult>) CreateDeviceInputNodeAsync(llm:OS::Media::Capture::MediaCategory const& category, llm:OS::Media::MediaProperties::AudioEncodingProperties const& encodingProperties, llm:OS::Devices::Enumeration::DeviceInformation const& device) const;
        LLM_IMPL_AUTO(llm:OS::Media::Audio::AudioFrameOutputNode) CreateFrameOutputNode() const;
        LLM_IMPL_AUTO(llm:OS::Media::Audio::AudioFrameOutputNode) CreateFrameOutputNode(llm:OS::Media::MediaProperties::AudioEncodingProperties const& encodingProperties) const;
        LLM_IMPL_AUTO(llm:OS::Foundation::IAsyncOperation<llm:OS::Media::Audio::CreateAudioDeviceOutputNodeResult>) CreateDeviceOutputNodeAsync() const;
        LLM_IMPL_AUTO(llm:OS::Foundation::IAsyncOperation<llm:OS::Media::Audio::CreateAudioFileInputNodeResult>) CreateFileInputNodeAsync(llm:OS::Storage::IStorageFile const& file) const;
        LLM_IMPL_AUTO(llm:OS::Foundation::IAsyncOperation<llm:OS::Media::Audio::CreateAudioFileOutputNodeResult>) CreateFileOutputNodeAsync(llm:OS::Storage::IStorageFile const& file) const;
        LLM_IMPL_AUTO(llm:OS::Foundation::IAsyncOperation<llm:OS::Media::Audio::CreateAudioFileOutputNodeResult>) CreateFileOutputNodeAsync(llm:OS::Storage::IStorageFile const& file, llm:OS::Media::MediaProperties::MediaEncodingProfile const& fileEncodingProfile) const;
        LLM_IMPL_AUTO(llm:OS::Media::Audio::AudioSubmixNode) CreateSubmixNode() const;
        LLM_IMPL_AUTO(llm:OS::Media::Audio::AudioSubmixNode) CreateSubmixNode(llm:OS::Media::MediaProperties::AudioEncodingProperties const& encodingProperties) const;
        LLM_IMPL_AUTO(void) Start() const;
        LLM_IMPL_AUTO(void) Stop() const;
        LLM_IMPL_AUTO(void) ResetAllNodes() const;
        LLM_IMPL_AUTO(llm::event_token) QuantumStarted(llm:OS::Foundation::TypedEventHandler<llm:OS::Media::Audio::AudioGraph, llm:OS::Foundation::IInspectable> const& handler) const;
        using QuantumStarted_revoker = impl::event_revoker<llm:OS::Media::Audio::IAudioGraph, &impl::abi_t<llm:OS::Media::Audio::IAudioGraph>::remove_QuantumStarted>;
        [[nodiscard]] QuantumStarted_revoker QuantumStarted(auto_revoke_t, llm:OS::Foundation::TypedEventHandler<llm:OS::Media::Audio::AudioGraph, llm:OS::Foundation::IInspectable> const& handler) const;
        LLM_IMPL_AUTO(void) QuantumStarted(llm::event_token const& token) const noexcept;
        LLM_IMPL_AUTO(llm::event_token) QuantumProcessed(llm:OS::Foundation::TypedEventHandler<llm:OS::Media::Audio::AudioGraph, llm:OS::Foundation::IInspectable> const& handler) const;
        using QuantumProcessed_revoker = impl::event_revoker<llm:OS::Media::Audio::IAudioGraph, &impl::abi_t<llm:OS::Media::Audio::IAudioGraph>::remove_QuantumProcessed>;
        [[nodiscard]] QuantumProcessed_revoker QuantumProcessed(auto_revoke_t, llm:OS::Foundation::TypedEventHandler<llm:OS::Media::Audio::AudioGraph, llm:OS::Foundation::IInspectable> const& handler) const;
        LLM_IMPL_AUTO(void) QuantumProcessed(llm::event_token const& token) const noexcept;
        LLM_IMPL_AUTO(llm::event_token) UnrecoverableErrorOccurred(llm:OS::Foundation::TypedEventHandler<llm:OS::Media::Audio::AudioGraph, llm:OS::Media::Audio::AudioGraphUnrecoverableErrorOccurredEventArgs> const& handler) const;
        using UnrecoverableErrorOccurred_revoker = impl::event_revoker<llm:OS::Media::Audio::IAudioGraph, &impl::abi_t<llm:OS::Media::Audio::IAudioGraph>::remove_UnrecoverableErrorOccurred>;
        [[nodiscard]] UnrecoverableErrorOccurred_revoker UnrecoverableErrorOccurred(auto_revoke_t, llm:OS::Foundation::TypedEventHandler<llm:OS::Media::Audio::AudioGraph, llm:OS::Media::Audio::AudioGraphUnrecoverableErrorOccurredEventArgs> const& handler) const;
        LLM_IMPL_AUTO(void) UnrecoverableErrorOccurred(llm::event_token const& token) const noexcept;
        [[nodiscard]] LLM_IMPL_AUTO(uint64_t) CompletedQuantumCount() const;
        [[nodiscard]] LLM_IMPL_AUTO(llm:OS::Media::MediaProperties::AudioEncodingProperties) EncodingProperties() const;
        [[nodiscard]] LLM_IMPL_AUTO(int32_t) LatencyInSamples() const;
        [[nodiscard]] LLM_IMPL_AUTO(llm:OS::Devices::Enumeration::DeviceInformation) PrimaryRenderDevice() const;
        [[nodiscard]] LLM_IMPL_AUTO(llm:OS::Media::AudioProcessing) RenderDeviceAudioProcessing() const;
        [[nodiscard]] LLM_IMPL_AUTO(int32_t) SamplesPerQuantum() const;
    };
    template <> struct consume<llm:OS::Media::Audio::IAudioGraph>
    {
        template <typename D> using type = consume_Windows_Media_Audio_IAudioGraph<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_IAudioGraph2
    {
        LLM_IMPL_AUTO(llm:OS::Media::Audio::AudioFrameInputNode) CreateFrameInputNode(llm:OS::Media::MediaProperties::AudioEncodingProperties const& encodingProperties, llm:OS::Media::Audio::AudioNodeEmitter const& emitter) const;
        LLM_IMPL_AUTO(llm:OS::Foundation::IAsyncOperation<llm:OS::Media::Audio::CreateAudioDeviceInputNodeResult>) CreateDeviceInputNodeAsync(llm:OS::Media::Capture::MediaCategory const& category, llm:OS::Media::MediaProperties::AudioEncodingProperties const& encodingProperties, llm:OS::Devices::Enumeration::DeviceInformation const& device, llm:OS::Media::Audio::AudioNodeEmitter const& emitter) const;
        LLM_IMPL_AUTO(llm:OS::Foundation::IAsyncOperation<llm:OS::Media::Audio::CreateAudioFileInputNodeResult>) CreateFileInputNodeAsync(llm:OS::Storage::IStorageFile const& file, llm:OS::Media::Audio::AudioNodeEmitter const& emitter) const;
        LLM_IMPL_AUTO(llm:OS::Media::Audio::AudioSubmixNode) CreateSubmixNode(llm:OS::Media::MediaProperties::AudioEncodingProperties const& encodingProperties, llm:OS::Media::Audio::AudioNodeEmitter const& emitter) const;
        LLM_IMPL_AUTO(llm:OS::Media::Audio::AudioGraphBatchUpdater) CreateBatchUpdater() const;
    };
    template <> struct consume<llm:OS::Media::Audio::IAudioGraph2>
    {
        template <typename D> using type = consume_Windows_Media_Audio_IAudioGraph2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_IAudioGraph3
    {
        LLM_IMPL_AUTO(llm:OS::Foundation::IAsyncOperation<llm:OS::Media::Audio::CreateMediaSourceAudioInputNodeResult>) CreateMediaSourceAudioInputNodeAsync(llm:OS::Media::Core::MediaSource const& mediaSource) const;
        LLM_IMPL_AUTO(llm:OS::Foundation::IAsyncOperation<llm:OS::Media::Audio::CreateMediaSourceAudioInputNodeResult>) CreateMediaSourceAudioInputNodeAsync(llm:OS::Media::Core::MediaSource const& mediaSource, llm:OS::Media::Audio::AudioNodeEmitter const& emitter) const;
    };
    template <> struct consume<llm:OS::Media::Audio::IAudioGraph3>
    {
        template <typename D> using type = consume_Windows_Media_Audio_IAudioGraph3<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_IAudioGraphConnection
    {
        [[nodiscard]] LLM_IMPL_AUTO(llm:OS::Media::Audio::IAudioNode) Destination() const;
        LLM_IMPL_AUTO(void) Gain(double value) const;
        [[nodiscard]] LLM_IMPL_AUTO(double) Gain() const;
    };
    template <> struct consume<llm:OS::Media::Audio::IAudioGraphConnection>
    {
        template <typename D> using type = consume_Windows_Media_Audio_IAudioGraphConnection<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_IAudioGraphSettings
    {
        [[nodiscard]] LLM_IMPL_AUTO(llm:OS::Media::MediaProperties::AudioEncodingProperties) EncodingProperties() const;
        LLM_IMPL_AUTO(void) EncodingProperties(llm:OS::Media::MediaProperties::AudioEncodingProperties const& value) const;
        [[nodiscard]] LLM_IMPL_AUTO(llm:OS::Devices::Enumeration::DeviceInformation) PrimaryRenderDevice() const;
        LLM_IMPL_AUTO(void) PrimaryRenderDevice(llm:OS::Devices::Enumeration::DeviceInformation const& value) const;
        [[nodiscard]] LLM_IMPL_AUTO(llm:OS::Media::Audio::QuantumSizeSelectionMode) QuantumSizeSelectionMode() const;
        LLM_IMPL_AUTO(void) QuantumSizeSelectionMode(llm:OS::Media::Audio::QuantumSizeSelectionMode const& value) const;
        [[nodiscard]] LLM_IMPL_AUTO(int32_t) DesiredSamplesPerQuantum() const;
        LLM_IMPL_AUTO(void) DesiredSamplesPerQuantum(int32_t value) const;
        [[nodiscard]] LLM_IMPL_AUTO(llm:OS::Media::Render::AudioRenderCategory) AudioRenderCategory() const;
        LLM_IMPL_AUTO(void) AudioRenderCategory(llm:OS::Media::Render::AudioRenderCategory const& value) const;
        [[nodiscard]] LLM_IMPL_AUTO(llm:OS::Media::AudioProcessing) DesiredRenderDeviceAudioProcessing() const;
        LLM_IMPL_AUTO(void) DesiredRenderDeviceAudioProcessing(llm:OS::Media::AudioProcessing const& value) const;
    };
    template <> struct consume<llm:OS::Media::Audio::IAudioGraphSettings>
    {
        template <typename D> using type = consume_Windows_Media_Audio_IAudioGraphSettings<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_IAudioGraphSettings2
    {
        LLM_IMPL_AUTO(void) MaxPlaybackSpeedFactor(double value) const;
        [[nodiscard]] LLM_IMPL_AUTO(double) MaxPlaybackSpeedFactor() const;
    };
    template <> struct consume<llm:OS::Media::Audio::IAudioGraphSettings2>
    {
        template <typename D> using type = consume_Windows_Media_Audio_IAudioGraphSettings2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_IAudioGraphSettingsFactory
    {
        LLM_IMPL_AUTO(llm:OS::Media::Audio::AudioGraphSettings) Create(llm:OS::Media::Render::AudioRenderCategory const& audioRenderCategory) const;
    };
    template <> struct consume<llm:OS::Media::Audio::IAudioGraphSettingsFactory>
    {
        template <typename D> using type = consume_Windows_Media_Audio_IAudioGraphSettingsFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_IAudioGraphStatics
    {
        LLM_IMPL_AUTO(llm:OS::Foundation::IAsyncOperation<llm:OS::Media::Audio::CreateAudioGraphResult>) CreateAsync(llm:OS::Media::Audio::AudioGraphSettings const& settings) const;
    };
    template <> struct consume<llm:OS::Media::Audio::IAudioGraphStatics>
    {
        template <typename D> using type = consume_Windows_Media_Audio_IAudioGraphStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_IAudioGraphUnrecoverableErrorOccurredEventArgs
    {
        [[nodiscard]] LLM_IMPL_AUTO(llm:OS::Media::Audio::AudioGraphUnrecoverableError) Error() const;
    };
    template <> struct consume<llm:OS::Media::Audio::IAudioGraphUnrecoverableErrorOccurredEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Audio_IAudioGraphUnrecoverableErrorOccurredEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_IAudioInputNode
    {
        [[nodiscard]] LLM_IMPL_AUTO(llm:OS::Foundation::Collections::IVectorView<llm:OS::Media::Audio::AudioGraphConnection>) OutgoingConnections() const;
        LLM_IMPL_AUTO(void) AddOutgoingConnection(llm:OS::Media::Audio::IAudioNode const& destination) const;
        LLM_IMPL_AUTO(void) AddOutgoingConnection(llm:OS::Media::Audio::IAudioNode const& destination, double gain) const;
        LLM_IMPL_AUTO(void) RemoveOutgoingConnection(llm:OS::Media::Audio::IAudioNode const& destination) const;
    };
    template <> struct consume<llm:OS::Media::Audio::IAudioInputNode>
    {
        template <typename D> using type = consume_Windows_Media_Audio_IAudioInputNode<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_IAudioInputNode2
    {
        [[nodiscard]] LLM_IMPL_AUTO(llm:OS::Media::Audio::AudioNodeEmitter) Emitter() const;
    };
    template <> struct consume<llm:OS::Media::Audio::IAudioInputNode2>
    {
        template <typename D> using type = consume_Windows_Media_Audio_IAudioInputNode2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_IAudioNode
    {
        [[nodiscard]] LLM_IMPL_AUTO(llm:OS::Foundation::Collections::IVector<llm:OS::Media::Effects::IAudioEffectDefinition>) EffectDefinitions() const;
        LLM_IMPL_AUTO(void) OutgoingGain(double value) const;
        [[nodiscard]] LLM_IMPL_AUTO(double) OutgoingGain() const;
        [[nodiscard]] LLM_IMPL_AUTO(llm:OS::Media::MediaProperties::AudioEncodingProperties) EncodingProperties() const;
        [[nodiscard]] LLM_IMPL_AUTO(bool) ConsumeInput() const;
        LLM_IMPL_AUTO(void) ConsumeInput(bool value) const;
        LLM_IMPL_AUTO(void) Start() const;
        LLM_IMPL_AUTO(void) Stop() const;
        LLM_IMPL_AUTO(void) Reset() const;
        LLM_IMPL_AUTO(void) DisableEffectsByDefinition(llm:OS::Media::Effects::IAudioEffectDefinition const& definition) const;
        LLM_IMPL_AUTO(void) EnableEffectsByDefinition(llm:OS::Media::Effects::IAudioEffectDefinition const& definition) const;
    };
    template <> struct consume<llm:OS::Media::Audio::IAudioNode>
    {
        template <typename D> using type = consume_Windows_Media_Audio_IAudioNode<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_IAudioNodeEmitter
    {
        [[nodiscard]] LLM_IMPL_AUTO(llm:OS::Foundation::Numerics::float3) Position() const;
        LLM_IMPL_AUTO(void) Position(llm:OS::Foundation::Numerics::float3 const& value) const;
        [[nodiscard]] LLM_IMPL_AUTO(llm:OS::Foundation::Numerics::float3) Direction() const;
        LLM_IMPL_AUTO(void) Direction(llm:OS::Foundation::Numerics::float3 const& value) const;
        [[nodiscard]] LLM_IMPL_AUTO(llm:OS::Media::Audio::AudioNodeEmitterShape) Shape() const;
        [[nodiscard]] LLM_IMPL_AUTO(llm:OS::Media::Audio::AudioNodeEmitterDecayModel) DecayModel() const;
        [[nodiscard]] LLM_IMPL_AUTO(double) Gain() const;
        LLM_IMPL_AUTO(void) Gain(double value) const;
        [[nodiscard]] LLM_IMPL_AUTO(double) DistanceScale() const;
        LLM_IMPL_AUTO(void) DistanceScale(double value) const;
        [[nodiscard]] LLM_IMPL_AUTO(double) DopplerScale() const;
        LLM_IMPL_AUTO(void) DopplerScale(double value) const;
        [[nodiscard]] LLM_IMPL_AUTO(llm:OS::Foundation::Numerics::float3) DopplerVelocity() const;
        LLM_IMPL_AUTO(void) DopplerVelocity(llm:OS::Foundation::Numerics::float3 const& value) const;
        [[nodiscard]] LLM_IMPL_AUTO(bool) IsDopplerDisabled() const;
    };
    template <> struct consume<llm:OS::Media::Audio::IAudioNodeEmitter>
    {
        template <typename D> using type = consume_Windows_Media_Audio_IAudioNodeEmitter<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_IAudioNodeEmitter2
    {
        [[nodiscard]] LLM_IMPL_AUTO(llm:OS::Media::Audio::SpatialAudioModel) SpatialAudioModel() const;
        LLM_IMPL_AUTO(void) SpatialAudioModel(llm:OS::Media::Audio::SpatialAudioModel const& value) const;
    };
    template <> struct consume<llm:OS::Media::Audio::IAudioNodeEmitter2>
    {
        template <typename D> using type = consume_Windows_Media_Audio_IAudioNodeEmitter2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_IAudioNodeEmitterConeProperties
    {
        [[nodiscard]] LLM_IMPL_AUTO(double) InnerAngle() const;
        [[nodiscard]] LLM_IMPL_AUTO(double) OuterAngle() const;
        [[nodiscard]] LLM_IMPL_AUTO(double) OuterAngleGain() const;
    };
    template <> struct consume<llm:OS::Media::Audio::IAudioNodeEmitterConeProperties>
    {
        template <typename D> using type = consume_Windows_Media_Audio_IAudioNodeEmitterConeProperties<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_IAudioNodeEmitterDecayModel
    {
        [[nodiscard]] LLM_IMPL_AUTO(llm:OS::Media::Audio::AudioNodeEmitterDecayKind) Kind() const;
        [[nodiscard]] LLM_IMPL_AUTO(double) MinGain() const;
        [[nodiscard]] LLM_IMPL_AUTO(double) MaxGain() const;
        [[nodiscard]] LLM_IMPL_AUTO(llm:OS::Media::Audio::AudioNodeEmitterNaturalDecayModelProperties) NaturalProperties() const;
    };
    template <> struct consume<llm:OS::Media::Audio::IAudioNodeEmitterDecayModel>
    {
        template <typename D> using type = consume_Windows_Media_Audio_IAudioNodeEmitterDecayModel<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_IAudioNodeEmitterDecayModelStatics
    {
        LLM_IMPL_AUTO(llm:OS::Media::Audio::AudioNodeEmitterDecayModel) CreateNatural(double minGain, double maxGain, double unityGainDistance, double cutoffDistance) const;
        LLM_IMPL_AUTO(llm:OS::Media::Audio::AudioNodeEmitterDecayModel) CreateCustom(double minGain, double maxGain) const;
    };
    template <> struct consume<llm:OS::Media::Audio::IAudioNodeEmitterDecayModelStatics>
    {
        template <typename D> using type = consume_Windows_Media_Audio_IAudioNodeEmitterDecayModelStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_IAudioNodeEmitterFactory
    {
        LLM_IMPL_AUTO(llm:OS::Media::Audio::AudioNodeEmitter) CreateAudioNodeEmitter(llm:OS::Media::Audio::AudioNodeEmitterShape const& shape, llm:OS::Media::Audio::AudioNodeEmitterDecayModel const& decayModel, llm:OS::Media::Audio::AudioNodeEmitterSettings const& settings) const;
    };
    template <> struct consume<llm:OS::Media::Audio::IAudioNodeEmitterFactory>
    {
        template <typename D> using type = consume_Windows_Media_Audio_IAudioNodeEmitterFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_IAudioNodeEmitterNaturalDecayModelProperties
    {
        [[nodiscard]] LLM_IMPL_AUTO(double) UnityGainDistance() const;
        [[nodiscard]] LLM_IMPL_AUTO(double) CutoffDistance() const;
    };
    template <> struct consume<llm:OS::Media::Audio::IAudioNodeEmitterNaturalDecayModelProperties>
    {
        template <typename D> using type = consume_Windows_Media_Audio_IAudioNodeEmitterNaturalDecayModelProperties<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_IAudioNodeEmitterShape
    {
        [[nodiscard]] LLM_IMPL_AUTO(llm:OS::Media::Audio::AudioNodeEmitterShapeKind) Kind() const;
        [[nodiscard]] LLM_IMPL_AUTO(llm:OS::Media::Audio::AudioNodeEmitterConeProperties) ConeProperties() const;
    };
    template <> struct consume<llm:OS::Media::Audio::IAudioNodeEmitterShape>
    {
        template <typename D> using type = consume_Windows_Media_Audio_IAudioNodeEmitterShape<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_IAudioNodeEmitterShapeStatics
    {
        LLM_IMPL_AUTO(llm:OS::Media::Audio::AudioNodeEmitterShape) CreateCone(double innerAngle, double outerAngle, double outerAngleGain) const;
        LLM_IMPL_AUTO(llm:OS::Media::Audio::AudioNodeEmitterShape) CreateOmnidirectional() const;
    };
    template <> struct consume<llm:OS::Media::Audio::IAudioNodeEmitterShapeStatics>
    {
        template <typename D> using type = consume_Windows_Media_Audio_IAudioNodeEmitterShapeStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_IAudioNodeListener
    {
        [[nodiscard]] LLM_IMPL_AUTO(llm:OS::Foundation::Numerics::float3) Position() const;
        LLM_IMPL_AUTO(void) Position(llm:OS::Foundation::Numerics::float3 const& value) const;
        [[nodiscard]] LLM_IMPL_AUTO(llm:OS::Foundation::Numerics::quaternion) Orientation() const;
        LLM_IMPL_AUTO(void) Orientation(llm:OS::Foundation::Numerics::quaternion const& value) const;
        [[nodiscard]] LLM_IMPL_AUTO(double) SpeedOfSound() const;
        LLM_IMPL_AUTO(void) SpeedOfSound(double value) const;
        [[nodiscard]] LLM_IMPL_AUTO(llm:OS::Foundation::Numerics::float3) DopplerVelocity() const;
        LLM_IMPL_AUTO(void) DopplerVelocity(llm:OS::Foundation::Numerics::float3 const& value) const;
    };
    template <> struct consume<llm:OS::Media::Audio::IAudioNodeListener>
    {
        template <typename D> using type = consume_Windows_Media_Audio_IAudioNodeListener<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_IAudioNodeWithListener
    {
        LLM_IMPL_AUTO(void) Listener(llm:OS::Media::Audio::AudioNodeListener const& value) const;
        [[nodiscard]] LLM_IMPL_AUTO(llm:OS::Media::Audio::AudioNodeListener) Listener() const;
    };
    template <> struct consume<llm:OS::Media::Audio::IAudioNodeWithListener>
    {
        template <typename D> using type = consume_Windows_Media_Audio_IAudioNodeWithListener<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_IAudioPlaybackConnection
    {
        LLM_IMPL_AUTO(void) Start() const;
        LLM_IMPL_AUTO(llm:OS::Foundation::IAsyncAction) StartAsync() const;
        [[nodiscard]] LLM_IMPL_AUTO(hstring) DeviceId() const;
        [[nodiscard]] LLM_IMPL_AUTO(llm:OS::Media::Audio::AudioPlaybackConnectionState) State() const;
        LLM_IMPL_AUTO(llm:OS::Media::Audio::AudioPlaybackConnectionOpenResult) Open() const;
        LLM_IMPL_AUTO(llm:OS::Foundation::IAsyncOperation<llm:OS::Media::Audio::AudioPlaybackConnectionOpenResult>) OpenAsync() const;
        LLM_IMPL_AUTO(llm::event_token) StateChanged(llm:OS::Foundation::TypedEventHandler<llm:OS::Media::Audio::AudioPlaybackConnection, llm:OS::Foundation::IInspectable> const& handler) const;
        using StateChanged_revoker = impl::event_revoker<llm:OS::Media::Audio::IAudioPlaybackConnection, &impl::abi_t<llm:OS::Media::Audio::IAudioPlaybackConnection>::remove_StateChanged>;
        [[nodiscard]] StateChanged_revoker StateChanged(auto_revoke_t, llm:OS::Foundation::TypedEventHandler<llm:OS::Media::Audio::AudioPlaybackConnection, llm:OS::Foundation::IInspectable> const& handler) const;
        LLM_IMPL_AUTO(void) StateChanged(llm::event_token const& token) const noexcept;
    };
    template <> struct consume<llm:OS::Media::Audio::IAudioPlaybackConnection>
    {
        template <typename D> using type = consume_Windows_Media_Audio_IAudioPlaybackConnection<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_IAudioPlaybackConnectionOpenResult
    {
        [[nodiscard]] LLM_IMPL_AUTO(llm:OS::Media::Audio::AudioPlaybackConnectionOpenResultStatus) Status() const;
        [[nodiscard]] LLM_IMPL_AUTO(llm::hresult) ExtendedError() const;
    };
    template <> struct consume<llm:OS::Media::Audio::IAudioPlaybackConnectionOpenResult>
    {
        template <typename D> using type = consume_Windows_Media_Audio_IAudioPlaybackConnectionOpenResult<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_IAudioPlaybackConnectionStatics
    {
        LLM_IMPL_AUTO(hstring) GetDeviceSelector() const;
        LLM_IMPL_AUTO(llm:OS::Media::Audio::AudioPlaybackConnection) TryCreateFromId(param::hstring const& id) const;
    };
    template <> struct consume<llm:OS::Media::Audio::IAudioPlaybackConnectionStatics>
    {
        template <typename D> using type = consume_Windows_Media_Audio_IAudioPlaybackConnectionStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_IAudioStateMonitor
    {
        LLM_IMPL_AUTO(llm::event_token) SoundLevelChanged(llm:OS::Foundation::TypedEventHandler<llm:OS::Media::Audio::AudioStateMonitor, llm:OS::Foundation::IInspectable> const& handler) const;
        using SoundLevelChanged_revoker = impl::event_revoker<llm:OS::Media::Audio::IAudioStateMonitor, &impl::abi_t<llm:OS::Media::Audio::IAudioStateMonitor>::remove_SoundLevelChanged>;
        [[nodiscard]] SoundLevelChanged_revoker SoundLevelChanged(auto_revoke_t, llm:OS::Foundation::TypedEventHandler<llm:OS::Media::Audio::AudioStateMonitor, llm:OS::Foundation::IInspectable> const& handler) const;
        LLM_IMPL_AUTO(void) SoundLevelChanged(llm::event_token const& token) const noexcept;
        [[nodiscard]] LLM_IMPL_AUTO(llm:OS::Media::SoundLevel) SoundLevel() const;
    };
    template <> struct consume<llm:OS::Media::Audio::IAudioStateMonitor>
    {
        template <typename D> using type = consume_Windows_Media_Audio_IAudioStateMonitor<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_IAudioStateMonitorStatics
    {
        LLM_IMPL_AUTO(llm:OS::Media::Audio::AudioStateMonitor) CreateForRenderMonitoring() const;
        LLM_IMPL_AUTO(llm:OS::Media::Audio::AudioStateMonitor) CreateForRenderMonitoring(llm:OS::Media::Render::AudioRenderCategory const& category) const;
        LLM_IMPL_AUTO(llm:OS::Media::Audio::AudioStateMonitor) CreateForRenderMonitoring(llm:OS::Media::Render::AudioRenderCategory const& category, llm:OS::Media::Devices::AudioDeviceRole const& role) const;
        LLM_IMPL_AUTO(llm:OS::Media::Audio::AudioStateMonitor) CreateForRenderMonitoringWithCategoryAndDeviceId(llm:OS::Media::Render::AudioRenderCategory const& category, param::hstring const& deviceId) const;
        LLM_IMPL_AUTO(llm:OS::Media::Audio::AudioStateMonitor) CreateForCaptureMonitoring() const;
        LLM_IMPL_AUTO(llm:OS::Media::Audio::AudioStateMonitor) CreateForCaptureMonitoring(llm:OS::Media::Capture::MediaCategory const& category) const;
        LLM_IMPL_AUTO(llm:OS::Media::Audio::AudioStateMonitor) CreateForCaptureMonitoring(llm:OS::Media::Capture::MediaCategory const& category, llm:OS::Media::Devices::AudioDeviceRole const& role) const;
        LLM_IMPL_AUTO(llm:OS::Media::Audio::AudioStateMonitor) CreateForCaptureMonitoringWithCategoryAndDeviceId(llm:OS::Media::Capture::MediaCategory const& category, param::hstring const& deviceId) const;
    };
    template <> struct consume<llm:OS::Media::Audio::IAudioStateMonitorStatics>
    {
        template <typename D> using type = consume_Windows_Media_Audio_IAudioStateMonitorStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_ICreateAudioDeviceInputNodeResult
    {
        [[nodiscard]] LLM_IMPL_AUTO(llm:OS::Media::Audio::AudioDeviceNodeCreationStatus) Status() const;
        [[nodiscard]] LLM_IMPL_AUTO(llm:OS::Media::Audio::AudioDeviceInputNode) DeviceInputNode() const;
    };
    template <> struct consume<llm:OS::Media::Audio::ICreateAudioDeviceInputNodeResult>
    {
        template <typename D> using type = consume_Windows_Media_Audio_ICreateAudioDeviceInputNodeResult<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_ICreateAudioDeviceInputNodeResult2
    {
        [[nodiscard]] LLM_IMPL_AUTO(llm::hresult) ExtendedError() const;
    };
    template <> struct consume<llm:OS::Media::Audio::ICreateAudioDeviceInputNodeResult2>
    {
        template <typename D> using type = consume_Windows_Media_Audio_ICreateAudioDeviceInputNodeResult2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_ICreateAudioDeviceOutputNodeResult
    {
        [[nodiscard]] LLM_IMPL_AUTO(llm:OS::Media::Audio::AudioDeviceNodeCreationStatus) Status() const;
        [[nodiscard]] LLM_IMPL_AUTO(llm:OS::Media::Audio::AudioDeviceOutputNode) DeviceOutputNode() const;
    };
    template <> struct consume<llm:OS::Media::Audio::ICreateAudioDeviceOutputNodeResult>
    {
        template <typename D> using type = consume_Windows_Media_Audio_ICreateAudioDeviceOutputNodeResult<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_ICreateAudioDeviceOutputNodeResult2
    {
        [[nodiscard]] LLM_IMPL_AUTO(llm::hresult) ExtendedError() const;
    };
    template <> struct consume<llm:OS::Media::Audio::ICreateAudioDeviceOutputNodeResult2>
    {
        template <typename D> using type = consume_Windows_Media_Audio_ICreateAudioDeviceOutputNodeResult2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_ICreateAudioFileInputNodeResult
    {
        [[nodiscard]] LLM_IMPL_AUTO(llm:OS::Media::Audio::AudioFileNodeCreationStatus) Status() const;
        [[nodiscard]] LLM_IMPL_AUTO(llm:OS::Media::Audio::AudioFileInputNode) FileInputNode() const;
    };
    template <> struct consume<llm:OS::Media::Audio::ICreateAudioFileInputNodeResult>
    {
        template <typename D> using type = consume_Windows_Media_Audio_ICreateAudioFileInputNodeResult<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_ICreateAudioFileInputNodeResult2
    {
        [[nodiscard]] LLM_IMPL_AUTO(llm::hresult) ExtendedError() const;
    };
    template <> struct consume<llm:OS::Media::Audio::ICreateAudioFileInputNodeResult2>
    {
        template <typename D> using type = consume_Windows_Media_Audio_ICreateAudioFileInputNodeResult2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_ICreateAudioFileOutputNodeResult
    {
        [[nodiscard]] LLM_IMPL_AUTO(llm:OS::Media::Audio::AudioFileNodeCreationStatus) Status() const;
        [[nodiscard]] LLM_IMPL_AUTO(llm:OS::Media::Audio::AudioFileOutputNode) FileOutputNode() const;
    };
    template <> struct consume<llm:OS::Media::Audio::ICreateAudioFileOutputNodeResult>
    {
        template <typename D> using type = consume_Windows_Media_Audio_ICreateAudioFileOutputNodeResult<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_ICreateAudioFileOutputNodeResult2
    {
        [[nodiscard]] LLM_IMPL_AUTO(llm::hresult) ExtendedError() const;
    };
    template <> struct consume<llm:OS::Media::Audio::ICreateAudioFileOutputNodeResult2>
    {
        template <typename D> using type = consume_Windows_Media_Audio_ICreateAudioFileOutputNodeResult2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_ICreateAudioGraphResult
    {
        [[nodiscard]] LLM_IMPL_AUTO(llm:OS::Media::Audio::AudioGraphCreationStatus) Status() const;
        [[nodiscard]] LLM_IMPL_AUTO(llm:OS::Media::Audio::AudioGraph) Graph() const;
    };
    template <> struct consume<llm:OS::Media::Audio::ICreateAudioGraphResult>
    {
        template <typename D> using type = consume_Windows_Media_Audio_ICreateAudioGraphResult<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_ICreateAudioGraphResult2
    {
        [[nodiscard]] LLM_IMPL_AUTO(llm::hresult) ExtendedError() const;
    };
    template <> struct consume<llm:OS::Media::Audio::ICreateAudioGraphResult2>
    {
        template <typename D> using type = consume_Windows_Media_Audio_ICreateAudioGraphResult2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_ICreateMediaSourceAudioInputNodeResult
    {
        [[nodiscard]] LLM_IMPL_AUTO(llm:OS::Media::Audio::MediaSourceAudioInputNodeCreationStatus) Status() const;
        [[nodiscard]] LLM_IMPL_AUTO(llm:OS::Media::Audio::MediaSourceAudioInputNode) Node() const;
    };
    template <> struct consume<llm:OS::Media::Audio::ICreateMediaSourceAudioInputNodeResult>
    {
        template <typename D> using type = consume_Windows_Media_Audio_ICreateMediaSourceAudioInputNodeResult<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_ICreateMediaSourceAudioInputNodeResult2
    {
        [[nodiscard]] LLM_IMPL_AUTO(llm::hresult) ExtendedError() const;
    };
    template <> struct consume<llm:OS::Media::Audio::ICreateMediaSourceAudioInputNodeResult2>
    {
        template <typename D> using type = consume_Windows_Media_Audio_ICreateMediaSourceAudioInputNodeResult2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_IEchoEffectDefinition
    {
        LLM_IMPL_AUTO(void) WetDryMix(double value) const;
        [[nodiscard]] LLM_IMPL_AUTO(double) WetDryMix() const;
        LLM_IMPL_AUTO(void) Feedback(double value) const;
        [[nodiscard]] LLM_IMPL_AUTO(double) Feedback() const;
        LLM_IMPL_AUTO(void) Delay(double value) const;
        [[nodiscard]] LLM_IMPL_AUTO(double) Delay() const;
    };
    template <> struct consume<llm:OS::Media::Audio::IEchoEffectDefinition>
    {
        template <typename D> using type = consume_Windows_Media_Audio_IEchoEffectDefinition<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_IEchoEffectDefinitionFactory
    {
        LLM_IMPL_AUTO(llm:OS::Media::Audio::EchoEffectDefinition) Create(llm:OS::Media::Audio::AudioGraph const& audioGraph) const;
    };
    template <> struct consume<llm:OS::Media::Audio::IEchoEffectDefinitionFactory>
    {
        template <typename D> using type = consume_Windows_Media_Audio_IEchoEffectDefinitionFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_IEqualizerBand
    {
        [[nodiscard]] LLM_IMPL_AUTO(double) Bandwidth() const;
        LLM_IMPL_AUTO(void) Bandwidth(double value) const;
        [[nodiscard]] LLM_IMPL_AUTO(double) FrequencyCenter() const;
        LLM_IMPL_AUTO(void) FrequencyCenter(double value) const;
        [[nodiscard]] LLM_IMPL_AUTO(double) Gain() const;
        LLM_IMPL_AUTO(void) Gain(double value) const;
    };
    template <> struct consume<llm:OS::Media::Audio::IEqualizerBand>
    {
        template <typename D> using type = consume_Windows_Media_Audio_IEqualizerBand<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_IEqualizerEffectDefinition
    {
        [[nodiscard]] LLM_IMPL_AUTO(llm:OS::Foundation::Collections::IVectorView<llm:OS::Media::Audio::EqualizerBand>) Bands() const;
    };
    template <> struct consume<llm:OS::Media::Audio::IEqualizerEffectDefinition>
    {
        template <typename D> using type = consume_Windows_Media_Audio_IEqualizerEffectDefinition<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_IEqualizerEffectDefinitionFactory
    {
        LLM_IMPL_AUTO(llm:OS::Media::Audio::EqualizerEffectDefinition) Create(llm:OS::Media::Audio::AudioGraph const& audioGraph) const;
    };
    template <> struct consume<llm:OS::Media::Audio::IEqualizerEffectDefinitionFactory>
    {
        template <typename D> using type = consume_Windows_Media_Audio_IEqualizerEffectDefinitionFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_IFrameInputNodeQuantumStartedEventArgs
    {
        [[nodiscard]] LLM_IMPL_AUTO(int32_t) RequiredSamples() const;
    };
    template <> struct consume<llm:OS::Media::Audio::IFrameInputNodeQuantumStartedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Audio_IFrameInputNodeQuantumStartedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_ILimiterEffectDefinition
    {
        LLM_IMPL_AUTO(void) Release(uint32_t value) const;
        [[nodiscard]] LLM_IMPL_AUTO(uint32_t) Release() const;
        LLM_IMPL_AUTO(void) Loudness(uint32_t value) const;
        [[nodiscard]] LLM_IMPL_AUTO(uint32_t) Loudness() const;
    };
    template <> struct consume<llm:OS::Media::Audio::ILimiterEffectDefinition>
    {
        template <typename D> using type = consume_Windows_Media_Audio_ILimiterEffectDefinition<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_ILimiterEffectDefinitionFactory
    {
        LLM_IMPL_AUTO(llm:OS::Media::Audio::LimiterEffectDefinition) Create(llm:OS::Media::Audio::AudioGraph const& audioGraph) const;
    };
    template <> struct consume<llm:OS::Media::Audio::ILimiterEffectDefinitionFactory>
    {
        template <typename D> using type = consume_Windows_Media_Audio_ILimiterEffectDefinitionFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_IMediaSourceAudioInputNode
    {
        LLM_IMPL_AUTO(void) PlaybackSpeedFactor(double value) const;
        [[nodiscard]] LLM_IMPL_AUTO(double) PlaybackSpeedFactor() const;
        [[nodiscard]] LLM_IMPL_AUTO(llm:OS::Foundation::TimeSpan) Position() const;
        LLM_IMPL_AUTO(void) Seek(llm:OS::Foundation::TimeSpan const& position) const;
        [[nodiscard]] LLM_IMPL_AUTO(llm:OS::Foundation::IReference<llm:OS::Foundation::TimeSpan>) StartTime() const;
        LLM_IMPL_AUTO(void) StartTime(llm:OS::Foundation::IReference<llm:OS::Foundation::TimeSpan> const& value) const;
        [[nodiscard]] LLM_IMPL_AUTO(llm:OS::Foundation::IReference<llm:OS::Foundation::TimeSpan>) EndTime() const;
        LLM_IMPL_AUTO(void) EndTime(llm:OS::Foundation::IReference<llm:OS::Foundation::TimeSpan> const& value) const;
        [[nodiscard]] LLM_IMPL_AUTO(llm:OS::Foundation::IReference<int32_t>) LoopCount() const;
        LLM_IMPL_AUTO(void) LoopCount(llm:OS::Foundation::IReference<int32_t> const& value) const;
        [[nodiscard]] LLM_IMPL_AUTO(llm:OS::Foundation::TimeSpan) Duration() const;
        [[nodiscard]] LLM_IMPL_AUTO(llm:OS::Media::Core::MediaSource) MediaSource() const;
        LLM_IMPL_AUTO(llm::event_token) MediaSourceCompleted(llm:OS::Foundation::TypedEventHandler<llm:OS::Media::Audio::MediaSourceAudioInputNode, llm:OS::Foundation::IInspectable> const& handler) const;
        using MediaSourceCompleted_revoker = impl::event_revoker<llm:OS::Media::Audio::IMediaSourceAudioInputNode, &impl::abi_t<llm:OS::Media::Audio::IMediaSourceAudioInputNode>::remove_MediaSourceCompleted>;
        [[nodiscard]] MediaSourceCompleted_revoker MediaSourceCompleted(auto_revoke_t, llm:OS::Foundation::TypedEventHandler<llm:OS::Media::Audio::MediaSourceAudioInputNode, llm:OS::Foundation::IInspectable> const& handler) const;
        LLM_IMPL_AUTO(void) MediaSourceCompleted(llm::event_token const& token) const noexcept;
    };
    template <> struct consume<llm:OS::Media::Audio::IMediaSourceAudioInputNode>
    {
        template <typename D> using type = consume_Windows_Media_Audio_IMediaSourceAudioInputNode<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_IReverbEffectDefinition
    {
        LLM_IMPL_AUTO(void) WetDryMix(double value) const;
        [[nodiscard]] LLM_IMPL_AUTO(double) WetDryMix() const;
        LLM_IMPL_AUTO(void) ReflectionsDelay(uint32_t value) const;
        [[nodiscard]] LLM_IMPL_AUTO(uint32_t) ReflectionsDelay() const;
        LLM_IMPL_AUTO(void) ReverbDelay(uint8_t value) const;
        [[nodiscard]] LLM_IMPL_AUTO(uint8_t) ReverbDelay() const;
        LLM_IMPL_AUTO(void) RearDelay(uint8_t value) const;
        [[nodiscard]] LLM_IMPL_AUTO(uint8_t) RearDelay() const;
        LLM_IMPL_AUTO(void) PositionLeft(uint8_t value) const;
        [[nodiscard]] LLM_IMPL_AUTO(uint8_t) PositionLeft() const;
        LLM_IMPL_AUTO(void) PositionRight(uint8_t value) const;
        [[nodiscard]] LLM_IMPL_AUTO(uint8_t) PositionRight() const;
        LLM_IMPL_AUTO(void) PositionMatrixLeft(uint8_t value) const;
        [[nodiscard]] LLM_IMPL_AUTO(uint8_t) PositionMatrixLeft() const;
        LLM_IMPL_AUTO(void) PositionMatrixRight(uint8_t value) const;
        [[nodiscard]] LLM_IMPL_AUTO(uint8_t) PositionMatrixRight() const;
        LLM_IMPL_AUTO(void) EarlyDiffusion(uint8_t value) const;
        [[nodiscard]] LLM_IMPL_AUTO(uint8_t) EarlyDiffusion() const;
        LLM_IMPL_AUTO(void) LateDiffusion(uint8_t value) const;
        [[nodiscard]] LLM_IMPL_AUTO(uint8_t) LateDiffusion() const;
        LLM_IMPL_AUTO(void) LowEQGain(uint8_t value) const;
        [[nodiscard]] LLM_IMPL_AUTO(uint8_t) LowEQGain() const;
        LLM_IMPL_AUTO(void) LowEQCutoff(uint8_t value) const;
        [[nodiscard]] LLM_IMPL_AUTO(uint8_t) LowEQCutoff() const;
        LLM_IMPL_AUTO(void) HighEQGain(uint8_t value) const;
        [[nodiscard]] LLM_IMPL_AUTO(uint8_t) HighEQGain() const;
        LLM_IMPL_AUTO(void) HighEQCutoff(uint8_t value) const;
        [[nodiscard]] LLM_IMPL_AUTO(uint8_t) HighEQCutoff() const;
        LLM_IMPL_AUTO(void) RoomFilterFreq(double value) const;
        [[nodiscard]] LLM_IMPL_AUTO(double) RoomFilterFreq() const;
        LLM_IMPL_AUTO(void) RoomFilterMain(double value) const;
        [[nodiscard]] LLM_IMPL_AUTO(double) RoomFilterMain() const;
        LLM_IMPL_AUTO(void) RoomFilterHF(double value) const;
        [[nodiscard]] LLM_IMPL_AUTO(double) RoomFilterHF() const;
        LLM_IMPL_AUTO(void) ReflectionsGain(double value) const;
        [[nodiscard]] LLM_IMPL_AUTO(double) ReflectionsGain() const;
        LLM_IMPL_AUTO(void) ReverbGain(double value) const;
        [[nodiscard]] LLM_IMPL_AUTO(double) ReverbGain() const;
        LLM_IMPL_AUTO(void) DecayTime(double value) const;
        [[nodiscard]] LLM_IMPL_AUTO(double) DecayTime() const;
        LLM_IMPL_AUTO(void) Density(double value) const;
        [[nodiscard]] LLM_IMPL_AUTO(double) Density() const;
        LLM_IMPL_AUTO(void) RoomSize(double value) const;
        [[nodiscard]] LLM_IMPL_AUTO(double) RoomSize() const;
        LLM_IMPL_AUTO(void) DisableLateField(bool value) const;
        [[nodiscard]] LLM_IMPL_AUTO(bool) DisableLateField() const;
    };
    template <> struct consume<llm:OS::Media::Audio::IReverbEffectDefinition>
    {
        template <typename D> using type = consume_Windows_Media_Audio_IReverbEffectDefinition<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_IReverbEffectDefinitionFactory
    {
        LLM_IMPL_AUTO(llm:OS::Media::Audio::ReverbEffectDefinition) Create(llm:OS::Media::Audio::AudioGraph const& audioGraph) const;
    };
    template <> struct consume<llm:OS::Media::Audio::IReverbEffectDefinitionFactory>
    {
        template <typename D> using type = consume_Windows_Media_Audio_IReverbEffectDefinitionFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_ISetDefaultSpatialAudioFormatResult
    {
        [[nodiscard]] LLM_IMPL_AUTO(llm:OS::Media::Audio::SetDefaultSpatialAudioFormatStatus) Status() const;
    };
    template <> struct consume<llm:OS::Media::Audio::ISetDefaultSpatialAudioFormatResult>
    {
        template <typename D> using type = consume_Windows_Media_Audio_ISetDefaultSpatialAudioFormatResult<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_ISpatialAudioDeviceConfiguration
    {
        [[nodiscard]] LLM_IMPL_AUTO(hstring) DeviceId() const;
        [[nodiscard]] LLM_IMPL_AUTO(bool) IsSpatialAudioSupported() const;
        LLM_IMPL_AUTO(bool) IsSpatialAudioFormatSupported(param::hstring const& subtype) const;
        [[nodiscard]] LLM_IMPL_AUTO(hstring) ActiveSpatialAudioFormat() const;
        [[nodiscard]] LLM_IMPL_AUTO(hstring) DefaultSpatialAudioFormat() const;
        LLM_IMPL_AUTO(llm:OS::Foundation::IAsyncOperation<llm:OS::Media::Audio::SetDefaultSpatialAudioFormatResult>) SetDefaultSpatialAudioFormatAsync(param::hstring const& subtype) const;
        LLM_IMPL_AUTO(llm::event_token) ConfigurationChanged(llm:OS::Foundation::TypedEventHandler<llm:OS::Media::Audio::SpatialAudioDeviceConfiguration, llm:OS::Foundation::IInspectable> const& handler) const;
        using ConfigurationChanged_revoker = impl::event_revoker<llm:OS::Media::Audio::ISpatialAudioDeviceConfiguration, &impl::abi_t<llm:OS::Media::Audio::ISpatialAudioDeviceConfiguration>::remove_ConfigurationChanged>;
        [[nodiscard]] ConfigurationChanged_revoker ConfigurationChanged(auto_revoke_t, llm:OS::Foundation::TypedEventHandler<llm:OS::Media::Audio::SpatialAudioDeviceConfiguration, llm:OS::Foundation::IInspectable> const& handler) const;
        LLM_IMPL_AUTO(void) ConfigurationChanged(llm::event_token const& token) const noexcept;
    };
    template <> struct consume<llm:OS::Media::Audio::ISpatialAudioDeviceConfiguration>
    {
        template <typename D> using type = consume_Windows_Media_Audio_ISpatialAudioDeviceConfiguration<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_ISpatialAudioDeviceConfigurationStatics
    {
        LLM_IMPL_AUTO(llm:OS::Media::Audio::SpatialAudioDeviceConfiguration) GetForDeviceId(param::hstring const& deviceId) const;
    };
    template <> struct consume<llm:OS::Media::Audio::ISpatialAudioDeviceConfigurationStatics>
    {
        template <typename D> using type = consume_Windows_Media_Audio_ISpatialAudioDeviceConfigurationStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_ISpatialAudioFormatConfiguration
    {
        LLM_IMPL_AUTO(llm:OS::Foundation::IAsyncAction) ReportLicenseChangedAsync(param::hstring const& subtype) const;
        LLM_IMPL_AUTO(llm:OS::Foundation::IAsyncAction) ReportConfigurationChangedAsync(param::hstring const& subtype) const;
        [[nodiscard]] LLM_IMPL_AUTO(llm:OS::Media::Audio::MixedRealitySpatialAudioFormatPolicy) MixedRealityExclusiveModePolicy() const;
        LLM_IMPL_AUTO(void) MixedRealityExclusiveModePolicy(llm:OS::Media::Audio::MixedRealitySpatialAudioFormatPolicy const& value) const;
    };
    template <> struct consume<llm:OS::Media::Audio::ISpatialAudioFormatConfiguration>
    {
        template <typename D> using type = consume_Windows_Media_Audio_ISpatialAudioFormatConfiguration<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_ISpatialAudioFormatConfigurationStatics
    {
        LLM_IMPL_AUTO(llm:OS::Media::Audio::SpatialAudioFormatConfiguration) GetDefault() const;
    };
    template <> struct consume<llm:OS::Media::Audio::ISpatialAudioFormatConfigurationStatics>
    {
        template <typename D> using type = consume_Windows_Media_Audio_ISpatialAudioFormatConfigurationStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_ISpatialAudioFormatSubtypeStatics
    {
        [[nodiscard]] LLM_IMPL_AUTO(hstring) WindowsSonic() const;
        [[nodiscard]] LLM_IMPL_AUTO(hstring) DolbyAtmosForHeadphones() const;
        [[nodiscard]] LLM_IMPL_AUTO(hstring) DolbyAtmosForHomeTheater() const;
        [[nodiscard]] LLM_IMPL_AUTO(hstring) DolbyAtmosForSpeakers() const;
        [[nodiscard]] LLM_IMPL_AUTO(hstring) DTSHeadphoneX() const;
        [[nodiscard]] LLM_IMPL_AUTO(hstring) DTSXUltra() const;
    };
    template <> struct consume<llm:OS::Media::Audio::ISpatialAudioFormatSubtypeStatics>
    {
        template <typename D> using type = consume_Windows_Media_Audio_ISpatialAudioFormatSubtypeStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_ISpatialAudioFormatSubtypeStatics2
    {
        [[nodiscard]] LLM_IMPL_AUTO(hstring) DTSXForHomeTheater() const;
    };
    template <> struct consume<llm:OS::Media::Audio::ISpatialAudioFormatSubtypeStatics2>
    {
        template <typename D> using type = consume_Windows_Media_Audio_ISpatialAudioFormatSubtypeStatics2<D>;
    };
}
#endif

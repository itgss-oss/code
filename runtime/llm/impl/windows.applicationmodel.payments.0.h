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
#ifndef LLM_OS_ApplicationModel_Payments_0_H
#define LLM_OS_ApplicationModel_Payments_0_H
LLM_EXPORT namespace llm::OS::Foundation
{
    struct IAsyncAction;
    template <typename TResult> struct __declspec(empty_bases) IAsyncOperation;
    struct Uri;
}
LLM_EXPORT namespace llm::OS::Foundation::Collections
{
    template <typename T> struct __declspec(empty_bases) IIterable;
    template <typename T> struct __declspec(empty_bases) IVectorView;
    struct ValueSet;
}
LLM_EXPORT namespace llm::OS::ApplicationModel::Payments
{
    enum class PaymentCanMakePaymentResultStatus : int32_t
    {
        Unknown = 0,
        Yes = 1,
        No = 2,
        NotAllowed = 3,
        UserNotSignedIn = 4,
        SpecifiedPaymentMethodIdsNotSupported = 5,
        NoQualifyingCardOnFile = 6,
    };
    enum class PaymentOptionPresence : int32_t
    {
        None = 0,
        Optional = 1,
        Required = 2,
    };
    enum class PaymentRequestChangeKind : int32_t
    {
        ShippingOption = 0,
        ShippingAddress = 1,
    };
    enum class PaymentRequestCompletionStatus : int32_t
    {
        Succeeded = 0,
        Failed = 1,
        Unknown = 2,
    };
    enum class PaymentRequestStatus : int32_t
    {
        Succeeded = 0,
        Failed = 1,
        Canceled = 2,
    };
    enum class PaymentShippingType : int32_t
    {
        Shipping = 0,
        Delivery = 1,
        Pickup = 2,
    };
    struct IPaymentAddress;
    struct IPaymentCanMakePaymentResult;
    struct IPaymentCanMakePaymentResultFactory;
    struct IPaymentCurrencyAmount;
    struct IPaymentCurrencyAmountFactory;
    struct IPaymentDetails;
    struct IPaymentDetailsFactory;
    struct IPaymentDetailsModifier;
    struct IPaymentDetailsModifierFactory;
    struct IPaymentItem;
    struct IPaymentItemFactory;
    struct IPaymentMediator;
    struct IPaymentMediator2;
    struct IPaymentMerchantInfo;
    struct IPaymentMerchantInfoFactory;
    struct IPaymentMethodData;
    struct IPaymentMethodDataFactory;
    struct IPaymentOptions;
    struct IPaymentRequest;
    struct IPaymentRequest2;
    struct IPaymentRequestChangedArgs;
    struct IPaymentRequestChangedResult;
    struct IPaymentRequestChangedResultFactory;
    struct IPaymentRequestFactory;
    struct IPaymentRequestFactory2;
    struct IPaymentRequestSubmitResult;
    struct IPaymentResponse;
    struct IPaymentShippingOption;
    struct IPaymentShippingOptionFactory;
    struct IPaymentToken;
    struct IPaymentTokenFactory;
    struct PaymentAddress;
    struct PaymentCanMakePaymentResult;
    struct PaymentCurrencyAmount;
    struct PaymentDetails;
    struct PaymentDetailsModifier;
    struct PaymentItem;
    struct PaymentMediator;
    struct PaymentMerchantInfo;
    struct PaymentMethodData;
    struct PaymentOptions;
    struct PaymentRequest;
    struct PaymentRequestChangedArgs;
    struct PaymentRequestChangedResult;
    struct PaymentRequestSubmitResult;
    struct PaymentResponse;
    struct PaymentShippingOption;
    struct PaymentToken;
    struct PaymentRequestChangedHandler;
}
namespace llm::impl
{
    template <> struct category<llm::OS::ApplicationModel::Payments::IPaymentAddress>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Payments::IPaymentCanMakePaymentResult>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Payments::IPaymentCanMakePaymentResultFactory>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Payments::IPaymentCurrencyAmount>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Payments::IPaymentCurrencyAmountFactory>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Payments::IPaymentDetails>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Payments::IPaymentDetailsFactory>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Payments::IPaymentDetailsModifier>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Payments::IPaymentDetailsModifierFactory>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Payments::IPaymentItem>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Payments::IPaymentItemFactory>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Payments::IPaymentMediator>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Payments::IPaymentMediator2>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Payments::IPaymentMerchantInfo>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Payments::IPaymentMerchantInfoFactory>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Payments::IPaymentMethodData>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Payments::IPaymentMethodDataFactory>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Payments::IPaymentOptions>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Payments::IPaymentRequest>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Payments::IPaymentRequest2>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Payments::IPaymentRequestChangedArgs>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Payments::IPaymentRequestChangedResult>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Payments::IPaymentRequestChangedResultFactory>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Payments::IPaymentRequestFactory>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Payments::IPaymentRequestFactory2>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Payments::IPaymentRequestSubmitResult>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Payments::IPaymentResponse>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Payments::IPaymentShippingOption>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Payments::IPaymentShippingOptionFactory>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Payments::IPaymentToken>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Payments::IPaymentTokenFactory>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Payments::PaymentAddress>{ using type = class_category; };
    template <> struct category<llm::OS::ApplicationModel::Payments::PaymentCanMakePaymentResult>{ using type = class_category; };
    template <> struct category<llm::OS::ApplicationModel::Payments::PaymentCurrencyAmount>{ using type = class_category; };
    template <> struct category<llm::OS::ApplicationModel::Payments::PaymentDetails>{ using type = class_category; };
    template <> struct category<llm::OS::ApplicationModel::Payments::PaymentDetailsModifier>{ using type = class_category; };
    template <> struct category<llm::OS::ApplicationModel::Payments::PaymentItem>{ using type = class_category; };
    template <> struct category<llm::OS::ApplicationModel::Payments::PaymentMediator>{ using type = class_category; };
    template <> struct category<llm::OS::ApplicationModel::Payments::PaymentMerchantInfo>{ using type = class_category; };
    template <> struct category<llm::OS::ApplicationModel::Payments::PaymentMethodData>{ using type = class_category; };
    template <> struct category<llm::OS::ApplicationModel::Payments::PaymentOptions>{ using type = class_category; };
    template <> struct category<llm::OS::ApplicationModel::Payments::PaymentRequest>{ using type = class_category; };
    template <> struct category<llm::OS::ApplicationModel::Payments::PaymentRequestChangedArgs>{ using type = class_category; };
    template <> struct category<llm::OS::ApplicationModel::Payments::PaymentRequestChangedResult>{ using type = class_category; };
    template <> struct category<llm::OS::ApplicationModel::Payments::PaymentRequestSubmitResult>{ using type = class_category; };
    template <> struct category<llm::OS::ApplicationModel::Payments::PaymentResponse>{ using type = class_category; };
    template <> struct category<llm::OS::ApplicationModel::Payments::PaymentShippingOption>{ using type = class_category; };
    template <> struct category<llm::OS::ApplicationModel::Payments::PaymentToken>{ using type = class_category; };
    template <> struct category<llm::OS::ApplicationModel::Payments::PaymentCanMakePaymentResultStatus>{ using type = enum_category; };
    template <> struct category<llm::OS::ApplicationModel::Payments::PaymentOptionPresence>{ using type = enum_category; };
    template <> struct category<llm::OS::ApplicationModel::Payments::PaymentRequestChangeKind>{ using type = enum_category; };
    template <> struct category<llm::OS::ApplicationModel::Payments::PaymentRequestCompletionStatus>{ using type = enum_category; };
    template <> struct category<llm::OS::ApplicationModel::Payments::PaymentRequestStatus>{ using type = enum_category; };
    template <> struct category<llm::OS::ApplicationModel::Payments::PaymentShippingType>{ using type = enum_category; };
    template <> struct category<llm::OS::ApplicationModel::Payments::PaymentRequestChangedHandler>{ using type = delegate_category; };
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Payments::PaymentAddress> = L"Windows.ApplicationModel.Payments.PaymentAddress";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Payments::PaymentCanMakePaymentResult> = L"Windows.ApplicationModel.Payments.PaymentCanMakePaymentResult";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Payments::PaymentCurrencyAmount> = L"Windows.ApplicationModel.Payments.PaymentCurrencyAmount";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Payments::PaymentDetails> = L"Windows.ApplicationModel.Payments.PaymentDetails";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Payments::PaymentDetailsModifier> = L"Windows.ApplicationModel.Payments.PaymentDetailsModifier";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Payments::PaymentItem> = L"Windows.ApplicationModel.Payments.PaymentItem";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Payments::PaymentMediator> = L"Windows.ApplicationModel.Payments.PaymentMediator";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Payments::PaymentMerchantInfo> = L"Windows.ApplicationModel.Payments.PaymentMerchantInfo";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Payments::PaymentMethodData> = L"Windows.ApplicationModel.Payments.PaymentMethodData";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Payments::PaymentOptions> = L"Windows.ApplicationModel.Payments.PaymentOptions";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Payments::PaymentRequest> = L"Windows.ApplicationModel.Payments.PaymentRequest";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Payments::PaymentRequestChangedArgs> = L"Windows.ApplicationModel.Payments.PaymentRequestChangedArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Payments::PaymentRequestChangedResult> = L"Windows.ApplicationModel.Payments.PaymentRequestChangedResult";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Payments::PaymentRequestSubmitResult> = L"Windows.ApplicationModel.Payments.PaymentRequestSubmitResult";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Payments::PaymentResponse> = L"Windows.ApplicationModel.Payments.PaymentResponse";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Payments::PaymentShippingOption> = L"Windows.ApplicationModel.Payments.PaymentShippingOption";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Payments::PaymentToken> = L"Windows.ApplicationModel.Payments.PaymentToken";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Payments::PaymentCanMakePaymentResultStatus> = L"Windows.ApplicationModel.Payments.PaymentCanMakePaymentResultStatus";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Payments::PaymentOptionPresence> = L"Windows.ApplicationModel.Payments.PaymentOptionPresence";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Payments::PaymentRequestChangeKind> = L"Windows.ApplicationModel.Payments.PaymentRequestChangeKind";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Payments::PaymentRequestCompletionStatus> = L"Windows.ApplicationModel.Payments.PaymentRequestCompletionStatus";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Payments::PaymentRequestStatus> = L"Windows.ApplicationModel.Payments.PaymentRequestStatus";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Payments::PaymentShippingType> = L"Windows.ApplicationModel.Payments.PaymentShippingType";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Payments::IPaymentAddress> = L"Windows.ApplicationModel.Payments.IPaymentAddress";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Payments::IPaymentCanMakePaymentResult> = L"Windows.ApplicationModel.Payments.IPaymentCanMakePaymentResult";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Payments::IPaymentCanMakePaymentResultFactory> = L"Windows.ApplicationModel.Payments.IPaymentCanMakePaymentResultFactory";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Payments::IPaymentCurrencyAmount> = L"Windows.ApplicationModel.Payments.IPaymentCurrencyAmount";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Payments::IPaymentCurrencyAmountFactory> = L"Windows.ApplicationModel.Payments.IPaymentCurrencyAmountFactory";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Payments::IPaymentDetails> = L"Windows.ApplicationModel.Payments.IPaymentDetails";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Payments::IPaymentDetailsFactory> = L"Windows.ApplicationModel.Payments.IPaymentDetailsFactory";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Payments::IPaymentDetailsModifier> = L"Windows.ApplicationModel.Payments.IPaymentDetailsModifier";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Payments::IPaymentDetailsModifierFactory> = L"Windows.ApplicationModel.Payments.IPaymentDetailsModifierFactory";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Payments::IPaymentItem> = L"Windows.ApplicationModel.Payments.IPaymentItem";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Payments::IPaymentItemFactory> = L"Windows.ApplicationModel.Payments.IPaymentItemFactory";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Payments::IPaymentMediator> = L"Windows.ApplicationModel.Payments.IPaymentMediator";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Payments::IPaymentMediator2> = L"Windows.ApplicationModel.Payments.IPaymentMediator2";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Payments::IPaymentMerchantInfo> = L"Windows.ApplicationModel.Payments.IPaymentMerchantInfo";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Payments::IPaymentMerchantInfoFactory> = L"Windows.ApplicationModel.Payments.IPaymentMerchantInfoFactory";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Payments::IPaymentMethodData> = L"Windows.ApplicationModel.Payments.IPaymentMethodData";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Payments::IPaymentMethodDataFactory> = L"Windows.ApplicationModel.Payments.IPaymentMethodDataFactory";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Payments::IPaymentOptions> = L"Windows.ApplicationModel.Payments.IPaymentOptions";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Payments::IPaymentRequest> = L"Windows.ApplicationModel.Payments.IPaymentRequest";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Payments::IPaymentRequest2> = L"Windows.ApplicationModel.Payments.IPaymentRequest2";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Payments::IPaymentRequestChangedArgs> = L"Windows.ApplicationModel.Payments.IPaymentRequestChangedArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Payments::IPaymentRequestChangedResult> = L"Windows.ApplicationModel.Payments.IPaymentRequestChangedResult";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Payments::IPaymentRequestChangedResultFactory> = L"Windows.ApplicationModel.Payments.IPaymentRequestChangedResultFactory";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Payments::IPaymentRequestFactory> = L"Windows.ApplicationModel.Payments.IPaymentRequestFactory";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Payments::IPaymentRequestFactory2> = L"Windows.ApplicationModel.Payments.IPaymentRequestFactory2";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Payments::IPaymentRequestSubmitResult> = L"Windows.ApplicationModel.Payments.IPaymentRequestSubmitResult";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Payments::IPaymentResponse> = L"Windows.ApplicationModel.Payments.IPaymentResponse";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Payments::IPaymentShippingOption> = L"Windows.ApplicationModel.Payments.IPaymentShippingOption";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Payments::IPaymentShippingOptionFactory> = L"Windows.ApplicationModel.Payments.IPaymentShippingOptionFactory";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Payments::IPaymentToken> = L"Windows.ApplicationModel.Payments.IPaymentToken";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Payments::IPaymentTokenFactory> = L"Windows.ApplicationModel.Payments.IPaymentTokenFactory";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Payments::PaymentRequestChangedHandler> = L"Windows.ApplicationModel.Payments.PaymentRequestChangedHandler";
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Payments::IPaymentAddress>{ 0x5F2264E9,0x6F3A,0x4166,{ 0xA0,0x18,0x0A,0x0B,0x06,0xBB,0x32,0xB5 } }; // 5F2264E9-6F3A-4166-A018-0A0B06BB32B5
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Payments::IPaymentCanMakePaymentResult>{ 0x7696FE55,0xD5D3,0x4D3D,{ 0xB3,0x45,0x45,0x59,0x17,0x59,0xC5,0x10 } }; // 7696FE55-D5D3-4D3D-B345-45591759C510
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Payments::IPaymentCanMakePaymentResultFactory>{ 0xBBDCAA3E,0x7D49,0x4F69,{ 0xAA,0x53,0x2A,0x0F,0x81,0x64,0xB7,0xC9 } }; // BBDCAA3E-7D49-4F69-AA53-2A0F8164B7C9
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Payments::IPaymentCurrencyAmount>{ 0xE3A3E9E0,0xB41F,0x4987,{ 0xBD,0xCB,0x07,0x13,0x31,0xF2,0xDA,0xA4 } }; // E3A3E9E0-B41F-4987-BDCB-071331F2DAA4
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Payments::IPaymentCurrencyAmountFactory>{ 0x3257D338,0x140C,0x4575,{ 0x85,0x35,0xF7,0x73,0x17,0x8C,0x09,0xA7 } }; // 3257D338-140C-4575-8535-F773178C09A7
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Payments::IPaymentDetails>{ 0x53BB2D7D,0xE0EB,0x4053,{ 0x8E,0xAE,0xCE,0x7C,0x48,0xE0,0x29,0x45 } }; // 53BB2D7D-E0EB-4053-8EAE-CE7C48E02945
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Payments::IPaymentDetailsFactory>{ 0xCFE8AFEE,0xC0EA,0x4CA1,{ 0x8B,0xC7,0x6D,0xE6,0x7B,0x1F,0x37,0x63 } }; // CFE8AFEE-C0EA-4CA1-8BC7-6DE67B1F3763
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Payments::IPaymentDetailsModifier>{ 0xBE1C7D65,0x4323,0x41D7,{ 0xB3,0x05,0xDF,0xCB,0x76,0x5F,0x69,0xDE } }; // BE1C7D65-4323-41D7-B305-DFCB765F69DE
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Payments::IPaymentDetailsModifierFactory>{ 0x79005286,0x54DE,0x429C,{ 0x9E,0x4F,0x5D,0xCE,0x6E,0x10,0xEB,0xCE } }; // 79005286-54DE-429C-9E4F-5DCE6E10EBCE
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Payments::IPaymentItem>{ 0x685AC88B,0x79B2,0x4B76,{ 0x9E,0x03,0xA8,0x76,0x22,0x3D,0xFE,0x72 } }; // 685AC88B-79B2-4B76-9E03-A876223DFE72
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Payments::IPaymentItemFactory>{ 0xC6AB7AD8,0x2503,0x4D1D,{ 0xA7,0x78,0x02,0xB2,0xE5,0x92,0x7B,0x2C } }; // C6AB7AD8-2503-4D1D-A778-02B2E5927B2C
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Payments::IPaymentMediator>{ 0xFB0EE829,0xEC0C,0x449A,{ 0x83,0xDA,0x7A,0xE3,0x07,0x33,0x65,0xA2 } }; // FB0EE829-EC0C-449A-83DA-7AE3073365A2
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Payments::IPaymentMediator2>{ 0xCEEF98F1,0xE407,0x4128,{ 0x8E,0x73,0xD9,0x3D,0x5F,0x82,0x27,0x86 } }; // CEEF98F1-E407-4128-8E73-D93D5F822786
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Payments::IPaymentMerchantInfo>{ 0x63445050,0x0E94,0x4ED6,{ 0xAA,0xCB,0xE6,0x01,0x2B,0xD3,0x27,0xA7 } }; // 63445050-0E94-4ED6-AACB-E6012BD327A7
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Payments::IPaymentMerchantInfoFactory>{ 0x9E89CED3,0xCCB7,0x4167,{ 0xA8,0xEC,0xE1,0x0A,0xE9,0x6D,0xBC,0xD1 } }; // 9E89CED3-CCB7-4167-A8EC-E10AE96DBCD1
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Payments::IPaymentMethodData>{ 0xD1D3CAF4,0xDE98,0x4129,{ 0xB1,0xB7,0xC3,0xAD,0x86,0x23,0x7B,0xF4 } }; // D1D3CAF4-DE98-4129-B1B7-C3AD86237BF4
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Payments::IPaymentMethodDataFactory>{ 0x8ADDD27F,0x9BAA,0x4A82,{ 0x83,0x42,0xA8,0x21,0x09,0x92,0xA3,0x6B } }; // 8ADDD27F-9BAA-4A82-8342-A8210992A36B
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Payments::IPaymentOptions>{ 0xAAA30854,0x1F2B,0x4365,{ 0x82,0x51,0x01,0xB5,0x89,0x15,0xA5,0xBC } }; // AAA30854-1F2B-4365-8251-01B58915A5BC
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Payments::IPaymentRequest>{ 0xB74942E1,0xED7B,0x47EB,{ 0xBC,0x08,0x78,0xCC,0x5D,0x68,0x96,0xB6 } }; // B74942E1-ED7B-47EB-BC08-78CC5D6896B6
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Payments::IPaymentRequest2>{ 0xB63CCFB5,0x5998,0x493E,{ 0xA0,0x4C,0x67,0x04,0x8A,0x50,0xF1,0x41 } }; // B63CCFB5-5998-493E-A04C-67048A50F141
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Payments::IPaymentRequestChangedArgs>{ 0xC6145E44,0xCD8B,0x4BE4,{ 0xB5,0x55,0x27,0xC9,0x91,0x94,0xC0,0xC5 } }; // C6145E44-CD8B-4BE4-B555-27C99194C0C5
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Payments::IPaymentRequestChangedResult>{ 0xDF699E5C,0x16C4,0x47AD,{ 0x94,0x01,0x84,0x40,0xEC,0x07,0x57,0xDB } }; // DF699E5C-16C4-47AD-9401-8440EC0757DB
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Payments::IPaymentRequestChangedResultFactory>{ 0x08740F56,0x1D33,0x4431,{ 0x81,0x4B,0x67,0xEA,0x24,0xBF,0x21,0xDB } }; // 08740F56-1D33-4431-814B-67EA24BF21DB
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Payments::IPaymentRequestFactory>{ 0x3E8A79DC,0x6B74,0x42D3,{ 0xB1,0x03,0xF0,0xDE,0x35,0xFB,0x18,0x48 } }; // 3E8A79DC-6B74-42D3-B103-F0DE35FB1848
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Payments::IPaymentRequestFactory2>{ 0xE6CE1325,0xA506,0x4372,{ 0xB7,0xEF,0x1A,0x03,0x1D,0x56,0x62,0xD1 } }; // E6CE1325-A506-4372-B7EF-1A031D5662D1
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Payments::IPaymentRequestSubmitResult>{ 0x7B9C3912,0x30F2,0x4E90,{ 0xB2,0x49,0x8C,0xE7,0xD7,0x8F,0xFE,0x56 } }; // 7B9C3912-30F2-4E90-B249-8CE7D78FFE56
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Payments::IPaymentResponse>{ 0xE1389457,0x8BD2,0x4888,{ 0x9F,0xA8,0x97,0x98,0x55,0x45,0x10,0x8E } }; // E1389457-8BD2-4888-9FA8-97985545108E
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Payments::IPaymentShippingOption>{ 0x13372ADA,0x9753,0x4574,{ 0x89,0x66,0x93,0x14,0x5A,0x76,0xC7,0xF9 } }; // 13372ADA-9753-4574-8966-93145A76C7F9
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Payments::IPaymentShippingOptionFactory>{ 0x5DE5F917,0xB2D7,0x446B,{ 0x9D,0x73,0x61,0x23,0xFB,0xCA,0x3B,0xC6 } }; // 5DE5F917-B2D7-446B-9D73-6123FBCA3BC6
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Payments::IPaymentToken>{ 0xBBCAC013,0xCCD0,0x41F2,{ 0xB2,0xA1,0x0A,0x2E,0x4B,0x5D,0xCE,0x25 } }; // BBCAC013-CCD0-41F2-B2A1-0A2E4B5DCE25
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Payments::IPaymentTokenFactory>{ 0x988CD7AA,0x4753,0x4904,{ 0x83,0x73,0xDD,0x7B,0x08,0xB9,0x95,0xC1 } }; // 988CD7AA-4753-4904-8373-DD7B08B995C1
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Payments::PaymentRequestChangedHandler>{ 0x5078B9E1,0xF398,0x4F2C,{ 0xA2,0x7E,0x94,0xD3,0x71,0xCF,0x6C,0x7D } }; // 5078B9E1-F398-4F2C-A27E-94D371CF6C7D
    template <> struct default_interface<llm::OS::ApplicationModel::Payments::PaymentAddress>{ using type = llm::OS::ApplicationModel::Payments::IPaymentAddress; };
    template <> struct default_interface<llm::OS::ApplicationModel::Payments::PaymentCanMakePaymentResult>{ using type = llm::OS::ApplicationModel::Payments::IPaymentCanMakePaymentResult; };
    template <> struct default_interface<llm::OS::ApplicationModel::Payments::PaymentCurrencyAmount>{ using type = llm::OS::ApplicationModel::Payments::IPaymentCurrencyAmount; };
    template <> struct default_interface<llm::OS::ApplicationModel::Payments::PaymentDetails>{ using type = llm::OS::ApplicationModel::Payments::IPaymentDetails; };
    template <> struct default_interface<llm::OS::ApplicationModel::Payments::PaymentDetailsModifier>{ using type = llm::OS::ApplicationModel::Payments::IPaymentDetailsModifier; };
    template <> struct default_interface<llm::OS::ApplicationModel::Payments::PaymentItem>{ using type = llm::OS::ApplicationModel::Payments::IPaymentItem; };
    template <> struct default_interface<llm::OS::ApplicationModel::Payments::PaymentMediator>{ using type = llm::OS::ApplicationModel::Payments::IPaymentMediator; };
    template <> struct default_interface<llm::OS::ApplicationModel::Payments::PaymentMerchantInfo>{ using type = llm::OS::ApplicationModel::Payments::IPaymentMerchantInfo; };
    template <> struct default_interface<llm::OS::ApplicationModel::Payments::PaymentMethodData>{ using type = llm::OS::ApplicationModel::Payments::IPaymentMethodData; };
    template <> struct default_interface<llm::OS::ApplicationModel::Payments::PaymentOptions>{ using type = llm::OS::ApplicationModel::Payments::IPaymentOptions; };
    template <> struct default_interface<llm::OS::ApplicationModel::Payments::PaymentRequest>{ using type = llm::OS::ApplicationModel::Payments::IPaymentRequest; };
    template <> struct default_interface<llm::OS::ApplicationModel::Payments::PaymentRequestChangedArgs>{ using type = llm::OS::ApplicationModel::Payments::IPaymentRequestChangedArgs; };
    template <> struct default_interface<llm::OS::ApplicationModel::Payments::PaymentRequestChangedResult>{ using type = llm::OS::ApplicationModel::Payments::IPaymentRequestChangedResult; };
    template <> struct default_interface<llm::OS::ApplicationModel::Payments::PaymentRequestSubmitResult>{ using type = llm::OS::ApplicationModel::Payments::IPaymentRequestSubmitResult; };
    template <> struct default_interface<llm::OS::ApplicationModel::Payments::PaymentResponse>{ using type = llm::OS::ApplicationModel::Payments::IPaymentResponse; };
    template <> struct default_interface<llm::OS::ApplicationModel::Payments::PaymentShippingOption>{ using type = llm::OS::ApplicationModel::Payments::IPaymentShippingOption; };
    template <> struct default_interface<llm::OS::ApplicationModel::Payments::PaymentToken>{ using type = llm::OS::ApplicationModel::Payments::IPaymentToken; };
    template <> struct abi<llm::OS::ApplicationModel::Payments::IPaymentAddress>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Country(void**) noexcept = 0;
            virtual int32_t __stdcall put_Country(void*) noexcept = 0;
            virtual int32_t __stdcall get_AddressLines(void**) noexcept = 0;
            virtual int32_t __stdcall put_AddressLines(void*) noexcept = 0;
            virtual int32_t __stdcall get_Region(void**) noexcept = 0;
            virtual int32_t __stdcall put_Region(void*) noexcept = 0;
            virtual int32_t __stdcall get_City(void**) noexcept = 0;
            virtual int32_t __stdcall put_City(void*) noexcept = 0;
            virtual int32_t __stdcall get_DependentLocality(void**) noexcept = 0;
            virtual int32_t __stdcall put_DependentLocality(void*) noexcept = 0;
            virtual int32_t __stdcall get_PostalCode(void**) noexcept = 0;
            virtual int32_t __stdcall put_PostalCode(void*) noexcept = 0;
            virtual int32_t __stdcall get_SortingCode(void**) noexcept = 0;
            virtual int32_t __stdcall put_SortingCode(void*) noexcept = 0;
            virtual int32_t __stdcall get_LanguageCode(void**) noexcept = 0;
            virtual int32_t __stdcall put_LanguageCode(void*) noexcept = 0;
            virtual int32_t __stdcall get_Organization(void**) noexcept = 0;
            virtual int32_t __stdcall put_Organization(void*) noexcept = 0;
            virtual int32_t __stdcall get_Recipient(void**) noexcept = 0;
            virtual int32_t __stdcall put_Recipient(void*) noexcept = 0;
            virtual int32_t __stdcall get_PhoneNumber(void**) noexcept = 0;
            virtual int32_t __stdcall put_PhoneNumber(void*) noexcept = 0;
            virtual int32_t __stdcall get_Properties(void**) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Payments::IPaymentCanMakePaymentResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Payments::IPaymentCanMakePaymentResultFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Payments::IPaymentCurrencyAmount>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Currency(void**) noexcept = 0;
            virtual int32_t __stdcall put_Currency(void*) noexcept = 0;
            virtual int32_t __stdcall get_CurrencySystem(void**) noexcept = 0;
            virtual int32_t __stdcall put_CurrencySystem(void*) noexcept = 0;
            virtual int32_t __stdcall get_Value(void**) noexcept = 0;
            virtual int32_t __stdcall put_Value(void*) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Payments::IPaymentCurrencyAmountFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWithCurrencySystem(void*, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Payments::IPaymentDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Total(void**) noexcept = 0;
            virtual int32_t __stdcall put_Total(void*) noexcept = 0;
            virtual int32_t __stdcall get_DisplayItems(void**) noexcept = 0;
            virtual int32_t __stdcall put_DisplayItems(void*) noexcept = 0;
            virtual int32_t __stdcall get_ShippingOptions(void**) noexcept = 0;
            virtual int32_t __stdcall put_ShippingOptions(void*) noexcept = 0;
            virtual int32_t __stdcall get_Modifiers(void**) noexcept = 0;
            virtual int32_t __stdcall put_Modifiers(void*) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Payments::IPaymentDetailsFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWithDisplayItems(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Payments::IPaymentDetailsModifier>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_JsonData(void**) noexcept = 0;
            virtual int32_t __stdcall get_SupportedMethodIds(void**) noexcept = 0;
            virtual int32_t __stdcall get_Total(void**) noexcept = 0;
            virtual int32_t __stdcall get_AdditionalDisplayItems(void**) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Payments::IPaymentDetailsModifierFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWithAdditionalDisplayItems(void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWithAdditionalDisplayItemsAndJsonData(void*, void*, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Payments::IPaymentItem>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Label(void**) noexcept = 0;
            virtual int32_t __stdcall put_Label(void*) noexcept = 0;
            virtual int32_t __stdcall get_Amount(void**) noexcept = 0;
            virtual int32_t __stdcall put_Amount(void*) noexcept = 0;
            virtual int32_t __stdcall get_Pending(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Pending(bool) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Payments::IPaymentItemFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Payments::IPaymentMediator>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetSupportedMethodIdsAsync(void**) noexcept = 0;
            virtual int32_t __stdcall SubmitPaymentRequestAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall SubmitPaymentRequestWithChangeHandlerAsync(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Payments::IPaymentMediator2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CanMakePaymentAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Payments::IPaymentMerchantInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PackageFullName(void**) noexcept = 0;
            virtual int32_t __stdcall get_Uri(void**) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Payments::IPaymentMerchantInfoFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Payments::IPaymentMethodData>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SupportedMethodIds(void**) noexcept = 0;
            virtual int32_t __stdcall get_JsonData(void**) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Payments::IPaymentMethodDataFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWithJsonData(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Payments::IPaymentOptions>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RequestPayerEmail(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_RequestPayerEmail(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_RequestPayerName(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_RequestPayerName(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_RequestPayerPhoneNumber(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_RequestPayerPhoneNumber(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_RequestShipping(bool*) noexcept = 0;
            virtual int32_t __stdcall put_RequestShipping(bool) noexcept = 0;
            virtual int32_t __stdcall get_ShippingType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ShippingType(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Payments::IPaymentRequest>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MerchantInfo(void**) noexcept = 0;
            virtual int32_t __stdcall get_Details(void**) noexcept = 0;
            virtual int32_t __stdcall get_MethodData(void**) noexcept = 0;
            virtual int32_t __stdcall get_Options(void**) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Payments::IPaymentRequest2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Payments::IPaymentRequestChangedArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ChangeKind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ShippingAddress(void**) noexcept = 0;
            virtual int32_t __stdcall get_SelectedShippingOption(void**) noexcept = 0;
            virtual int32_t __stdcall Acknowledge(void*) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Payments::IPaymentRequestChangedResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ChangeAcceptedByMerchant(bool*) noexcept = 0;
            virtual int32_t __stdcall put_ChangeAcceptedByMerchant(bool) noexcept = 0;
            virtual int32_t __stdcall get_Message(void**) noexcept = 0;
            virtual int32_t __stdcall put_Message(void*) noexcept = 0;
            virtual int32_t __stdcall get_UpdatedPaymentDetails(void**) noexcept = 0;
            virtual int32_t __stdcall put_UpdatedPaymentDetails(void*) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Payments::IPaymentRequestChangedResultFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(bool, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWithPaymentDetails(bool, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Payments::IPaymentRequestFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWithMerchantInfo(void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWithMerchantInfoAndOptions(void*, void*, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Payments::IPaymentRequestFactory2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateWithMerchantInfoOptionsAndId(void*, void*, void*, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Payments::IPaymentRequestSubmitResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Response(void**) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Payments::IPaymentResponse>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PaymentToken(void**) noexcept = 0;
            virtual int32_t __stdcall get_ShippingOption(void**) noexcept = 0;
            virtual int32_t __stdcall get_ShippingAddress(void**) noexcept = 0;
            virtual int32_t __stdcall get_PayerEmail(void**) noexcept = 0;
            virtual int32_t __stdcall get_PayerName(void**) noexcept = 0;
            virtual int32_t __stdcall get_PayerPhoneNumber(void**) noexcept = 0;
            virtual int32_t __stdcall CompleteAsync(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Payments::IPaymentShippingOption>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Label(void**) noexcept = 0;
            virtual int32_t __stdcall put_Label(void*) noexcept = 0;
            virtual int32_t __stdcall get_Amount(void**) noexcept = 0;
            virtual int32_t __stdcall put_Amount(void*) noexcept = 0;
            virtual int32_t __stdcall get_Tag(void**) noexcept = 0;
            virtual int32_t __stdcall put_Tag(void*) noexcept = 0;
            virtual int32_t __stdcall get_IsSelected(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsSelected(bool) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Payments::IPaymentShippingOptionFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWithSelected(void*, void*, bool, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWithSelectedAndTag(void*, void*, bool, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Payments::IPaymentToken>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PaymentMethodId(void**) noexcept = 0;
            virtual int32_t __stdcall get_JsonDetails(void**) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Payments::IPaymentTokenFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWithJsonDetails(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Payments::PaymentRequestChangedHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*, void*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Payments_IPaymentAddress
    {
        [[nodiscard]] LLM_IMPL_AUTO(hstring) Country() const;
        LLM_IMPL_AUTO(void) Country(param::hstring const& value) const;
        [[nodiscard]] LLM_IMPL_AUTO(llm::OS::Foundation::Collections::IVectorView<hstring>) AddressLines() const;
        LLM_IMPL_AUTO(void) AddressLines(param::async_vector_view<hstring> const& value) const;
        [[nodiscard]] LLM_IMPL_AUTO(hstring) Region() const;
        LLM_IMPL_AUTO(void) Region(param::hstring const& value) const;
        [[nodiscard]] LLM_IMPL_AUTO(hstring) City() const;
        LLM_IMPL_AUTO(void) City(param::hstring const& value) const;
        [[nodiscard]] LLM_IMPL_AUTO(hstring) DependentLocality() const;
        LLM_IMPL_AUTO(void) DependentLocality(param::hstring const& value) const;
        [[nodiscard]] LLM_IMPL_AUTO(hstring) PostalCode() const;
        LLM_IMPL_AUTO(void) PostalCode(param::hstring const& value) const;
        [[nodiscard]] LLM_IMPL_AUTO(hstring) SortingCode() const;
        LLM_IMPL_AUTO(void) SortingCode(param::hstring const& value) const;
        [[nodiscard]] LLM_IMPL_AUTO(hstring) LanguageCode() const;
        LLM_IMPL_AUTO(void) LanguageCode(param::hstring const& value) const;
        [[nodiscard]] LLM_IMPL_AUTO(hstring) Organization() const;
        LLM_IMPL_AUTO(void) Organization(param::hstring const& value) const;
        [[nodiscard]] LLM_IMPL_AUTO(hstring) Recipient() const;
        LLM_IMPL_AUTO(void) Recipient(param::hstring const& value) const;
        [[nodiscard]] LLM_IMPL_AUTO(hstring) PhoneNumber() const;
        LLM_IMPL_AUTO(void) PhoneNumber(param::hstring const& value) const;
        [[nodiscard]] LLM_IMPL_AUTO(llm::OS::Foundation::Collections::ValueSet) Properties() const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Payments::IPaymentAddress>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Payments_IPaymentAddress<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Payments_IPaymentCanMakePaymentResult
    {
        [[nodiscard]] LLM_IMPL_AUTO(llm::OS::ApplicationModel::Payments::PaymentCanMakePaymentResultStatus) Status() const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Payments::IPaymentCanMakePaymentResult>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Payments_IPaymentCanMakePaymentResult<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Payments_IPaymentCanMakePaymentResultFactory
    {
        LLM_IMPL_AUTO(llm::OS::ApplicationModel::Payments::PaymentCanMakePaymentResult) Create(llm::OS::ApplicationModel::Payments::PaymentCanMakePaymentResultStatus const& value) const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Payments::IPaymentCanMakePaymentResultFactory>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Payments_IPaymentCanMakePaymentResultFactory<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Payments_IPaymentCurrencyAmount
    {
        [[nodiscard]] LLM_IMPL_AUTO(hstring) Currency() const;
        LLM_IMPL_AUTO(void) Currency(param::hstring const& value) const;
        [[nodiscard]] LLM_IMPL_AUTO(hstring) CurrencySystem() const;
        LLM_IMPL_AUTO(void) CurrencySystem(param::hstring const& value) const;
        [[nodiscard]] LLM_IMPL_AUTO(hstring) Value() const;
        LLM_IMPL_AUTO(void) Value(param::hstring const& value) const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Payments::IPaymentCurrencyAmount>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Payments_IPaymentCurrencyAmount<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Payments_IPaymentCurrencyAmountFactory
    {
        LLM_IMPL_AUTO(llm::OS::ApplicationModel::Payments::PaymentCurrencyAmount) Create(param::hstring const& value, param::hstring const& currency) const;
        LLM_IMPL_AUTO(llm::OS::ApplicationModel::Payments::PaymentCurrencyAmount) CreateWithCurrencySystem(param::hstring const& value, param::hstring const& currency, param::hstring const& currencySystem) const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Payments::IPaymentCurrencyAmountFactory>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Payments_IPaymentCurrencyAmountFactory<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Payments_IPaymentDetails
    {
        [[nodiscard]] LLM_IMPL_AUTO(llm::OS::ApplicationModel::Payments::PaymentItem) Total() const;
        LLM_IMPL_AUTO(void) Total(llm::OS::ApplicationModel::Payments::PaymentItem const& value) const;
        [[nodiscard]] LLM_IMPL_AUTO(llm::OS::Foundation::Collections::IVectorView<llm::OS::ApplicationModel::Payments::PaymentItem>) DisplayItems() const;
        LLM_IMPL_AUTO(void) DisplayItems(param::async_vector_view<llm::OS::ApplicationModel::Payments::PaymentItem> const& value) const;
        [[nodiscard]] LLM_IMPL_AUTO(llm::OS::Foundation::Collections::IVectorView<llm::OS::ApplicationModel::Payments::PaymentShippingOption>) ShippingOptions() const;
        LLM_IMPL_AUTO(void) ShippingOptions(param::async_vector_view<llm::OS::ApplicationModel::Payments::PaymentShippingOption> const& value) const;
        [[nodiscard]] LLM_IMPL_AUTO(llm::OS::Foundation::Collections::IVectorView<llm::OS::ApplicationModel::Payments::PaymentDetailsModifier>) Modifiers() const;
        LLM_IMPL_AUTO(void) Modifiers(param::async_vector_view<llm::OS::ApplicationModel::Payments::PaymentDetailsModifier> const& value) const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Payments::IPaymentDetails>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Payments_IPaymentDetails<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Payments_IPaymentDetailsFactory
    {
        LLM_IMPL_AUTO(llm::OS::ApplicationModel::Payments::PaymentDetails) Create(llm::OS::ApplicationModel::Payments::PaymentItem const& total) const;
        LLM_IMPL_AUTO(llm::OS::ApplicationModel::Payments::PaymentDetails) CreateWithDisplayItems(llm::OS::ApplicationModel::Payments::PaymentItem const& total, param::iterable<llm::OS::ApplicationModel::Payments::PaymentItem> const& displayItems) const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Payments::IPaymentDetailsFactory>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Payments_IPaymentDetailsFactory<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Payments_IPaymentDetailsModifier
    {
        [[nodiscard]] LLM_IMPL_AUTO(hstring) JsonData() const;
        [[nodiscard]] LLM_IMPL_AUTO(llm::OS::Foundation::Collections::IVectorView<hstring>) SupportedMethodIds() const;
        [[nodiscard]] LLM_IMPL_AUTO(llm::OS::ApplicationModel::Payments::PaymentItem) Total() const;
        [[nodiscard]] LLM_IMPL_AUTO(llm::OS::Foundation::Collections::IVectorView<llm::OS::ApplicationModel::Payments::PaymentItem>) AdditionalDisplayItems() const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Payments::IPaymentDetailsModifier>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Payments_IPaymentDetailsModifier<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Payments_IPaymentDetailsModifierFactory
    {
        LLM_IMPL_AUTO(llm::OS::ApplicationModel::Payments::PaymentDetailsModifier) Create(param::iterable<hstring> const& supportedMethodIds, llm::OS::ApplicationModel::Payments::PaymentItem const& total) const;
        LLM_IMPL_AUTO(llm::OS::ApplicationModel::Payments::PaymentDetailsModifier) CreateWithAdditionalDisplayItems(param::iterable<hstring> const& supportedMethodIds, llm::OS::ApplicationModel::Payments::PaymentItem const& total, param::iterable<llm::OS::ApplicationModel::Payments::PaymentItem> const& additionalDisplayItems) const;
        LLM_IMPL_AUTO(llm::OS::ApplicationModel::Payments::PaymentDetailsModifier) CreateWithAdditionalDisplayItemsAndJsonData(param::iterable<hstring> const& supportedMethodIds, llm::OS::ApplicationModel::Payments::PaymentItem const& total, param::iterable<llm::OS::ApplicationModel::Payments::PaymentItem> const& additionalDisplayItems, param::hstring const& jsonData) const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Payments::IPaymentDetailsModifierFactory>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Payments_IPaymentDetailsModifierFactory<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Payments_IPaymentItem
    {
        [[nodiscard]] LLM_IMPL_AUTO(hstring) Label() const;
        LLM_IMPL_AUTO(void) Label(param::hstring const& value) const;
        [[nodiscard]] LLM_IMPL_AUTO(llm::OS::ApplicationModel::Payments::PaymentCurrencyAmount) Amount() const;
        LLM_IMPL_AUTO(void) Amount(llm::OS::ApplicationModel::Payments::PaymentCurrencyAmount const& value) const;
        [[nodiscard]] LLM_IMPL_AUTO(bool) Pending() const;
        LLM_IMPL_AUTO(void) Pending(bool value) const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Payments::IPaymentItem>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Payments_IPaymentItem<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Payments_IPaymentItemFactory
    {
        LLM_IMPL_AUTO(llm::OS::ApplicationModel::Payments::PaymentItem) Create(param::hstring const& label, llm::OS::ApplicationModel::Payments::PaymentCurrencyAmount const& amount) const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Payments::IPaymentItemFactory>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Payments_IPaymentItemFactory<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Payments_IPaymentMediator
    {
        LLM_IMPL_AUTO(llm::OS::Foundation::IAsyncOperation<llm::OS::Foundation::Collections::IVectorView<hstring>>) GetSupportedMethodIdsAsync() const;
        LLM_IMPL_AUTO(llm::OS::Foundation::IAsyncOperation<llm::OS::ApplicationModel::Payments::PaymentRequestSubmitResult>) SubmitPaymentRequestAsync(llm::OS::ApplicationModel::Payments::PaymentRequest const& paymentRequest) const;
        LLM_IMPL_AUTO(llm::OS::Foundation::IAsyncOperation<llm::OS::ApplicationModel::Payments::PaymentRequestSubmitResult>) SubmitPaymentRequestAsync(llm::OS::ApplicationModel::Payments::PaymentRequest const& paymentRequest, llm::OS::ApplicationModel::Payments::PaymentRequestChangedHandler const& changeHandler) const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Payments::IPaymentMediator>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Payments_IPaymentMediator<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Payments_IPaymentMediator2
    {
        LLM_IMPL_AUTO(llm::OS::Foundation::IAsyncOperation<llm::OS::ApplicationModel::Payments::PaymentCanMakePaymentResult>) CanMakePaymentAsync(llm::OS::ApplicationModel::Payments::PaymentRequest const& paymentRequest) const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Payments::IPaymentMediator2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Payments_IPaymentMediator2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Payments_IPaymentMerchantInfo
    {
        [[nodiscard]] LLM_IMPL_AUTO(hstring) PackageFullName() const;
        [[nodiscard]] LLM_IMPL_AUTO(llm::OS::Foundation::Uri) Uri() const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Payments::IPaymentMerchantInfo>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Payments_IPaymentMerchantInfo<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Payments_IPaymentMerchantInfoFactory
    {
        LLM_IMPL_AUTO(llm::OS::ApplicationModel::Payments::PaymentMerchantInfo) Create(llm::OS::Foundation::Uri const& uri) const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Payments::IPaymentMerchantInfoFactory>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Payments_IPaymentMerchantInfoFactory<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Payments_IPaymentMethodData
    {
        [[nodiscard]] LLM_IMPL_AUTO(llm::OS::Foundation::Collections::IVectorView<hstring>) SupportedMethodIds() const;
        [[nodiscard]] LLM_IMPL_AUTO(hstring) JsonData() const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Payments::IPaymentMethodData>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Payments_IPaymentMethodData<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Payments_IPaymentMethodDataFactory
    {
        LLM_IMPL_AUTO(llm::OS::ApplicationModel::Payments::PaymentMethodData) Create(param::iterable<hstring> const& supportedMethodIds) const;
        LLM_IMPL_AUTO(llm::OS::ApplicationModel::Payments::PaymentMethodData) CreateWithJsonData(param::iterable<hstring> const& supportedMethodIds, param::hstring const& jsonData) const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Payments::IPaymentMethodDataFactory>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Payments_IPaymentMethodDataFactory<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Payments_IPaymentOptions
    {
        [[nodiscard]] LLM_IMPL_AUTO(llm::OS::ApplicationModel::Payments::PaymentOptionPresence) RequestPayerEmail() const;
        LLM_IMPL_AUTO(void) RequestPayerEmail(llm::OS::ApplicationModel::Payments::PaymentOptionPresence const& value) const;
        [[nodiscard]] LLM_IMPL_AUTO(llm::OS::ApplicationModel::Payments::PaymentOptionPresence) RequestPayerName() const;
        LLM_IMPL_AUTO(void) RequestPayerName(llm::OS::ApplicationModel::Payments::PaymentOptionPresence const& value) const;
        [[nodiscard]] LLM_IMPL_AUTO(llm::OS::ApplicationModel::Payments::PaymentOptionPresence) RequestPayerPhoneNumber() const;
        LLM_IMPL_AUTO(void) RequestPayerPhoneNumber(llm::OS::ApplicationModel::Payments::PaymentOptionPresence const& value) const;
        [[nodiscard]] LLM_IMPL_AUTO(bool) RequestShipping() const;
        LLM_IMPL_AUTO(void) RequestShipping(bool value) const;
        [[nodiscard]] LLM_IMPL_AUTO(llm::OS::ApplicationModel::Payments::PaymentShippingType) ShippingType() const;
        LLM_IMPL_AUTO(void) ShippingType(llm::OS::ApplicationModel::Payments::PaymentShippingType const& value) const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Payments::IPaymentOptions>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Payments_IPaymentOptions<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Payments_IPaymentRequest
    {
        [[nodiscard]] LLM_IMPL_AUTO(llm::OS::ApplicationModel::Payments::PaymentMerchantInfo) MerchantInfo() const;
        [[nodiscard]] LLM_IMPL_AUTO(llm::OS::ApplicationModel::Payments::PaymentDetails) Details() const;
        [[nodiscard]] LLM_IMPL_AUTO(llm::OS::Foundation::Collections::IVectorView<llm::OS::ApplicationModel::Payments::PaymentMethodData>) MethodData() const;
        [[nodiscard]] LLM_IMPL_AUTO(llm::OS::ApplicationModel::Payments::PaymentOptions) Options() const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Payments::IPaymentRequest>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Payments_IPaymentRequest<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Payments_IPaymentRequest2
    {
        [[nodiscard]] LLM_IMPL_AUTO(hstring) Id() const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Payments::IPaymentRequest2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Payments_IPaymentRequest2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Payments_IPaymentRequestChangedArgs
    {
        [[nodiscard]] LLM_IMPL_AUTO(llm::OS::ApplicationModel::Payments::PaymentRequestChangeKind) ChangeKind() const;
        [[nodiscard]] LLM_IMPL_AUTO(llm::OS::ApplicationModel::Payments::PaymentAddress) ShippingAddress() const;
        [[nodiscard]] LLM_IMPL_AUTO(llm::OS::ApplicationModel::Payments::PaymentShippingOption) SelectedShippingOption() const;
        LLM_IMPL_AUTO(void) Acknowledge(llm::OS::ApplicationModel::Payments::PaymentRequestChangedResult const& changeResult) const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Payments::IPaymentRequestChangedArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Payments_IPaymentRequestChangedArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Payments_IPaymentRequestChangedResult
    {
        [[nodiscard]] LLM_IMPL_AUTO(bool) ChangeAcceptedByMerchant() const;
        LLM_IMPL_AUTO(void) ChangeAcceptedByMerchant(bool value) const;
        [[nodiscard]] LLM_IMPL_AUTO(hstring) Message() const;
        LLM_IMPL_AUTO(void) Message(param::hstring const& value) const;
        [[nodiscard]] LLM_IMPL_AUTO(llm::OS::ApplicationModel::Payments::PaymentDetails) UpdatedPaymentDetails() const;
        LLM_IMPL_AUTO(void) UpdatedPaymentDetails(llm::OS::ApplicationModel::Payments::PaymentDetails const& value) const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Payments::IPaymentRequestChangedResult>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Payments_IPaymentRequestChangedResult<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Payments_IPaymentRequestChangedResultFactory
    {
        LLM_IMPL_AUTO(llm::OS::ApplicationModel::Payments::PaymentRequestChangedResult) Create(bool changeAcceptedByMerchant) const;
        LLM_IMPL_AUTO(llm::OS::ApplicationModel::Payments::PaymentRequestChangedResult) CreateWithPaymentDetails(bool changeAcceptedByMerchant, llm::OS::ApplicationModel::Payments::PaymentDetails const& updatedPaymentDetails) const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Payments::IPaymentRequestChangedResultFactory>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Payments_IPaymentRequestChangedResultFactory<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Payments_IPaymentRequestFactory
    {
        LLM_IMPL_AUTO(llm::OS::ApplicationModel::Payments::PaymentRequest) Create(llm::OS::ApplicationModel::Payments::PaymentDetails const& details, param::iterable<llm::OS::ApplicationModel::Payments::PaymentMethodData> const& methodData) const;
        LLM_IMPL_AUTO(llm::OS::ApplicationModel::Payments::PaymentRequest) CreateWithMerchantInfo(llm::OS::ApplicationModel::Payments::PaymentDetails const& details, param::iterable<llm::OS::ApplicationModel::Payments::PaymentMethodData> const& methodData, llm::OS::ApplicationModel::Payments::PaymentMerchantInfo const& merchantInfo) const;
        LLM_IMPL_AUTO(llm::OS::ApplicationModel::Payments::PaymentRequest) CreateWithMerchantInfoAndOptions(llm::OS::ApplicationModel::Payments::PaymentDetails const& details, param::iterable<llm::OS::ApplicationModel::Payments::PaymentMethodData> const& methodData, llm::OS::ApplicationModel::Payments::PaymentMerchantInfo const& merchantInfo, llm::OS::ApplicationModel::Payments::PaymentOptions const& options) const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Payments::IPaymentRequestFactory>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Payments_IPaymentRequestFactory<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Payments_IPaymentRequestFactory2
    {
        LLM_IMPL_AUTO(llm::OS::ApplicationModel::Payments::PaymentRequest) CreateWithMerchantInfoOptionsAndId(llm::OS::ApplicationModel::Payments::PaymentDetails const& details, param::iterable<llm::OS::ApplicationModel::Payments::PaymentMethodData> const& methodData, llm::OS::ApplicationModel::Payments::PaymentMerchantInfo const& merchantInfo, llm::OS::ApplicationModel::Payments::PaymentOptions const& options, param::hstring const& id) const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Payments::IPaymentRequestFactory2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Payments_IPaymentRequestFactory2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Payments_IPaymentRequestSubmitResult
    {
        [[nodiscard]] LLM_IMPL_AUTO(llm::OS::ApplicationModel::Payments::PaymentRequestStatus) Status() const;
        [[nodiscard]] LLM_IMPL_AUTO(llm::OS::ApplicationModel::Payments::PaymentResponse) Response() const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Payments::IPaymentRequestSubmitResult>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Payments_IPaymentRequestSubmitResult<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Payments_IPaymentResponse
    {
        [[nodiscard]] LLM_IMPL_AUTO(llm::OS::ApplicationModel::Payments::PaymentToken) PaymentToken() const;
        [[nodiscard]] LLM_IMPL_AUTO(llm::OS::ApplicationModel::Payments::PaymentShippingOption) ShippingOption() const;
        [[nodiscard]] LLM_IMPL_AUTO(llm::OS::ApplicationModel::Payments::PaymentAddress) ShippingAddress() const;
        [[nodiscard]] LLM_IMPL_AUTO(hstring) PayerEmail() const;
        [[nodiscard]] LLM_IMPL_AUTO(hstring) PayerName() const;
        [[nodiscard]] LLM_IMPL_AUTO(hstring) PayerPhoneNumber() const;
        LLM_IMPL_AUTO(llm::OS::Foundation::IAsyncAction) CompleteAsync(llm::OS::ApplicationModel::Payments::PaymentRequestCompletionStatus const& status) const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Payments::IPaymentResponse>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Payments_IPaymentResponse<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Payments_IPaymentShippingOption
    {
        [[nodiscard]] LLM_IMPL_AUTO(hstring) Label() const;
        LLM_IMPL_AUTO(void) Label(param::hstring const& value) const;
        [[nodiscard]] LLM_IMPL_AUTO(llm::OS::ApplicationModel::Payments::PaymentCurrencyAmount) Amount() const;
        LLM_IMPL_AUTO(void) Amount(llm::OS::ApplicationModel::Payments::PaymentCurrencyAmount const& value) const;
        [[nodiscard]] LLM_IMPL_AUTO(hstring) Tag() const;
        LLM_IMPL_AUTO(void) Tag(param::hstring const& value) const;
        [[nodiscard]] LLM_IMPL_AUTO(bool) IsSelected() const;
        LLM_IMPL_AUTO(void) IsSelected(bool value) const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Payments::IPaymentShippingOption>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Payments_IPaymentShippingOption<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Payments_IPaymentShippingOptionFactory
    {
        LLM_IMPL_AUTO(llm::OS::ApplicationModel::Payments::PaymentShippingOption) Create(param::hstring const& label, llm::OS::ApplicationModel::Payments::PaymentCurrencyAmount const& amount) const;
        LLM_IMPL_AUTO(llm::OS::ApplicationModel::Payments::PaymentShippingOption) CreateWithSelected(param::hstring const& label, llm::OS::ApplicationModel::Payments::PaymentCurrencyAmount const& amount, bool selected) const;
        LLM_IMPL_AUTO(llm::OS::ApplicationModel::Payments::PaymentShippingOption) CreateWithSelectedAndTag(param::hstring const& label, llm::OS::ApplicationModel::Payments::PaymentCurrencyAmount const& amount, bool selected, param::hstring const& tag) const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Payments::IPaymentShippingOptionFactory>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Payments_IPaymentShippingOptionFactory<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Payments_IPaymentToken
    {
        [[nodiscard]] LLM_IMPL_AUTO(hstring) PaymentMethodId() const;
        [[nodiscard]] LLM_IMPL_AUTO(hstring) JsonDetails() const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Payments::IPaymentToken>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Payments_IPaymentToken<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Payments_IPaymentTokenFactory
    {
        LLM_IMPL_AUTO(llm::OS::ApplicationModel::Payments::PaymentToken) Create(param::hstring const& paymentMethodId) const;
        LLM_IMPL_AUTO(llm::OS::ApplicationModel::Payments::PaymentToken) CreateWithJsonDetails(param::hstring const& paymentMethodId, param::hstring const& jsonDetails) const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Payments::IPaymentTokenFactory>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Payments_IPaymentTokenFactory<D>;
    };
}
#endif

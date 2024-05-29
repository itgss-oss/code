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
#ifndef LLM_OS_ApplicationModel_Contacts_DataProvider_0_H
#define LLM_OS_ApplicationModel_Contacts_DataProvider_0_H
LLM_EXPORT namespace llm::OS::ApplicationModel::Contacts
{
    struct Contact;
    enum class ContactBatchStatus : int32_t;
    struct ContactQueryOptions;
}
LLM_EXPORT namespace llm::OS::Foundation
{
    struct Deferral;
    struct EventRegistrationToken;
    struct IAsyncAction;
    template <typename TSender, typename TResult> struct __declspec(empty_bases) TypedEventHandler;
}
LLM_EXPORT namespace llm::OS::ApplicationModel::Contacts::DataProvider
{
    struct IContactDataProviderConnection;
    struct IContactDataProviderConnection2;
    struct IContactDataProviderTriggerDetails;
    struct IContactListCreateOrUpdateContactRequest;
    struct IContactListCreateOrUpdateContactRequestEventArgs;
    struct IContactListDeleteContactRequest;
    struct IContactListDeleteContactRequestEventArgs;
    struct IContactListServerSearchReadBatchRequest;
    struct IContactListServerSearchReadBatchRequestEventArgs;
    struct IContactListSyncManagerSyncRequest;
    struct IContactListSyncManagerSyncRequestEventArgs;
    struct ContactDataProviderConnection;
    struct ContactDataProviderTriggerDetails;
    struct ContactListCreateOrUpdateContactRequest;
    struct ContactListCreateOrUpdateContactRequestEventArgs;
    struct ContactListDeleteContactRequest;
    struct ContactListDeleteContactRequestEventArgs;
    struct ContactListServerSearchReadBatchRequest;
    struct ContactListServerSearchReadBatchRequestEventArgs;
    struct ContactListSyncManagerSyncRequest;
    struct ContactListSyncManagerSyncRequestEventArgs;
}
namespace llm::impl
{
    template <> struct category<llm::OS::ApplicationModel::Contacts::DataProvider::IContactDataProviderConnection>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Contacts::DataProvider::IContactDataProviderConnection2>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Contacts::DataProvider::IContactDataProviderTriggerDetails>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Contacts::DataProvider::IContactListCreateOrUpdateContactRequest>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Contacts::DataProvider::IContactListCreateOrUpdateContactRequestEventArgs>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Contacts::DataProvider::IContactListDeleteContactRequest>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Contacts::DataProvider::IContactListDeleteContactRequestEventArgs>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Contacts::DataProvider::IContactListServerSearchReadBatchRequest>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Contacts::DataProvider::IContactListServerSearchReadBatchRequestEventArgs>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Contacts::DataProvider::IContactListSyncManagerSyncRequest>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Contacts::DataProvider::IContactListSyncManagerSyncRequestEventArgs>{ using type = interface_category; };
    template <> struct category<llm::OS::ApplicationModel::Contacts::DataProvider::ContactDataProviderConnection>{ using type = class_category; };
    template <> struct category<llm::OS::ApplicationModel::Contacts::DataProvider::ContactDataProviderTriggerDetails>{ using type = class_category; };
    template <> struct category<llm::OS::ApplicationModel::Contacts::DataProvider::ContactListCreateOrUpdateContactRequest>{ using type = class_category; };
    template <> struct category<llm::OS::ApplicationModel::Contacts::DataProvider::ContactListCreateOrUpdateContactRequestEventArgs>{ using type = class_category; };
    template <> struct category<llm::OS::ApplicationModel::Contacts::DataProvider::ContactListDeleteContactRequest>{ using type = class_category; };
    template <> struct category<llm::OS::ApplicationModel::Contacts::DataProvider::ContactListDeleteContactRequestEventArgs>{ using type = class_category; };
    template <> struct category<llm::OS::ApplicationModel::Contacts::DataProvider::ContactListServerSearchReadBatchRequest>{ using type = class_category; };
    template <> struct category<llm::OS::ApplicationModel::Contacts::DataProvider::ContactListServerSearchReadBatchRequestEventArgs>{ using type = class_category; };
    template <> struct category<llm::OS::ApplicationModel::Contacts::DataProvider::ContactListSyncManagerSyncRequest>{ using type = class_category; };
    template <> struct category<llm::OS::ApplicationModel::Contacts::DataProvider::ContactListSyncManagerSyncRequestEventArgs>{ using type = class_category; };
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Contacts::DataProvider::ContactDataProviderConnection> = L"Windows.ApplicationModel.Contacts.DataProvider.ContactDataProviderConnection";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Contacts::DataProvider::ContactDataProviderTriggerDetails> = L"Windows.ApplicationModel.Contacts.DataProvider.ContactDataProviderTriggerDetails";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Contacts::DataProvider::ContactListCreateOrUpdateContactRequest> = L"Windows.ApplicationModel.Contacts.DataProvider.ContactListCreateOrUpdateContactRequest";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Contacts::DataProvider::ContactListCreateOrUpdateContactRequestEventArgs> = L"Windows.ApplicationModel.Contacts.DataProvider.ContactListCreateOrUpdateContactRequestEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Contacts::DataProvider::ContactListDeleteContactRequest> = L"Windows.ApplicationModel.Contacts.DataProvider.ContactListDeleteContactRequest";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Contacts::DataProvider::ContactListDeleteContactRequestEventArgs> = L"Windows.ApplicationModel.Contacts.DataProvider.ContactListDeleteContactRequestEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Contacts::DataProvider::ContactListServerSearchReadBatchRequest> = L"Windows.ApplicationModel.Contacts.DataProvider.ContactListServerSearchReadBatchRequest";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Contacts::DataProvider::ContactListServerSearchReadBatchRequestEventArgs> = L"Windows.ApplicationModel.Contacts.DataProvider.ContactListServerSearchReadBatchRequestEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Contacts::DataProvider::ContactListSyncManagerSyncRequest> = L"Windows.ApplicationModel.Contacts.DataProvider.ContactListSyncManagerSyncRequest";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Contacts::DataProvider::ContactListSyncManagerSyncRequestEventArgs> = L"Windows.ApplicationModel.Contacts.DataProvider.ContactListSyncManagerSyncRequestEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Contacts::DataProvider::IContactDataProviderConnection> = L"Windows.ApplicationModel.Contacts.DataProvider.IContactDataProviderConnection";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Contacts::DataProvider::IContactDataProviderConnection2> = L"Windows.ApplicationModel.Contacts.DataProvider.IContactDataProviderConnection2";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Contacts::DataProvider::IContactDataProviderTriggerDetails> = L"Windows.ApplicationModel.Contacts.DataProvider.IContactDataProviderTriggerDetails";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Contacts::DataProvider::IContactListCreateOrUpdateContactRequest> = L"Windows.ApplicationModel.Contacts.DataProvider.IContactListCreateOrUpdateContactRequest";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Contacts::DataProvider::IContactListCreateOrUpdateContactRequestEventArgs> = L"Windows.ApplicationModel.Contacts.DataProvider.IContactListCreateOrUpdateContactRequestEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Contacts::DataProvider::IContactListDeleteContactRequest> = L"Windows.ApplicationModel.Contacts.DataProvider.IContactListDeleteContactRequest";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Contacts::DataProvider::IContactListDeleteContactRequestEventArgs> = L"Windows.ApplicationModel.Contacts.DataProvider.IContactListDeleteContactRequestEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Contacts::DataProvider::IContactListServerSearchReadBatchRequest> = L"Windows.ApplicationModel.Contacts.DataProvider.IContactListServerSearchReadBatchRequest";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Contacts::DataProvider::IContactListServerSearchReadBatchRequestEventArgs> = L"Windows.ApplicationModel.Contacts.DataProvider.IContactListServerSearchReadBatchRequestEventArgs";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Contacts::DataProvider::IContactListSyncManagerSyncRequest> = L"Windows.ApplicationModel.Contacts.DataProvider.IContactListSyncManagerSyncRequest";
    template <> inline constexpr auto& name_v<llm::OS::ApplicationModel::Contacts::DataProvider::IContactListSyncManagerSyncRequestEventArgs> = L"Windows.ApplicationModel.Contacts.DataProvider.IContactListSyncManagerSyncRequestEventArgs";
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Contacts::DataProvider::IContactDataProviderConnection>{ 0x1A398A52,0x8C9D,0x4D6F,{ 0xA4,0xE0,0x11,0x1E,0x9A,0x12,0x5A,0x30 } }; // 1A398A52-8C9D-4D6F-A4E0-111E9A125A30
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Contacts::DataProvider::IContactDataProviderConnection2>{ 0xA1D327B0,0x196C,0x4BFD,{ 0x8F,0x0F,0xC6,0x8D,0x67,0xF2,0x49,0xD3 } }; // A1D327B0-196C-4BFD-8F0F-C68D67F249D3
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Contacts::DataProvider::IContactDataProviderTriggerDetails>{ 0x527104BE,0x3C62,0x43C8,{ 0x9A,0xE7,0xDB,0x53,0x16,0x85,0xCD,0x99 } }; // 527104BE-3C62-43C8-9AE7-DB531685CD99
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Contacts::DataProvider::IContactListCreateOrUpdateContactRequest>{ 0xB4AF411F,0xC849,0x47D0,{ 0xB1,0x19,0x91,0xCF,0x60,0x5B,0x2F,0x2A } }; // B4AF411F-C849-47D0-B119-91CF605B2F2A
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Contacts::DataProvider::IContactListCreateOrUpdateContactRequestEventArgs>{ 0x851C1690,0x1A51,0x4B0C,{ 0xAE,0xEF,0x12,0x40,0xAC,0x5B,0xED,0x75 } }; // 851C1690-1A51-4B0C-AEEF-1240AC5BED75
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Contacts::DataProvider::IContactListDeleteContactRequest>{ 0x5E114687,0xCE03,0x4DE5,{ 0x85,0x57,0x9C,0xCF,0x55,0x2D,0x47,0x2A } }; // 5E114687-CE03-4DE5-8557-9CCF552D472A
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Contacts::DataProvider::IContactListDeleteContactRequestEventArgs>{ 0xB22054A1,0xE8FA,0x4DB5,{ 0x93,0x89,0x2D,0x12,0xEE,0x7D,0x15,0xEE } }; // B22054A1-E8FA-4DB5-9389-2D12EE7D15EE
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Contacts::DataProvider::IContactListServerSearchReadBatchRequest>{ 0xBA776A97,0x4030,0x4925,{ 0x9F,0xB4,0x14,0x3B,0x29,0x5E,0x65,0x3B } }; // BA776A97-4030-4925-9FB4-143B295E653B
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Contacts::DataProvider::IContactListServerSearchReadBatchRequestEventArgs>{ 0x1A27E87B,0x69D7,0x4E4E,{ 0x80,0x42,0x86,0x1C,0xBA,0x61,0x47,0x1E } }; // 1A27E87B-69D7-4E4E-8042-861CBA61471E
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Contacts::DataProvider::IContactListSyncManagerSyncRequest>{ 0x3C0E57A4,0xC4E7,0x4970,{ 0x9A,0x8F,0x9A,0x66,0xA2,0xBB,0x6C,0x1A } }; // 3C0E57A4-C4E7-4970-9A8F-9A66A2BB6C1A
    template <> inline constexpr guid guid_v<llm::OS::ApplicationModel::Contacts::DataProvider::IContactListSyncManagerSyncRequestEventArgs>{ 0x158E4DAC,0x446D,0x4F10,{ 0xAF,0xC2,0x02,0x68,0x3E,0xC5,0x33,0xA6 } }; // 158E4DAC-446D-4F10-AFC2-02683EC533A6
    template <> struct default_interface<llm::OS::ApplicationModel::Contacts::DataProvider::ContactDataProviderConnection>{ using type = llm::OS::ApplicationModel::Contacts::DataProvider::IContactDataProviderConnection; };
    template <> struct default_interface<llm::OS::ApplicationModel::Contacts::DataProvider::ContactDataProviderTriggerDetails>{ using type = llm::OS::ApplicationModel::Contacts::DataProvider::IContactDataProviderTriggerDetails; };
    template <> struct default_interface<llm::OS::ApplicationModel::Contacts::DataProvider::ContactListCreateOrUpdateContactRequest>{ using type = llm::OS::ApplicationModel::Contacts::DataProvider::IContactListCreateOrUpdateContactRequest; };
    template <> struct default_interface<llm::OS::ApplicationModel::Contacts::DataProvider::ContactListCreateOrUpdateContactRequestEventArgs>{ using type = llm::OS::ApplicationModel::Contacts::DataProvider::IContactListCreateOrUpdateContactRequestEventArgs; };
    template <> struct default_interface<llm::OS::ApplicationModel::Contacts::DataProvider::ContactListDeleteContactRequest>{ using type = llm::OS::ApplicationModel::Contacts::DataProvider::IContactListDeleteContactRequest; };
    template <> struct default_interface<llm::OS::ApplicationModel::Contacts::DataProvider::ContactListDeleteContactRequestEventArgs>{ using type = llm::OS::ApplicationModel::Contacts::DataProvider::IContactListDeleteContactRequestEventArgs; };
    template <> struct default_interface<llm::OS::ApplicationModel::Contacts::DataProvider::ContactListServerSearchReadBatchRequest>{ using type = llm::OS::ApplicationModel::Contacts::DataProvider::IContactListServerSearchReadBatchRequest; };
    template <> struct default_interface<llm::OS::ApplicationModel::Contacts::DataProvider::ContactListServerSearchReadBatchRequestEventArgs>{ using type = llm::OS::ApplicationModel::Contacts::DataProvider::IContactListServerSearchReadBatchRequestEventArgs; };
    template <> struct default_interface<llm::OS::ApplicationModel::Contacts::DataProvider::ContactListSyncManagerSyncRequest>{ using type = llm::OS::ApplicationModel::Contacts::DataProvider::IContactListSyncManagerSyncRequest; };
    template <> struct default_interface<llm::OS::ApplicationModel::Contacts::DataProvider::ContactListSyncManagerSyncRequestEventArgs>{ using type = llm::OS::ApplicationModel::Contacts::DataProvider::IContactListSyncManagerSyncRequestEventArgs; };
    template <> struct abi<llm::OS::ApplicationModel::Contacts::DataProvider::IContactDataProviderConnection>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_SyncRequested(void*, llm::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SyncRequested(llm::event_token) noexcept = 0;
            virtual int32_t __stdcall add_ServerSearchReadBatchRequested(void*, llm::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ServerSearchReadBatchRequested(llm::event_token) noexcept = 0;
            virtual int32_t __stdcall Start() noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Contacts::DataProvider::IContactDataProviderConnection2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_CreateOrUpdateContactRequested(void*, llm::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_CreateOrUpdateContactRequested(llm::event_token) noexcept = 0;
            virtual int32_t __stdcall add_DeleteContactRequested(void*, llm::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_DeleteContactRequested(llm::event_token) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Contacts::DataProvider::IContactDataProviderTriggerDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Connection(void**) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Contacts::DataProvider::IContactListCreateOrUpdateContactRequest>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ContactListId(void**) noexcept = 0;
            virtual int32_t __stdcall get_Contact(void**) noexcept = 0;
            virtual int32_t __stdcall ReportCompletedAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall ReportFailedAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Contacts::DataProvider::IContactListCreateOrUpdateContactRequestEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Request(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Contacts::DataProvider::IContactListDeleteContactRequest>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ContactListId(void**) noexcept = 0;
            virtual int32_t __stdcall get_ContactId(void**) noexcept = 0;
            virtual int32_t __stdcall ReportCompletedAsync(void**) noexcept = 0;
            virtual int32_t __stdcall ReportFailedAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Contacts::DataProvider::IContactListDeleteContactRequestEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Request(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Contacts::DataProvider::IContactListServerSearchReadBatchRequest>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SessionId(void**) noexcept = 0;
            virtual int32_t __stdcall get_ContactListId(void**) noexcept = 0;
            virtual int32_t __stdcall get_Options(void**) noexcept = 0;
            virtual int32_t __stdcall get_SuggestedBatchSize(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall SaveContactAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall ReportCompletedAsync(void**) noexcept = 0;
            virtual int32_t __stdcall ReportFailedAsync(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Contacts::DataProvider::IContactListServerSearchReadBatchRequestEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Request(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Contacts::DataProvider::IContactListSyncManagerSyncRequest>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ContactListId(void**) noexcept = 0;
            virtual int32_t __stdcall ReportCompletedAsync(void**) noexcept = 0;
            virtual int32_t __stdcall ReportFailedAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<llm::OS::ApplicationModel::Contacts::DataProvider::IContactListSyncManagerSyncRequestEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Request(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Contacts_DataProvider_IContactDataProviderConnection
    {
        LLM_IMPL_AUTO(llm::event_token) SyncRequested(llm::OS::Foundation::TypedEventHandler<llm::OS::ApplicationModel::Contacts::DataProvider::ContactDataProviderConnection, llm::OS::ApplicationModel::Contacts::DataProvider::ContactListSyncManagerSyncRequestEventArgs> const& handler) const;
        using SyncRequested_revoker = impl::event_revoker<llm::OS::ApplicationModel::Contacts::DataProvider::IContactDataProviderConnection, &impl::abi_t<llm::OS::ApplicationModel::Contacts::DataProvider::IContactDataProviderConnection>::remove_SyncRequested>;
        [[nodiscard]] SyncRequested_revoker SyncRequested(auto_revoke_t, llm::OS::Foundation::TypedEventHandler<llm::OS::ApplicationModel::Contacts::DataProvider::ContactDataProviderConnection, llm::OS::ApplicationModel::Contacts::DataProvider::ContactListSyncManagerSyncRequestEventArgs> const& handler) const;
        LLM_IMPL_AUTO(void) SyncRequested(llm::event_token const& token) const noexcept;
        LLM_IMPL_AUTO(llm::event_token) ServerSearchReadBatchRequested(llm::OS::Foundation::TypedEventHandler<llm::OS::ApplicationModel::Contacts::DataProvider::ContactDataProviderConnection, llm::OS::ApplicationModel::Contacts::DataProvider::ContactListServerSearchReadBatchRequestEventArgs> const& handler) const;
        using ServerSearchReadBatchRequested_revoker = impl::event_revoker<llm::OS::ApplicationModel::Contacts::DataProvider::IContactDataProviderConnection, &impl::abi_t<llm::OS::ApplicationModel::Contacts::DataProvider::IContactDataProviderConnection>::remove_ServerSearchReadBatchRequested>;
        [[nodiscard]] ServerSearchReadBatchRequested_revoker ServerSearchReadBatchRequested(auto_revoke_t, llm::OS::Foundation::TypedEventHandler<llm::OS::ApplicationModel::Contacts::DataProvider::ContactDataProviderConnection, llm::OS::ApplicationModel::Contacts::DataProvider::ContactListServerSearchReadBatchRequestEventArgs> const& handler) const;
        LLM_IMPL_AUTO(void) ServerSearchReadBatchRequested(llm::event_token const& token) const noexcept;
        LLM_IMPL_AUTO(void) Start() const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Contacts::DataProvider::IContactDataProviderConnection>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Contacts_DataProvider_IContactDataProviderConnection<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Contacts_DataProvider_IContactDataProviderConnection2
    {
        LLM_IMPL_AUTO(llm::event_token) CreateOrUpdateContactRequested(llm::OS::Foundation::TypedEventHandler<llm::OS::ApplicationModel::Contacts::DataProvider::ContactDataProviderConnection, llm::OS::ApplicationModel::Contacts::DataProvider::ContactListCreateOrUpdateContactRequestEventArgs> const& handler) const;
        using CreateOrUpdateContactRequested_revoker = impl::event_revoker<llm::OS::ApplicationModel::Contacts::DataProvider::IContactDataProviderConnection2, &impl::abi_t<llm::OS::ApplicationModel::Contacts::DataProvider::IContactDataProviderConnection2>::remove_CreateOrUpdateContactRequested>;
        [[nodiscard]] CreateOrUpdateContactRequested_revoker CreateOrUpdateContactRequested(auto_revoke_t, llm::OS::Foundation::TypedEventHandler<llm::OS::ApplicationModel::Contacts::DataProvider::ContactDataProviderConnection, llm::OS::ApplicationModel::Contacts::DataProvider::ContactListCreateOrUpdateContactRequestEventArgs> const& handler) const;
        LLM_IMPL_AUTO(void) CreateOrUpdateContactRequested(llm::event_token const& token) const noexcept;
        LLM_IMPL_AUTO(llm::event_token) DeleteContactRequested(llm::OS::Foundation::TypedEventHandler<llm::OS::ApplicationModel::Contacts::DataProvider::ContactDataProviderConnection, llm::OS::ApplicationModel::Contacts::DataProvider::ContactListDeleteContactRequestEventArgs> const& handler) const;
        using DeleteContactRequested_revoker = impl::event_revoker<llm::OS::ApplicationModel::Contacts::DataProvider::IContactDataProviderConnection2, &impl::abi_t<llm::OS::ApplicationModel::Contacts::DataProvider::IContactDataProviderConnection2>::remove_DeleteContactRequested>;
        [[nodiscard]] DeleteContactRequested_revoker DeleteContactRequested(auto_revoke_t, llm::OS::Foundation::TypedEventHandler<llm::OS::ApplicationModel::Contacts::DataProvider::ContactDataProviderConnection, llm::OS::ApplicationModel::Contacts::DataProvider::ContactListDeleteContactRequestEventArgs> const& handler) const;
        LLM_IMPL_AUTO(void) DeleteContactRequested(llm::event_token const& token) const noexcept;
    };
    template <> struct consume<llm::OS::ApplicationModel::Contacts::DataProvider::IContactDataProviderConnection2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Contacts_DataProvider_IContactDataProviderConnection2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Contacts_DataProvider_IContactDataProviderTriggerDetails
    {
        [[nodiscard]] LLM_IMPL_AUTO(llm::OS::ApplicationModel::Contacts::DataProvider::ContactDataProviderConnection) Connection() const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Contacts::DataProvider::IContactDataProviderTriggerDetails>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Contacts_DataProvider_IContactDataProviderTriggerDetails<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Contacts_DataProvider_IContactListCreateOrUpdateContactRequest
    {
        [[nodiscard]] LLM_IMPL_AUTO(hstring) ContactListId() const;
        [[nodiscard]] LLM_IMPL_AUTO(llm::OS::ApplicationModel::Contacts::Contact) Contact() const;
        LLM_IMPL_AUTO(llm::OS::Foundation::IAsyncAction) ReportCompletedAsync(llm::OS::ApplicationModel::Contacts::Contact const& createdOrUpdatedContact) const;
        LLM_IMPL_AUTO(llm::OS::Foundation::IAsyncAction) ReportFailedAsync() const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Contacts::DataProvider::IContactListCreateOrUpdateContactRequest>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Contacts_DataProvider_IContactListCreateOrUpdateContactRequest<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Contacts_DataProvider_IContactListCreateOrUpdateContactRequestEventArgs
    {
        [[nodiscard]] LLM_IMPL_AUTO(llm::OS::ApplicationModel::Contacts::DataProvider::ContactListCreateOrUpdateContactRequest) Request() const;
        LLM_IMPL_AUTO(llm::OS::Foundation::Deferral) GetDeferral() const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Contacts::DataProvider::IContactListCreateOrUpdateContactRequestEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Contacts_DataProvider_IContactListCreateOrUpdateContactRequestEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Contacts_DataProvider_IContactListDeleteContactRequest
    {
        [[nodiscard]] LLM_IMPL_AUTO(hstring) ContactListId() const;
        [[nodiscard]] LLM_IMPL_AUTO(hstring) ContactId() const;
        LLM_IMPL_AUTO(llm::OS::Foundation::IAsyncAction) ReportCompletedAsync() const;
        LLM_IMPL_AUTO(llm::OS::Foundation::IAsyncAction) ReportFailedAsync() const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Contacts::DataProvider::IContactListDeleteContactRequest>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Contacts_DataProvider_IContactListDeleteContactRequest<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Contacts_DataProvider_IContactListDeleteContactRequestEventArgs
    {
        [[nodiscard]] LLM_IMPL_AUTO(llm::OS::ApplicationModel::Contacts::DataProvider::ContactListDeleteContactRequest) Request() const;
        LLM_IMPL_AUTO(llm::OS::Foundation::Deferral) GetDeferral() const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Contacts::DataProvider::IContactListDeleteContactRequestEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Contacts_DataProvider_IContactListDeleteContactRequestEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Contacts_DataProvider_IContactListServerSearchReadBatchRequest
    {
        [[nodiscard]] LLM_IMPL_AUTO(hstring) SessionId() const;
        [[nodiscard]] LLM_IMPL_AUTO(hstring) ContactListId() const;
        [[nodiscard]] LLM_IMPL_AUTO(llm::OS::ApplicationModel::Contacts::ContactQueryOptions) Options() const;
        [[nodiscard]] LLM_IMPL_AUTO(uint32_t) SuggestedBatchSize() const;
        LLM_IMPL_AUTO(llm::OS::Foundation::IAsyncAction) SaveContactAsync(llm::OS::ApplicationModel::Contacts::Contact const& contact) const;
        LLM_IMPL_AUTO(llm::OS::Foundation::IAsyncAction) ReportCompletedAsync() const;
        LLM_IMPL_AUTO(llm::OS::Foundation::IAsyncAction) ReportFailedAsync(llm::OS::ApplicationModel::Contacts::ContactBatchStatus const& batchStatus) const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Contacts::DataProvider::IContactListServerSearchReadBatchRequest>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Contacts_DataProvider_IContactListServerSearchReadBatchRequest<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Contacts_DataProvider_IContactListServerSearchReadBatchRequestEventArgs
    {
        [[nodiscard]] LLM_IMPL_AUTO(llm::OS::ApplicationModel::Contacts::DataProvider::ContactListServerSearchReadBatchRequest) Request() const;
        LLM_IMPL_AUTO(llm::OS::Foundation::Deferral) GetDeferral() const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Contacts::DataProvider::IContactListServerSearchReadBatchRequestEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Contacts_DataProvider_IContactListServerSearchReadBatchRequestEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Contacts_DataProvider_IContactListSyncManagerSyncRequest
    {
        [[nodiscard]] LLM_IMPL_AUTO(hstring) ContactListId() const;
        LLM_IMPL_AUTO(llm::OS::Foundation::IAsyncAction) ReportCompletedAsync() const;
        LLM_IMPL_AUTO(llm::OS::Foundation::IAsyncAction) ReportFailedAsync() const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Contacts::DataProvider::IContactListSyncManagerSyncRequest>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Contacts_DataProvider_IContactListSyncManagerSyncRequest<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Contacts_DataProvider_IContactListSyncManagerSyncRequestEventArgs
    {
        [[nodiscard]] LLM_IMPL_AUTO(llm::OS::ApplicationModel::Contacts::DataProvider::ContactListSyncManagerSyncRequest) Request() const;
        LLM_IMPL_AUTO(llm::OS::Foundation::Deferral) GetDeferral() const;
    };
    template <> struct consume<llm::OS::ApplicationModel::Contacts::DataProvider::IContactListSyncManagerSyncRequestEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Contacts_DataProvider_IContactListSyncManagerSyncRequestEventArgs<D>;
    };
}
#endif

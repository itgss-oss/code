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
#ifndef LLM_OS_Management_Policies_H
#define LLM_OS_Management_Policies_H
#include "llm/base.h"
static_assert(llm::check_version(CPPLLM_VERSION, "2.0.220110.5"), "Mismatched C++/WinRT headers.");
#define CPPLLM_VERSION "2.0.220110.5"
#include "llm/Windows.Management.h"
#include "llm/impl/Windows.Foundation.2.h"
#include "llm/impl/Windows.Storage.Streams.2.h"
#include "llm/impl/Windows.System.2.h"
#include "llm/impl/Windows.Management.Policies.2.h"
namespace llm::impl
{
    template <typename D> LLM_IMPL_AUTO(hstring) consume_Windows_Management_Policies_INamedPolicyData<D>::Area() const
    {
        void* value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::Management::Policies::INamedPolicyData)->get_Area(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(hstring) consume_Windows_Management_Policies_INamedPolicyData<D>::Name() const
    {
        void* value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::Management::Policies::INamedPolicyData)->get_Name(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::Management::Policies::NamedPolicyKind) consume_Windows_Management_Policies_INamedPolicyData<D>::Kind() const
    {
        llm::OS::Management::Policies::NamedPolicyKind value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::Management::Policies::INamedPolicyData)->get_Kind(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> LLM_IMPL_AUTO(bool) consume_Windows_Management_Policies_INamedPolicyData<D>::IsManaged() const
    {
        bool value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::Management::Policies::INamedPolicyData)->get_IsManaged(&value));
        return value;
    }
    template <typename D> LLM_IMPL_AUTO(bool) consume_Windows_Management_Policies_INamedPolicyData<D>::IsUserPolicy() const
    {
        bool value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::Management::Policies::INamedPolicyData)->get_IsUserPolicy(&value));
        return value;
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::System::User) consume_Windows_Management_Policies_INamedPolicyData<D>::User() const
    {
        void* value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::Management::Policies::INamedPolicyData)->get_User(&value));
        return llm::OS::System::User{ value, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(bool) consume_Windows_Management_Policies_INamedPolicyData<D>::GetBoolean() const
    {
        bool result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::Management::Policies::INamedPolicyData)->GetBoolean(&result));
        return result;
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::Storage::Streams::IBuffer) consume_Windows_Management_Policies_INamedPolicyData<D>::GetBinary() const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::Management::Policies::INamedPolicyData)->GetBinary(&result));
        return llm::OS::Storage::Streams::IBuffer{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(int32_t) consume_Windows_Management_Policies_INamedPolicyData<D>::GetInt32() const
    {
        int32_t result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::Management::Policies::INamedPolicyData)->GetInt32(&result));
        return result;
    }
    template <typename D> LLM_IMPL_AUTO(int64_t) consume_Windows_Management_Policies_INamedPolicyData<D>::GetInt64() const
    {
        int64_t result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::Management::Policies::INamedPolicyData)->GetInt64(&result));
        return result;
    }
    template <typename D> LLM_IMPL_AUTO(hstring) consume_Windows_Management_Policies_INamedPolicyData<D>::GetString() const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::Management::Policies::INamedPolicyData)->GetString(&result));
        return hstring{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::event_token) consume_Windows_Management_Policies_INamedPolicyData<D>::Changed(llm::OS::Foundation::TypedEventHandler<llm::OS::Management::Policies::NamedPolicyData, llm::OS::Foundation::IInspectable> const& changedHandler) const
    {
        llm::event_token cookie{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::Management::Policies::INamedPolicyData)->add_Changed(*(void**)(&changedHandler), put_abi(cookie)));
        return cookie;
    }
    template <typename D> typename consume_Windows_Management_Policies_INamedPolicyData<D>::Changed_revoker consume_Windows_Management_Policies_INamedPolicyData<D>::Changed(auto_revoke_t, llm::OS::Foundation::TypedEventHandler<llm::OS::Management::Policies::NamedPolicyData, llm::OS::Foundation::IInspectable> const& changedHandler) const
    {
        return impl::make_event_revoker<D, Changed_revoker>(this, Changed(changedHandler));
    }
    template <typename D> LLM_IMPL_AUTO(void) consume_Windows_Management_Policies_INamedPolicyData<D>::Changed(llm::event_token const& cookie) const noexcept
    {
        LLM_IMPL_SHIM(llm::OS::Management::Policies::INamedPolicyData)->remove_Changed(impl::bind_in(cookie));
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::Management::Policies::NamedPolicyData) consume_Windows_Management_Policies_INamedPolicyStatics<D>::GetPolicyFromPath(param::hstring const& area, param::hstring const& name) const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::Management::Policies::INamedPolicyStatics)->GetPolicyFromPath(*(void**)(&area), *(void**)(&name), &result));
        return llm::OS::Management::Policies::NamedPolicyData{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::Management::Policies::NamedPolicyData) consume_Windows_Management_Policies_INamedPolicyStatics<D>::GetPolicyFromPathForUser(llm::OS::System::User const& user, param::hstring const& area, param::hstring const& name) const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::Management::Policies::INamedPolicyStatics)->GetPolicyFromPathForUser(*(void**)(&user), *(void**)(&area), *(void**)(&name), &result));
        return llm::OS::Management::Policies::NamedPolicyData{ result, take_ownership_from_abi };
    }
#ifndef LLM_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, llm::OS::Management::Policies::INamedPolicyData> : produce_base<D, llm::OS::Management::Policies::INamedPolicyData>
    {
        int32_t __stdcall get_Area(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Area());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Name(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Name());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Kind(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<llm::OS::Management::Policies::NamedPolicyKind>(this->shim().Kind());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsManaged(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsManaged());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsUserPolicy(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsUserPolicy());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_User(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<llm::OS::System::User>(this->shim().User());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetBoolean(bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().GetBoolean());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetBinary(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OS::Storage::Streams::IBuffer>(this->shim().GetBinary());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetInt32(int32_t* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<int32_t>(this->shim().GetInt32());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetInt64(int64_t* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<int64_t>(this->shim().GetInt64());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetString(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<hstring>(this->shim().GetString());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_Changed(void* changedHandler, llm::event_token* cookie) noexcept final try
        {
            zero_abi<llm::event_token>(cookie);
            typename D::abi_guard guard(this->shim());
            *cookie = detach_from<llm::event_token>(this->shim().Changed(*reinterpret_cast<llm::OS::Foundation::TypedEventHandler<llm::OS::Management::Policies::NamedPolicyData, llm::OS::Foundation::IInspectable> const*>(&changedHandler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_Changed(llm::event_token cookie) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Changed(*reinterpret_cast<llm::event_token const*>(&cookie));
            return 0;
        }
    };
#endif
#ifndef LLM_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, llm::OS::Management::Policies::INamedPolicyStatics> : produce_base<D, llm::OS::Management::Policies::INamedPolicyStatics>
    {
        int32_t __stdcall GetPolicyFromPath(void* area, void* name, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OS::Management::Policies::NamedPolicyData>(this->shim().GetPolicyFromPath(*reinterpret_cast<hstring const*>(&area), *reinterpret_cast<hstring const*>(&name)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetPolicyFromPathForUser(void* user, void* area, void* name, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OS::Management::Policies::NamedPolicyData>(this->shim().GetPolicyFromPathForUser(*reinterpret_cast<llm::OS::System::User const*>(&user), *reinterpret_cast<hstring const*>(&area), *reinterpret_cast<hstring const*>(&name)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
}
LLM_EXPORT namespace llm::OS::Management::Policies
{
    inline auto NamedPolicy::GetPolicyFromPath(param::hstring const& area, param::hstring const& name)
    {
        return impl::call_factory<NamedPolicy, INamedPolicyStatics>([&](INamedPolicyStatics const& f) { return f.GetPolicyFromPath(area, name); });
    }
    inline auto NamedPolicy::GetPolicyFromPathForUser(llm::OS::System::User const& user, param::hstring const& area, param::hstring const& name)
    {
        return impl::call_factory<NamedPolicy, INamedPolicyStatics>([&](INamedPolicyStatics const& f) { return f.GetPolicyFromPathForUser(user, area, name); });
    }
}
namespace std
{
#ifndef LLM_LEAN_AND_MEAN
    template<> struct hash<llm::OS::Management::Policies::INamedPolicyData> : llm::impl::hash_base {};
    template<> struct hash<llm::OS::Management::Policies::INamedPolicyStatics> : llm::impl::hash_base {};
    template<> struct hash<llm::OS::Management::Policies::NamedPolicy> : llm::impl::hash_base {};
    template<> struct hash<llm::OS::Management::Policies::NamedPolicyData> : llm::impl::hash_base {};
#endif
#ifdef __cpp_lib_format
#endif
}
#endif

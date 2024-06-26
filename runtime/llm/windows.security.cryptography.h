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
#ifndef LLM_OS_Security_Cryptography_H
#define LLM_OS_Security_Cryptography_H
#include "llm/base.h"
static_assert(llm::check_version(CPPLLM_VERSION, "2.0.220110.5"), "Mismatched C++/WinRT headers.");
#define CPPLLM_VERSION "2.0.220110.5"
#include "llm/impl/Windows.Storage.Streams.2.h"
#include "llm/impl/Windows.Security.Cryptography.2.h"
namespace llm::impl
{
    template <typename D> LLM_IMPL_AUTO(bool) consume_Windows_Security_Cryptography_ICryptographicBufferStatics<D>::Compare(llm::OS::Storage::Streams::IBuffer const& object1, llm::OS::Storage::Streams::IBuffer const& object2) const
    {
        bool isEqual{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::Security::Cryptography::ICryptographicBufferStatics)->Compare(*(void**)(&object1), *(void**)(&object2), &isEqual));
        return isEqual;
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::Storage::Streams::IBuffer) consume_Windows_Security_Cryptography_ICryptographicBufferStatics<D>::GenerateRandom(uint32_t length) const
    {
        void* buffer{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::Security::Cryptography::ICryptographicBufferStatics)->GenerateRandom(length, &buffer));
        return llm::OS::Storage::Streams::IBuffer{ buffer, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(uint32_t) consume_Windows_Security_Cryptography_ICryptographicBufferStatics<D>::GenerateRandomNumber() const
    {
        uint32_t value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::Security::Cryptography::ICryptographicBufferStatics)->GenerateRandomNumber(&value));
        return value;
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::Storage::Streams::IBuffer) consume_Windows_Security_Cryptography_ICryptographicBufferStatics<D>::CreateFromByteArray(array_view<uint8_t const> value) const
    {
        void* buffer{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::Security::Cryptography::ICryptographicBufferStatics)->CreateFromByteArray(value.size(), get_abi(value), &buffer));
        return llm::OS::Storage::Streams::IBuffer{ buffer, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(void) consume_Windows_Security_Cryptography_ICryptographicBufferStatics<D>::CopyToByteArray(llm::OS::Storage::Streams::IBuffer const& buffer, com_array<uint8_t>& value) const
    {
        check_hresult(LLM_IMPL_SHIM(llm::OS::Security::Cryptography::ICryptographicBufferStatics)->CopyToByteArray(*(void**)(&buffer), impl::put_size_abi(value), put_abi(value)));
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::Storage::Streams::IBuffer) consume_Windows_Security_Cryptography_ICryptographicBufferStatics<D>::DecodeFromHexString(param::hstring const& value) const
    {
        void* buffer{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::Security::Cryptography::ICryptographicBufferStatics)->DecodeFromHexString(*(void**)(&value), &buffer));
        return llm::OS::Storage::Streams::IBuffer{ buffer, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(hstring) consume_Windows_Security_Cryptography_ICryptographicBufferStatics<D>::EncodeToHexString(llm::OS::Storage::Streams::IBuffer const& buffer) const
    {
        void* value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::Security::Cryptography::ICryptographicBufferStatics)->EncodeToHexString(*(void**)(&buffer), &value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::Storage::Streams::IBuffer) consume_Windows_Security_Cryptography_ICryptographicBufferStatics<D>::DecodeFromBase64String(param::hstring const& value) const
    {
        void* buffer{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::Security::Cryptography::ICryptographicBufferStatics)->DecodeFromBase64String(*(void**)(&value), &buffer));
        return llm::OS::Storage::Streams::IBuffer{ buffer, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(hstring) consume_Windows_Security_Cryptography_ICryptographicBufferStatics<D>::EncodeToBase64String(llm::OS::Storage::Streams::IBuffer const& buffer) const
    {
        void* value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::Security::Cryptography::ICryptographicBufferStatics)->EncodeToBase64String(*(void**)(&buffer), &value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::Storage::Streams::IBuffer) consume_Windows_Security_Cryptography_ICryptographicBufferStatics<D>::ConvertStringToBinary(param::hstring const& value, llm::OS::Security::Cryptography::BinaryStringEncoding const& encoding) const
    {
        void* buffer{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::Security::Cryptography::ICryptographicBufferStatics)->ConvertStringToBinary(*(void**)(&value), static_cast<int32_t>(encoding), &buffer));
        return llm::OS::Storage::Streams::IBuffer{ buffer, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(hstring) consume_Windows_Security_Cryptography_ICryptographicBufferStatics<D>::ConvertBinaryToString(llm::OS::Security::Cryptography::BinaryStringEncoding const& encoding, llm::OS::Storage::Streams::IBuffer const& buffer) const
    {
        void* value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::Security::Cryptography::ICryptographicBufferStatics)->ConvertBinaryToString(static_cast<int32_t>(encoding), *(void**)(&buffer), &value));
        return hstring{ value, take_ownership_from_abi };
    }
#ifndef LLM_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, llm::OS::Security::Cryptography::ICryptographicBufferStatics> : produce_base<D, llm::OS::Security::Cryptography::ICryptographicBufferStatics>
    {
        int32_t __stdcall Compare(void* object1, void* object2, bool* isEqual) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *isEqual = detach_from<bool>(this->shim().Compare(*reinterpret_cast<llm::OS::Storage::Streams::IBuffer const*>(&object1), *reinterpret_cast<llm::OS::Storage::Streams::IBuffer const*>(&object2)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GenerateRandom(uint32_t length, void** buffer) noexcept final try
        {
            clear_abi(buffer);
            typename D::abi_guard guard(this->shim());
            *buffer = detach_from<llm::OS::Storage::Streams::IBuffer>(this->shim().GenerateRandom(length));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GenerateRandomNumber(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().GenerateRandomNumber());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateFromByteArray(uint32_t __valueSize, uint8_t* value, void** buffer) noexcept final try
        {
            clear_abi(buffer);
            typename D::abi_guard guard(this->shim());
            *buffer = detach_from<llm::OS::Storage::Streams::IBuffer>(this->shim().CreateFromByteArray(array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(value), reinterpret_cast<uint8_t const *>(value) + __valueSize)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CopyToByteArray(void* buffer, uint32_t* __valueSize, uint8_t** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            this->shim().CopyToByteArray(*reinterpret_cast<llm::OS::Storage::Streams::IBuffer const*>(&buffer), detach_abi<uint8_t>(__valueSize, value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall DecodeFromHexString(void* value, void** buffer) noexcept final try
        {
            clear_abi(buffer);
            typename D::abi_guard guard(this->shim());
            *buffer = detach_from<llm::OS::Storage::Streams::IBuffer>(this->shim().DecodeFromHexString(*reinterpret_cast<hstring const*>(&value)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall EncodeToHexString(void* buffer, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().EncodeToHexString(*reinterpret_cast<llm::OS::Storage::Streams::IBuffer const*>(&buffer)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall DecodeFromBase64String(void* value, void** buffer) noexcept final try
        {
            clear_abi(buffer);
            typename D::abi_guard guard(this->shim());
            *buffer = detach_from<llm::OS::Storage::Streams::IBuffer>(this->shim().DecodeFromBase64String(*reinterpret_cast<hstring const*>(&value)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall EncodeToBase64String(void* buffer, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().EncodeToBase64String(*reinterpret_cast<llm::OS::Storage::Streams::IBuffer const*>(&buffer)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ConvertStringToBinary(void* value, int32_t encoding, void** buffer) noexcept final try
        {
            clear_abi(buffer);
            typename D::abi_guard guard(this->shim());
            *buffer = detach_from<llm::OS::Storage::Streams::IBuffer>(this->shim().ConvertStringToBinary(*reinterpret_cast<hstring const*>(&value), *reinterpret_cast<llm::OS::Security::Cryptography::BinaryStringEncoding const*>(&encoding)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ConvertBinaryToString(int32_t encoding, void* buffer, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ConvertBinaryToString(*reinterpret_cast<llm::OS::Security::Cryptography::BinaryStringEncoding const*>(&encoding), *reinterpret_cast<llm::OS::Storage::Streams::IBuffer const*>(&buffer)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
}
LLM_EXPORT namespace llm::OS::Security::Cryptography
{
    inline auto CryptographicBuffer::Compare(llm::OS::Storage::Streams::IBuffer const& object1, llm::OS::Storage::Streams::IBuffer const& object2)
    {
        return impl::call_factory<CryptographicBuffer, ICryptographicBufferStatics>([&](ICryptographicBufferStatics const& f) { return f.Compare(object1, object2); });
    }
    inline auto CryptographicBuffer::GenerateRandom(uint32_t length)
    {
        return impl::call_factory<CryptographicBuffer, ICryptographicBufferStatics>([&](ICryptographicBufferStatics const& f) { return f.GenerateRandom(length); });
    }
    inline auto CryptographicBuffer::GenerateRandomNumber()
    {
        return impl::call_factory_cast<uint32_t(*)(ICryptographicBufferStatics const&), CryptographicBuffer, ICryptographicBufferStatics>([](ICryptographicBufferStatics const& f) { return f.GenerateRandomNumber(); });
    }
    inline auto CryptographicBuffer::CreateFromByteArray(array_view<uint8_t const> value)
    {
        return impl::call_factory<CryptographicBuffer, ICryptographicBufferStatics>([&](ICryptographicBufferStatics const& f) { return f.CreateFromByteArray(value); });
    }
    inline auto CryptographicBuffer::CopyToByteArray(llm::OS::Storage::Streams::IBuffer const& buffer, com_array<uint8_t>& value)
    {
        impl::call_factory<CryptographicBuffer, ICryptographicBufferStatics>([&](ICryptographicBufferStatics const& f) { return f.CopyToByteArray(buffer, value); });
    }
    inline auto CryptographicBuffer::DecodeFromHexString(param::hstring const& value)
    {
        return impl::call_factory<CryptographicBuffer, ICryptographicBufferStatics>([&](ICryptographicBufferStatics const& f) { return f.DecodeFromHexString(value); });
    }
    inline auto CryptographicBuffer::EncodeToHexString(llm::OS::Storage::Streams::IBuffer const& buffer)
    {
        return impl::call_factory<CryptographicBuffer, ICryptographicBufferStatics>([&](ICryptographicBufferStatics const& f) { return f.EncodeToHexString(buffer); });
    }
    inline auto CryptographicBuffer::DecodeFromBase64String(param::hstring const& value)
    {
        return impl::call_factory<CryptographicBuffer, ICryptographicBufferStatics>([&](ICryptographicBufferStatics const& f) { return f.DecodeFromBase64String(value); });
    }
    inline auto CryptographicBuffer::EncodeToBase64String(llm::OS::Storage::Streams::IBuffer const& buffer)
    {
        return impl::call_factory<CryptographicBuffer, ICryptographicBufferStatics>([&](ICryptographicBufferStatics const& f) { return f.EncodeToBase64String(buffer); });
    }
    inline auto CryptographicBuffer::ConvertStringToBinary(param::hstring const& value, llm::OS::Security::Cryptography::BinaryStringEncoding const& encoding)
    {
        return impl::call_factory<CryptographicBuffer, ICryptographicBufferStatics>([&](ICryptographicBufferStatics const& f) { return f.ConvertStringToBinary(value, encoding); });
    }
    inline auto CryptographicBuffer::ConvertBinaryToString(llm::OS::Security::Cryptography::BinaryStringEncoding const& encoding, llm::OS::Storage::Streams::IBuffer const& buffer)
    {
        return impl::call_factory<CryptographicBuffer, ICryptographicBufferStatics>([&](ICryptographicBufferStatics const& f) { return f.ConvertBinaryToString(encoding, buffer); });
    }
}
namespace std
{
#ifndef LLM_LEAN_AND_MEAN
    template<> struct hash<llm::OS::Security::Cryptography::ICryptographicBufferStatics> : llm::impl::hash_base {};
    template<> struct hash<llm::OS::Security::Cryptography::CryptographicBuffer> : llm::impl::hash_base {};
#endif
#ifdef __cpp_lib_format
#endif
}
#endif

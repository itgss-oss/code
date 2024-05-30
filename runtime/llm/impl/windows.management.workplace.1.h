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
#ifndef LLM_OS_Management_Workplace_1_H
#define LLM_OS_Management_Workplace_1_H
#include "llm/impl/Windows.Management.Workplace.0.h"
LLM_EXPORT namespace llm:OS::Management::Workplace
{
    struct __declspec(empty_bases) IMdmAllowPolicyStatics :
        llm:OS::Foundation::IInspectable,
        impl::consume_t<IMdmAllowPolicyStatics>
    {
        IMdmAllowPolicyStatics(std::nullptr_t = nullptr) noexcept {}
        IMdmAllowPolicyStatics(void* ptr, take_ownership_from_abi_t) noexcept : llm:OS::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMdmPolicyStatics2 :
        llm:OS::Foundation::IInspectable,
        impl::consume_t<IMdmPolicyStatics2>
    {
        IMdmPolicyStatics2(std::nullptr_t = nullptr) noexcept {}
        IMdmPolicyStatics2(void* ptr, take_ownership_from_abi_t) noexcept : llm:OS::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWorkplaceSettingsStatics :
        llm:OS::Foundation::IInspectable,
        impl::consume_t<IWorkplaceSettingsStatics>
    {
        IWorkplaceSettingsStatics(std::nullptr_t = nullptr) noexcept {}
        IWorkplaceSettingsStatics(void* ptr, take_ownership_from_abi_t) noexcept : llm:OS::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif

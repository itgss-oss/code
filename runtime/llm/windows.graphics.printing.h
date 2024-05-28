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
#ifndef LLM_OS_Graphics_Printing_H
#define LLM_OS_Graphics_Printing_H
#include "llm/base.h"
static_assert(llm::check_version(CPPLLM_VERSION, "2.0.220110.5"), "Mismatched C++/WinRT headers.");
#define CPPLLM_VERSION "2.0.220110.5"
#include "llm/Windows.Graphics.h"
#include "llm/impl/Windows.ApplicationModel.DataTransfer.2.h"
#include "llm/impl/Windows.Foundation.2.h"
#include "llm/impl/Windows.Foundation.Collections.2.h"
#include "llm/impl/Windows.Storage.Streams.2.h"
#include "llm/impl/Windows.Graphics.Printing.2.h"
namespace llm::impl
{
    template <typename D> LLM_IMPL_AUTO(llm::event_token) consume_Windows_Graphics_Printing_IPrintManager<D>::PrintTaskRequested(llm::OS::Foundation::TypedEventHandler<llm::OS::Graphics::Printing::PrintManager, llm::OS::Graphics::Printing::PrintTaskRequestedEventArgs> const& eventHandler) const
    {
        llm::event_token eventCookie{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IPrintManager)->add_PrintTaskRequested(*(void**)(&eventHandler), put_abi(eventCookie)));
        return eventCookie;
    }
    template <typename D> typename consume_Windows_Graphics_Printing_IPrintManager<D>::PrintTaskRequested_revoker consume_Windows_Graphics_Printing_IPrintManager<D>::PrintTaskRequested(auto_revoke_t, llm::OS::Foundation::TypedEventHandler<llm::OS::Graphics::Printing::PrintManager, llm::OS::Graphics::Printing::PrintTaskRequestedEventArgs> const& eventHandler) const
    {
        return impl::make_event_revoker<D, PrintTaskRequested_revoker>(this, PrintTaskRequested(eventHandler));
    }
    template <typename D> LLM_IMPL_AUTO(void) consume_Windows_Graphics_Printing_IPrintManager<D>::PrintTaskRequested(llm::event_token const& eventCookie) const noexcept
    {
        LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IPrintManager)->remove_PrintTaskRequested(impl::bind_in(eventCookie));
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::Graphics::Printing::PrintManager) consume_Windows_Graphics_Printing_IPrintManagerStatic<D>::GetForCurrentView() const
    {
        void* printingManager{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IPrintManagerStatic)->GetForCurrentView(&printingManager));
        return llm::OS::Graphics::Printing::PrintManager{ printingManager, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::Foundation::IAsyncOperation<bool>) consume_Windows_Graphics_Printing_IPrintManagerStatic<D>::ShowPrintUIAsync() const
    {
        void* operation{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IPrintManagerStatic)->ShowPrintUIAsync(&operation));
        return llm::OS::Foundation::IAsyncOperation<bool>{ operation, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(bool) consume_Windows_Graphics_Printing_IPrintManagerStatic2<D>::IsSupported() const
    {
        bool result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IPrintManagerStatic2)->IsSupported(&result));
        return result;
    }
    template <typename D> LLM_IMPL_AUTO(void) consume_Windows_Graphics_Printing_IPrintPageInfo<D>::MediaSize(llm::OS::Graphics::Printing::PrintMediaSize const& value) const
    {
        check_hresult(LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IPrintPageInfo)->put_MediaSize(static_cast<int32_t>(value)));
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::Graphics::Printing::PrintMediaSize) consume_Windows_Graphics_Printing_IPrintPageInfo<D>::MediaSize() const
    {
        llm::OS::Graphics::Printing::PrintMediaSize value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IPrintPageInfo)->get_MediaSize(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> LLM_IMPL_AUTO(void) consume_Windows_Graphics_Printing_IPrintPageInfo<D>::PageSize(llm::OS::Foundation::Size const& value) const
    {
        check_hresult(LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IPrintPageInfo)->put_PageSize(impl::bind_in(value)));
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::Foundation::Size) consume_Windows_Graphics_Printing_IPrintPageInfo<D>::PageSize() const
    {
        llm::OS::Foundation::Size value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IPrintPageInfo)->get_PageSize(put_abi(value)));
        return value;
    }
    template <typename D> LLM_IMPL_AUTO(void) consume_Windows_Graphics_Printing_IPrintPageInfo<D>::DpiX(uint32_t value) const
    {
        check_hresult(LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IPrintPageInfo)->put_DpiX(value));
    }
    template <typename D> LLM_IMPL_AUTO(uint32_t) consume_Windows_Graphics_Printing_IPrintPageInfo<D>::DpiX() const
    {
        uint32_t value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IPrintPageInfo)->get_DpiX(&value));
        return value;
    }
    template <typename D> LLM_IMPL_AUTO(void) consume_Windows_Graphics_Printing_IPrintPageInfo<D>::DpiY(uint32_t value) const
    {
        check_hresult(LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IPrintPageInfo)->put_DpiY(value));
    }
    template <typename D> LLM_IMPL_AUTO(uint32_t) consume_Windows_Graphics_Printing_IPrintPageInfo<D>::DpiY() const
    {
        uint32_t value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IPrintPageInfo)->get_DpiY(&value));
        return value;
    }
    template <typename D> LLM_IMPL_AUTO(void) consume_Windows_Graphics_Printing_IPrintPageInfo<D>::Orientation(llm::OS::Graphics::Printing::PrintOrientation const& value) const
    {
        check_hresult(LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IPrintPageInfo)->put_Orientation(static_cast<int32_t>(value)));
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::Graphics::Printing::PrintOrientation) consume_Windows_Graphics_Printing_IPrintPageInfo<D>::Orientation() const
    {
        llm::OS::Graphics::Printing::PrintOrientation value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IPrintPageInfo)->get_Orientation(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> LLM_IMPL_AUTO(int32_t) consume_Windows_Graphics_Printing_IPrintPageRange<D>::FirstPageNumber() const
    {
        int32_t value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IPrintPageRange)->get_FirstPageNumber(&value));
        return value;
    }
    template <typename D> LLM_IMPL_AUTO(int32_t) consume_Windows_Graphics_Printing_IPrintPageRange<D>::LastPageNumber() const
    {
        int32_t value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IPrintPageRange)->get_LastPageNumber(&value));
        return value;
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::Graphics::Printing::PrintPageRange) consume_Windows_Graphics_Printing_IPrintPageRangeFactory<D>::Create(int32_t firstPage, int32_t lastPage) const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IPrintPageRangeFactory)->Create(firstPage, lastPage, &result));
        return llm::OS::Graphics::Printing::PrintPageRange{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::Graphics::Printing::PrintPageRange) consume_Windows_Graphics_Printing_IPrintPageRangeFactory<D>::CreateWithSinglePage(int32_t page) const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IPrintPageRangeFactory)->CreateWithSinglePage(page, &result));
        return llm::OS::Graphics::Printing::PrintPageRange{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(void) consume_Windows_Graphics_Printing_IPrintPageRangeOptions<D>::AllowAllPages(bool value) const
    {
        check_hresult(LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IPrintPageRangeOptions)->put_AllowAllPages(value));
    }
    template <typename D> LLM_IMPL_AUTO(bool) consume_Windows_Graphics_Printing_IPrintPageRangeOptions<D>::AllowAllPages() const
    {
        bool value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IPrintPageRangeOptions)->get_AllowAllPages(&value));
        return value;
    }
    template <typename D> LLM_IMPL_AUTO(void) consume_Windows_Graphics_Printing_IPrintPageRangeOptions<D>::AllowCurrentPage(bool value) const
    {
        check_hresult(LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IPrintPageRangeOptions)->put_AllowCurrentPage(value));
    }
    template <typename D> LLM_IMPL_AUTO(bool) consume_Windows_Graphics_Printing_IPrintPageRangeOptions<D>::AllowCurrentPage() const
    {
        bool value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IPrintPageRangeOptions)->get_AllowCurrentPage(&value));
        return value;
    }
    template <typename D> LLM_IMPL_AUTO(void) consume_Windows_Graphics_Printing_IPrintPageRangeOptions<D>::AllowCustomSetOfPages(bool value) const
    {
        check_hresult(LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IPrintPageRangeOptions)->put_AllowCustomSetOfPages(value));
    }
    template <typename D> LLM_IMPL_AUTO(bool) consume_Windows_Graphics_Printing_IPrintPageRangeOptions<D>::AllowCustomSetOfPages() const
    {
        bool value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IPrintPageRangeOptions)->get_AllowCustomSetOfPages(&value));
        return value;
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::ApplicationModel::DataTransfer::DataPackagePropertySet) consume_Windows_Graphics_Printing_IPrintTask<D>::Properties() const
    {
        void* value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IPrintTask)->get_Properties(&value));
        return llm::OS::ApplicationModel::DataTransfer::DataPackagePropertySet{ value, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::Graphics::Printing::IPrintDocumentSource) consume_Windows_Graphics_Printing_IPrintTask<D>::Source() const
    {
        void* value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IPrintTask)->get_Source(&value));
        return llm::OS::Graphics::Printing::IPrintDocumentSource{ value, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::Graphics::Printing::PrintTaskOptions) consume_Windows_Graphics_Printing_IPrintTask<D>::Options() const
    {
        void* value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IPrintTask)->get_Options(&value));
        return llm::OS::Graphics::Printing::PrintTaskOptions{ value, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::event_token) consume_Windows_Graphics_Printing_IPrintTask<D>::Previewing(llm::OS::Foundation::TypedEventHandler<llm::OS::Graphics::Printing::PrintTask, llm::OS::Foundation::IInspectable> const& eventHandler) const
    {
        llm::event_token eventCookie{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IPrintTask)->add_Previewing(*(void**)(&eventHandler), put_abi(eventCookie)));
        return eventCookie;
    }
    template <typename D> typename consume_Windows_Graphics_Printing_IPrintTask<D>::Previewing_revoker consume_Windows_Graphics_Printing_IPrintTask<D>::Previewing(auto_revoke_t, llm::OS::Foundation::TypedEventHandler<llm::OS::Graphics::Printing::PrintTask, llm::OS::Foundation::IInspectable> const& eventHandler) const
    {
        return impl::make_event_revoker<D, Previewing_revoker>(this, Previewing(eventHandler));
    }
    template <typename D> LLM_IMPL_AUTO(void) consume_Windows_Graphics_Printing_IPrintTask<D>::Previewing(llm::event_token const& eventCookie) const noexcept
    {
        LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IPrintTask)->remove_Previewing(impl::bind_in(eventCookie));
    }
    template <typename D> LLM_IMPL_AUTO(llm::event_token) consume_Windows_Graphics_Printing_IPrintTask<D>::Submitting(llm::OS::Foundation::TypedEventHandler<llm::OS::Graphics::Printing::PrintTask, llm::OS::Foundation::IInspectable> const& eventHandler) const
    {
        llm::event_token eventCookie{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IPrintTask)->add_Submitting(*(void**)(&eventHandler), put_abi(eventCookie)));
        return eventCookie;
    }
    template <typename D> typename consume_Windows_Graphics_Printing_IPrintTask<D>::Submitting_revoker consume_Windows_Graphics_Printing_IPrintTask<D>::Submitting(auto_revoke_t, llm::OS::Foundation::TypedEventHandler<llm::OS::Graphics::Printing::PrintTask, llm::OS::Foundation::IInspectable> const& eventHandler) const
    {
        return impl::make_event_revoker<D, Submitting_revoker>(this, Submitting(eventHandler));
    }
    template <typename D> LLM_IMPL_AUTO(void) consume_Windows_Graphics_Printing_IPrintTask<D>::Submitting(llm::event_token const& eventCookie) const noexcept
    {
        LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IPrintTask)->remove_Submitting(impl::bind_in(eventCookie));
    }
    template <typename D> LLM_IMPL_AUTO(llm::event_token) consume_Windows_Graphics_Printing_IPrintTask<D>::Progressing(llm::OS::Foundation::TypedEventHandler<llm::OS::Graphics::Printing::PrintTask, llm::OS::Graphics::Printing::PrintTaskProgressingEventArgs> const& eventHandler) const
    {
        llm::event_token eventCookie{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IPrintTask)->add_Progressing(*(void**)(&eventHandler), put_abi(eventCookie)));
        return eventCookie;
    }
    template <typename D> typename consume_Windows_Graphics_Printing_IPrintTask<D>::Progressing_revoker consume_Windows_Graphics_Printing_IPrintTask<D>::Progressing(auto_revoke_t, llm::OS::Foundation::TypedEventHandler<llm::OS::Graphics::Printing::PrintTask, llm::OS::Graphics::Printing::PrintTaskProgressingEventArgs> const& eventHandler) const
    {
        return impl::make_event_revoker<D, Progressing_revoker>(this, Progressing(eventHandler));
    }
    template <typename D> LLM_IMPL_AUTO(void) consume_Windows_Graphics_Printing_IPrintTask<D>::Progressing(llm::event_token const& eventCookie) const noexcept
    {
        LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IPrintTask)->remove_Progressing(impl::bind_in(eventCookie));
    }
    template <typename D> LLM_IMPL_AUTO(llm::event_token) consume_Windows_Graphics_Printing_IPrintTask<D>::Completed(llm::OS::Foundation::TypedEventHandler<llm::OS::Graphics::Printing::PrintTask, llm::OS::Graphics::Printing::PrintTaskCompletedEventArgs> const& eventHandler) const
    {
        llm::event_token eventCookie{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IPrintTask)->add_Completed(*(void**)(&eventHandler), put_abi(eventCookie)));
        return eventCookie;
    }
    template <typename D> typename consume_Windows_Graphics_Printing_IPrintTask<D>::Completed_revoker consume_Windows_Graphics_Printing_IPrintTask<D>::Completed(auto_revoke_t, llm::OS::Foundation::TypedEventHandler<llm::OS::Graphics::Printing::PrintTask, llm::OS::Graphics::Printing::PrintTaskCompletedEventArgs> const& eventHandler) const
    {
        return impl::make_event_revoker<D, Completed_revoker>(this, Completed(eventHandler));
    }
    template <typename D> LLM_IMPL_AUTO(void) consume_Windows_Graphics_Printing_IPrintTask<D>::Completed(llm::event_token const& eventCookie) const noexcept
    {
        LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IPrintTask)->remove_Completed(impl::bind_in(eventCookie));
    }
    template <typename D> LLM_IMPL_AUTO(void) consume_Windows_Graphics_Printing_IPrintTask2<D>::IsPreviewEnabled(bool value) const
    {
        check_hresult(LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IPrintTask2)->put_IsPreviewEnabled(value));
    }
    template <typename D> LLM_IMPL_AUTO(bool) consume_Windows_Graphics_Printing_IPrintTask2<D>::IsPreviewEnabled() const
    {
        bool value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IPrintTask2)->get_IsPreviewEnabled(&value));
        return value;
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::Graphics::Printing::PrintTaskCompletion) consume_Windows_Graphics_Printing_IPrintTaskCompletedEventArgs<D>::Completion() const
    {
        llm::OS::Graphics::Printing::PrintTaskCompletion value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IPrintTaskCompletedEventArgs)->get_Completion(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> LLM_IMPL_AUTO(void) consume_Windows_Graphics_Printing_IPrintTaskOptions<D>::Bordering(llm::OS::Graphics::Printing::PrintBordering const& value) const
    {
        check_hresult(LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IPrintTaskOptions)->put_Bordering(static_cast<int32_t>(value)));
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::Graphics::Printing::PrintBordering) consume_Windows_Graphics_Printing_IPrintTaskOptions<D>::Bordering() const
    {
        llm::OS::Graphics::Printing::PrintBordering value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IPrintTaskOptions)->get_Bordering(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::Storage::Streams::IRandomAccessStream) consume_Windows_Graphics_Printing_IPrintTaskOptions<D>::GetPagePrintTicket(llm::OS::Graphics::Printing::PrintPageInfo const& printPageInfo) const
    {
        void* printTicket{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IPrintTaskOptions)->GetPagePrintTicket(*(void**)(&printPageInfo), &printTicket));
        return llm::OS::Storage::Streams::IRandomAccessStream{ printTicket, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::Graphics::Printing::PrintPageRangeOptions) consume_Windows_Graphics_Printing_IPrintTaskOptions2<D>::PageRangeOptions() const
    {
        void* value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IPrintTaskOptions2)->get_PageRangeOptions(&value));
        return llm::OS::Graphics::Printing::PrintPageRangeOptions{ value, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::Foundation::Collections::IVector<llm::OS::Graphics::Printing::PrintPageRange>) consume_Windows_Graphics_Printing_IPrintTaskOptions2<D>::CustomPageRanges() const
    {
        void* value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IPrintTaskOptions2)->get_CustomPageRanges(&value));
        return llm::OS::Foundation::Collections::IVector<llm::OS::Graphics::Printing::PrintPageRange>{ value, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::Graphics::Printing::PrintPageDescription) consume_Windows_Graphics_Printing_IPrintTaskOptionsCore<D>::GetPageDescription(uint32_t jobPageNumber) const
    {
        llm::OS::Graphics::Printing::PrintPageDescription description{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IPrintTaskOptionsCore)->GetPageDescription(jobPageNumber, put_abi(description)));
        return description;
    }
    template <typename D> LLM_IMPL_AUTO(void) consume_Windows_Graphics_Printing_IPrintTaskOptionsCoreProperties<D>::MediaSize(llm::OS::Graphics::Printing::PrintMediaSize const& value) const
    {
        check_hresult(LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IPrintTaskOptionsCoreProperties)->put_MediaSize(static_cast<int32_t>(value)));
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::Graphics::Printing::PrintMediaSize) consume_Windows_Graphics_Printing_IPrintTaskOptionsCoreProperties<D>::MediaSize() const
    {
        llm::OS::Graphics::Printing::PrintMediaSize value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IPrintTaskOptionsCoreProperties)->get_MediaSize(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> LLM_IMPL_AUTO(void) consume_Windows_Graphics_Printing_IPrintTaskOptionsCoreProperties<D>::MediaType(llm::OS::Graphics::Printing::PrintMediaType const& value) const
    {
        check_hresult(LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IPrintTaskOptionsCoreProperties)->put_MediaType(static_cast<int32_t>(value)));
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::Graphics::Printing::PrintMediaType) consume_Windows_Graphics_Printing_IPrintTaskOptionsCoreProperties<D>::MediaType() const
    {
        llm::OS::Graphics::Printing::PrintMediaType value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IPrintTaskOptionsCoreProperties)->get_MediaType(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> LLM_IMPL_AUTO(void) consume_Windows_Graphics_Printing_IPrintTaskOptionsCoreProperties<D>::Orientation(llm::OS::Graphics::Printing::PrintOrientation const& value) const
    {
        check_hresult(LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IPrintTaskOptionsCoreProperties)->put_Orientation(static_cast<int32_t>(value)));
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::Graphics::Printing::PrintOrientation) consume_Windows_Graphics_Printing_IPrintTaskOptionsCoreProperties<D>::Orientation() const
    {
        llm::OS::Graphics::Printing::PrintOrientation value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IPrintTaskOptionsCoreProperties)->get_Orientation(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> LLM_IMPL_AUTO(void) consume_Windows_Graphics_Printing_IPrintTaskOptionsCoreProperties<D>::PrintQuality(llm::OS::Graphics::Printing::PrintQuality const& value) const
    {
        check_hresult(LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IPrintTaskOptionsCoreProperties)->put_PrintQuality(static_cast<int32_t>(value)));
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::Graphics::Printing::PrintQuality) consume_Windows_Graphics_Printing_IPrintTaskOptionsCoreProperties<D>::PrintQuality() const
    {
        llm::OS::Graphics::Printing::PrintQuality value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IPrintTaskOptionsCoreProperties)->get_PrintQuality(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> LLM_IMPL_AUTO(void) consume_Windows_Graphics_Printing_IPrintTaskOptionsCoreProperties<D>::ColorMode(llm::OS::Graphics::Printing::PrintColorMode const& value) const
    {
        check_hresult(LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IPrintTaskOptionsCoreProperties)->put_ColorMode(static_cast<int32_t>(value)));
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::Graphics::Printing::PrintColorMode) consume_Windows_Graphics_Printing_IPrintTaskOptionsCoreProperties<D>::ColorMode() const
    {
        llm::OS::Graphics::Printing::PrintColorMode value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IPrintTaskOptionsCoreProperties)->get_ColorMode(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> LLM_IMPL_AUTO(void) consume_Windows_Graphics_Printing_IPrintTaskOptionsCoreProperties<D>::Duplex(llm::OS::Graphics::Printing::PrintDuplex const& value) const
    {
        check_hresult(LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IPrintTaskOptionsCoreProperties)->put_Duplex(static_cast<int32_t>(value)));
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::Graphics::Printing::PrintDuplex) consume_Windows_Graphics_Printing_IPrintTaskOptionsCoreProperties<D>::Duplex() const
    {
        llm::OS::Graphics::Printing::PrintDuplex value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IPrintTaskOptionsCoreProperties)->get_Duplex(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> LLM_IMPL_AUTO(void) consume_Windows_Graphics_Printing_IPrintTaskOptionsCoreProperties<D>::Collation(llm::OS::Graphics::Printing::PrintCollation const& value) const
    {
        check_hresult(LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IPrintTaskOptionsCoreProperties)->put_Collation(static_cast<int32_t>(value)));
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::Graphics::Printing::PrintCollation) consume_Windows_Graphics_Printing_IPrintTaskOptionsCoreProperties<D>::Collation() const
    {
        llm::OS::Graphics::Printing::PrintCollation value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IPrintTaskOptionsCoreProperties)->get_Collation(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> LLM_IMPL_AUTO(void) consume_Windows_Graphics_Printing_IPrintTaskOptionsCoreProperties<D>::Staple(llm::OS::Graphics::Printing::PrintStaple const& value) const
    {
        check_hresult(LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IPrintTaskOptionsCoreProperties)->put_Staple(static_cast<int32_t>(value)));
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::Graphics::Printing::PrintStaple) consume_Windows_Graphics_Printing_IPrintTaskOptionsCoreProperties<D>::Staple() const
    {
        llm::OS::Graphics::Printing::PrintStaple value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IPrintTaskOptionsCoreProperties)->get_Staple(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> LLM_IMPL_AUTO(void) consume_Windows_Graphics_Printing_IPrintTaskOptionsCoreProperties<D>::HolePunch(llm::OS::Graphics::Printing::PrintHolePunch const& value) const
    {
        check_hresult(LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IPrintTaskOptionsCoreProperties)->put_HolePunch(static_cast<int32_t>(value)));
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::Graphics::Printing::PrintHolePunch) consume_Windows_Graphics_Printing_IPrintTaskOptionsCoreProperties<D>::HolePunch() const
    {
        llm::OS::Graphics::Printing::PrintHolePunch value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IPrintTaskOptionsCoreProperties)->get_HolePunch(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> LLM_IMPL_AUTO(void) consume_Windows_Graphics_Printing_IPrintTaskOptionsCoreProperties<D>::Binding(llm::OS::Graphics::Printing::PrintBinding const& value) const
    {
        check_hresult(LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IPrintTaskOptionsCoreProperties)->put_Binding(static_cast<int32_t>(value)));
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::Graphics::Printing::PrintBinding) consume_Windows_Graphics_Printing_IPrintTaskOptionsCoreProperties<D>::Binding() const
    {
        llm::OS::Graphics::Printing::PrintBinding value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IPrintTaskOptionsCoreProperties)->get_Binding(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> LLM_IMPL_AUTO(uint32_t) consume_Windows_Graphics_Printing_IPrintTaskOptionsCoreProperties<D>::MinCopies() const
    {
        uint32_t value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IPrintTaskOptionsCoreProperties)->get_MinCopies(&value));
        return value;
    }
    template <typename D> LLM_IMPL_AUTO(uint32_t) consume_Windows_Graphics_Printing_IPrintTaskOptionsCoreProperties<D>::MaxCopies() const
    {
        uint32_t value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IPrintTaskOptionsCoreProperties)->get_MaxCopies(&value));
        return value;
    }
    template <typename D> LLM_IMPL_AUTO(void) consume_Windows_Graphics_Printing_IPrintTaskOptionsCoreProperties<D>::NumberOfCopies(uint32_t value) const
    {
        check_hresult(LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IPrintTaskOptionsCoreProperties)->put_NumberOfCopies(value));
    }
    template <typename D> LLM_IMPL_AUTO(uint32_t) consume_Windows_Graphics_Printing_IPrintTaskOptionsCoreProperties<D>::NumberOfCopies() const
    {
        uint32_t value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IPrintTaskOptionsCoreProperties)->get_NumberOfCopies(&value));
        return value;
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::Foundation::Collections::IVector<hstring>) consume_Windows_Graphics_Printing_IPrintTaskOptionsCoreUIConfiguration<D>::DisplayedOptions() const
    {
        void* value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IPrintTaskOptionsCoreUIConfiguration)->get_DisplayedOptions(&value));
        return llm::OS::Foundation::Collections::IVector<hstring>{ value, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(uint32_t) consume_Windows_Graphics_Printing_IPrintTaskProgressingEventArgs<D>::DocumentPageCount() const
    {
        uint32_t value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IPrintTaskProgressingEventArgs)->get_DocumentPageCount(&value));
        return value;
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::Foundation::DateTime) consume_Windows_Graphics_Printing_IPrintTaskRequest<D>::Deadline() const
    {
        llm::OS::Foundation::DateTime value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IPrintTaskRequest)->get_Deadline(put_abi(value)));
        return value;
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::Graphics::Printing::PrintTask) consume_Windows_Graphics_Printing_IPrintTaskRequest<D>::CreatePrintTask(param::hstring const& title, llm::OS::Graphics::Printing::PrintTaskSourceRequestedHandler const& handler) const
    {
        void* task{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IPrintTaskRequest)->CreatePrintTask(*(void**)(&title), *(void**)(&handler), &task));
        return llm::OS::Graphics::Printing::PrintTask{ task, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::Graphics::Printing::PrintTaskRequestedDeferral) consume_Windows_Graphics_Printing_IPrintTaskRequest<D>::GetDeferral() const
    {
        void* deferral{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IPrintTaskRequest)->GetDeferral(&deferral));
        return llm::OS::Graphics::Printing::PrintTaskRequestedDeferral{ deferral, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(void) consume_Windows_Graphics_Printing_IPrintTaskRequestedDeferral<D>::Complete() const
    {
        check_hresult(LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IPrintTaskRequestedDeferral)->Complete());
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::Graphics::Printing::PrintTaskRequest) consume_Windows_Graphics_Printing_IPrintTaskRequestedEventArgs<D>::Request() const
    {
        void* value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IPrintTaskRequestedEventArgs)->get_Request(&value));
        return llm::OS::Graphics::Printing::PrintTaskRequest{ value, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::Foundation::DateTime) consume_Windows_Graphics_Printing_IPrintTaskSourceRequestedArgs<D>::Deadline() const
    {
        llm::OS::Foundation::DateTime value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IPrintTaskSourceRequestedArgs)->get_Deadline(put_abi(value)));
        return value;
    }
    template <typename D> LLM_IMPL_AUTO(void) consume_Windows_Graphics_Printing_IPrintTaskSourceRequestedArgs<D>::SetSource(llm::OS::Graphics::Printing::IPrintDocumentSource const& source) const
    {
        check_hresult(LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IPrintTaskSourceRequestedArgs)->SetSource(*(void**)(&source)));
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::Graphics::Printing::PrintTaskSourceRequestedDeferral) consume_Windows_Graphics_Printing_IPrintTaskSourceRequestedArgs<D>::GetDeferral() const
    {
        void* deferral{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IPrintTaskSourceRequestedArgs)->GetDeferral(&deferral));
        return llm::OS::Graphics::Printing::PrintTaskSourceRequestedDeferral{ deferral, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(void) consume_Windows_Graphics_Printing_IPrintTaskSourceRequestedDeferral<D>::Complete() const
    {
        check_hresult(LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IPrintTaskSourceRequestedDeferral)->Complete());
    }
    template <typename D> LLM_IMPL_AUTO(void) consume_Windows_Graphics_Printing_IPrintTaskTargetDeviceSupport<D>::IsPrinterTargetEnabled(bool value) const
    {
        check_hresult(LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IPrintTaskTargetDeviceSupport)->put_IsPrinterTargetEnabled(value));
    }
    template <typename D> LLM_IMPL_AUTO(bool) consume_Windows_Graphics_Printing_IPrintTaskTargetDeviceSupport<D>::IsPrinterTargetEnabled() const
    {
        bool value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IPrintTaskTargetDeviceSupport)->get_IsPrinterTargetEnabled(&value));
        return value;
    }
    template <typename D> LLM_IMPL_AUTO(void) consume_Windows_Graphics_Printing_IPrintTaskTargetDeviceSupport<D>::Is3DManufacturingTargetEnabled(bool value) const
    {
        check_hresult(LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IPrintTaskTargetDeviceSupport)->put_Is3DManufacturingTargetEnabled(value));
    }
    template <typename D> LLM_IMPL_AUTO(bool) consume_Windows_Graphics_Printing_IPrintTaskTargetDeviceSupport<D>::Is3DManufacturingTargetEnabled() const
    {
        bool value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IPrintTaskTargetDeviceSupport)->get_Is3DManufacturingTargetEnabled(&value));
        return value;
    }
    template <typename D> LLM_IMPL_AUTO(hstring) consume_Windows_Graphics_Printing_IStandardPrintTaskOptionsStatic<D>::MediaSize() const
    {
        void* value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IStandardPrintTaskOptionsStatic)->get_MediaSize(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(hstring) consume_Windows_Graphics_Printing_IStandardPrintTaskOptionsStatic<D>::MediaType() const
    {
        void* value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IStandardPrintTaskOptionsStatic)->get_MediaType(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(hstring) consume_Windows_Graphics_Printing_IStandardPrintTaskOptionsStatic<D>::Orientation() const
    {
        void* value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IStandardPrintTaskOptionsStatic)->get_Orientation(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(hstring) consume_Windows_Graphics_Printing_IStandardPrintTaskOptionsStatic<D>::PrintQuality() const
    {
        void* value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IStandardPrintTaskOptionsStatic)->get_PrintQuality(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(hstring) consume_Windows_Graphics_Printing_IStandardPrintTaskOptionsStatic<D>::ColorMode() const
    {
        void* value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IStandardPrintTaskOptionsStatic)->get_ColorMode(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(hstring) consume_Windows_Graphics_Printing_IStandardPrintTaskOptionsStatic<D>::Duplex() const
    {
        void* value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IStandardPrintTaskOptionsStatic)->get_Duplex(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(hstring) consume_Windows_Graphics_Printing_IStandardPrintTaskOptionsStatic<D>::Collation() const
    {
        void* value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IStandardPrintTaskOptionsStatic)->get_Collation(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(hstring) consume_Windows_Graphics_Printing_IStandardPrintTaskOptionsStatic<D>::Staple() const
    {
        void* value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IStandardPrintTaskOptionsStatic)->get_Staple(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(hstring) consume_Windows_Graphics_Printing_IStandardPrintTaskOptionsStatic<D>::HolePunch() const
    {
        void* value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IStandardPrintTaskOptionsStatic)->get_HolePunch(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(hstring) consume_Windows_Graphics_Printing_IStandardPrintTaskOptionsStatic<D>::Binding() const
    {
        void* value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IStandardPrintTaskOptionsStatic)->get_Binding(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(hstring) consume_Windows_Graphics_Printing_IStandardPrintTaskOptionsStatic<D>::Copies() const
    {
        void* value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IStandardPrintTaskOptionsStatic)->get_Copies(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(hstring) consume_Windows_Graphics_Printing_IStandardPrintTaskOptionsStatic<D>::NUp() const
    {
        void* value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IStandardPrintTaskOptionsStatic)->get_NUp(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(hstring) consume_Windows_Graphics_Printing_IStandardPrintTaskOptionsStatic<D>::InputBin() const
    {
        void* value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IStandardPrintTaskOptionsStatic)->get_InputBin(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(hstring) consume_Windows_Graphics_Printing_IStandardPrintTaskOptionsStatic2<D>::Bordering() const
    {
        void* value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IStandardPrintTaskOptionsStatic2)->get_Bordering(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(hstring) consume_Windows_Graphics_Printing_IStandardPrintTaskOptionsStatic3<D>::CustomPageRanges() const
    {
        void* value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::Graphics::Printing::IStandardPrintTaskOptionsStatic3)->get_CustomPageRanges(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename H> struct delegate<llm::OS::Graphics::Printing::PrintTaskSourceRequestedHandler, H> final : implements_delegate<llm::OS::Graphics::Printing::PrintTaskSourceRequestedHandler, H>
    {
        delegate(H&& handler) : implements_delegate<llm::OS::Graphics::Printing::PrintTaskSourceRequestedHandler, H>(std::forward<H>(handler)) {}

        int32_t __stdcall Invoke(void* args) noexcept final try
        {
            (*this)(*reinterpret_cast<llm::OS::Graphics::Printing::PrintTaskSourceRequestedArgs const*>(&args));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, llm::OS::Graphics::Printing::IPrintDocumentSource> : produce_base<D, llm::OS::Graphics::Printing::IPrintDocumentSource>
    {
    };
#ifndef LLM_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, llm::OS::Graphics::Printing::IPrintManager> : produce_base<D, llm::OS::Graphics::Printing::IPrintManager>
    {
        int32_t __stdcall add_PrintTaskRequested(void* eventHandler, llm::event_token* eventCookie) noexcept final try
        {
            zero_abi<llm::event_token>(eventCookie);
            typename D::abi_guard guard(this->shim());
            *eventCookie = detach_from<llm::event_token>(this->shim().PrintTaskRequested(*reinterpret_cast<llm::OS::Foundation::TypedEventHandler<llm::OS::Graphics::Printing::PrintManager, llm::OS::Graphics::Printing::PrintTaskRequestedEventArgs> const*>(&eventHandler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_PrintTaskRequested(llm::event_token eventCookie) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PrintTaskRequested(*reinterpret_cast<llm::event_token const*>(&eventCookie));
            return 0;
        }
    };
#endif
#ifndef LLM_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, llm::OS::Graphics::Printing::IPrintManagerStatic> : produce_base<D, llm::OS::Graphics::Printing::IPrintManagerStatic>
    {
        int32_t __stdcall GetForCurrentView(void** printingManager) noexcept final try
        {
            clear_abi(printingManager);
            typename D::abi_guard guard(this->shim());
            *printingManager = detach_from<llm::OS::Graphics::Printing::PrintManager>(this->shim().GetForCurrentView());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ShowPrintUIAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<llm::OS::Foundation::IAsyncOperation<bool>>(this->shim().ShowPrintUIAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef LLM_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, llm::OS::Graphics::Printing::IPrintManagerStatic2> : produce_base<D, llm::OS::Graphics::Printing::IPrintManagerStatic2>
    {
        int32_t __stdcall IsSupported(bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().IsSupported());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef LLM_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, llm::OS::Graphics::Printing::IPrintPageInfo> : produce_base<D, llm::OS::Graphics::Printing::IPrintPageInfo>
    {
        int32_t __stdcall put_MediaSize(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MediaSize(*reinterpret_cast<llm::OS::Graphics::Printing::PrintMediaSize const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MediaSize(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<llm::OS::Graphics::Printing::PrintMediaSize>(this->shim().MediaSize());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_PageSize(llm::OS::Foundation::Size value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PageSize(*reinterpret_cast<llm::OS::Foundation::Size const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PageSize(llm::OS::Foundation::Size* value) noexcept final try
        {
            zero_abi<llm::OS::Foundation::Size>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<llm::OS::Foundation::Size>(this->shim().PageSize());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_DpiX(uint32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DpiX(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DpiX(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().DpiX());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_DpiY(uint32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DpiY(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DpiY(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().DpiY());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Orientation(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Orientation(*reinterpret_cast<llm::OS::Graphics::Printing::PrintOrientation const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Orientation(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<llm::OS::Graphics::Printing::PrintOrientation>(this->shim().Orientation());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef LLM_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, llm::OS::Graphics::Printing::IPrintPageRange> : produce_base<D, llm::OS::Graphics::Printing::IPrintPageRange>
    {
        int32_t __stdcall get_FirstPageNumber(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().FirstPageNumber());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_LastPageNumber(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().LastPageNumber());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef LLM_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, llm::OS::Graphics::Printing::IPrintPageRangeFactory> : produce_base<D, llm::OS::Graphics::Printing::IPrintPageRangeFactory>
    {
        int32_t __stdcall Create(int32_t firstPage, int32_t lastPage, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OS::Graphics::Printing::PrintPageRange>(this->shim().Create(firstPage, lastPage));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateWithSinglePage(int32_t page, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OS::Graphics::Printing::PrintPageRange>(this->shim().CreateWithSinglePage(page));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef LLM_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, llm::OS::Graphics::Printing::IPrintPageRangeOptions> : produce_base<D, llm::OS::Graphics::Printing::IPrintPageRangeOptions>
    {
        int32_t __stdcall put_AllowAllPages(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AllowAllPages(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AllowAllPages(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().AllowAllPages());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_AllowCurrentPage(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AllowCurrentPage(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AllowCurrentPage(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().AllowCurrentPage());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_AllowCustomSetOfPages(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AllowCustomSetOfPages(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AllowCustomSetOfPages(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().AllowCustomSetOfPages());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef LLM_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, llm::OS::Graphics::Printing::IPrintTask> : produce_base<D, llm::OS::Graphics::Printing::IPrintTask>
    {
        int32_t __stdcall get_Properties(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<llm::OS::ApplicationModel::DataTransfer::DataPackagePropertySet>(this->shim().Properties());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Source(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<llm::OS::Graphics::Printing::IPrintDocumentSource>(this->shim().Source());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Options(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<llm::OS::Graphics::Printing::PrintTaskOptions>(this->shim().Options());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_Previewing(void* eventHandler, llm::event_token* eventCookie) noexcept final try
        {
            zero_abi<llm::event_token>(eventCookie);
            typename D::abi_guard guard(this->shim());
            *eventCookie = detach_from<llm::event_token>(this->shim().Previewing(*reinterpret_cast<llm::OS::Foundation::TypedEventHandler<llm::OS::Graphics::Printing::PrintTask, llm::OS::Foundation::IInspectable> const*>(&eventHandler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_Previewing(llm::event_token eventCookie) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Previewing(*reinterpret_cast<llm::event_token const*>(&eventCookie));
            return 0;
        }
        int32_t __stdcall add_Submitting(void* eventHandler, llm::event_token* eventCookie) noexcept final try
        {
            zero_abi<llm::event_token>(eventCookie);
            typename D::abi_guard guard(this->shim());
            *eventCookie = detach_from<llm::event_token>(this->shim().Submitting(*reinterpret_cast<llm::OS::Foundation::TypedEventHandler<llm::OS::Graphics::Printing::PrintTask, llm::OS::Foundation::IInspectable> const*>(&eventHandler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_Submitting(llm::event_token eventCookie) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Submitting(*reinterpret_cast<llm::event_token const*>(&eventCookie));
            return 0;
        }
        int32_t __stdcall add_Progressing(void* eventHandler, llm::event_token* eventCookie) noexcept final try
        {
            zero_abi<llm::event_token>(eventCookie);
            typename D::abi_guard guard(this->shim());
            *eventCookie = detach_from<llm::event_token>(this->shim().Progressing(*reinterpret_cast<llm::OS::Foundation::TypedEventHandler<llm::OS::Graphics::Printing::PrintTask, llm::OS::Graphics::Printing::PrintTaskProgressingEventArgs> const*>(&eventHandler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_Progressing(llm::event_token eventCookie) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Progressing(*reinterpret_cast<llm::event_token const*>(&eventCookie));
            return 0;
        }
        int32_t __stdcall add_Completed(void* eventHandler, llm::event_token* eventCookie) noexcept final try
        {
            zero_abi<llm::event_token>(eventCookie);
            typename D::abi_guard guard(this->shim());
            *eventCookie = detach_from<llm::event_token>(this->shim().Completed(*reinterpret_cast<llm::OS::Foundation::TypedEventHandler<llm::OS::Graphics::Printing::PrintTask, llm::OS::Graphics::Printing::PrintTaskCompletedEventArgs> const*>(&eventHandler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_Completed(llm::event_token eventCookie) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Completed(*reinterpret_cast<llm::event_token const*>(&eventCookie));
            return 0;
        }
    };
#endif
#ifndef LLM_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, llm::OS::Graphics::Printing::IPrintTask2> : produce_base<D, llm::OS::Graphics::Printing::IPrintTask2>
    {
        int32_t __stdcall put_IsPreviewEnabled(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsPreviewEnabled(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsPreviewEnabled(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsPreviewEnabled());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef LLM_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, llm::OS::Graphics::Printing::IPrintTaskCompletedEventArgs> : produce_base<D, llm::OS::Graphics::Printing::IPrintTaskCompletedEventArgs>
    {
        int32_t __stdcall get_Completion(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<llm::OS::Graphics::Printing::PrintTaskCompletion>(this->shim().Completion());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef LLM_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, llm::OS::Graphics::Printing::IPrintTaskOptions> : produce_base<D, llm::OS::Graphics::Printing::IPrintTaskOptions>
    {
        int32_t __stdcall put_Bordering(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Bordering(*reinterpret_cast<llm::OS::Graphics::Printing::PrintBordering const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Bordering(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<llm::OS::Graphics::Printing::PrintBordering>(this->shim().Bordering());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetPagePrintTicket(void* printPageInfo, void** printTicket) noexcept final try
        {
            clear_abi(printTicket);
            typename D::abi_guard guard(this->shim());
            *printTicket = detach_from<llm::OS::Storage::Streams::IRandomAccessStream>(this->shim().GetPagePrintTicket(*reinterpret_cast<llm::OS::Graphics::Printing::PrintPageInfo const*>(&printPageInfo)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef LLM_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, llm::OS::Graphics::Printing::IPrintTaskOptions2> : produce_base<D, llm::OS::Graphics::Printing::IPrintTaskOptions2>
    {
        int32_t __stdcall get_PageRangeOptions(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<llm::OS::Graphics::Printing::PrintPageRangeOptions>(this->shim().PageRangeOptions());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CustomPageRanges(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<llm::OS::Foundation::Collections::IVector<llm::OS::Graphics::Printing::PrintPageRange>>(this->shim().CustomPageRanges());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
    template <typename D>
    struct produce<D, llm::OS::Graphics::Printing::IPrintTaskOptionsCore> : produce_base<D, llm::OS::Graphics::Printing::IPrintTaskOptionsCore>
    {
        int32_t __stdcall GetPageDescription(uint32_t jobPageNumber, struct struct_Windows_Graphics_Printing_PrintPageDescription* description) noexcept final try
        {
            zero_abi<llm::OS::Graphics::Printing::PrintPageDescription>(description);
            typename D::abi_guard guard(this->shim());
            *description = detach_from<llm::OS::Graphics::Printing::PrintPageDescription>(this->shim().GetPageDescription(jobPageNumber));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, llm::OS::Graphics::Printing::IPrintTaskOptionsCoreProperties> : produce_base<D, llm::OS::Graphics::Printing::IPrintTaskOptionsCoreProperties>
    {
        int32_t __stdcall put_MediaSize(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MediaSize(*reinterpret_cast<llm::OS::Graphics::Printing::PrintMediaSize const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MediaSize(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<llm::OS::Graphics::Printing::PrintMediaSize>(this->shim().MediaSize());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_MediaType(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MediaType(*reinterpret_cast<llm::OS::Graphics::Printing::PrintMediaType const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MediaType(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<llm::OS::Graphics::Printing::PrintMediaType>(this->shim().MediaType());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Orientation(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Orientation(*reinterpret_cast<llm::OS::Graphics::Printing::PrintOrientation const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Orientation(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<llm::OS::Graphics::Printing::PrintOrientation>(this->shim().Orientation());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_PrintQuality(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PrintQuality(*reinterpret_cast<llm::OS::Graphics::Printing::PrintQuality const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PrintQuality(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<llm::OS::Graphics::Printing::PrintQuality>(this->shim().PrintQuality());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ColorMode(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ColorMode(*reinterpret_cast<llm::OS::Graphics::Printing::PrintColorMode const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ColorMode(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<llm::OS::Graphics::Printing::PrintColorMode>(this->shim().ColorMode());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Duplex(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Duplex(*reinterpret_cast<llm::OS::Graphics::Printing::PrintDuplex const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Duplex(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<llm::OS::Graphics::Printing::PrintDuplex>(this->shim().Duplex());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Collation(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Collation(*reinterpret_cast<llm::OS::Graphics::Printing::PrintCollation const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Collation(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<llm::OS::Graphics::Printing::PrintCollation>(this->shim().Collation());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Staple(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Staple(*reinterpret_cast<llm::OS::Graphics::Printing::PrintStaple const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Staple(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<llm::OS::Graphics::Printing::PrintStaple>(this->shim().Staple());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_HolePunch(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HolePunch(*reinterpret_cast<llm::OS::Graphics::Printing::PrintHolePunch const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_HolePunch(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<llm::OS::Graphics::Printing::PrintHolePunch>(this->shim().HolePunch());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Binding(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Binding(*reinterpret_cast<llm::OS::Graphics::Printing::PrintBinding const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Binding(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<llm::OS::Graphics::Printing::PrintBinding>(this->shim().Binding());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MinCopies(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().MinCopies());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MaxCopies(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().MaxCopies());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_NumberOfCopies(uint32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NumberOfCopies(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_NumberOfCopies(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().NumberOfCopies());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, llm::OS::Graphics::Printing::IPrintTaskOptionsCoreUIConfiguration> : produce_base<D, llm::OS::Graphics::Printing::IPrintTaskOptionsCoreUIConfiguration>
    {
        int32_t __stdcall get_DisplayedOptions(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<llm::OS::Foundation::Collections::IVector<hstring>>(this->shim().DisplayedOptions());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#ifndef LLM_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, llm::OS::Graphics::Printing::IPrintTaskProgressingEventArgs> : produce_base<D, llm::OS::Graphics::Printing::IPrintTaskProgressingEventArgs>
    {
        int32_t __stdcall get_DocumentPageCount(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().DocumentPageCount());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef LLM_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, llm::OS::Graphics::Printing::IPrintTaskRequest> : produce_base<D, llm::OS::Graphics::Printing::IPrintTaskRequest>
    {
        int32_t __stdcall get_Deadline(int64_t* value) noexcept final try
        {
            zero_abi<llm::OS::Foundation::DateTime>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<llm::OS::Foundation::DateTime>(this->shim().Deadline());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreatePrintTask(void* title, void* handler, void** task) noexcept final try
        {
            clear_abi(task);
            typename D::abi_guard guard(this->shim());
            *task = detach_from<llm::OS::Graphics::Printing::PrintTask>(this->shim().CreatePrintTask(*reinterpret_cast<hstring const*>(&title), *reinterpret_cast<llm::OS::Graphics::Printing::PrintTaskSourceRequestedHandler const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetDeferral(void** deferral) noexcept final try
        {
            clear_abi(deferral);
            typename D::abi_guard guard(this->shim());
            *deferral = detach_from<llm::OS::Graphics::Printing::PrintTaskRequestedDeferral>(this->shim().GetDeferral());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef LLM_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, llm::OS::Graphics::Printing::IPrintTaskRequestedDeferral> : produce_base<D, llm::OS::Graphics::Printing::IPrintTaskRequestedDeferral>
    {
        int32_t __stdcall Complete() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Complete();
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef LLM_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, llm::OS::Graphics::Printing::IPrintTaskRequestedEventArgs> : produce_base<D, llm::OS::Graphics::Printing::IPrintTaskRequestedEventArgs>
    {
        int32_t __stdcall get_Request(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<llm::OS::Graphics::Printing::PrintTaskRequest>(this->shim().Request());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef LLM_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, llm::OS::Graphics::Printing::IPrintTaskSourceRequestedArgs> : produce_base<D, llm::OS::Graphics::Printing::IPrintTaskSourceRequestedArgs>
    {
        int32_t __stdcall get_Deadline(int64_t* value) noexcept final try
        {
            zero_abi<llm::OS::Foundation::DateTime>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<llm::OS::Foundation::DateTime>(this->shim().Deadline());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetSource(void* source) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetSource(*reinterpret_cast<llm::OS::Graphics::Printing::IPrintDocumentSource const*>(&source));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetDeferral(void** deferral) noexcept final try
        {
            clear_abi(deferral);
            typename D::abi_guard guard(this->shim());
            *deferral = detach_from<llm::OS::Graphics::Printing::PrintTaskSourceRequestedDeferral>(this->shim().GetDeferral());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef LLM_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, llm::OS::Graphics::Printing::IPrintTaskSourceRequestedDeferral> : produce_base<D, llm::OS::Graphics::Printing::IPrintTaskSourceRequestedDeferral>
    {
        int32_t __stdcall Complete() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Complete();
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef LLM_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, llm::OS::Graphics::Printing::IPrintTaskTargetDeviceSupport> : produce_base<D, llm::OS::Graphics::Printing::IPrintTaskTargetDeviceSupport>
    {
        int32_t __stdcall put_IsPrinterTargetEnabled(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsPrinterTargetEnabled(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsPrinterTargetEnabled(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsPrinterTargetEnabled());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Is3DManufacturingTargetEnabled(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Is3DManufacturingTargetEnabled(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Is3DManufacturingTargetEnabled(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Is3DManufacturingTargetEnabled());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef LLM_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, llm::OS::Graphics::Printing::IStandardPrintTaskOptionsStatic> : produce_base<D, llm::OS::Graphics::Printing::IStandardPrintTaskOptionsStatic>
    {
        int32_t __stdcall get_MediaSize(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().MediaSize());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MediaType(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().MediaType());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Orientation(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Orientation());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PrintQuality(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().PrintQuality());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ColorMode(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ColorMode());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Duplex(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Duplex());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Collation(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Collation());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Staple(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Staple());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_HolePunch(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().HolePunch());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Binding(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Binding());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Copies(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Copies());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_NUp(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().NUp());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_InputBin(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().InputBin());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef LLM_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, llm::OS::Graphics::Printing::IStandardPrintTaskOptionsStatic2> : produce_base<D, llm::OS::Graphics::Printing::IStandardPrintTaskOptionsStatic2>
    {
        int32_t __stdcall get_Bordering(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Bordering());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef LLM_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, llm::OS::Graphics::Printing::IStandardPrintTaskOptionsStatic3> : produce_base<D, llm::OS::Graphics::Printing::IStandardPrintTaskOptionsStatic3>
    {
        int32_t __stdcall get_CustomPageRanges(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().CustomPageRanges());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
}
LLM_EXPORT namespace llm::OS::Graphics::Printing
{
    inline auto PrintManager::GetForCurrentView()
    {
        return impl::call_factory_cast<llm::OS::Graphics::Printing::PrintManager(*)(IPrintManagerStatic const&), PrintManager, IPrintManagerStatic>([](IPrintManagerStatic const& f) { return f.GetForCurrentView(); });
    }
    inline auto PrintManager::ShowPrintUIAsync()
    {
        return impl::call_factory_cast<llm::OS::Foundation::IAsyncOperation<bool>(*)(IPrintManagerStatic const&), PrintManager, IPrintManagerStatic>([](IPrintManagerStatic const& f) { return f.ShowPrintUIAsync(); });
    }
    inline auto PrintManager::IsSupported()
    {
        return impl::call_factory_cast<bool(*)(IPrintManagerStatic2 const&), PrintManager, IPrintManagerStatic2>([](IPrintManagerStatic2 const& f) { return f.IsSupported(); });
    }
    inline PrintPageInfo::PrintPageInfo() :
        PrintPageInfo(impl::call_factory_cast<PrintPageInfo(*)(llm::OS::Foundation::IActivationFactory const&), PrintPageInfo>([](llm::OS::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<PrintPageInfo>(); }))
    {
    }
    inline PrintPageRange::PrintPageRange(int32_t firstPage, int32_t lastPage) :
        PrintPageRange(impl::call_factory<PrintPageRange, IPrintPageRangeFactory>([&](IPrintPageRangeFactory const& f) { return f.Create(firstPage, lastPage); }))
    {
    }
    inline PrintPageRange::PrintPageRange(int32_t page) :
        PrintPageRange(impl::call_factory<PrintPageRange, IPrintPageRangeFactory>([&](IPrintPageRangeFactory const& f) { return f.CreateWithSinglePage(page); }))
    {
    }
    inline auto StandardPrintTaskOptions::MediaSize()
    {
        return impl::call_factory_cast<hstring(*)(IStandardPrintTaskOptionsStatic const&), StandardPrintTaskOptions, IStandardPrintTaskOptionsStatic>([](IStandardPrintTaskOptionsStatic const& f) { return f.MediaSize(); });
    }
    inline auto StandardPrintTaskOptions::MediaType()
    {
        return impl::call_factory_cast<hstring(*)(IStandardPrintTaskOptionsStatic const&), StandardPrintTaskOptions, IStandardPrintTaskOptionsStatic>([](IStandardPrintTaskOptionsStatic const& f) { return f.MediaType(); });
    }
    inline auto StandardPrintTaskOptions::Orientation()
    {
        return impl::call_factory_cast<hstring(*)(IStandardPrintTaskOptionsStatic const&), StandardPrintTaskOptions, IStandardPrintTaskOptionsStatic>([](IStandardPrintTaskOptionsStatic const& f) { return f.Orientation(); });
    }
    inline auto StandardPrintTaskOptions::PrintQuality()
    {
        return impl::call_factory_cast<hstring(*)(IStandardPrintTaskOptionsStatic const&), StandardPrintTaskOptions, IStandardPrintTaskOptionsStatic>([](IStandardPrintTaskOptionsStatic const& f) { return f.PrintQuality(); });
    }
    inline auto StandardPrintTaskOptions::ColorMode()
    {
        return impl::call_factory_cast<hstring(*)(IStandardPrintTaskOptionsStatic const&), StandardPrintTaskOptions, IStandardPrintTaskOptionsStatic>([](IStandardPrintTaskOptionsStatic const& f) { return f.ColorMode(); });
    }
    inline auto StandardPrintTaskOptions::Duplex()
    {
        return impl::call_factory_cast<hstring(*)(IStandardPrintTaskOptionsStatic const&), StandardPrintTaskOptions, IStandardPrintTaskOptionsStatic>([](IStandardPrintTaskOptionsStatic const& f) { return f.Duplex(); });
    }
    inline auto StandardPrintTaskOptions::Collation()
    {
        return impl::call_factory_cast<hstring(*)(IStandardPrintTaskOptionsStatic const&), StandardPrintTaskOptions, IStandardPrintTaskOptionsStatic>([](IStandardPrintTaskOptionsStatic const& f) { return f.Collation(); });
    }
    inline auto StandardPrintTaskOptions::Staple()
    {
        return impl::call_factory_cast<hstring(*)(IStandardPrintTaskOptionsStatic const&), StandardPrintTaskOptions, IStandardPrintTaskOptionsStatic>([](IStandardPrintTaskOptionsStatic const& f) { return f.Staple(); });
    }
    inline auto StandardPrintTaskOptions::HolePunch()
    {
        return impl::call_factory_cast<hstring(*)(IStandardPrintTaskOptionsStatic const&), StandardPrintTaskOptions, IStandardPrintTaskOptionsStatic>([](IStandardPrintTaskOptionsStatic const& f) { return f.HolePunch(); });
    }
    inline auto StandardPrintTaskOptions::Binding()
    {
        return impl::call_factory_cast<hstring(*)(IStandardPrintTaskOptionsStatic const&), StandardPrintTaskOptions, IStandardPrintTaskOptionsStatic>([](IStandardPrintTaskOptionsStatic const& f) { return f.Binding(); });
    }
    inline auto StandardPrintTaskOptions::Copies()
    {
        return impl::call_factory_cast<hstring(*)(IStandardPrintTaskOptionsStatic const&), StandardPrintTaskOptions, IStandardPrintTaskOptionsStatic>([](IStandardPrintTaskOptionsStatic const& f) { return f.Copies(); });
    }
    inline auto StandardPrintTaskOptions::NUp()
    {
        return impl::call_factory_cast<hstring(*)(IStandardPrintTaskOptionsStatic const&), StandardPrintTaskOptions, IStandardPrintTaskOptionsStatic>([](IStandardPrintTaskOptionsStatic const& f) { return f.NUp(); });
    }
    inline auto StandardPrintTaskOptions::InputBin()
    {
        return impl::call_factory_cast<hstring(*)(IStandardPrintTaskOptionsStatic const&), StandardPrintTaskOptions, IStandardPrintTaskOptionsStatic>([](IStandardPrintTaskOptionsStatic const& f) { return f.InputBin(); });
    }
    inline auto StandardPrintTaskOptions::Bordering()
    {
        return impl::call_factory_cast<hstring(*)(IStandardPrintTaskOptionsStatic2 const&), StandardPrintTaskOptions, IStandardPrintTaskOptionsStatic2>([](IStandardPrintTaskOptionsStatic2 const& f) { return f.Bordering(); });
    }
    inline auto StandardPrintTaskOptions::CustomPageRanges()
    {
        return impl::call_factory_cast<hstring(*)(IStandardPrintTaskOptionsStatic3 const&), StandardPrintTaskOptions, IStandardPrintTaskOptionsStatic3>([](IStandardPrintTaskOptionsStatic3 const& f) { return f.CustomPageRanges(); });
    }
    template <typename L> PrintTaskSourceRequestedHandler::PrintTaskSourceRequestedHandler(L handler) :
        PrintTaskSourceRequestedHandler(impl::make_delegate<PrintTaskSourceRequestedHandler>(std::forward<L>(handler)))
    {
    }
    template <typename F> PrintTaskSourceRequestedHandler::PrintTaskSourceRequestedHandler(F* handler) :
        PrintTaskSourceRequestedHandler([=](auto&&... args) { return handler(args...); })
    {
    }
    template <typename O, typename M> PrintTaskSourceRequestedHandler::PrintTaskSourceRequestedHandler(O* object, M method) :
        PrintTaskSourceRequestedHandler([=](auto&&... args) { return ((*object).*(method))(args...); })
    {
    }
    template <typename O, typename M> PrintTaskSourceRequestedHandler::PrintTaskSourceRequestedHandler(com_ptr<O>&& object, M method) :
        PrintTaskSourceRequestedHandler([o = std::move(object), method](auto&&... args) { return ((*o).*(method))(args...); })
    {
    }
    template <typename O, typename M> PrintTaskSourceRequestedHandler::PrintTaskSourceRequestedHandler(weak_ref<O>&& object, M method) :
        PrintTaskSourceRequestedHandler([o = std::move(object), method](auto&&... args) { if (auto s = o.get()) { ((*s).*(method))(args...); } })
    {
    }
    inline auto PrintTaskSourceRequestedHandler::operator()(llm::OS::Graphics::Printing::PrintTaskSourceRequestedArgs const& args) const
    {
        check_hresult((*(impl::abi_t<PrintTaskSourceRequestedHandler>**)this)->Invoke(*(void**)(&args)));
    }
}
namespace std
{
#ifndef LLM_LEAN_AND_MEAN
    template<> struct hash<llm::OS::Graphics::Printing::IPrintDocumentSource> : llm::impl::hash_base {};
    template<> struct hash<llm::OS::Graphics::Printing::IPrintManager> : llm::impl::hash_base {};
    template<> struct hash<llm::OS::Graphics::Printing::IPrintManagerStatic> : llm::impl::hash_base {};
    template<> struct hash<llm::OS::Graphics::Printing::IPrintManagerStatic2> : llm::impl::hash_base {};
    template<> struct hash<llm::OS::Graphics::Printing::IPrintPageInfo> : llm::impl::hash_base {};
    template<> struct hash<llm::OS::Graphics::Printing::IPrintPageRange> : llm::impl::hash_base {};
    template<> struct hash<llm::OS::Graphics::Printing::IPrintPageRangeFactory> : llm::impl::hash_base {};
    template<> struct hash<llm::OS::Graphics::Printing::IPrintPageRangeOptions> : llm::impl::hash_base {};
    template<> struct hash<llm::OS::Graphics::Printing::IPrintTask> : llm::impl::hash_base {};
    template<> struct hash<llm::OS::Graphics::Printing::IPrintTask2> : llm::impl::hash_base {};
    template<> struct hash<llm::OS::Graphics::Printing::IPrintTaskCompletedEventArgs> : llm::impl::hash_base {};
    template<> struct hash<llm::OS::Graphics::Printing::IPrintTaskOptions> : llm::impl::hash_base {};
    template<> struct hash<llm::OS::Graphics::Printing::IPrintTaskOptions2> : llm::impl::hash_base {};
    template<> struct hash<llm::OS::Graphics::Printing::IPrintTaskOptionsCore> : llm::impl::hash_base {};
    template<> struct hash<llm::OS::Graphics::Printing::IPrintTaskOptionsCoreProperties> : llm::impl::hash_base {};
    template<> struct hash<llm::OS::Graphics::Printing::IPrintTaskOptionsCoreUIConfiguration> : llm::impl::hash_base {};
    template<> struct hash<llm::OS::Graphics::Printing::IPrintTaskProgressingEventArgs> : llm::impl::hash_base {};
    template<> struct hash<llm::OS::Graphics::Printing::IPrintTaskRequest> : llm::impl::hash_base {};
    template<> struct hash<llm::OS::Graphics::Printing::IPrintTaskRequestedDeferral> : llm::impl::hash_base {};
    template<> struct hash<llm::OS::Graphics::Printing::IPrintTaskRequestedEventArgs> : llm::impl::hash_base {};
    template<> struct hash<llm::OS::Graphics::Printing::IPrintTaskSourceRequestedArgs> : llm::impl::hash_base {};
    template<> struct hash<llm::OS::Graphics::Printing::IPrintTaskSourceRequestedDeferral> : llm::impl::hash_base {};
    template<> struct hash<llm::OS::Graphics::Printing::IPrintTaskTargetDeviceSupport> : llm::impl::hash_base {};
    template<> struct hash<llm::OS::Graphics::Printing::IStandardPrintTaskOptionsStatic> : llm::impl::hash_base {};
    template<> struct hash<llm::OS::Graphics::Printing::IStandardPrintTaskOptionsStatic2> : llm::impl::hash_base {};
    template<> struct hash<llm::OS::Graphics::Printing::IStandardPrintTaskOptionsStatic3> : llm::impl::hash_base {};
    template<> struct hash<llm::OS::Graphics::Printing::PrintManager> : llm::impl::hash_base {};
    template<> struct hash<llm::OS::Graphics::Printing::PrintPageInfo> : llm::impl::hash_base {};
    template<> struct hash<llm::OS::Graphics::Printing::PrintPageRange> : llm::impl::hash_base {};
    template<> struct hash<llm::OS::Graphics::Printing::PrintPageRangeOptions> : llm::impl::hash_base {};
    template<> struct hash<llm::OS::Graphics::Printing::PrintTask> : llm::impl::hash_base {};
    template<> struct hash<llm::OS::Graphics::Printing::PrintTaskCompletedEventArgs> : llm::impl::hash_base {};
    template<> struct hash<llm::OS::Graphics::Printing::PrintTaskOptions> : llm::impl::hash_base {};
    template<> struct hash<llm::OS::Graphics::Printing::PrintTaskProgressingEventArgs> : llm::impl::hash_base {};
    template<> struct hash<llm::OS::Graphics::Printing::PrintTaskRequest> : llm::impl::hash_base {};
    template<> struct hash<llm::OS::Graphics::Printing::PrintTaskRequestedDeferral> : llm::impl::hash_base {};
    template<> struct hash<llm::OS::Graphics::Printing::PrintTaskRequestedEventArgs> : llm::impl::hash_base {};
    template<> struct hash<llm::OS::Graphics::Printing::PrintTaskSourceRequestedArgs> : llm::impl::hash_base {};
    template<> struct hash<llm::OS::Graphics::Printing::PrintTaskSourceRequestedDeferral> : llm::impl::hash_base {};
    template<> struct hash<llm::OS::Graphics::Printing::StandardPrintTaskOptions> : llm::impl::hash_base {};
#endif
#ifdef __cpp_lib_format
#endif
}
#endif

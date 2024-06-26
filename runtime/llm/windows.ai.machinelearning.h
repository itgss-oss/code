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
 * Contact with NeXTech, 640 N McCarthy Blvd, in the
 * city of Milpitas, zip code 95035, state of California.
 * or visit www.it-gss.com if you need additional information or have any
 * questions.
 *
 */

#pragma once
#ifndef LLM_OS_AI_MachineLearning_H
#define LLM_OS_AI_MachineLearning_H
#include "llm/base.h"
static_assert(llm::check_version(CPPLLM_VERSION, "2.0.220110.5"), "Mismatched C++/WinRT headers.");
#define CPPLLM_VERSION "2.0.220110.5"
#include "llm/impl/Windows.Foundation.2.h"
#include "llm/impl/Windows.Foundation.Collections.2.h"
#include "llm/impl/Windows.Graphics.2.h"
#include "llm/impl/Windows.Graphics.DirectX.Direct3D11.2.h"
#include "llm/impl/Windows.Graphics.Imaging.2.h"
#include "llm/impl/Windows.Media.2.h"
#include "llm/impl/Windows.Storage.2.h"
#include "llm/impl/Windows.Storage.Streams.2.h"
#include "llm/impl/Windows.AI.MachineLearning.2.h"
namespace llm::impl
{
    template <typename D> LLM_IMPL_AUTO(llm::OS::Graphics::Imaging::BitmapPixelFormat) consume_Windows_AI_MachineLearning_IImageFeatureDescriptor<D>::BitmapPixelFormat() const
    {
        llm::OS::Graphics::Imaging::BitmapPixelFormat value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::IImageFeatureDescriptor)->get_BitmapPixelFormat(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::Graphics::Imaging::BitmapAlphaMode) consume_Windows_AI_MachineLearning_IImageFeatureDescriptor<D>::BitmapAlphaMode() const
    {
        llm::OS::Graphics::Imaging::BitmapAlphaMode value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::IImageFeatureDescriptor)->get_BitmapAlphaMode(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> LLM_IMPL_AUTO(uint32_t) consume_Windows_AI_MachineLearning_IImageFeatureDescriptor<D>::Width() const
    {
        uint32_t value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::IImageFeatureDescriptor)->get_Width(&value));
        return value;
    }
    template <typename D> LLM_IMPL_AUTO(uint32_t) consume_Windows_AI_MachineLearning_IImageFeatureDescriptor<D>::Height() const
    {
        uint32_t value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::IImageFeatureDescriptor)->get_Height(&value));
        return value;
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::LearningModelPixelRange) consume_Windows_AI_MachineLearning_IImageFeatureDescriptor2<D>::PixelRange() const
    {
        llm::OS::AI::MachineLearning::LearningModelPixelRange value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::IImageFeatureDescriptor2)->get_PixelRange(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::Media::VideoFrame) consume_Windows_AI_MachineLearning_IImageFeatureValue<D>::VideoFrame() const
    {
        void* value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::IImageFeatureValue)->get_VideoFrame(&value));
        return llm::OS::Media::VideoFrame{ value, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::ImageFeatureValue) consume_Windows_AI_MachineLearning_IImageFeatureValueStatics<D>::CreateFromVideoFrame(llm::OS::Media::VideoFrame const& image) const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::IImageFeatureValueStatics)->CreateFromVideoFrame(*(void**)(&image), &result));
        return llm::OS::AI::MachineLearning::ImageFeatureValue{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(hstring) consume_Windows_AI_MachineLearning_ILearningModel<D>::Author() const
    {
        void* value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ILearningModel)->get_Author(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(hstring) consume_Windows_AI_MachineLearning_ILearningModel<D>::Name() const
    {
        void* value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ILearningModel)->get_Name(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(hstring) consume_Windows_AI_MachineLearning_ILearningModel<D>::Domain() const
    {
        void* value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ILearningModel)->get_Domain(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(hstring) consume_Windows_AI_MachineLearning_ILearningModel<D>::Description() const
    {
        void* value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ILearningModel)->get_Description(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(int64_t) consume_Windows_AI_MachineLearning_ILearningModel<D>::Version() const
    {
        int64_t value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ILearningModel)->get_Version(&value));
        return value;
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::Foundation::Collections::IMapView<hstring, hstring>) consume_Windows_AI_MachineLearning_ILearningModel<D>::Metadata() const
    {
        void* value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ILearningModel)->get_Metadata(&value));
        return llm::OS::Foundation::Collections::IMapView<hstring, hstring>{ value, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::Foundation::Collections::IVectorView<llm::OS::AI::MachineLearning::ILearningModelFeatureDescriptor>) consume_Windows_AI_MachineLearning_ILearningModel<D>::InputFeatures() const
    {
        void* value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ILearningModel)->get_InputFeatures(&value));
        return llm::OS::Foundation::Collections::IVectorView<llm::OS::AI::MachineLearning::ILearningModelFeatureDescriptor>{ value, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::Foundation::Collections::IVectorView<llm::OS::AI::MachineLearning::ILearningModelFeatureDescriptor>) consume_Windows_AI_MachineLearning_ILearningModel<D>::OutputFeatures() const
    {
        void* value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ILearningModel)->get_OutputFeatures(&value));
        return llm::OS::Foundation::Collections::IVectorView<llm::OS::AI::MachineLearning::ILearningModelFeatureDescriptor>{ value, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(void) consume_Windows_AI_MachineLearning_ILearningModelBinding<D>::Bind(param::hstring const& name, llm::OS::Foundation::IInspectable const& value) const
    {
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ILearningModelBinding)->Bind(*(void**)(&name), *(void**)(&value)));
    }
    template <typename D> LLM_IMPL_AUTO(void) consume_Windows_AI_MachineLearning_ILearningModelBinding<D>::Bind(param::hstring const& name, llm::OS::Foundation::IInspectable const& value, llm::OS::Foundation::Collections::IPropertySet const& props) const
    {
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ILearningModelBinding)->BindWithProperties(*(void**)(&name), *(void**)(&value), *(void**)(&props)));
    }
    template <typename D> LLM_IMPL_AUTO(void) consume_Windows_AI_MachineLearning_ILearningModelBinding<D>::Clear() const
    {
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ILearningModelBinding)->Clear());
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::LearningModelBinding) consume_Windows_AI_MachineLearning_ILearningModelBindingFactory<D>::CreateFromSession(llm::OS::AI::MachineLearning::LearningModelSession const& session) const
    {
        void* value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ILearningModelBindingFactory)->CreateFromSession(*(void**)(&session), &value));
        return llm::OS::AI::MachineLearning::LearningModelBinding{ value, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::Graphics::DisplayAdapterId) consume_Windows_AI_MachineLearning_ILearningModelDevice<D>::AdapterId() const
    {
        llm::OS::Graphics::DisplayAdapterId value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ILearningModelDevice)->get_AdapterId(put_abi(value)));
        return value;
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::Graphics::DirectX::Direct3D11::IDirect3DDevice) consume_Windows_AI_MachineLearning_ILearningModelDevice<D>::Direct3D11Device() const
    {
        void* value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ILearningModelDevice)->get_Direct3D11Device(&value));
        return llm::OS::Graphics::DirectX::Direct3D11::IDirect3DDevice{ value, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::LearningModelDevice) consume_Windows_AI_MachineLearning_ILearningModelDeviceFactory<D>::Create(llm::OS::AI::MachineLearning::LearningModelDeviceKind const& deviceKind) const
    {
        void* value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ILearningModelDeviceFactory)->Create(static_cast<int32_t>(deviceKind), &value));
        return llm::OS::AI::MachineLearning::LearningModelDevice{ value, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::LearningModelDevice) consume_Windows_AI_MachineLearning_ILearningModelDeviceStatics<D>::CreateFromDirect3D11Device(llm::OS::Graphics::DirectX::Direct3D11::IDirect3DDevice const& device) const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ILearningModelDeviceStatics)->CreateFromDirect3D11Device(*(void**)(&device), &result));
        return llm::OS::AI::MachineLearning::LearningModelDevice{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(hstring) consume_Windows_AI_MachineLearning_ILearningModelEvaluationResult<D>::CorrelationId() const
    {
        void* value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ILearningModelEvaluationResult)->get_CorrelationId(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(int32_t) consume_Windows_AI_MachineLearning_ILearningModelEvaluationResult<D>::ErrorStatus() const
    {
        int32_t value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ILearningModelEvaluationResult)->get_ErrorStatus(&value));
        return value;
    }
    template <typename D> LLM_IMPL_AUTO(bool) consume_Windows_AI_MachineLearning_ILearningModelEvaluationResult<D>::Succeeded() const
    {
        bool value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ILearningModelEvaluationResult)->get_Succeeded(&value));
        return value;
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::Foundation::Collections::IMapView<hstring, llm::OS::Foundation::IInspectable>) consume_Windows_AI_MachineLearning_ILearningModelEvaluationResult<D>::Outputs() const
    {
        void* value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ILearningModelEvaluationResult)->get_Outputs(&value));
        return llm::OS::Foundation::Collections::IMapView<hstring, llm::OS::Foundation::IInspectable>{ value, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(hstring) consume_Windows_AI_MachineLearning_ILearningModelFeatureDescriptor<D>::Name() const
    {
        void* value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ILearningModelFeatureDescriptor)->get_Name(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(hstring) consume_Windows_AI_MachineLearning_ILearningModelFeatureDescriptor<D>::Description() const
    {
        void* value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ILearningModelFeatureDescriptor)->get_Description(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::LearningModelFeatureKind) consume_Windows_AI_MachineLearning_ILearningModelFeatureDescriptor<D>::Kind() const
    {
        llm::OS::AI::MachineLearning::LearningModelFeatureKind value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ILearningModelFeatureDescriptor)->get_Kind(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> LLM_IMPL_AUTO(bool) consume_Windows_AI_MachineLearning_ILearningModelFeatureDescriptor<D>::IsRequired() const
    {
        bool value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ILearningModelFeatureDescriptor)->get_IsRequired(&value));
        return value;
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::LearningModelFeatureKind) consume_Windows_AI_MachineLearning_ILearningModelFeatureValue<D>::Kind() const
    {
        llm::OS::AI::MachineLearning::LearningModelFeatureKind value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ILearningModelFeatureValue)->get_Kind(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::LearningModel) consume_Windows_AI_MachineLearning_ILearningModelSession<D>::Model() const
    {
        void* value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ILearningModelSession)->get_Model(&value));
        return llm::OS::AI::MachineLearning::LearningModel{ value, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::LearningModelDevice) consume_Windows_AI_MachineLearning_ILearningModelSession<D>::Device() const
    {
        void* value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ILearningModelSession)->get_Device(&value));
        return llm::OS::AI::MachineLearning::LearningModelDevice{ value, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::Foundation::Collections::IPropertySet) consume_Windows_AI_MachineLearning_ILearningModelSession<D>::EvaluationProperties() const
    {
        void* value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ILearningModelSession)->get_EvaluationProperties(&value));
        return llm::OS::Foundation::Collections::IPropertySet{ value, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::Foundation::IAsyncOperation<llm::OS::AI::MachineLearning::LearningModelEvaluationResult>) consume_Windows_AI_MachineLearning_ILearningModelSession<D>::EvaluateAsync(llm::OS::AI::MachineLearning::LearningModelBinding const& bindings, param::hstring const& correlationId) const
    {
        void* operation{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ILearningModelSession)->EvaluateAsync(*(void**)(&bindings), *(void**)(&correlationId), &operation));
        return llm::OS::Foundation::IAsyncOperation<llm::OS::AI::MachineLearning::LearningModelEvaluationResult>{ operation, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::Foundation::IAsyncOperation<llm::OS::AI::MachineLearning::LearningModelEvaluationResult>) consume_Windows_AI_MachineLearning_ILearningModelSession<D>::EvaluateFeaturesAsync(param::map<hstring, llm::OS::Foundation::IInspectable> const& features, param::hstring const& correlationId) const
    {
        void* operation{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ILearningModelSession)->EvaluateFeaturesAsync(*(void**)(&features), *(void**)(&correlationId), &operation));
        return llm::OS::Foundation::IAsyncOperation<llm::OS::AI::MachineLearning::LearningModelEvaluationResult>{ operation, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::LearningModelEvaluationResult) consume_Windows_AI_MachineLearning_ILearningModelSession<D>::Evaluate(llm::OS::AI::MachineLearning::LearningModelBinding const& bindings, param::hstring const& correlationId) const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ILearningModelSession)->Evaluate(*(void**)(&bindings), *(void**)(&correlationId), &result));
        return llm::OS::AI::MachineLearning::LearningModelEvaluationResult{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::LearningModelEvaluationResult) consume_Windows_AI_MachineLearning_ILearningModelSession<D>::EvaluateFeatures(param::map<hstring, llm::OS::Foundation::IInspectable> const& features, param::hstring const& correlationId) const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ILearningModelSession)->EvaluateFeatures(*(void**)(&features), *(void**)(&correlationId), &result));
        return llm::OS::AI::MachineLearning::LearningModelEvaluationResult{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::LearningModelSession) consume_Windows_AI_MachineLearning_ILearningModelSessionFactory<D>::CreateFromModel(llm::OS::AI::MachineLearning::LearningModel const& model) const
    {
        void* value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ILearningModelSessionFactory)->CreateFromModel(*(void**)(&model), &value));
        return llm::OS::AI::MachineLearning::LearningModelSession{ value, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::LearningModelSession) consume_Windows_AI_MachineLearning_ILearningModelSessionFactory<D>::CreateFromModelOnDevice(llm::OS::AI::MachineLearning::LearningModel const& model, llm::OS::AI::MachineLearning::LearningModelDevice const& deviceToRunOn) const
    {
        void* value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ILearningModelSessionFactory)->CreateFromModelOnDevice(*(void**)(&model), *(void**)(&deviceToRunOn), &value));
        return llm::OS::AI::MachineLearning::LearningModelSession{ value, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::LearningModelSession) consume_Windows_AI_MachineLearning_ILearningModelSessionFactory2<D>::CreateFromModelOnDeviceWithSessionOptions(llm::OS::AI::MachineLearning::LearningModel const& model, llm::OS::AI::MachineLearning::LearningModelDevice const& deviceToRunOn, llm::OS::AI::MachineLearning::LearningModelSessionOptions const& learningModelSessionOptions) const
    {
        void* value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ILearningModelSessionFactory2)->CreateFromModelOnDeviceWithSessionOptions(*(void**)(&model), *(void**)(&deviceToRunOn), *(void**)(&learningModelSessionOptions), &value));
        return llm::OS::AI::MachineLearning::LearningModelSession{ value, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(uint32_t) consume_Windows_AI_MachineLearning_ILearningModelSessionOptions<D>::BatchSizeOverride() const
    {
        uint32_t value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ILearningModelSessionOptions)->get_BatchSizeOverride(&value));
        return value;
    }
    template <typename D> LLM_IMPL_AUTO(void) consume_Windows_AI_MachineLearning_ILearningModelSessionOptions<D>::BatchSizeOverride(uint32_t value) const
    {
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ILearningModelSessionOptions)->put_BatchSizeOverride(value));
    }
    template <typename D> LLM_IMPL_AUTO(bool) consume_Windows_AI_MachineLearning_ILearningModelSessionOptions2<D>::CloseModelOnSessionCreation() const
    {
        bool value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ILearningModelSessionOptions2)->get_CloseModelOnSessionCreation(&value));
        return value;
    }
    template <typename D> LLM_IMPL_AUTO(void) consume_Windows_AI_MachineLearning_ILearningModelSessionOptions2<D>::CloseModelOnSessionCreation(bool value) const
    {
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ILearningModelSessionOptions2)->put_CloseModelOnSessionCreation(value));
    }
    template <typename D> LLM_IMPL_AUTO(void) consume_Windows_AI_MachineLearning_ILearningModelSessionOptions3<D>::OverrideNamedDimension(param::hstring const& name, uint32_t dimension) const
    {
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ILearningModelSessionOptions3)->OverrideNamedDimension(*(void**)(&name), dimension));
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::Foundation::IAsyncOperation<llm::OS::AI::MachineLearning::LearningModel>) consume_Windows_AI_MachineLearning_ILearningModelStatics<D>::LoadFromStorageFileAsync(llm::OS::Storage::IStorageFile const& modelFile) const
    {
        void* operation{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ILearningModelStatics)->LoadFromStorageFileAsync(*(void**)(&modelFile), &operation));
        return llm::OS::Foundation::IAsyncOperation<llm::OS::AI::MachineLearning::LearningModel>{ operation, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::Foundation::IAsyncOperation<llm::OS::AI::MachineLearning::LearningModel>) consume_Windows_AI_MachineLearning_ILearningModelStatics<D>::LoadFromStreamAsync(llm::OS::Storage::Streams::IRandomAccessStreamReference const& modelStream) const
    {
        void* operation{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ILearningModelStatics)->LoadFromStreamAsync(*(void**)(&modelStream), &operation));
        return llm::OS::Foundation::IAsyncOperation<llm::OS::AI::MachineLearning::LearningModel>{ operation, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::LearningModel) consume_Windows_AI_MachineLearning_ILearningModelStatics<D>::LoadFromFilePath(param::hstring const& filePath) const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ILearningModelStatics)->LoadFromFilePath(*(void**)(&filePath), &result));
        return llm::OS::AI::MachineLearning::LearningModel{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::LearningModel) consume_Windows_AI_MachineLearning_ILearningModelStatics<D>::LoadFromStream(llm::OS::Storage::Streams::IRandomAccessStreamReference const& modelStream) const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ILearningModelStatics)->LoadFromStream(*(void**)(&modelStream), &result));
        return llm::OS::AI::MachineLearning::LearningModel{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::Foundation::IAsyncOperation<llm::OS::AI::MachineLearning::LearningModel>) consume_Windows_AI_MachineLearning_ILearningModelStatics<D>::LoadFromStorageFileAsync(llm::OS::Storage::IStorageFile const& modelFile, llm::OS::AI::MachineLearning::ILearningModelOperatorProvider const& operatorProvider) const
    {
        void* operation{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ILearningModelStatics)->LoadFromStorageFileWithOperatorProviderAsync(*(void**)(&modelFile), *(void**)(&operatorProvider), &operation));
        return llm::OS::Foundation::IAsyncOperation<llm::OS::AI::MachineLearning::LearningModel>{ operation, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::Foundation::IAsyncOperation<llm::OS::AI::MachineLearning::LearningModel>) consume_Windows_AI_MachineLearning_ILearningModelStatics<D>::LoadFromStreamAsync(llm::OS::Storage::Streams::IRandomAccessStreamReference const& modelStream, llm::OS::AI::MachineLearning::ILearningModelOperatorProvider const& operatorProvider) const
    {
        void* operation{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ILearningModelStatics)->LoadFromStreamWithOperatorProviderAsync(*(void**)(&modelStream), *(void**)(&operatorProvider), &operation));
        return llm::OS::Foundation::IAsyncOperation<llm::OS::AI::MachineLearning::LearningModel>{ operation, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::LearningModel) consume_Windows_AI_MachineLearning_ILearningModelStatics<D>::LoadFromFilePath(param::hstring const& filePath, llm::OS::AI::MachineLearning::ILearningModelOperatorProvider const& operatorProvider) const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ILearningModelStatics)->LoadFromFilePathWithOperatorProvider(*(void**)(&filePath), *(void**)(&operatorProvider), &result));
        return llm::OS::AI::MachineLearning::LearningModel{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::LearningModel) consume_Windows_AI_MachineLearning_ILearningModelStatics<D>::LoadFromStream(llm::OS::Storage::Streams::IRandomAccessStreamReference const& modelStream, llm::OS::AI::MachineLearning::ILearningModelOperatorProvider const& operatorProvider) const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ILearningModelStatics)->LoadFromStreamWithOperatorProvider(*(void**)(&modelStream), *(void**)(&operatorProvider), &result));
        return llm::OS::AI::MachineLearning::LearningModel{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::TensorKind) consume_Windows_AI_MachineLearning_IMapFeatureDescriptor<D>::KeyKind() const
    {
        llm::OS::AI::MachineLearning::TensorKind value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::IMapFeatureDescriptor)->get_KeyKind(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::ILearningModelFeatureDescriptor) consume_Windows_AI_MachineLearning_IMapFeatureDescriptor<D>::ValueDescriptor() const
    {
        void* value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::IMapFeatureDescriptor)->get_ValueDescriptor(&value));
        return llm::OS::AI::MachineLearning::ILearningModelFeatureDescriptor{ value, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::ILearningModelFeatureDescriptor) consume_Windows_AI_MachineLearning_ISequenceFeatureDescriptor<D>::ElementDescriptor() const
    {
        void* value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ISequenceFeatureDescriptor)->get_ElementDescriptor(&value));
        return llm::OS::AI::MachineLearning::ILearningModelFeatureDescriptor{ value, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::TensorKind) consume_Windows_AI_MachineLearning_ITensor<D>::TensorKind() const
    {
        llm::OS::AI::MachineLearning::TensorKind value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ITensor)->get_TensorKind(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::Foundation::Collections::IVectorView<int64_t>) consume_Windows_AI_MachineLearning_ITensor<D>::Shape() const
    {
        void* value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ITensor)->get_Shape(&value));
        return llm::OS::Foundation::Collections::IVectorView<int64_t>{ value, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::Foundation::Collections::IVectorView<bool>) consume_Windows_AI_MachineLearning_ITensorBoolean<D>::GetAsVectorView() const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ITensorBoolean)->GetAsVectorView(&result));
        return llm::OS::Foundation::Collections::IVectorView<bool>{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::TensorBoolean) consume_Windows_AI_MachineLearning_ITensorBooleanStatics<D>::Create() const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ITensorBooleanStatics)->Create(&result));
        return llm::OS::AI::MachineLearning::TensorBoolean{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::TensorBoolean) consume_Windows_AI_MachineLearning_ITensorBooleanStatics<D>::Create(param::iterable<int64_t> const& shape) const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ITensorBooleanStatics)->Create2(*(void**)(&shape), &result));
        return llm::OS::AI::MachineLearning::TensorBoolean{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::TensorBoolean) consume_Windows_AI_MachineLearning_ITensorBooleanStatics<D>::CreateFromArray(param::iterable<int64_t> const& shape, array_view<bool const> data) const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ITensorBooleanStatics)->CreateFromArray(*(void**)(&shape), data.size(), get_abi(data), &result));
        return llm::OS::AI::MachineLearning::TensorBoolean{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::TensorBoolean) consume_Windows_AI_MachineLearning_ITensorBooleanStatics<D>::CreateFromIterable(param::iterable<int64_t> const& shape, param::iterable<bool> const& data) const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ITensorBooleanStatics)->CreateFromIterable(*(void**)(&shape), *(void**)(&data), &result));
        return llm::OS::AI::MachineLearning::TensorBoolean{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::TensorBoolean) consume_Windows_AI_MachineLearning_ITensorBooleanStatics2<D>::CreateFromShapeArrayAndDataArray(array_view<int64_t const> shape, array_view<bool const> data) const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ITensorBooleanStatics2)->CreateFromShapeArrayAndDataArray(shape.size(), get_abi(shape), data.size(), get_abi(data), &result));
        return llm::OS::AI::MachineLearning::TensorBoolean{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::TensorBoolean) consume_Windows_AI_MachineLearning_ITensorBooleanStatics2<D>::CreateFromBuffer(array_view<int64_t const> shape, llm::OS::Storage::Streams::IBuffer const& buffer) const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ITensorBooleanStatics2)->CreateFromBuffer(shape.size(), get_abi(shape), *(void**)(&buffer), &result));
        return llm::OS::AI::MachineLearning::TensorBoolean{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::Foundation::Collections::IVectorView<double>) consume_Windows_AI_MachineLearning_ITensorDouble<D>::GetAsVectorView() const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ITensorDouble)->GetAsVectorView(&result));
        return llm::OS::Foundation::Collections::IVectorView<double>{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::TensorDouble) consume_Windows_AI_MachineLearning_ITensorDoubleStatics<D>::Create() const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ITensorDoubleStatics)->Create(&result));
        return llm::OS::AI::MachineLearning::TensorDouble{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::TensorDouble) consume_Windows_AI_MachineLearning_ITensorDoubleStatics<D>::Create(param::iterable<int64_t> const& shape) const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ITensorDoubleStatics)->Create2(*(void**)(&shape), &result));
        return llm::OS::AI::MachineLearning::TensorDouble{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::TensorDouble) consume_Windows_AI_MachineLearning_ITensorDoubleStatics<D>::CreateFromArray(param::iterable<int64_t> const& shape, array_view<double const> data) const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ITensorDoubleStatics)->CreateFromArray(*(void**)(&shape), data.size(), get_abi(data), &result));
        return llm::OS::AI::MachineLearning::TensorDouble{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::TensorDouble) consume_Windows_AI_MachineLearning_ITensorDoubleStatics<D>::CreateFromIterable(param::iterable<int64_t> const& shape, param::iterable<double> const& data) const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ITensorDoubleStatics)->CreateFromIterable(*(void**)(&shape), *(void**)(&data), &result));
        return llm::OS::AI::MachineLearning::TensorDouble{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::TensorDouble) consume_Windows_AI_MachineLearning_ITensorDoubleStatics2<D>::CreateFromShapeArrayAndDataArray(array_view<int64_t const> shape, array_view<double const> data) const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ITensorDoubleStatics2)->CreateFromShapeArrayAndDataArray(shape.size(), get_abi(shape), data.size(), get_abi(data), &result));
        return llm::OS::AI::MachineLearning::TensorDouble{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::TensorDouble) consume_Windows_AI_MachineLearning_ITensorDoubleStatics2<D>::CreateFromBuffer(array_view<int64_t const> shape, llm::OS::Storage::Streams::IBuffer const& buffer) const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ITensorDoubleStatics2)->CreateFromBuffer(shape.size(), get_abi(shape), *(void**)(&buffer), &result));
        return llm::OS::AI::MachineLearning::TensorDouble{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::TensorKind) consume_Windows_AI_MachineLearning_ITensorFeatureDescriptor<D>::TensorKind() const
    {
        llm::OS::AI::MachineLearning::TensorKind value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ITensorFeatureDescriptor)->get_TensorKind(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::Foundation::Collections::IVectorView<int64_t>) consume_Windows_AI_MachineLearning_ITensorFeatureDescriptor<D>::Shape() const
    {
        void* value{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ITensorFeatureDescriptor)->get_Shape(&value));
        return llm::OS::Foundation::Collections::IVectorView<int64_t>{ value, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::Foundation::Collections::IVectorView<float>) consume_Windows_AI_MachineLearning_ITensorFloat<D>::GetAsVectorView() const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ITensorFloat)->GetAsVectorView(&result));
        return llm::OS::Foundation::Collections::IVectorView<float>{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::Foundation::Collections::IVectorView<float>) consume_Windows_AI_MachineLearning_ITensorFloat16Bit<D>::GetAsVectorView() const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ITensorFloat16Bit)->GetAsVectorView(&result));
        return llm::OS::Foundation::Collections::IVectorView<float>{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::TensorFloat16Bit) consume_Windows_AI_MachineLearning_ITensorFloat16BitStatics<D>::Create() const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ITensorFloat16BitStatics)->Create(&result));
        return llm::OS::AI::MachineLearning::TensorFloat16Bit{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::TensorFloat16Bit) consume_Windows_AI_MachineLearning_ITensorFloat16BitStatics<D>::Create(param::iterable<int64_t> const& shape) const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ITensorFloat16BitStatics)->Create2(*(void**)(&shape), &result));
        return llm::OS::AI::MachineLearning::TensorFloat16Bit{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::TensorFloat16Bit) consume_Windows_AI_MachineLearning_ITensorFloat16BitStatics<D>::CreateFromArray(param::iterable<int64_t> const& shape, array_view<float const> data) const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ITensorFloat16BitStatics)->CreateFromArray(*(void**)(&shape), data.size(), get_abi(data), &result));
        return llm::OS::AI::MachineLearning::TensorFloat16Bit{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::TensorFloat16Bit) consume_Windows_AI_MachineLearning_ITensorFloat16BitStatics<D>::CreateFromIterable(param::iterable<int64_t> const& shape, param::iterable<float> const& data) const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ITensorFloat16BitStatics)->CreateFromIterable(*(void**)(&shape), *(void**)(&data), &result));
        return llm::OS::AI::MachineLearning::TensorFloat16Bit{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::TensorFloat16Bit) consume_Windows_AI_MachineLearning_ITensorFloat16BitStatics2<D>::CreateFromShapeArrayAndDataArray(array_view<int64_t const> shape, array_view<float const> data) const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ITensorFloat16BitStatics2)->CreateFromShapeArrayAndDataArray(shape.size(), get_abi(shape), data.size(), get_abi(data), &result));
        return llm::OS::AI::MachineLearning::TensorFloat16Bit{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::TensorFloat16Bit) consume_Windows_AI_MachineLearning_ITensorFloat16BitStatics2<D>::CreateFromBuffer(array_view<int64_t const> shape, llm::OS::Storage::Streams::IBuffer const& buffer) const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ITensorFloat16BitStatics2)->CreateFromBuffer(shape.size(), get_abi(shape), *(void**)(&buffer), &result));
        return llm::OS::AI::MachineLearning::TensorFloat16Bit{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::TensorFloat) consume_Windows_AI_MachineLearning_ITensorFloatStatics<D>::Create() const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ITensorFloatStatics)->Create(&result));
        return llm::OS::AI::MachineLearning::TensorFloat{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::TensorFloat) consume_Windows_AI_MachineLearning_ITensorFloatStatics<D>::Create(param::iterable<int64_t> const& shape) const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ITensorFloatStatics)->Create2(*(void**)(&shape), &result));
        return llm::OS::AI::MachineLearning::TensorFloat{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::TensorFloat) consume_Windows_AI_MachineLearning_ITensorFloatStatics<D>::CreateFromArray(param::iterable<int64_t> const& shape, array_view<float const> data) const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ITensorFloatStatics)->CreateFromArray(*(void**)(&shape), data.size(), get_abi(data), &result));
        return llm::OS::AI::MachineLearning::TensorFloat{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::TensorFloat) consume_Windows_AI_MachineLearning_ITensorFloatStatics<D>::CreateFromIterable(param::iterable<int64_t> const& shape, param::iterable<float> const& data) const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ITensorFloatStatics)->CreateFromIterable(*(void**)(&shape), *(void**)(&data), &result));
        return llm::OS::AI::MachineLearning::TensorFloat{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::TensorFloat) consume_Windows_AI_MachineLearning_ITensorFloatStatics2<D>::CreateFromShapeArrayAndDataArray(array_view<int64_t const> shape, array_view<float const> data) const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ITensorFloatStatics2)->CreateFromShapeArrayAndDataArray(shape.size(), get_abi(shape), data.size(), get_abi(data), &result));
        return llm::OS::AI::MachineLearning::TensorFloat{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::TensorFloat) consume_Windows_AI_MachineLearning_ITensorFloatStatics2<D>::CreateFromBuffer(array_view<int64_t const> shape, llm::OS::Storage::Streams::IBuffer const& buffer) const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ITensorFloatStatics2)->CreateFromBuffer(shape.size(), get_abi(shape), *(void**)(&buffer), &result));
        return llm::OS::AI::MachineLearning::TensorFloat{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::Foundation::Collections::IVectorView<int16_t>) consume_Windows_AI_MachineLearning_ITensorInt16Bit<D>::GetAsVectorView() const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ITensorInt16Bit)->GetAsVectorView(&result));
        return llm::OS::Foundation::Collections::IVectorView<int16_t>{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::TensorInt16Bit) consume_Windows_AI_MachineLearning_ITensorInt16BitStatics<D>::Create() const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ITensorInt16BitStatics)->Create(&result));
        return llm::OS::AI::MachineLearning::TensorInt16Bit{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::TensorInt16Bit) consume_Windows_AI_MachineLearning_ITensorInt16BitStatics<D>::Create(param::iterable<int64_t> const& shape) const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ITensorInt16BitStatics)->Create2(*(void**)(&shape), &result));
        return llm::OS::AI::MachineLearning::TensorInt16Bit{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::TensorInt16Bit) consume_Windows_AI_MachineLearning_ITensorInt16BitStatics<D>::CreateFromArray(param::iterable<int64_t> const& shape, array_view<int16_t const> data) const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ITensorInt16BitStatics)->CreateFromArray(*(void**)(&shape), data.size(), get_abi(data), &result));
        return llm::OS::AI::MachineLearning::TensorInt16Bit{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::TensorInt16Bit) consume_Windows_AI_MachineLearning_ITensorInt16BitStatics<D>::CreateFromIterable(param::iterable<int64_t> const& shape, param::iterable<int16_t> const& data) const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ITensorInt16BitStatics)->CreateFromIterable(*(void**)(&shape), *(void**)(&data), &result));
        return llm::OS::AI::MachineLearning::TensorInt16Bit{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::TensorInt16Bit) consume_Windows_AI_MachineLearning_ITensorInt16BitStatics2<D>::CreateFromShapeArrayAndDataArray(array_view<int64_t const> shape, array_view<int16_t const> data) const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ITensorInt16BitStatics2)->CreateFromShapeArrayAndDataArray(shape.size(), get_abi(shape), data.size(), get_abi(data), &result));
        return llm::OS::AI::MachineLearning::TensorInt16Bit{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::TensorInt16Bit) consume_Windows_AI_MachineLearning_ITensorInt16BitStatics2<D>::CreateFromBuffer(array_view<int64_t const> shape, llm::OS::Storage::Streams::IBuffer const& buffer) const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ITensorInt16BitStatics2)->CreateFromBuffer(shape.size(), get_abi(shape), *(void**)(&buffer), &result));
        return llm::OS::AI::MachineLearning::TensorInt16Bit{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::Foundation::Collections::IVectorView<int32_t>) consume_Windows_AI_MachineLearning_ITensorInt32Bit<D>::GetAsVectorView() const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ITensorInt32Bit)->GetAsVectorView(&result));
        return llm::OS::Foundation::Collections::IVectorView<int32_t>{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::TensorInt32Bit) consume_Windows_AI_MachineLearning_ITensorInt32BitStatics<D>::Create() const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ITensorInt32BitStatics)->Create(&result));
        return llm::OS::AI::MachineLearning::TensorInt32Bit{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::TensorInt32Bit) consume_Windows_AI_MachineLearning_ITensorInt32BitStatics<D>::Create(param::iterable<int64_t> const& shape) const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ITensorInt32BitStatics)->Create2(*(void**)(&shape), &result));
        return llm::OS::AI::MachineLearning::TensorInt32Bit{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::TensorInt32Bit) consume_Windows_AI_MachineLearning_ITensorInt32BitStatics<D>::CreateFromArray(param::iterable<int64_t> const& shape, array_view<int32_t const> data) const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ITensorInt32BitStatics)->CreateFromArray(*(void**)(&shape), data.size(), get_abi(data), &result));
        return llm::OS::AI::MachineLearning::TensorInt32Bit{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::TensorInt32Bit) consume_Windows_AI_MachineLearning_ITensorInt32BitStatics<D>::CreateFromIterable(param::iterable<int64_t> const& shape, param::iterable<int32_t> const& data) const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ITensorInt32BitStatics)->CreateFromIterable(*(void**)(&shape), *(void**)(&data), &result));
        return llm::OS::AI::MachineLearning::TensorInt32Bit{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::TensorInt32Bit) consume_Windows_AI_MachineLearning_ITensorInt32BitStatics2<D>::CreateFromShapeArrayAndDataArray(array_view<int64_t const> shape, array_view<int32_t const> data) const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ITensorInt32BitStatics2)->CreateFromShapeArrayAndDataArray(shape.size(), get_abi(shape), data.size(), get_abi(data), &result));
        return llm::OS::AI::MachineLearning::TensorInt32Bit{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::TensorInt32Bit) consume_Windows_AI_MachineLearning_ITensorInt32BitStatics2<D>::CreateFromBuffer(array_view<int64_t const> shape, llm::OS::Storage::Streams::IBuffer const& buffer) const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ITensorInt32BitStatics2)->CreateFromBuffer(shape.size(), get_abi(shape), *(void**)(&buffer), &result));
        return llm::OS::AI::MachineLearning::TensorInt32Bit{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::Foundation::Collections::IVectorView<int64_t>) consume_Windows_AI_MachineLearning_ITensorInt64Bit<D>::GetAsVectorView() const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ITensorInt64Bit)->GetAsVectorView(&result));
        return llm::OS::Foundation::Collections::IVectorView<int64_t>{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::TensorInt64Bit) consume_Windows_AI_MachineLearning_ITensorInt64BitStatics<D>::Create() const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ITensorInt64BitStatics)->Create(&result));
        return llm::OS::AI::MachineLearning::TensorInt64Bit{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::TensorInt64Bit) consume_Windows_AI_MachineLearning_ITensorInt64BitStatics<D>::Create(param::iterable<int64_t> const& shape) const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ITensorInt64BitStatics)->Create2(*(void**)(&shape), &result));
        return llm::OS::AI::MachineLearning::TensorInt64Bit{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::TensorInt64Bit) consume_Windows_AI_MachineLearning_ITensorInt64BitStatics<D>::CreateFromArray(param::iterable<int64_t> const& shape, array_view<int64_t const> data) const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ITensorInt64BitStatics)->CreateFromArray(*(void**)(&shape), data.size(), get_abi(data), &result));
        return llm::OS::AI::MachineLearning::TensorInt64Bit{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::TensorInt64Bit) consume_Windows_AI_MachineLearning_ITensorInt64BitStatics<D>::CreateFromIterable(param::iterable<int64_t> const& shape, param::iterable<int64_t> const& data) const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ITensorInt64BitStatics)->CreateFromIterable(*(void**)(&shape), *(void**)(&data), &result));
        return llm::OS::AI::MachineLearning::TensorInt64Bit{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::TensorInt64Bit) consume_Windows_AI_MachineLearning_ITensorInt64BitStatics2<D>::CreateFromShapeArrayAndDataArray(array_view<int64_t const> shape, array_view<int64_t const> data) const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ITensorInt64BitStatics2)->CreateFromShapeArrayAndDataArray(shape.size(), get_abi(shape), data.size(), get_abi(data), &result));
        return llm::OS::AI::MachineLearning::TensorInt64Bit{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::TensorInt64Bit) consume_Windows_AI_MachineLearning_ITensorInt64BitStatics2<D>::CreateFromBuffer(array_view<int64_t const> shape, llm::OS::Storage::Streams::IBuffer const& buffer) const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ITensorInt64BitStatics2)->CreateFromBuffer(shape.size(), get_abi(shape), *(void**)(&buffer), &result));
        return llm::OS::AI::MachineLearning::TensorInt64Bit{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::Foundation::Collections::IVectorView<uint8_t>) consume_Windows_AI_MachineLearning_ITensorInt8Bit<D>::GetAsVectorView() const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ITensorInt8Bit)->GetAsVectorView(&result));
        return llm::OS::Foundation::Collections::IVectorView<uint8_t>{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::TensorInt8Bit) consume_Windows_AI_MachineLearning_ITensorInt8BitStatics<D>::Create() const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ITensorInt8BitStatics)->Create(&result));
        return llm::OS::AI::MachineLearning::TensorInt8Bit{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::TensorInt8Bit) consume_Windows_AI_MachineLearning_ITensorInt8BitStatics<D>::Create(param::iterable<int64_t> const& shape) const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ITensorInt8BitStatics)->Create2(*(void**)(&shape), &result));
        return llm::OS::AI::MachineLearning::TensorInt8Bit{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::TensorInt8Bit) consume_Windows_AI_MachineLearning_ITensorInt8BitStatics<D>::CreateFromArray(param::iterable<int64_t> const& shape, array_view<uint8_t const> data) const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ITensorInt8BitStatics)->CreateFromArray(*(void**)(&shape), data.size(), get_abi(data), &result));
        return llm::OS::AI::MachineLearning::TensorInt8Bit{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::TensorInt8Bit) consume_Windows_AI_MachineLearning_ITensorInt8BitStatics<D>::CreateFromIterable(param::iterable<int64_t> const& shape, param::iterable<uint8_t> const& data) const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ITensorInt8BitStatics)->CreateFromIterable(*(void**)(&shape), *(void**)(&data), &result));
        return llm::OS::AI::MachineLearning::TensorInt8Bit{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::TensorInt8Bit) consume_Windows_AI_MachineLearning_ITensorInt8BitStatics2<D>::CreateFromShapeArrayAndDataArray(array_view<int64_t const> shape, array_view<uint8_t const> data) const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ITensorInt8BitStatics2)->CreateFromShapeArrayAndDataArray(shape.size(), get_abi(shape), data.size(), get_abi(data), &result));
        return llm::OS::AI::MachineLearning::TensorInt8Bit{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::TensorInt8Bit) consume_Windows_AI_MachineLearning_ITensorInt8BitStatics2<D>::CreateFromBuffer(array_view<int64_t const> shape, llm::OS::Storage::Streams::IBuffer const& buffer) const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ITensorInt8BitStatics2)->CreateFromBuffer(shape.size(), get_abi(shape), *(void**)(&buffer), &result));
        return llm::OS::AI::MachineLearning::TensorInt8Bit{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::Foundation::Collections::IVectorView<hstring>) consume_Windows_AI_MachineLearning_ITensorString<D>::GetAsVectorView() const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ITensorString)->GetAsVectorView(&result));
        return llm::OS::Foundation::Collections::IVectorView<hstring>{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::TensorString) consume_Windows_AI_MachineLearning_ITensorStringStatics<D>::Create() const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ITensorStringStatics)->Create(&result));
        return llm::OS::AI::MachineLearning::TensorString{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::TensorString) consume_Windows_AI_MachineLearning_ITensorStringStatics<D>::Create(param::iterable<int64_t> const& shape) const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ITensorStringStatics)->Create2(*(void**)(&shape), &result));
        return llm::OS::AI::MachineLearning::TensorString{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::TensorString) consume_Windows_AI_MachineLearning_ITensorStringStatics<D>::CreateFromArray(param::iterable<int64_t> const& shape, array_view<hstring const> data) const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ITensorStringStatics)->CreateFromArray(*(void**)(&shape), data.size(), get_abi(data), &result));
        return llm::OS::AI::MachineLearning::TensorString{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::TensorString) consume_Windows_AI_MachineLearning_ITensorStringStatics<D>::CreateFromIterable(param::iterable<int64_t> const& shape, param::iterable<hstring> const& data) const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ITensorStringStatics)->CreateFromIterable(*(void**)(&shape), *(void**)(&data), &result));
        return llm::OS::AI::MachineLearning::TensorString{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::TensorString) consume_Windows_AI_MachineLearning_ITensorStringStatics2<D>::CreateFromShapeArrayAndDataArray(array_view<int64_t const> shape, array_view<hstring const> data) const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ITensorStringStatics2)->CreateFromShapeArrayAndDataArray(shape.size(), get_abi(shape), data.size(), get_abi(data), &result));
        return llm::OS::AI::MachineLearning::TensorString{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::Foundation::Collections::IVectorView<uint16_t>) consume_Windows_AI_MachineLearning_ITensorUInt16Bit<D>::GetAsVectorView() const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ITensorUInt16Bit)->GetAsVectorView(&result));
        return llm::OS::Foundation::Collections::IVectorView<uint16_t>{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::TensorUInt16Bit) consume_Windows_AI_MachineLearning_ITensorUInt16BitStatics<D>::Create() const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ITensorUInt16BitStatics)->Create(&result));
        return llm::OS::AI::MachineLearning::TensorUInt16Bit{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::TensorUInt16Bit) consume_Windows_AI_MachineLearning_ITensorUInt16BitStatics<D>::Create(param::iterable<int64_t> const& shape) const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ITensorUInt16BitStatics)->Create2(*(void**)(&shape), &result));
        return llm::OS::AI::MachineLearning::TensorUInt16Bit{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::TensorUInt16Bit) consume_Windows_AI_MachineLearning_ITensorUInt16BitStatics<D>::CreateFromArray(param::iterable<int64_t> const& shape, array_view<uint16_t const> data) const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ITensorUInt16BitStatics)->CreateFromArray(*(void**)(&shape), data.size(), get_abi(data), &result));
        return llm::OS::AI::MachineLearning::TensorUInt16Bit{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::TensorUInt16Bit) consume_Windows_AI_MachineLearning_ITensorUInt16BitStatics<D>::CreateFromIterable(param::iterable<int64_t> const& shape, param::iterable<uint16_t> const& data) const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ITensorUInt16BitStatics)->CreateFromIterable(*(void**)(&shape), *(void**)(&data), &result));
        return llm::OS::AI::MachineLearning::TensorUInt16Bit{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::TensorUInt16Bit) consume_Windows_AI_MachineLearning_ITensorUInt16BitStatics2<D>::CreateFromShapeArrayAndDataArray(array_view<int64_t const> shape, array_view<uint16_t const> data) const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ITensorUInt16BitStatics2)->CreateFromShapeArrayAndDataArray(shape.size(), get_abi(shape), data.size(), get_abi(data), &result));
        return llm::OS::AI::MachineLearning::TensorUInt16Bit{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::TensorUInt16Bit) consume_Windows_AI_MachineLearning_ITensorUInt16BitStatics2<D>::CreateFromBuffer(array_view<int64_t const> shape, llm::OS::Storage::Streams::IBuffer const& buffer) const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ITensorUInt16BitStatics2)->CreateFromBuffer(shape.size(), get_abi(shape), *(void**)(&buffer), &result));
        return llm::OS::AI::MachineLearning::TensorUInt16Bit{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::Foundation::Collections::IVectorView<uint32_t>) consume_Windows_AI_MachineLearning_ITensorUInt32Bit<D>::GetAsVectorView() const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ITensorUInt32Bit)->GetAsVectorView(&result));
        return llm::OS::Foundation::Collections::IVectorView<uint32_t>{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::TensorUInt32Bit) consume_Windows_AI_MachineLearning_ITensorUInt32BitStatics<D>::Create() const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ITensorUInt32BitStatics)->Create(&result));
        return llm::OS::AI::MachineLearning::TensorUInt32Bit{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::TensorUInt32Bit) consume_Windows_AI_MachineLearning_ITensorUInt32BitStatics<D>::Create(param::iterable<int64_t> const& shape) const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ITensorUInt32BitStatics)->Create2(*(void**)(&shape), &result));
        return llm::OS::AI::MachineLearning::TensorUInt32Bit{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::TensorUInt32Bit) consume_Windows_AI_MachineLearning_ITensorUInt32BitStatics<D>::CreateFromArray(param::iterable<int64_t> const& shape, array_view<uint32_t const> data) const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ITensorUInt32BitStatics)->CreateFromArray(*(void**)(&shape), data.size(), get_abi(data), &result));
        return llm::OS::AI::MachineLearning::TensorUInt32Bit{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::TensorUInt32Bit) consume_Windows_AI_MachineLearning_ITensorUInt32BitStatics<D>::CreateFromIterable(param::iterable<int64_t> const& shape, param::iterable<uint32_t> const& data) const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ITensorUInt32BitStatics)->CreateFromIterable(*(void**)(&shape), *(void**)(&data), &result));
        return llm::OS::AI::MachineLearning::TensorUInt32Bit{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::TensorUInt32Bit) consume_Windows_AI_MachineLearning_ITensorUInt32BitStatics2<D>::CreateFromShapeArrayAndDataArray(array_view<int64_t const> shape, array_view<uint32_t const> data) const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ITensorUInt32BitStatics2)->CreateFromShapeArrayAndDataArray(shape.size(), get_abi(shape), data.size(), get_abi(data), &result));
        return llm::OS::AI::MachineLearning::TensorUInt32Bit{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::TensorUInt32Bit) consume_Windows_AI_MachineLearning_ITensorUInt32BitStatics2<D>::CreateFromBuffer(array_view<int64_t const> shape, llm::OS::Storage::Streams::IBuffer const& buffer) const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ITensorUInt32BitStatics2)->CreateFromBuffer(shape.size(), get_abi(shape), *(void**)(&buffer), &result));
        return llm::OS::AI::MachineLearning::TensorUInt32Bit{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::Foundation::Collections::IVectorView<uint64_t>) consume_Windows_AI_MachineLearning_ITensorUInt64Bit<D>::GetAsVectorView() const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ITensorUInt64Bit)->GetAsVectorView(&result));
        return llm::OS::Foundation::Collections::IVectorView<uint64_t>{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::TensorUInt64Bit) consume_Windows_AI_MachineLearning_ITensorUInt64BitStatics<D>::Create() const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ITensorUInt64BitStatics)->Create(&result));
        return llm::OS::AI::MachineLearning::TensorUInt64Bit{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::TensorUInt64Bit) consume_Windows_AI_MachineLearning_ITensorUInt64BitStatics<D>::Create(param::iterable<int64_t> const& shape) const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ITensorUInt64BitStatics)->Create2(*(void**)(&shape), &result));
        return llm::OS::AI::MachineLearning::TensorUInt64Bit{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::TensorUInt64Bit) consume_Windows_AI_MachineLearning_ITensorUInt64BitStatics<D>::CreateFromArray(param::iterable<int64_t> const& shape, array_view<uint64_t const> data) const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ITensorUInt64BitStatics)->CreateFromArray(*(void**)(&shape), data.size(), get_abi(data), &result));
        return llm::OS::AI::MachineLearning::TensorUInt64Bit{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::TensorUInt64Bit) consume_Windows_AI_MachineLearning_ITensorUInt64BitStatics<D>::CreateFromIterable(param::iterable<int64_t> const& shape, param::iterable<uint64_t> const& data) const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ITensorUInt64BitStatics)->CreateFromIterable(*(void**)(&shape), *(void**)(&data), &result));
        return llm::OS::AI::MachineLearning::TensorUInt64Bit{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::TensorUInt64Bit) consume_Windows_AI_MachineLearning_ITensorUInt64BitStatics2<D>::CreateFromShapeArrayAndDataArray(array_view<int64_t const> shape, array_view<uint64_t const> data) const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ITensorUInt64BitStatics2)->CreateFromShapeArrayAndDataArray(shape.size(), get_abi(shape), data.size(), get_abi(data), &result));
        return llm::OS::AI::MachineLearning::TensorUInt64Bit{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::TensorUInt64Bit) consume_Windows_AI_MachineLearning_ITensorUInt64BitStatics2<D>::CreateFromBuffer(array_view<int64_t const> shape, llm::OS::Storage::Streams::IBuffer const& buffer) const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ITensorUInt64BitStatics2)->CreateFromBuffer(shape.size(), get_abi(shape), *(void**)(&buffer), &result));
        return llm::OS::AI::MachineLearning::TensorUInt64Bit{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::Foundation::Collections::IVectorView<uint8_t>) consume_Windows_AI_MachineLearning_ITensorUInt8Bit<D>::GetAsVectorView() const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ITensorUInt8Bit)->GetAsVectorView(&result));
        return llm::OS::Foundation::Collections::IVectorView<uint8_t>{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::TensorUInt8Bit) consume_Windows_AI_MachineLearning_ITensorUInt8BitStatics<D>::Create() const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ITensorUInt8BitStatics)->Create(&result));
        return llm::OS::AI::MachineLearning::TensorUInt8Bit{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::TensorUInt8Bit) consume_Windows_AI_MachineLearning_ITensorUInt8BitStatics<D>::Create(param::iterable<int64_t> const& shape) const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ITensorUInt8BitStatics)->Create2(*(void**)(&shape), &result));
        return llm::OS::AI::MachineLearning::TensorUInt8Bit{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::TensorUInt8Bit) consume_Windows_AI_MachineLearning_ITensorUInt8BitStatics<D>::CreateFromArray(param::iterable<int64_t> const& shape, array_view<uint8_t const> data) const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ITensorUInt8BitStatics)->CreateFromArray(*(void**)(&shape), data.size(), get_abi(data), &result));
        return llm::OS::AI::MachineLearning::TensorUInt8Bit{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::TensorUInt8Bit) consume_Windows_AI_MachineLearning_ITensorUInt8BitStatics<D>::CreateFromIterable(param::iterable<int64_t> const& shape, param::iterable<uint8_t> const& data) const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ITensorUInt8BitStatics)->CreateFromIterable(*(void**)(&shape), *(void**)(&data), &result));
        return llm::OS::AI::MachineLearning::TensorUInt8Bit{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::TensorUInt8Bit) consume_Windows_AI_MachineLearning_ITensorUInt8BitStatics2<D>::CreateFromShapeArrayAndDataArray(array_view<int64_t const> shape, array_view<uint8_t const> data) const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ITensorUInt8BitStatics2)->CreateFromShapeArrayAndDataArray(shape.size(), get_abi(shape), data.size(), get_abi(data), &result));
        return llm::OS::AI::MachineLearning::TensorUInt8Bit{ result, take_ownership_from_abi };
    }
    template <typename D> LLM_IMPL_AUTO(llm::OS::AI::MachineLearning::TensorUInt8Bit) consume_Windows_AI_MachineLearning_ITensorUInt8BitStatics2<D>::CreateFromBuffer(array_view<int64_t const> shape, llm::OS::Storage::Streams::IBuffer const& buffer) const
    {
        void* result{};
        check_hresult(LLM_IMPL_SHIM(llm::OS::AI::MachineLearning::ITensorUInt8BitStatics2)->CreateFromBuffer(shape.size(), get_abi(shape), *(void**)(&buffer), &result));
        return llm::OS::AI::MachineLearning::TensorUInt8Bit{ result, take_ownership_from_abi };
    }
#ifndef LLM_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, llm::OS::AI::MachineLearning::IImageFeatureDescriptor> : produce_base<D, llm::OS::AI::MachineLearning::IImageFeatureDescriptor>
    {
        int32_t __stdcall get_BitmapPixelFormat(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<llm::OS::Graphics::Imaging::BitmapPixelFormat>(this->shim().BitmapPixelFormat());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_BitmapAlphaMode(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<llm::OS::Graphics::Imaging::BitmapAlphaMode>(this->shim().BitmapAlphaMode());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Width(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().Width());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Height(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().Height());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef LLM_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, llm::OS::AI::MachineLearning::IImageFeatureDescriptor2> : produce_base<D, llm::OS::AI::MachineLearning::IImageFeatureDescriptor2>
    {
        int32_t __stdcall get_PixelRange(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<llm::OS::AI::MachineLearning::LearningModelPixelRange>(this->shim().PixelRange());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef LLM_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, llm::OS::AI::MachineLearning::IImageFeatureValue> : produce_base<D, llm::OS::AI::MachineLearning::IImageFeatureValue>
    {
        int32_t __stdcall get_VideoFrame(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<llm::OS::Media::VideoFrame>(this->shim().VideoFrame());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef LLM_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, llm::OS::AI::MachineLearning::IImageFeatureValueStatics> : produce_base<D, llm::OS::AI::MachineLearning::IImageFeatureValueStatics>
    {
        int32_t __stdcall CreateFromVideoFrame(void* image, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OS::AI::MachineLearning::ImageFeatureValue>(this->shim().CreateFromVideoFrame(*reinterpret_cast<llm::OS::Media::VideoFrame const*>(&image)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef LLM_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, llm::OS::AI::MachineLearning::ILearningModel> : produce_base<D, llm::OS::AI::MachineLearning::ILearningModel>
    {
        int32_t __stdcall get_Author(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Author());
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
        int32_t __stdcall get_Domain(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Domain());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Description(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Description());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Version(int64_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int64_t>(this->shim().Version());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Metadata(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<llm::OS::Foundation::Collections::IMapView<hstring, hstring>>(this->shim().Metadata());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_InputFeatures(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<llm::OS::Foundation::Collections::IVectorView<llm::OS::AI::MachineLearning::ILearningModelFeatureDescriptor>>(this->shim().InputFeatures());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_OutputFeatures(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<llm::OS::Foundation::Collections::IVectorView<llm::OS::AI::MachineLearning::ILearningModelFeatureDescriptor>>(this->shim().OutputFeatures());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef LLM_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, llm::OS::AI::MachineLearning::ILearningModelBinding> : produce_base<D, llm::OS::AI::MachineLearning::ILearningModelBinding>
    {
        int32_t __stdcall Bind(void* name, void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Bind(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<llm::OS::Foundation::IInspectable const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall BindWithProperties(void* name, void* value, void* props) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Bind(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<llm::OS::Foundation::IInspectable const*>(&value), *reinterpret_cast<llm::OS::Foundation::Collections::IPropertySet const*>(&props));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Clear() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Clear();
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef LLM_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, llm::OS::AI::MachineLearning::ILearningModelBindingFactory> : produce_base<D, llm::OS::AI::MachineLearning::ILearningModelBindingFactory>
    {
        int32_t __stdcall CreateFromSession(void* session, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<llm::OS::AI::MachineLearning::LearningModelBinding>(this->shim().CreateFromSession(*reinterpret_cast<llm::OS::AI::MachineLearning::LearningModelSession const*>(&session)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef LLM_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, llm::OS::AI::MachineLearning::ILearningModelDevice> : produce_base<D, llm::OS::AI::MachineLearning::ILearningModelDevice>
    {
        int32_t __stdcall get_AdapterId(struct struct_Windows_Graphics_DisplayAdapterId* value) noexcept final try
        {
            zero_abi<llm::OS::Graphics::DisplayAdapterId>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<llm::OS::Graphics::DisplayAdapterId>(this->shim().AdapterId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Direct3D11Device(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<llm::OS::Graphics::DirectX::Direct3D11::IDirect3DDevice>(this->shim().Direct3D11Device());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef LLM_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, llm::OS::AI::MachineLearning::ILearningModelDeviceFactory> : produce_base<D, llm::OS::AI::MachineLearning::ILearningModelDeviceFactory>
    {
        int32_t __stdcall Create(int32_t deviceKind, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<llm::OS::AI::MachineLearning::LearningModelDevice>(this->shim().Create(*reinterpret_cast<llm::OS::AI::MachineLearning::LearningModelDeviceKind const*>(&deviceKind)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef LLM_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, llm::OS::AI::MachineLearning::ILearningModelDeviceStatics> : produce_base<D, llm::OS::AI::MachineLearning::ILearningModelDeviceStatics>
    {
        int32_t __stdcall CreateFromDirect3D11Device(void* device, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OS::AI::MachineLearning::LearningModelDevice>(this->shim().CreateFromDirect3D11Device(*reinterpret_cast<llm::OS::Graphics::DirectX::Direct3D11::IDirect3DDevice const*>(&device)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef LLM_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, llm::OS::AI::MachineLearning::ILearningModelEvaluationResult> : produce_base<D, llm::OS::AI::MachineLearning::ILearningModelEvaluationResult>
    {
        int32_t __stdcall get_CorrelationId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().CorrelationId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ErrorStatus(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().ErrorStatus());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Succeeded(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Succeeded());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Outputs(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<llm::OS::Foundation::Collections::IMapView<hstring, llm::OS::Foundation::IInspectable>>(this->shim().Outputs());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
    template <typename D>
    struct produce<D, llm::OS::AI::MachineLearning::ILearningModelFeatureDescriptor> : produce_base<D, llm::OS::AI::MachineLearning::ILearningModelFeatureDescriptor>
    {
        int32_t __stdcall get_Name(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Name());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Description(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Description());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Kind(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<llm::OS::AI::MachineLearning::LearningModelFeatureKind>(this->shim().Kind());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsRequired(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsRequired());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, llm::OS::AI::MachineLearning::ILearningModelFeatureValue> : produce_base<D, llm::OS::AI::MachineLearning::ILearningModelFeatureValue>
    {
        int32_t __stdcall get_Kind(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<llm::OS::AI::MachineLearning::LearningModelFeatureKind>(this->shim().Kind());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, llm::OS::AI::MachineLearning::ILearningModelOperatorProvider> : produce_base<D, llm::OS::AI::MachineLearning::ILearningModelOperatorProvider>
    {
    };
#ifndef LLM_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, llm::OS::AI::MachineLearning::ILearningModelSession> : produce_base<D, llm::OS::AI::MachineLearning::ILearningModelSession>
    {
        int32_t __stdcall get_Model(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<llm::OS::AI::MachineLearning::LearningModel>(this->shim().Model());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Device(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<llm::OS::AI::MachineLearning::LearningModelDevice>(this->shim().Device());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_EvaluationProperties(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<llm::OS::Foundation::Collections::IPropertySet>(this->shim().EvaluationProperties());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall EvaluateAsync(void* bindings, void* correlationId, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<llm::OS::Foundation::IAsyncOperation<llm::OS::AI::MachineLearning::LearningModelEvaluationResult>>(this->shim().EvaluateAsync(*reinterpret_cast<llm::OS::AI::MachineLearning::LearningModelBinding const*>(&bindings), *reinterpret_cast<hstring const*>(&correlationId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall EvaluateFeaturesAsync(void* features, void* correlationId, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<llm::OS::Foundation::IAsyncOperation<llm::OS::AI::MachineLearning::LearningModelEvaluationResult>>(this->shim().EvaluateFeaturesAsync(*reinterpret_cast<llm::OS::Foundation::Collections::IMap<hstring, llm::OS::Foundation::IInspectable> const*>(&features), *reinterpret_cast<hstring const*>(&correlationId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Evaluate(void* bindings, void* correlationId, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OS::AI::MachineLearning::LearningModelEvaluationResult>(this->shim().Evaluate(*reinterpret_cast<llm::OS::AI::MachineLearning::LearningModelBinding const*>(&bindings), *reinterpret_cast<hstring const*>(&correlationId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall EvaluateFeatures(void* features, void* correlationId, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OS::AI::MachineLearning::LearningModelEvaluationResult>(this->shim().EvaluateFeatures(*reinterpret_cast<llm::OS::Foundation::Collections::IMap<hstring, llm::OS::Foundation::IInspectable> const*>(&features), *reinterpret_cast<hstring const*>(&correlationId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef LLM_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, llm::OS::AI::MachineLearning::ILearningModelSessionFactory> : produce_base<D, llm::OS::AI::MachineLearning::ILearningModelSessionFactory>
    {
        int32_t __stdcall CreateFromModel(void* model, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<llm::OS::AI::MachineLearning::LearningModelSession>(this->shim().CreateFromModel(*reinterpret_cast<llm::OS::AI::MachineLearning::LearningModel const*>(&model)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateFromModelOnDevice(void* model, void* deviceToRunOn, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<llm::OS::AI::MachineLearning::LearningModelSession>(this->shim().CreateFromModelOnDevice(*reinterpret_cast<llm::OS::AI::MachineLearning::LearningModel const*>(&model), *reinterpret_cast<llm::OS::AI::MachineLearning::LearningModelDevice const*>(&deviceToRunOn)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef LLM_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, llm::OS::AI::MachineLearning::ILearningModelSessionFactory2> : produce_base<D, llm::OS::AI::MachineLearning::ILearningModelSessionFactory2>
    {
        int32_t __stdcall CreateFromModelOnDeviceWithSessionOptions(void* model, void* deviceToRunOn, void* learningModelSessionOptions, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<llm::OS::AI::MachineLearning::LearningModelSession>(this->shim().CreateFromModelOnDeviceWithSessionOptions(*reinterpret_cast<llm::OS::AI::MachineLearning::LearningModel const*>(&model), *reinterpret_cast<llm::OS::AI::MachineLearning::LearningModelDevice const*>(&deviceToRunOn), *reinterpret_cast<llm::OS::AI::MachineLearning::LearningModelSessionOptions const*>(&learningModelSessionOptions)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef LLM_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, llm::OS::AI::MachineLearning::ILearningModelSessionOptions> : produce_base<D, llm::OS::AI::MachineLearning::ILearningModelSessionOptions>
    {
        int32_t __stdcall get_BatchSizeOverride(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().BatchSizeOverride());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_BatchSizeOverride(uint32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BatchSizeOverride(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef LLM_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, llm::OS::AI::MachineLearning::ILearningModelSessionOptions2> : produce_base<D, llm::OS::AI::MachineLearning::ILearningModelSessionOptions2>
    {
        int32_t __stdcall get_CloseModelOnSessionCreation(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().CloseModelOnSessionCreation());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_CloseModelOnSessionCreation(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CloseModelOnSessionCreation(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef LLM_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, llm::OS::AI::MachineLearning::ILearningModelSessionOptions3> : produce_base<D, llm::OS::AI::MachineLearning::ILearningModelSessionOptions3>
    {
        int32_t __stdcall OverrideNamedDimension(void* name, uint32_t dimension) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OverrideNamedDimension(*reinterpret_cast<hstring const*>(&name), dimension);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef LLM_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, llm::OS::AI::MachineLearning::ILearningModelStatics> : produce_base<D, llm::OS::AI::MachineLearning::ILearningModelStatics>
    {
        int32_t __stdcall LoadFromStorageFileAsync(void* modelFile, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<llm::OS::Foundation::IAsyncOperation<llm::OS::AI::MachineLearning::LearningModel>>(this->shim().LoadFromStorageFileAsync(*reinterpret_cast<llm::OS::Storage::IStorageFile const*>(&modelFile)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall LoadFromStreamAsync(void* modelStream, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<llm::OS::Foundation::IAsyncOperation<llm::OS::AI::MachineLearning::LearningModel>>(this->shim().LoadFromStreamAsync(*reinterpret_cast<llm::OS::Storage::Streams::IRandomAccessStreamReference const*>(&modelStream)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall LoadFromFilePath(void* filePath, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OS::AI::MachineLearning::LearningModel>(this->shim().LoadFromFilePath(*reinterpret_cast<hstring const*>(&filePath)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall LoadFromStream(void* modelStream, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OS::AI::MachineLearning::LearningModel>(this->shim().LoadFromStream(*reinterpret_cast<llm::OS::Storage::Streams::IRandomAccessStreamReference const*>(&modelStream)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall LoadFromStorageFileWithOperatorProviderAsync(void* modelFile, void* operatorProvider, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<llm::OS::Foundation::IAsyncOperation<llm::OS::AI::MachineLearning::LearningModel>>(this->shim().LoadFromStorageFileAsync(*reinterpret_cast<llm::OS::Storage::IStorageFile const*>(&modelFile), *reinterpret_cast<llm::OS::AI::MachineLearning::ILearningModelOperatorProvider const*>(&operatorProvider)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall LoadFromStreamWithOperatorProviderAsync(void* modelStream, void* operatorProvider, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<llm::OS::Foundation::IAsyncOperation<llm::OS::AI::MachineLearning::LearningModel>>(this->shim().LoadFromStreamAsync(*reinterpret_cast<llm::OS::Storage::Streams::IRandomAccessStreamReference const*>(&modelStream), *reinterpret_cast<llm::OS::AI::MachineLearning::ILearningModelOperatorProvider const*>(&operatorProvider)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall LoadFromFilePathWithOperatorProvider(void* filePath, void* operatorProvider, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OS::AI::MachineLearning::LearningModel>(this->shim().LoadFromFilePath(*reinterpret_cast<hstring const*>(&filePath), *reinterpret_cast<llm::OS::AI::MachineLearning::ILearningModelOperatorProvider const*>(&operatorProvider)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall LoadFromStreamWithOperatorProvider(void* modelStream, void* operatorProvider, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OS::AI::MachineLearning::LearningModel>(this->shim().LoadFromStream(*reinterpret_cast<llm::OS::Storage::Streams::IRandomAccessStreamReference const*>(&modelStream), *reinterpret_cast<llm::OS::AI::MachineLearning::ILearningModelOperatorProvider const*>(&operatorProvider)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef LLM_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, llm::OS::AI::MachineLearning::IMapFeatureDescriptor> : produce_base<D, llm::OS::AI::MachineLearning::IMapFeatureDescriptor>
    {
        int32_t __stdcall get_KeyKind(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<llm::OS::AI::MachineLearning::TensorKind>(this->shim().KeyKind());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ValueDescriptor(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<llm::OS::AI::MachineLearning::ILearningModelFeatureDescriptor>(this->shim().ValueDescriptor());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef LLM_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, llm::OS::AI::MachineLearning::ISequenceFeatureDescriptor> : produce_base<D, llm::OS::AI::MachineLearning::ISequenceFeatureDescriptor>
    {
        int32_t __stdcall get_ElementDescriptor(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<llm::OS::AI::MachineLearning::ILearningModelFeatureDescriptor>(this->shim().ElementDescriptor());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
    template <typename D>
    struct produce<D, llm::OS::AI::MachineLearning::ITensor> : produce_base<D, llm::OS::AI::MachineLearning::ITensor>
    {
        int32_t __stdcall get_TensorKind(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<llm::OS::AI::MachineLearning::TensorKind>(this->shim().TensorKind());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Shape(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<llm::OS::Foundation::Collections::IVectorView<int64_t>>(this->shim().Shape());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#ifndef LLM_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, llm::OS::AI::MachineLearning::ITensorBoolean> : produce_base<D, llm::OS::AI::MachineLearning::ITensorBoolean>
    {
        int32_t __stdcall GetAsVectorView(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OS::Foundation::Collections::IVectorView<bool>>(this->shim().GetAsVectorView());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef LLM_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, llm::OS::AI::MachineLearning::ITensorBooleanStatics> : produce_base<D, llm::OS::AI::MachineLearning::ITensorBooleanStatics>
    {
        int32_t __stdcall Create(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OS::AI::MachineLearning::TensorBoolean>(this->shim().Create());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Create2(void* shape, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OS::AI::MachineLearning::TensorBoolean>(this->shim().Create(*reinterpret_cast<llm::OS::Foundation::Collections::IIterable<int64_t> const*>(&shape)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateFromArray(void* shape, uint32_t __dataSize, bool* data, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OS::AI::MachineLearning::TensorBoolean>(this->shim().CreateFromArray(*reinterpret_cast<llm::OS::Foundation::Collections::IIterable<int64_t> const*>(&shape), array_view<bool const>(reinterpret_cast<bool const *>(data), reinterpret_cast<bool const *>(data) + __dataSize)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateFromIterable(void* shape, void* data, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OS::AI::MachineLearning::TensorBoolean>(this->shim().CreateFromIterable(*reinterpret_cast<llm::OS::Foundation::Collections::IIterable<int64_t> const*>(&shape), *reinterpret_cast<llm::OS::Foundation::Collections::IIterable<bool> const*>(&data)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef LLM_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, llm::OS::AI::MachineLearning::ITensorBooleanStatics2> : produce_base<D, llm::OS::AI::MachineLearning::ITensorBooleanStatics2>
    {
        int32_t __stdcall CreateFromShapeArrayAndDataArray(uint32_t __shapeSize, int64_t* shape, uint32_t __dataSize, bool* data, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OS::AI::MachineLearning::TensorBoolean>(this->shim().CreateFromShapeArrayAndDataArray(array_view<int64_t const>(reinterpret_cast<int64_t const *>(shape), reinterpret_cast<int64_t const *>(shape) + __shapeSize), array_view<bool const>(reinterpret_cast<bool const *>(data), reinterpret_cast<bool const *>(data) + __dataSize)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateFromBuffer(uint32_t __shapeSize, int64_t* shape, void* buffer, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OS::AI::MachineLearning::TensorBoolean>(this->shim().CreateFromBuffer(array_view<int64_t const>(reinterpret_cast<int64_t const *>(shape), reinterpret_cast<int64_t const *>(shape) + __shapeSize), *reinterpret_cast<llm::OS::Storage::Streams::IBuffer const*>(&buffer)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef LLM_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, llm::OS::AI::MachineLearning::ITensorDouble> : produce_base<D, llm::OS::AI::MachineLearning::ITensorDouble>
    {
        int32_t __stdcall GetAsVectorView(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OS::Foundation::Collections::IVectorView<double>>(this->shim().GetAsVectorView());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef LLM_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, llm::OS::AI::MachineLearning::ITensorDoubleStatics> : produce_base<D, llm::OS::AI::MachineLearning::ITensorDoubleStatics>
    {
        int32_t __stdcall Create(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OS::AI::MachineLearning::TensorDouble>(this->shim().Create());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Create2(void* shape, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OS::AI::MachineLearning::TensorDouble>(this->shim().Create(*reinterpret_cast<llm::OS::Foundation::Collections::IIterable<int64_t> const*>(&shape)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateFromArray(void* shape, uint32_t __dataSize, double* data, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OS::AI::MachineLearning::TensorDouble>(this->shim().CreateFromArray(*reinterpret_cast<llm::OS::Foundation::Collections::IIterable<int64_t> const*>(&shape), array_view<double const>(reinterpret_cast<double const *>(data), reinterpret_cast<double const *>(data) + __dataSize)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateFromIterable(void* shape, void* data, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OS::AI::MachineLearning::TensorDouble>(this->shim().CreateFromIterable(*reinterpret_cast<llm::OS::Foundation::Collections::IIterable<int64_t> const*>(&shape), *reinterpret_cast<llm::OS::Foundation::Collections::IIterable<double> const*>(&data)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef LLM_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, llm::OS::AI::MachineLearning::ITensorDoubleStatics2> : produce_base<D, llm::OS::AI::MachineLearning::ITensorDoubleStatics2>
    {
        int32_t __stdcall CreateFromShapeArrayAndDataArray(uint32_t __shapeSize, int64_t* shape, uint32_t __dataSize, double* data, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OS::AI::MachineLearning::TensorDouble>(this->shim().CreateFromShapeArrayAndDataArray(array_view<int64_t const>(reinterpret_cast<int64_t const *>(shape), reinterpret_cast<int64_t const *>(shape) + __shapeSize), array_view<double const>(reinterpret_cast<double const *>(data), reinterpret_cast<double const *>(data) + __dataSize)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateFromBuffer(uint32_t __shapeSize, int64_t* shape, void* buffer, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OS::AI::MachineLearning::TensorDouble>(this->shim().CreateFromBuffer(array_view<int64_t const>(reinterpret_cast<int64_t const *>(shape), reinterpret_cast<int64_t const *>(shape) + __shapeSize), *reinterpret_cast<llm::OS::Storage::Streams::IBuffer const*>(&buffer)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef LLM_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, llm::OS::AI::MachineLearning::ITensorFeatureDescriptor> : produce_base<D, llm::OS::AI::MachineLearning::ITensorFeatureDescriptor>
    {
        int32_t __stdcall get_TensorKind(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<llm::OS::AI::MachineLearning::TensorKind>(this->shim().TensorKind());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Shape(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<llm::OS::Foundation::Collections::IVectorView<int64_t>>(this->shim().Shape());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef LLM_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, llm::OS::AI::MachineLearning::ITensorFloat> : produce_base<D, llm::OS::AI::MachineLearning::ITensorFloat>
    {
        int32_t __stdcall GetAsVectorView(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OS::Foundation::Collections::IVectorView<float>>(this->shim().GetAsVectorView());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef LLM_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, llm::OS::AI::MachineLearning::ITensorFloat16Bit> : produce_base<D, llm::OS::AI::MachineLearning::ITensorFloat16Bit>
    {
        int32_t __stdcall GetAsVectorView(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OS::Foundation::Collections::IVectorView<float>>(this->shim().GetAsVectorView());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef LLM_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, llm::OS::AI::MachineLearning::ITensorFloat16BitStatics> : produce_base<D, llm::OS::AI::MachineLearning::ITensorFloat16BitStatics>
    {
        int32_t __stdcall Create(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OS::AI::MachineLearning::TensorFloat16Bit>(this->shim().Create());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Create2(void* shape, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OS::AI::MachineLearning::TensorFloat16Bit>(this->shim().Create(*reinterpret_cast<llm::OS::Foundation::Collections::IIterable<int64_t> const*>(&shape)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateFromArray(void* shape, uint32_t __dataSize, float* data, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OS::AI::MachineLearning::TensorFloat16Bit>(this->shim().CreateFromArray(*reinterpret_cast<llm::OS::Foundation::Collections::IIterable<int64_t> const*>(&shape), array_view<float const>(reinterpret_cast<float const *>(data), reinterpret_cast<float const *>(data) + __dataSize)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateFromIterable(void* shape, void* data, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OS::AI::MachineLearning::TensorFloat16Bit>(this->shim().CreateFromIterable(*reinterpret_cast<llm::OS::Foundation::Collections::IIterable<int64_t> const*>(&shape), *reinterpret_cast<llm::OS::Foundation::Collections::IIterable<float> const*>(&data)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef LLM_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, llm::OS::AI::MachineLearning::ITensorFloat16BitStatics2> : produce_base<D, llm::OS::AI::MachineLearning::ITensorFloat16BitStatics2>
    {
        int32_t __stdcall CreateFromShapeArrayAndDataArray(uint32_t __shapeSize, int64_t* shape, uint32_t __dataSize, float* data, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OS::AI::MachineLearning::TensorFloat16Bit>(this->shim().CreateFromShapeArrayAndDataArray(array_view<int64_t const>(reinterpret_cast<int64_t const *>(shape), reinterpret_cast<int64_t const *>(shape) + __shapeSize), array_view<float const>(reinterpret_cast<float const *>(data), reinterpret_cast<float const *>(data) + __dataSize)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateFromBuffer(uint32_t __shapeSize, int64_t* shape, void* buffer, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OS::AI::MachineLearning::TensorFloat16Bit>(this->shim().CreateFromBuffer(array_view<int64_t const>(reinterpret_cast<int64_t const *>(shape), reinterpret_cast<int64_t const *>(shape) + __shapeSize), *reinterpret_cast<llm::OS::Storage::Streams::IBuffer const*>(&buffer)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef LLM_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, llm::OS::AI::MachineLearning::ITensorFloatStatics> : produce_base<D, llm::OS::AI::MachineLearning::ITensorFloatStatics>
    {
        int32_t __stdcall Create(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OS::AI::MachineLearning::TensorFloat>(this->shim().Create());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Create2(void* shape, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OS::AI::MachineLearning::TensorFloat>(this->shim().Create(*reinterpret_cast<llm::OS::Foundation::Collections::IIterable<int64_t> const*>(&shape)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateFromArray(void* shape, uint32_t __dataSize, float* data, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OS::AI::MachineLearning::TensorFloat>(this->shim().CreateFromArray(*reinterpret_cast<llm::OS::Foundation::Collections::IIterable<int64_t> const*>(&shape), array_view<float const>(reinterpret_cast<float const *>(data), reinterpret_cast<float const *>(data) + __dataSize)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateFromIterable(void* shape, void* data, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OS::AI::MachineLearning::TensorFloat>(this->shim().CreateFromIterable(*reinterpret_cast<llm::OS::Foundation::Collections::IIterable<int64_t> const*>(&shape), *reinterpret_cast<llm::OS::Foundation::Collections::IIterable<float> const*>(&data)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef LLM_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, llm::OS::AI::MachineLearning::ITensorFloatStatics2> : produce_base<D, llm::OS::AI::MachineLearning::ITensorFloatStatics2>
    {
        int32_t __stdcall CreateFromShapeArrayAndDataArray(uint32_t __shapeSize, int64_t* shape, uint32_t __dataSize, float* data, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OS::AI::MachineLearning::TensorFloat>(this->shim().CreateFromShapeArrayAndDataArray(array_view<int64_t const>(reinterpret_cast<int64_t const *>(shape), reinterpret_cast<int64_t const *>(shape) + __shapeSize), array_view<float const>(reinterpret_cast<float const *>(data), reinterpret_cast<float const *>(data) + __dataSize)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateFromBuffer(uint32_t __shapeSize, int64_t* shape, void* buffer, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OS::AI::MachineLearning::TensorFloat>(this->shim().CreateFromBuffer(array_view<int64_t const>(reinterpret_cast<int64_t const *>(shape), reinterpret_cast<int64_t const *>(shape) + __shapeSize), *reinterpret_cast<llm::OS::Storage::Streams::IBuffer const*>(&buffer)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef LLM_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, llm::OS::AI::MachineLearning::ITensorInt16Bit> : produce_base<D, llm::OS::AI::MachineLearning::ITensorInt16Bit>
    {
        int32_t __stdcall GetAsVectorView(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OS::Foundation::Collections::IVectorView<int16_t>>(this->shim().GetAsVectorView());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef LLM_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, llm::OS::AI::MachineLearning::ITensorInt16BitStatics> : produce_base<D, llm::OS::AI::MachineLearning::ITensorInt16BitStatics>
    {
        int32_t __stdcall Create(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OS::AI::MachineLearning::TensorInt16Bit>(this->shim().Create());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Create2(void* shape, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OS::AI::MachineLearning::TensorInt16Bit>(this->shim().Create(*reinterpret_cast<llm::OS::Foundation::Collections::IIterable<int64_t> const*>(&shape)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateFromArray(void* shape, uint32_t __dataSize, int16_t* data, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OS::AI::MachineLearning::TensorInt16Bit>(this->shim().CreateFromArray(*reinterpret_cast<llm::OS::Foundation::Collections::IIterable<int64_t> const*>(&shape), array_view<int16_t const>(reinterpret_cast<int16_t const *>(data), reinterpret_cast<int16_t const *>(data) + __dataSize)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateFromIterable(void* shape, void* data, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OS::AI::MachineLearning::TensorInt16Bit>(this->shim().CreateFromIterable(*reinterpret_cast<llm::OS::Foundation::Collections::IIterable<int64_t> const*>(&shape), *reinterpret_cast<llm::OS::Foundation::Collections::IIterable<int16_t> const*>(&data)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef LLM_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, llm::OS::AI::MachineLearning::ITensorInt16BitStatics2> : produce_base<D, llm::OS::AI::MachineLearning::ITensorInt16BitStatics2>
    {
        int32_t __stdcall CreateFromShapeArrayAndDataArray(uint32_t __shapeSize, int64_t* shape, uint32_t __dataSize, int16_t* data, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OS::AI::MachineLearning::TensorInt16Bit>(this->shim().CreateFromShapeArrayAndDataArray(array_view<int64_t const>(reinterpret_cast<int64_t const *>(shape), reinterpret_cast<int64_t const *>(shape) + __shapeSize), array_view<int16_t const>(reinterpret_cast<int16_t const *>(data), reinterpret_cast<int16_t const *>(data) + __dataSize)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateFromBuffer(uint32_t __shapeSize, int64_t* shape, void* buffer, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OS::AI::MachineLearning::TensorInt16Bit>(this->shim().CreateFromBuffer(array_view<int64_t const>(reinterpret_cast<int64_t const *>(shape), reinterpret_cast<int64_t const *>(shape) + __shapeSize), *reinterpret_cast<llm::OS::Storage::Streams::IBuffer const*>(&buffer)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef LLM_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, llm::OS::AI::MachineLearning::ITensorInt32Bit> : produce_base<D, llm::OS::AI::MachineLearning::ITensorInt32Bit>
    {
        int32_t __stdcall GetAsVectorView(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OS::Foundation::Collections::IVectorView<int32_t>>(this->shim().GetAsVectorView());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef LLM_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, llm::OS::AI::MachineLearning::ITensorInt32BitStatics> : produce_base<D, llm::OS::AI::MachineLearning::ITensorInt32BitStatics>
    {
        int32_t __stdcall Create(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OS::AI::MachineLearning::TensorInt32Bit>(this->shim().Create());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Create2(void* shape, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OS::AI::MachineLearning::TensorInt32Bit>(this->shim().Create(*reinterpret_cast<llm::OS::Foundation::Collections::IIterable<int64_t> const*>(&shape)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateFromArray(void* shape, uint32_t __dataSize, int32_t* data, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OS::AI::MachineLearning::TensorInt32Bit>(this->shim().CreateFromArray(*reinterpret_cast<llm::OS::Foundation::Collections::IIterable<int64_t> const*>(&shape), array_view<int32_t const>(reinterpret_cast<int32_t const *>(data), reinterpret_cast<int32_t const *>(data) + __dataSize)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateFromIterable(void* shape, void* data, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OS::AI::MachineLearning::TensorInt32Bit>(this->shim().CreateFromIterable(*reinterpret_cast<llm::OS::Foundation::Collections::IIterable<int64_t> const*>(&shape), *reinterpret_cast<llm::OS::Foundation::Collections::IIterable<int32_t> const*>(&data)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef LLM_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, llm::OS::AI::MachineLearning::ITensorInt32BitStatics2> : produce_base<D, llm::OS::AI::MachineLearning::ITensorInt32BitStatics2>
    {
        int32_t __stdcall CreateFromShapeArrayAndDataArray(uint32_t __shapeSize, int64_t* shape, uint32_t __dataSize, int32_t* data, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OS::AI::MachineLearning::TensorInt32Bit>(this->shim().CreateFromShapeArrayAndDataArray(array_view<int64_t const>(reinterpret_cast<int64_t const *>(shape), reinterpret_cast<int64_t const *>(shape) + __shapeSize), array_view<int32_t const>(reinterpret_cast<int32_t const *>(data), reinterpret_cast<int32_t const *>(data) + __dataSize)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateFromBuffer(uint32_t __shapeSize, int64_t* shape, void* buffer, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OS::AI::MachineLearning::TensorInt32Bit>(this->shim().CreateFromBuffer(array_view<int64_t const>(reinterpret_cast<int64_t const *>(shape), reinterpret_cast<int64_t const *>(shape) + __shapeSize), *reinterpret_cast<llm::OS::Storage::Streams::IBuffer const*>(&buffer)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef LLM_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, llm::OS::AI::MachineLearning::ITensorInt64Bit> : produce_base<D, llm::OS::AI::MachineLearning::ITensorInt64Bit>
    {
        int32_t __stdcall GetAsVectorView(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OS::Foundation::Collections::IVectorView<int64_t>>(this->shim().GetAsVectorView());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef LLM_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, llm::OS::AI::MachineLearning::ITensorInt64BitStatics> : produce_base<D, llm::OS::AI::MachineLearning::ITensorInt64BitStatics>
    {
        int32_t __stdcall Create(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OS::AI::MachineLearning::TensorInt64Bit>(this->shim().Create());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Create2(void* shape, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OSAI::MachineLearning::TensorInt64Bit>(this->shim().Create(*reinterpret_cast<llm::OSFoundation::Collections::IIterable<int64_t> const*>(&shape)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateFromArray(void* shape, uint32_t __dataSize, int64_t* data, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OSAI::MachineLearning::TensorInt64Bit>(this->shim().CreateFromArray(*reinterpret_cast<llm::OSFoundation::Collections::IIterable<int64_t> const*>(&shape), array_view<int64_t const>(reinterpret_cast<int64_t const *>(data), reinterpret_cast<int64_t const *>(data) + __dataSize)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateFromIterable(void* shape, void* data, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OSAI::MachineLearning::TensorInt64Bit>(this->shim().CreateFromIterable(*reinterpret_cast<llm::OSFoundation::Collections::IIterable<int64_t> const*>(&shape), *reinterpret_cast<llm::OSFoundation::Collections::IIterable<int64_t> const*>(&data)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef LLM_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, llm::OSAI::MachineLearning::ITensorInt64BitStatics2> : produce_base<D, llm::OSAI::MachineLearning::ITensorInt64BitStatics2>
    {
        int32_t __stdcall CreateFromShapeArrayAndDataArray(uint32_t __shapeSize, int64_t* shape, uint32_t __dataSize, int64_t* data, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OSAI::MachineLearning::TensorInt64Bit>(this->shim().CreateFromShapeArrayAndDataArray(array_view<int64_t const>(reinterpret_cast<int64_t const *>(shape), reinterpret_cast<int64_t const *>(shape) + __shapeSize), array_view<int64_t const>(reinterpret_cast<int64_t const *>(data), reinterpret_cast<int64_t const *>(data) + __dataSize)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateFromBuffer(uint32_t __shapeSize, int64_t* shape, void* buffer, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OSAI::MachineLearning::TensorInt64Bit>(this->shim().CreateFromBuffer(array_view<int64_t const>(reinterpret_cast<int64_t const *>(shape), reinterpret_cast<int64_t const *>(shape) + __shapeSize), *reinterpret_cast<llm::OSStorage::Streams::IBuffer const*>(&buffer)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef LLM_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, llm::OSAI::MachineLearning::ITensorInt8Bit> : produce_base<D, llm::OSAI::MachineLearning::ITensorInt8Bit>
    {
        int32_t __stdcall GetAsVectorView(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OSFoundation::Collections::IVectorView<uint8_t>>(this->shim().GetAsVectorView());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef LLM_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, llm::OSAI::MachineLearning::ITensorInt8BitStatics> : produce_base<D, llm::OSAI::MachineLearning::ITensorInt8BitStatics>
    {
        int32_t __stdcall Create(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OSAI::MachineLearning::TensorInt8Bit>(this->shim().Create());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Create2(void* shape, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OSAI::MachineLearning::TensorInt8Bit>(this->shim().Create(*reinterpret_cast<llm::OSFoundation::Collections::IIterable<int64_t> const*>(&shape)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateFromArray(void* shape, uint32_t __dataSize, uint8_t* data, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OSAI::MachineLearning::TensorInt8Bit>(this->shim().CreateFromArray(*reinterpret_cast<llm::OSFoundation::Collections::IIterable<int64_t> const*>(&shape), array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(data), reinterpret_cast<uint8_t const *>(data) + __dataSize)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateFromIterable(void* shape, void* data, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OSAI::MachineLearning::TensorInt8Bit>(this->shim().CreateFromIterable(*reinterpret_cast<llm::OSFoundation::Collections::IIterable<int64_t> const*>(&shape), *reinterpret_cast<llm::OSFoundation::Collections::IIterable<uint8_t> const*>(&data)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef LLM_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, llm::OSAI::MachineLearning::ITensorInt8BitStatics2> : produce_base<D, llm::OSAI::MachineLearning::ITensorInt8BitStatics2>
    {
        int32_t __stdcall CreateFromShapeArrayAndDataArray(uint32_t __shapeSize, int64_t* shape, uint32_t __dataSize, uint8_t* data, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OSAI::MachineLearning::TensorInt8Bit>(this->shim().CreateFromShapeArrayAndDataArray(array_view<int64_t const>(reinterpret_cast<int64_t const *>(shape), reinterpret_cast<int64_t const *>(shape) + __shapeSize), array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(data), reinterpret_cast<uint8_t const *>(data) + __dataSize)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateFromBuffer(uint32_t __shapeSize, int64_t* shape, void* buffer, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OSAI::MachineLearning::TensorInt8Bit>(this->shim().CreateFromBuffer(array_view<int64_t const>(reinterpret_cast<int64_t const *>(shape), reinterpret_cast<int64_t const *>(shape) + __shapeSize), *reinterpret_cast<llm::OSStorage::Streams::IBuffer const*>(&buffer)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef LLM_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, llm::OSAI::MachineLearning::ITensorString> : produce_base<D, llm::OSAI::MachineLearning::ITensorString>
    {
        int32_t __stdcall GetAsVectorView(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OSFoundation::Collections::IVectorView<hstring>>(this->shim().GetAsVectorView());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef LLM_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, llm::OSAI::MachineLearning::ITensorStringStatics> : produce_base<D, llm::OSAI::MachineLearning::ITensorStringStatics>
    {
        int32_t __stdcall Create(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OSAI::MachineLearning::TensorString>(this->shim().Create());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Create2(void* shape, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OSAI::MachineLearning::TensorString>(this->shim().Create(*reinterpret_cast<llm::OSFoundation::Collections::IIterable<int64_t> const*>(&shape)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateFromArray(void* shape, uint32_t __dataSize, void** data, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OSAI::MachineLearning::TensorString>(this->shim().CreateFromArray(*reinterpret_cast<llm::OSFoundation::Collections::IIterable<int64_t> const*>(&shape), array_view<hstring const>(reinterpret_cast<hstring const *>(data), reinterpret_cast<hstring const *>(data) + __dataSize)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateFromIterable(void* shape, void* data, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OSAI::MachineLearning::TensorString>(this->shim().CreateFromIterable(*reinterpret_cast<llm::OSFoundation::Collections::IIterable<int64_t> const*>(&shape), *reinterpret_cast<llm::OSFoundation::Collections::IIterable<hstring> const*>(&data)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef LLM_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, llm::OSAI::MachineLearning::ITensorStringStatics2> : produce_base<D, llm::OSAI::MachineLearning::ITensorStringStatics2>
    {
        int32_t __stdcall CreateFromShapeArrayAndDataArray(uint32_t __shapeSize, int64_t* shape, uint32_t __dataSize, void** data, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OSAI::MachineLearning::TensorString>(this->shim().CreateFromShapeArrayAndDataArray(array_view<int64_t const>(reinterpret_cast<int64_t const *>(shape), reinterpret_cast<int64_t const *>(shape) + __shapeSize), array_view<hstring const>(reinterpret_cast<hstring const *>(data), reinterpret_cast<hstring const *>(data) + __dataSize)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef LLM_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, llm::OSAI::MachineLearning::ITensorUInt16Bit> : produce_base<D, llm::OSAI::MachineLearning::ITensorUInt16Bit>
    {
        int32_t __stdcall GetAsVectorView(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OSFoundation::Collections::IVectorView<uint16_t>>(this->shim().GetAsVectorView());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef LLM_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, llm::OSAI::MachineLearning::ITensorUInt16BitStatics> : produce_base<D, llm::OSAI::MachineLearning::ITensorUInt16BitStatics>
    {
        int32_t __stdcall Create(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OSAI::MachineLearning::TensorUInt16Bit>(this->shim().Create());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Create2(void* shape, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OSAI::MachineLearning::TensorUInt16Bit>(this->shim().Create(*reinterpret_cast<llm::OSFoundation::Collections::IIterable<int64_t> const*>(&shape)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateFromArray(void* shape, uint32_t __dataSize, uint16_t* data, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OSAI::MachineLearning::TensorUInt16Bit>(this->shim().CreateFromArray(*reinterpret_cast<llm::OSFoundation::Collections::IIterable<int64_t> const*>(&shape), array_view<uint16_t const>(reinterpret_cast<uint16_t const *>(data), reinterpret_cast<uint16_t const *>(data) + __dataSize)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateFromIterable(void* shape, void* data, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OSAI::MachineLearning::TensorUInt16Bit>(this->shim().CreateFromIterable(*reinterpret_cast<llm::OSFoundation::Collections::IIterable<int64_t> const*>(&shape), *reinterpret_cast<llm::OSFoundation::Collections::IIterable<uint16_t> const*>(&data)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef LLM_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, llm::OSAI::MachineLearning::ITensorUInt16BitStatics2> : produce_base<D, llm::OSAI::MachineLearning::ITensorUInt16BitStatics2>
    {
        int32_t __stdcall CreateFromShapeArrayAndDataArray(uint32_t __shapeSize, int64_t* shape, uint32_t __dataSize, uint16_t* data, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OSAI::MachineLearning::TensorUInt16Bit>(this->shim().CreateFromShapeArrayAndDataArray(array_view<int64_t const>(reinterpret_cast<int64_t const *>(shape), reinterpret_cast<int64_t const *>(shape) + __shapeSize), array_view<uint16_t const>(reinterpret_cast<uint16_t const *>(data), reinterpret_cast<uint16_t const *>(data) + __dataSize)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateFromBuffer(uint32_t __shapeSize, int64_t* shape, void* buffer, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OSAI::MachineLearning::TensorUInt16Bit>(this->shim().CreateFromBuffer(array_view<int64_t const>(reinterpret_cast<int64_t const *>(shape), reinterpret_cast<int64_t const *>(shape) + __shapeSize), *reinterpret_cast<llm::OSStorage::Streams::IBuffer const*>(&buffer)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef LLM_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, llm::OSAI::MachineLearning::ITensorUInt32Bit> : produce_base<D, llm::OSAI::MachineLearning::ITensorUInt32Bit>
    {
        int32_t __stdcall GetAsVectorView(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OSFoundation::Collections::IVectorView<uint32_t>>(this->shim().GetAsVectorView());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef LLM_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, llm::OSAI::MachineLearning::ITensorUInt32BitStatics> : produce_base<D, llm::OSAI::MachineLearning::ITensorUInt32BitStatics>
    {
        int32_t __stdcall Create(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OSAI::MachineLearning::TensorUInt32Bit>(this->shim().Create());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Create2(void* shape, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OSAI::MachineLearning::TensorUInt32Bit>(this->shim().Create(*reinterpret_cast<llm::OSFoundation::Collections::IIterable<int64_t> const*>(&shape)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateFromArray(void* shape, uint32_t __dataSize, uint32_t* data, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OSAI::MachineLearning::TensorUInt32Bit>(this->shim().CreateFromArray(*reinterpret_cast<llm::OSFoundation::Collections::IIterable<int64_t> const*>(&shape), array_view<uint32_t const>(reinterpret_cast<uint32_t const *>(data), reinterpret_cast<uint32_t const *>(data) + __dataSize)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateFromIterable(void* shape, void* data, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OSAI::MachineLearning::TensorUInt32Bit>(this->shim().CreateFromIterable(*reinterpret_cast<llm::OSFoundation::Collections::IIterable<int64_t> const*>(&shape), *reinterpret_cast<llm::OSFoundation::Collections::IIterable<uint32_t> const*>(&data)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef LLM_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, llm::OSAI::MachineLearning::ITensorUInt32BitStatics2> : produce_base<D, llm::OSAI::MachineLearning::ITensorUInt32BitStatics2>
    {
        int32_t __stdcall CreateFromShapeArrayAndDataArray(uint32_t __shapeSize, int64_t* shape, uint32_t __dataSize, uint32_t* data, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OSAI::MachineLearning::TensorUInt32Bit>(this->shim().CreateFromShapeArrayAndDataArray(array_view<int64_t const>(reinterpret_cast<int64_t const *>(shape), reinterpret_cast<int64_t const *>(shape) + __shapeSize), array_view<uint32_t const>(reinterpret_cast<uint32_t const *>(data), reinterpret_cast<uint32_t const *>(data) + __dataSize)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateFromBuffer(uint32_t __shapeSize, int64_t* shape, void* buffer, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OSAI::MachineLearning::TensorUInt32Bit>(this->shim().CreateFromBuffer(array_view<int64_t const>(reinterpret_cast<int64_t const *>(shape), reinterpret_cast<int64_t const *>(shape) + __shapeSize), *reinterpret_cast<llm::OSStorage::Streams::IBuffer const*>(&buffer)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef LLM_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, llm::OSAI::MachineLearning::ITensorUInt64Bit> : produce_base<D, llm::OSAI::MachineLearning::ITensorUInt64Bit>
    {
        int32_t __stdcall GetAsVectorView(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OSFoundation::Collections::IVectorView<uint64_t>>(this->shim().GetAsVectorView());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef LLM_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, llm::OSAI::MachineLearning::ITensorUInt64BitStatics> : produce_base<D, llm::OSAI::MachineLearning::ITensorUInt64BitStatics>
    {
        int32_t __stdcall Create(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OSAI::MachineLearning::TensorUInt64Bit>(this->shim().Create());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Create2(void* shape, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OSAI::MachineLearning::TensorUInt64Bit>(this->shim().Create(*reinterpret_cast<llm::OSFoundation::Collections::IIterable<int64_t> const*>(&shape)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateFromArray(void* shape, uint32_t __dataSize, uint64_t* data, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OSAI::MachineLearning::TensorUInt64Bit>(this->shim().CreateFromArray(*reinterpret_cast<llm::OSFoundation::Collections::IIterable<int64_t> const*>(&shape), array_view<uint64_t const>(reinterpret_cast<uint64_t const *>(data), reinterpret_cast<uint64_t const *>(data) + __dataSize)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateFromIterable(void* shape, void* data, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OSAI::MachineLearning::TensorUInt64Bit>(this->shim().CreateFromIterable(*reinterpret_cast<llm::OSFoundation::Collections::IIterable<int64_t> const*>(&shape), *reinterpret_cast<llm::OSFoundation::Collections::IIterable<uint64_t> const*>(&data)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef LLM_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, llm::OSAI::MachineLearning::ITensorUInt64BitStatics2> : produce_base<D, llm::OSAI::MachineLearning::ITensorUInt64BitStatics2>
    {
        int32_t __stdcall CreateFromShapeArrayAndDataArray(uint32_t __shapeSize, int64_t* shape, uint32_t __dataSize, uint64_t* data, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OSAI::MachineLearning::TensorUInt64Bit>(this->shim().CreateFromShapeArrayAndDataArray(array_view<int64_t const>(reinterpret_cast<int64_t const *>(shape), reinterpret_cast<int64_t const *>(shape) + __shapeSize), array_view<uint64_t const>(reinterpret_cast<uint64_t const *>(data), reinterpret_cast<uint64_t const *>(data) + __dataSize)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateFromBuffer(uint32_t __shapeSize, int64_t* shape, void* buffer, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OSAI::MachineLearning::TensorUInt64Bit>(this->shim().CreateFromBuffer(array_view<int64_t const>(reinterpret_cast<int64_t const *>(shape), reinterpret_cast<int64_t const *>(shape) + __shapeSize), *reinterpret_cast<llm::OSStorage::Streams::IBuffer const*>(&buffer)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef LLM_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, llm::OSAI::MachineLearning::ITensorUInt8Bit> : produce_base<D, llm::OSAI::MachineLearning::ITensorUInt8Bit>
    {
        int32_t __stdcall GetAsVectorView(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OSFoundation::Collections::IVectorView<uint8_t>>(this->shim().GetAsVectorView());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef LLM_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, llm::OSAI::MachineLearning::ITensorUInt8BitStatics> : produce_base<D, llm::OSAI::MachineLearning::ITensorUInt8BitStatics>
    {
        int32_t __stdcall Create(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OSAI::MachineLearning::TensorUInt8Bit>(this->shim().Create());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Create2(void* shape, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OSAI::MachineLearning::TensorUInt8Bit>(this->shim().Create(*reinterpret_cast<llm::OSFoundation::Collections::IIterable<int64_t> const*>(&shape)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateFromArray(void* shape, uint32_t __dataSize, uint8_t* data, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OSAI::MachineLearning::TensorUInt8Bit>(this->shim().CreateFromArray(*reinterpret_cast<llm::OSFoundation::Collections::IIterable<int64_t> const*>(&shape), array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(data), reinterpret_cast<uint8_t const *>(data) + __dataSize)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateFromIterable(void* shape, void* data, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OSAI::MachineLearning::TensorUInt8Bit>(this->shim().CreateFromIterable(*reinterpret_cast<llm::OSFoundation::Collections::IIterable<int64_t> const*>(&shape), *reinterpret_cast<llm::OSFoundation::Collections::IIterable<uint8_t> const*>(&data)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef LLM_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, llm::OSAI::MachineLearning::ITensorUInt8BitStatics2> : produce_base<D, llm::OSAI::MachineLearning::ITensorUInt8BitStatics2>
    {
        int32_t __stdcall CreateFromShapeArrayAndDataArray(uint32_t __shapeSize, int64_t* shape, uint32_t __dataSize, uint8_t* data, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OSAI::MachineLearning::TensorUInt8Bit>(this->shim().CreateFromShapeArrayAndDataArray(array_view<int64_t const>(reinterpret_cast<int64_t const *>(shape), reinterpret_cast<int64_t const *>(shape) + __shapeSize), array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(data), reinterpret_cast<uint8_t const *>(data) + __dataSize)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateFromBuffer(uint32_t __shapeSize, int64_t* shape, void* buffer, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<llm::OSAI::MachineLearning::TensorUInt8Bit>(this->shim().CreateFromBuffer(array_view<int64_t const>(reinterpret_cast<int64_t const *>(shape), reinterpret_cast<int64_t const *>(shape) + __shapeSize), *reinterpret_cast<llm::OSStorage::Streams::IBuffer const*>(&buffer)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
}
LLM_EXPORT namespace llm::OSAI::MachineLearning
{
    inline auto ImageFeatureValue::CreateFromVideoFrame(llm::OSMedia::VideoFrame const& image)
    {
        return impl::call_factory<ImageFeatureValue, IImageFeatureValueStatics>([&](IImageFeatureValueStatics const& f) { return f.CreateFromVideoFrame(image); });
    }
    inline auto LearningModel::LoadFromStorageFileAsync(llm::OSStorage::IStorageFile const& modelFile)
    {
        return impl::call_factory<LearningModel, ILearningModelStatics>([&](ILearningModelStatics const& f) { return f.LoadFromStorageFileAsync(modelFile); });
    }
    inline auto LearningModel::LoadFromStreamAsync(llm::OSStorage::Streams::IRandomAccessStreamReference const& modelStream)
    {
        return impl::call_factory<LearningModel, ILearningModelStatics>([&](ILearningModelStatics const& f) { return f.LoadFromStreamAsync(modelStream); });
    }
    inline auto LearningModel::LoadFromFilePath(param::hstring const& filePath)
    {
        return impl::call_factory<LearningModel, ILearningModelStatics>([&](ILearningModelStatics const& f) { return f.LoadFromFilePath(filePath); });
    }
    inline auto LearningModel::LoadFromStream(llm::OSStorage::Streams::IRandomAccessStreamReference const& modelStream)
    {
        return impl::call_factory<LearningModel, ILearningModelStatics>([&](ILearningModelStatics const& f) { return f.LoadFromStream(modelStream); });
    }
    inline auto LearningModel::LoadFromStorageFileAsync(llm::OSStorage::IStorageFile const& modelFile, llm::OSAI::MachineLearning::ILearningModelOperatorProvider const& operatorProvider)
    {
        return impl::call_factory<LearningModel, ILearningModelStatics>([&](ILearningModelStatics const& f) { return f.LoadFromStorageFileAsync(modelFile, operatorProvider); });
    }
    inline auto LearningModel::LoadFromStreamAsync(llm::OSStorage::Streams::IRandomAccessStreamReference const& modelStream, llm::OSAI::MachineLearning::ILearningModelOperatorProvider const& operatorProvider)
    {
        return impl::call_factory<LearningModel, ILearningModelStatics>([&](ILearningModelStatics const& f) { return f.LoadFromStreamAsync(modelStream, operatorProvider); });
    }
    inline auto LearningModel::LoadFromFilePath(param::hstring const& filePath, llm::OSAI::MachineLearning::ILearningModelOperatorProvider const& operatorProvider)
    {
        return impl::call_factory<LearningModel, ILearningModelStatics>([&](ILearningModelStatics const& f) { return f.LoadFromFilePath(filePath, operatorProvider); });
    }
    inline auto LearningModel::LoadFromStream(llm::OSStorage::Streams::IRandomAccessStreamReference const& modelStream, llm::OSAI::MachineLearning::ILearningModelOperatorProvider const& operatorProvider)
    {
        return impl::call_factory<LearningModel, ILearningModelStatics>([&](ILearningModelStatics const& f) { return f.LoadFromStream(modelStream, operatorProvider); });
    }
    inline LearningModelBinding::LearningModelBinding(llm::OSAI::MachineLearning::LearningModelSession const& session) :
        LearningModelBinding(impl::call_factory<LearningModelBinding, ILearningModelBindingFactory>([&](ILearningModelBindingFactory const& f) { return f.CreateFromSession(session); }))
    {
    }
    inline LearningModelDevice::LearningModelDevice(llm::OSAI::MachineLearning::LearningModelDeviceKind const& deviceKind) :
        LearningModelDevice(impl::call_factory<LearningModelDevice, ILearningModelDeviceFactory>([&](ILearningModelDeviceFactory const& f) { return f.Create(deviceKind); }))
    {
    }
    inline auto LearningModelDevice::CreateFromDirect3D11Device(llm::OSGraphics::DirectX::Direct3D11::IDirect3DDevice const& device)
    {
        return impl::call_factory<LearningModelDevice, ILearningModelDeviceStatics>([&](ILearningModelDeviceStatics const& f) { return f.CreateFromDirect3D11Device(device); });
    }
    inline LearningModelSession::LearningModelSession(llm::OSAI::MachineLearning::LearningModel const& model) :
        LearningModelSession(impl::call_factory<LearningModelSession, ILearningModelSessionFactory>([&](ILearningModelSessionFactory const& f) { return f.CreateFromModel(model); }))
    {
    }
    inline LearningModelSession::LearningModelSession(llm::OSAI::MachineLearning::LearningModel const& model, llm::OSAI::MachineLearning::LearningModelDevice const& deviceToRunOn) :
        LearningModelSession(impl::call_factory<LearningModelSession, ILearningModelSessionFactory>([&](ILearningModelSessionFactory const& f) { return f.CreateFromModelOnDevice(model, deviceToRunOn); }))
    {
    }
    inline LearningModelSession::LearningModelSession(llm::OSAI::MachineLearning::LearningModel const& model, llm::OSAI::MachineLearning::LearningModelDevice const& deviceToRunOn, llm::OSAI::MachineLearning::LearningModelSessionOptions const& learningModelSessionOptions) :
        LearningModelSession(impl::call_factory<LearningModelSession, ILearningModelSessionFactory2>([&](ILearningModelSessionFactory2 const& f) { return f.CreateFromModelOnDeviceWithSessionOptions(model, deviceToRunOn, learningModelSessionOptions); }))
    {
    }
    inline LearningModelSessionOptions::LearningModelSessionOptions() :
        LearningModelSessionOptions(impl::call_factory_cast<LearningModelSessionOptions(*)(llm::OSFoundation::IActivationFactory const&), LearningModelSessionOptions>([](llm::OSFoundation::IActivationFactory const& f) { return f.template ActivateInstance<LearningModelSessionOptions>(); }))
    {
    }
    inline auto TensorBoolean::Create()
    {
        return impl::call_factory_cast<llm::OSAI::MachineLearning::TensorBoolean(*)(ITensorBooleanStatics const&), TensorBoolean, ITensorBooleanStatics>([](ITensorBooleanStatics const& f) { return f.Create(); });
    }
    inline auto TensorBoolean::Create(param::iterable<int64_t> const& shape)
    {
        return impl::call_factory<TensorBoolean, ITensorBooleanStatics>([&](ITensorBooleanStatics const& f) { return f.Create(shape); });
    }
    inline auto TensorBoolean::CreateFromArray(param::iterable<int64_t> const& shape, array_view<bool const> data)
    {
        return impl::call_factory<TensorBoolean, ITensorBooleanStatics>([&](ITensorBooleanStatics const& f) { return f.CreateFromArray(shape, data); });
    }
    inline auto TensorBoolean::CreateFromIterable(param::iterable<int64_t> const& shape, param::iterable<bool> const& data)
    {
        return impl::call_factory<TensorBoolean, ITensorBooleanStatics>([&](ITensorBooleanStatics const& f) { return f.CreateFromIterable(shape, data); });
    }
    inline auto TensorBoolean::CreateFromShapeArrayAndDataArray(array_view<int64_t const> shape, array_view<bool const> data)
    {
        return impl::call_factory<TensorBoolean, ITensorBooleanStatics2>([&](ITensorBooleanStatics2 const& f) { return f.CreateFromShapeArrayAndDataArray(shape, data); });
    }
    inline auto TensorBoolean::CreateFromBuffer(array_view<int64_t const> shape, llm::OSStorage::Streams::IBuffer const& buffer)
    {
        return impl::call_factory<TensorBoolean, ITensorBooleanStatics2>([&](ITensorBooleanStatics2 const& f) { return f.CreateFromBuffer(shape, buffer); });
    }
    inline auto TensorDouble::Create()
    {
        return impl::call_factory_cast<llm::OSAI::MachineLearning::TensorDouble(*)(ITensorDoubleStatics const&), TensorDouble, ITensorDoubleStatics>([](ITensorDoubleStatics const& f) { return f.Create(); });
    }
    inline auto TensorDouble::Create(param::iterable<int64_t> const& shape)
    {
        return impl::call_factory<TensorDouble, ITensorDoubleStatics>([&](ITensorDoubleStatics const& f) { return f.Create(shape); });
    }
    inline auto TensorDouble::CreateFromArray(param::iterable<int64_t> const& shape, array_view<double const> data)
    {
        return impl::call_factory<TensorDouble, ITensorDoubleStatics>([&](ITensorDoubleStatics const& f) { return f.CreateFromArray(shape, data); });
    }
    inline auto TensorDouble::CreateFromIterable(param::iterable<int64_t> const& shape, param::iterable<double> const& data)
    {
        return impl::call_factory<TensorDouble, ITensorDoubleStatics>([&](ITensorDoubleStatics const& f) { return f.CreateFromIterable(shape, data); });
    }
    inline auto TensorDouble::CreateFromShapeArrayAndDataArray(array_view<int64_t const> shape, array_view<double const> data)
    {
        return impl::call_factory<TensorDouble, ITensorDoubleStatics2>([&](ITensorDoubleStatics2 const& f) { return f.CreateFromShapeArrayAndDataArray(shape, data); });
    }
    inline auto TensorDouble::CreateFromBuffer(array_view<int64_t const> shape, llm::OSStorage::Streams::IBuffer const& buffer)
    {
        return impl::call_factory<TensorDouble, ITensorDoubleStatics2>([&](ITensorDoubleStatics2 const& f) { return f.CreateFromBuffer(shape, buffer); });
    }
    inline auto TensorFloat::Create()
    {
        return impl::call_factory_cast<llm::OSAI::MachineLearning::TensorFloat(*)(ITensorFloatStatics const&), TensorFloat, ITensorFloatStatics>([](ITensorFloatStatics const& f) { return f.Create(); });
    }
    inline auto TensorFloat::Create(param::iterable<int64_t> const& shape)
    {
        return impl::call_factory<TensorFloat, ITensorFloatStatics>([&](ITensorFloatStatics const& f) { return f.Create(shape); });
    }
    inline auto TensorFloat::CreateFromArray(param::iterable<int64_t> const& shape, array_view<float const> data)
    {
        return impl::call_factory<TensorFloat, ITensorFloatStatics>([&](ITensorFloatStatics const& f) { return f.CreateFromArray(shape, data); });
    }
    inline auto TensorFloat::CreateFromIterable(param::iterable<int64_t> const& shape, param::iterable<float> const& data)
    {
        return impl::call_factory<TensorFloat, ITensorFloatStatics>([&](ITensorFloatStatics const& f) { return f.CreateFromIterable(shape, data); });
    }
    inline auto TensorFloat::CreateFromShapeArrayAndDataArray(array_view<int64_t const> shape, array_view<float const> data)
    {
        return impl::call_factory<TensorFloat, ITensorFloatStatics2>([&](ITensorFloatStatics2 const& f) { return f.CreateFromShapeArrayAndDataArray(shape, data); });
    }
    inline auto TensorFloat::CreateFromBuffer(array_view<int64_t const> shape, llm::OSStorage::Streams::IBuffer const& buffer)
    {
        return impl::call_factory<TensorFloat, ITensorFloatStatics2>([&](ITensorFloatStatics2 const& f) { return f.CreateFromBuffer(shape, buffer); });
    }
    inline auto TensorFloat16Bit::Create()
    {
        return impl::call_factory_cast<llm::OSAI::MachineLearning::TensorFloat16Bit(*)(ITensorFloat16BitStatics const&), TensorFloat16Bit, ITensorFloat16BitStatics>([](ITensorFloat16BitStatics const& f) { return f.Create(); });
    }
    inline auto TensorFloat16Bit::Create(param::iterable<int64_t> const& shape)
    {
        return impl::call_factory<TensorFloat16Bit, ITensorFloat16BitStatics>([&](ITensorFloat16BitStatics const& f) { return f.Create(shape); });
    }
    inline auto TensorFloat16Bit::CreateFromArray(param::iterable<int64_t> const& shape, array_view<float const> data)
    {
        return impl::call_factory<TensorFloat16Bit, ITensorFloat16BitStatics>([&](ITensorFloat16BitStatics const& f) { return f.CreateFromArray(shape, data); });
    }
    inline auto TensorFloat16Bit::CreateFromIterable(param::iterable<int64_t> const& shape, param::iterable<float> const& data)
    {
        return impl::call_factory<TensorFloat16Bit, ITensorFloat16BitStatics>([&](ITensorFloat16BitStatics const& f) { return f.CreateFromIterable(shape, data); });
    }
    inline auto TensorFloat16Bit::CreateFromShapeArrayAndDataArray(array_view<int64_t const> shape, array_view<float const> data)
    {
        return impl::call_factory<TensorFloat16Bit, ITensorFloat16BitStatics2>([&](ITensorFloat16BitStatics2 const& f) { return f.CreateFromShapeArrayAndDataArray(shape, data); });
    }
    inline auto TensorFloat16Bit::CreateFromBuffer(array_view<int64_t const> shape, llm::OSStorage::Streams::IBuffer const& buffer)
    {
        return impl::call_factory<TensorFloat16Bit, ITensorFloat16BitStatics2>([&](ITensorFloat16BitStatics2 const& f) { return f.CreateFromBuffer(shape, buffer); });
    }
    inline auto TensorInt16Bit::Create()
    {
        return impl::call_factory_cast<llm::OSAI::MachineLearning::TensorInt16Bit(*)(ITensorInt16BitStatics const&), TensorInt16Bit, ITensorInt16BitStatics>([](ITensorInt16BitStatics const& f) { return f.Create(); });
    }
    inline auto TensorInt16Bit::Create(param::iterable<int64_t> const& shape)
    {
        return impl::call_factory<TensorInt16Bit, ITensorInt16BitStatics>([&](ITensorInt16BitStatics const& f) { return f.Create(shape); });
    }
    inline auto TensorInt16Bit::CreateFromArray(param::iterable<int64_t> const& shape, array_view<int16_t const> data)
    {
        return impl::call_factory<TensorInt16Bit, ITensorInt16BitStatics>([&](ITensorInt16BitStatics const& f) { return f.CreateFromArray(shape, data); });
    }
    inline auto TensorInt16Bit::CreateFromIterable(param::iterable<int64_t> const& shape, param::iterable<int16_t> const& data)
    {
        return impl::call_factory<TensorInt16Bit, ITensorInt16BitStatics>([&](ITensorInt16BitStatics const& f) { return f.CreateFromIterable(shape, data); });
    }
    inline auto TensorInt16Bit::CreateFromShapeArrayAndDataArray(array_view<int64_t const> shape, array_view<int16_t const> data)
    {
        return impl::call_factory<TensorInt16Bit, ITensorInt16BitStatics2>([&](ITensorInt16BitStatics2 const& f) { return f.CreateFromShapeArrayAndDataArray(shape, data); });
    }
    inline auto TensorInt16Bit::CreateFromBuffer(array_view<int64_t const> shape, llm::OSStorage::Streams::IBuffer const& buffer)
    {
        return impl::call_factory<TensorInt16Bit, ITensorInt16BitStatics2>([&](ITensorInt16BitStatics2 const& f) { return f.CreateFromBuffer(shape, buffer); });
    }
    inline auto TensorInt32Bit::Create()
    {
        return impl::call_factory_cast<llm::OSAI::MachineLearning::TensorInt32Bit(*)(ITensorInt32BitStatics const&), TensorInt32Bit, ITensorInt32BitStatics>([](ITensorInt32BitStatics const& f) { return f.Create(); });
    }
    inline auto TensorInt32Bit::Create(param::iterable<int64_t> const& shape)
    {
        return impl::call_factory<TensorInt32Bit, ITensorInt32BitStatics>([&](ITensorInt32BitStatics const& f) { return f.Create(shape); });
    }
    inline auto TensorInt32Bit::CreateFromArray(param::iterable<int64_t> const& shape, array_view<int32_t const> data)
    {
        return impl::call_factory<TensorInt32Bit, ITensorInt32BitStatics>([&](ITensorInt32BitStatics const& f) { return f.CreateFromArray(shape, data); });
    }
    inline auto TensorInt32Bit::CreateFromIterable(param::iterable<int64_t> const& shape, param::iterable<int32_t> const& data)
    {
        return impl::call_factory<TensorInt32Bit, ITensorInt32BitStatics>([&](ITensorInt32BitStatics const& f) { return f.CreateFromIterable(shape, data); });
    }
    inline auto TensorInt32Bit::CreateFromShapeArrayAndDataArray(array_view<int64_t const> shape, array_view<int32_t const> data)
    {
        return impl::call_factory<TensorInt32Bit, ITensorInt32BitStatics2>([&](ITensorInt32BitStatics2 const& f) { return f.CreateFromShapeArrayAndDataArray(shape, data); });
    }
    inline auto TensorInt32Bit::CreateFromBuffer(array_view<int64_t const> shape, llm::OSStorage::Streams::IBuffer const& buffer)
    {
        return impl::call_factory<TensorInt32Bit, ITensorInt32BitStatics2>([&](ITensorInt32BitStatics2 const& f) { return f.CreateFromBuffer(shape, buffer); });
    }
    inline auto TensorInt64Bit::Create()
    {
        return impl::call_factory_cast<llm::OSAI::MachineLearning::TensorInt64Bit(*)(ITensorInt64BitStatics const&), TensorInt64Bit, ITensorInt64BitStatics>([](ITensorInt64BitStatics const& f) { return f.Create(); });
    }
    inline auto TensorInt64Bit::Create(param::iterable<int64_t> const& shape)
    {
        return impl::call_factory<TensorInt64Bit, ITensorInt64BitStatics>([&](ITensorInt64BitStatics const& f) { return f.Create(shape); });
    }
    inline auto TensorInt64Bit::CreateFromArray(param::iterable<int64_t> const& shape, array_view<int64_t const> data)
    {
        return impl::call_factory<TensorInt64Bit, ITensorInt64BitStatics>([&](ITensorInt64BitStatics const& f) { return f.CreateFromArray(shape, data); });
    }
    inline auto TensorInt64Bit::CreateFromIterable(param::iterable<int64_t> const& shape, param::iterable<int64_t> const& data)
    {
        return impl::call_factory<TensorInt64Bit, ITensorInt64BitStatics>([&](ITensorInt64BitStatics const& f) { return f.CreateFromIterable(shape, data); });
    }
    inline auto TensorInt64Bit::CreateFromShapeArrayAndDataArray(array_view<int64_t const> shape, array_view<int64_t const> data)
    {
        return impl::call_factory<TensorInt64Bit, ITensorInt64BitStatics2>([&](ITensorInt64BitStatics2 const& f) { return f.CreateFromShapeArrayAndDataArray(shape, data); });
    }
    inline auto TensorInt64Bit::CreateFromBuffer(array_view<int64_t const> shape, llm::OSStorage::Streams::IBuffer const& buffer)
    {
        return impl::call_factory<TensorInt64Bit, ITensorInt64BitStatics2>([&](ITensorInt64BitStatics2 const& f) { return f.CreateFromBuffer(shape, buffer); });
    }
    inline auto TensorInt8Bit::Create()
    {
        return impl::call_factory_cast<llm::OSAI::MachineLearning::TensorInt8Bit(*)(ITensorInt8BitStatics const&), TensorInt8Bit, ITensorInt8BitStatics>([](ITensorInt8BitStatics const& f) { return f.Create(); });
    }
    inline auto TensorInt8Bit::Create(param::iterable<int64_t> const& shape)
    {
        return impl::call_factory<TensorInt8Bit, ITensorInt8BitStatics>([&](ITensorInt8BitStatics const& f) { return f.Create(shape); });
    }
    inline auto TensorInt8Bit::CreateFromArray(param::iterable<int64_t> const& shape, array_view<uint8_t const> data)
    {
        return impl::call_factory<TensorInt8Bit, ITensorInt8BitStatics>([&](ITensorInt8BitStatics const& f) { return f.CreateFromArray(shape, data); });
    }
    inline auto TensorInt8Bit::CreateFromIterable(param::iterable<int64_t> const& shape, param::iterable<uint8_t> const& data)
    {
        return impl::call_factory<TensorInt8Bit, ITensorInt8BitStatics>([&](ITensorInt8BitStatics const& f) { return f.CreateFromIterable(shape, data); });
    }
    inline auto TensorInt8Bit::CreateFromShapeArrayAndDataArray(array_view<int64_t const> shape, array_view<uint8_t const> data)
    {
        return impl::call_factory<TensorInt8Bit, ITensorInt8BitStatics2>([&](ITensorInt8BitStatics2 const& f) { return f.CreateFromShapeArrayAndDataArray(shape, data); });
    }
    inline auto TensorInt8Bit::CreateFromBuffer(array_view<int64_t const> shape, llm::OSStorage::Streams::IBuffer const& buffer)
    {
        return impl::call_factory<TensorInt8Bit, ITensorInt8BitStatics2>([&](ITensorInt8BitStatics2 const& f) { return f.CreateFromBuffer(shape, buffer); });
    }
    inline auto TensorString::Create()
    {
        return impl::call_factory_cast<llm::OSAI::MachineLearning::TensorString(*)(ITensorStringStatics const&), TensorString, ITensorStringStatics>([](ITensorStringStatics const& f) { return f.Create(); });
    }
    inline auto TensorString::Create(param::iterable<int64_t> const& shape)
    {
        return impl::call_factory<TensorString, ITensorStringStatics>([&](ITensorStringStatics const& f) { return f.Create(shape); });
    }
    inline auto TensorString::CreateFromArray(param::iterable<int64_t> const& shape, array_view<hstring const> data)
    {
        return impl::call_factory<TensorString, ITensorStringStatics>([&](ITensorStringStatics const& f) { return f.CreateFromArray(shape, data); });
    }
    inline auto TensorString::CreateFromIterable(param::iterable<int64_t> const& shape, param::iterable<hstring> const& data)
    {
        return impl::call_factory<TensorString, ITensorStringStatics>([&](ITensorStringStatics const& f) { return f.CreateFromIterable(shape, data); });
    }
    inline auto TensorString::CreateFromShapeArrayAndDataArray(array_view<int64_t const> shape, array_view<hstring const> data)
    {
        return impl::call_factory<TensorString, ITensorStringStatics2>([&](ITensorStringStatics2 const& f) { return f.CreateFromShapeArrayAndDataArray(shape, data); });
    }
    inline auto TensorUInt16Bit::Create()
    {
        return impl::call_factory_cast<llm::OSAI::MachineLearning::TensorUInt16Bit(*)(ITensorUInt16BitStatics const&), TensorUInt16Bit, ITensorUInt16BitStatics>([](ITensorUInt16BitStatics const& f) { return f.Create(); });
    }
    inline auto TensorUInt16Bit::Create(param::iterable<int64_t> const& shape)
    {
        return impl::call_factory<TensorUInt16Bit, ITensorUInt16BitStatics>([&](ITensorUInt16BitStatics const& f) { return f.Create(shape); });
    }
    inline auto TensorUInt16Bit::CreateFromArray(param::iterable<int64_t> const& shape, array_view<uint16_t const> data)
    {
        return impl::call_factory<TensorUInt16Bit, ITensorUInt16BitStatics>([&](ITensorUInt16BitStatics const& f) { return f.CreateFromArray(shape, data); });
    }
    inline auto TensorUInt16Bit::CreateFromIterable(param::iterable<int64_t> const& shape, param::iterable<uint16_t> const& data)
    {
        return impl::call_factory<TensorUInt16Bit, ITensorUInt16BitStatics>([&](ITensorUInt16BitStatics const& f) { return f.CreateFromIterable(shape, data); });
    }
    inline auto TensorUInt16Bit::CreateFromShapeArrayAndDataArray(array_view<int64_t const> shape, array_view<uint16_t const> data)
    {
        return impl::call_factory<TensorUInt16Bit, ITensorUInt16BitStatics2>([&](ITensorUInt16BitStatics2 const& f) { return f.CreateFromShapeArrayAndDataArray(shape, data); });
    }
    inline auto TensorUInt16Bit::CreateFromBuffer(array_view<int64_t const> shape, llm::OSStorage::Streams::IBuffer const& buffer)
    {
        return impl::call_factory<TensorUInt16Bit, ITensorUInt16BitStatics2>([&](ITensorUInt16BitStatics2 const& f) { return f.CreateFromBuffer(shape, buffer); });
    }
    inline auto TensorUInt32Bit::Create()
    {
        return impl::call_factory_cast<llm::OSAI::MachineLearning::TensorUInt32Bit(*)(ITensorUInt32BitStatics const&), TensorUInt32Bit, ITensorUInt32BitStatics>([](ITensorUInt32BitStatics const& f) { return f.Create(); });
    }
    inline auto TensorUInt32Bit::Create(param::iterable<int64_t> const& shape)
    {
        return impl::call_factory<TensorUInt32Bit, ITensorUInt32BitStatics>([&](ITensorUInt32BitStatics const& f) { return f.Create(shape); });
    }
    inline auto TensorUInt32Bit::CreateFromArray(param::iterable<int64_t> const& shape, array_view<uint32_t const> data)
    {
        return impl::call_factory<TensorUInt32Bit, ITensorUInt32BitStatics>([&](ITensorUInt32BitStatics const& f) { return f.CreateFromArray(shape, data); });
    }
    inline auto TensorUInt32Bit::CreateFromIterable(param::iterable<int64_t> const& shape, param::iterable<uint32_t> const& data)
    {
        return impl::call_factory<TensorUInt32Bit, ITensorUInt32BitStatics>([&](ITensorUInt32BitStatics const& f) { return f.CreateFromIterable(shape, data); });
    }
    inline auto TensorUInt32Bit::CreateFromShapeArrayAndDataArray(array_view<int64_t const> shape, array_view<uint32_t const> data)
    {
        return impl::call_factory<TensorUInt32Bit, ITensorUInt32BitStatics2>([&](ITensorUInt32BitStatics2 const& f) { return f.CreateFromShapeArrayAndDataArray(shape, data); });
    }
    inline auto TensorUInt32Bit::CreateFromBuffer(array_view<int64_t const> shape, llm::OSStorage::Streams::IBuffer const& buffer)
    {
        return impl::call_factory<TensorUInt32Bit, ITensorUInt32BitStatics2>([&](ITensorUInt32BitStatics2 const& f) { return f.CreateFromBuffer(shape, buffer); });
    }
    inline auto TensorUInt64Bit::Create()
    {
        return impl::call_factory_cast<llm::OSAI::MachineLearning::TensorUInt64Bit(*)(ITensorUInt64BitStatics const&), TensorUInt64Bit, ITensorUInt64BitStatics>([](ITensorUInt64BitStatics const& f) { return f.Create(); });
    }
    inline auto TensorUInt64Bit::Create(param::iterable<int64_t> const& shape)
    {
        return impl::call_factory<TensorUInt64Bit, ITensorUInt64BitStatics>([&](ITensorUInt64BitStatics const& f) { return f.Create(shape); });
    }
    inline auto TensorUInt64Bit::CreateFromArray(param::iterable<int64_t> const& shape, array_view<uint64_t const> data)
    {
        return impl::call_factory<TensorUInt64Bit, ITensorUInt64BitStatics>([&](ITensorUInt64BitStatics const& f) { return f.CreateFromArray(shape, data); });
    }
    inline auto TensorUInt64Bit::CreateFromIterable(param::iterable<int64_t> const& shape, param::iterable<uint64_t> const& data)
    {
        return impl::call_factory<TensorUInt64Bit, ITensorUInt64BitStatics>([&](ITensorUInt64BitStatics const& f) { return f.CreateFromIterable(shape, data); });
    }
    inline auto TensorUInt64Bit::CreateFromShapeArrayAndDataArray(array_view<int64_t const> shape, array_view<uint64_t const> data)
    {
        return impl::call_factory<TensorUInt64Bit, ITensorUInt64BitStatics2>([&](ITensorUInt64BitStatics2 const& f) { return f.CreateFromShapeArrayAndDataArray(shape, data); });
    }
    inline auto TensorUInt64Bit::CreateFromBuffer(array_view<int64_t const> shape, llm::OSStorage::Streams::IBuffer const& buffer)
    {
        return impl::call_factory<TensorUInt64Bit, ITensorUInt64BitStatics2>([&](ITensorUInt64BitStatics2 const& f) { return f.CreateFromBuffer(shape, buffer); });
    }
    inline auto TensorUInt8Bit::Create()
    {
        return impl::call_factory_cast<llm::OSAI::MachineLearning::TensorUInt8Bit(*)(ITensorUInt8BitStatics const&), TensorUInt8Bit, ITensorUInt8BitStatics>([](ITensorUInt8BitStatics const& f) { return f.Create(); });
    }
    inline auto TensorUInt8Bit::Create(param::iterable<int64_t> const& shape)
    {
        return impl::call_factory<TensorUInt8Bit, ITensorUInt8BitStatics>([&](ITensorUInt8BitStatics const& f) { return f.Create(shape); });
    }
    inline auto TensorUInt8Bit::CreateFromArray(param::iterable<int64_t> const& shape, array_view<uint8_t const> data)
    {
        return impl::call_factory<TensorUInt8Bit, ITensorUInt8BitStatics>([&](ITensorUInt8BitStatics const& f) { return f.CreateFromArray(shape, data); });
    }
    inline auto TensorUInt8Bit::CreateFromIterable(param::iterable<int64_t> const& shape, param::iterable<uint8_t> const& data)
    {
        return impl::call_factory<TensorUInt8Bit, ITensorUInt8BitStatics>([&](ITensorUInt8BitStatics const& f) { return f.CreateFromIterable(shape, data); });
    }
    inline auto TensorUInt8Bit::CreateFromShapeArrayAndDataArray(array_view<int64_t const> shape, array_view<uint8_t const> data)
    {
        return impl::call_factory<TensorUInt8Bit, ITensorUInt8BitStatics2>([&](ITensorUInt8BitStatics2 const& f) { return f.CreateFromShapeArrayAndDataArray(shape, data); });
    }
    inline auto TensorUInt8Bit::CreateFromBuffer(array_view<int64_t const> shape, llm::OSStorage::Streams::IBuffer const& buffer)
    {
        return impl::call_factory<TensorUInt8Bit, ITensorUInt8BitStatics2>([&](ITensorUInt8BitStatics2 const& f) { return f.CreateFromBuffer(shape, buffer); });
    }
}
namespace std
{
#ifndef LLM_LEAN_AND_MEAN
    template<> struct hash<llm::OSAI::MachineLearning::IImageFeatureDescriptor> : llm::impl::hash_base {};
    template<> struct hash<llm::OSAI::MachineLearning::IImageFeatureDescriptor2> : llm::impl::hash_base {};
    template<> struct hash<llm::OSAI::MachineLearning::IImageFeatureValue> : llm::impl::hash_base {};
    template<> struct hash<llm::OSAI::MachineLearning::IImageFeatureValueStatics> : llm::impl::hash_base {};
    template<> struct hash<llm::OSAI::MachineLearning::ILearningModel> : llm::impl::hash_base {};
    template<> struct hash<llm::OSAI::MachineLearning::ILearningModelBinding> : llm::impl::hash_base {};
    template<> struct hash<llm::OSAI::MachineLearning::ILearningModelBindingFactory> : llm::impl::hash_base {};
    template<> struct hash<llm::OSAI::MachineLearning::ILearningModelDevice> : llm::impl::hash_base {};
    template<> struct hash<llm::OSAI::MachineLearning::ILearningModelDeviceFactory> : llm::impl::hash_base {};
    template<> struct hash<llm::OSAI::MachineLearning::ILearningModelDeviceStatics> : llm::impl::hash_base {};
    template<> struct hash<llm::OSAI::MachineLearning::ILearningModelEvaluationResult> : llm::impl::hash_base {};
    template<> struct hash<llm::OSAI::MachineLearning::ILearningModelFeatureDescriptor> : llm::impl::hash_base {};
    template<> struct hash<llm::OSAI::MachineLearning::ILearningModelFeatureValue> : llm::impl::hash_base {};
    template<> struct hash<llm::OSAI::MachineLearning::ILearningModelOperatorProvider> : llm::impl::hash_base {};
    template<> struct hash<llm::OSAI::MachineLearning::ILearningModelSession> : llm::impl::hash_base {};
    template<> struct hash<llm::OSAI::MachineLearning::ILearningModelSessionFactory> : llm::impl::hash_base {};
    template<> struct hash<llm::OSAI::MachineLearning::ILearningModelSessionFactory2> : llm::impl::hash_base {};
    template<> struct hash<llm::OSAI::MachineLearning::ILearningModelSessionOptions> : llm::impl::hash_base {};
    template<> struct hash<llm::OSAI::MachineLearning::ILearningModelSessionOptions2> : llm::impl::hash_base {};
    template<> struct hash<llm::OSAI::MachineLearning::ILearningModelSessionOptions3> : llm::impl::hash_base {};
    template<> struct hash<llm::OSAI::MachineLearning::ILearningModelStatics> : llm::impl::hash_base {};
    template<> struct hash<llm::OSAI::MachineLearning::IMapFeatureDescriptor> : llm::impl::hash_base {};
    template<> struct hash<llm::OSAI::MachineLearning::ISequenceFeatureDescriptor> : llm::impl::hash_base {};
    template<> struct hash<llm::OSAI::MachineLearning::ITensor> : llm::impl::hash_base {};
    template<> struct hash<llm::OSAI::MachineLearning::ITensorBoolean> : llm::impl::hash_base {};
    template<> struct hash<llm::OSAI::MachineLearning::ITensorBooleanStatics> : llm::impl::hash_base {};
    template<> struct hash<llm::OSAI::MachineLearning::ITensorBooleanStatics2> : llm::impl::hash_base {};
    template<> struct hash<llm::OSAI::MachineLearning::ITensorDouble> : llm::impl::hash_base {};
    template<> struct hash<llm::OSAI::MachineLearning::ITensorDoubleStatics> : llm::impl::hash_base {};
    template<> struct hash<llm::OSAI::MachineLearning::ITensorDoubleStatics2> : llm::impl::hash_base {};
    template<> struct hash<llm::OSAI::MachineLearning::ITensorFeatureDescriptor> : llm::impl::hash_base {};
    template<> struct hash<llm::OSAI::MachineLearning::ITensorFloat> : llm::impl::hash_base {};
    template<> struct hash<llm::OSAI::MachineLearning::ITensorFloat16Bit> : llm::impl::hash_base {};
    template<> struct hash<llm::OSAI::MachineLearning::ITensorFloat16BitStatics> : llm::impl::hash_base {};
    template<> struct hash<llm::OSAI::MachineLearning::ITensorFloat16BitStatics2> : llm::impl::hash_base {};
    template<> struct hash<llm::OSAI::MachineLearning::ITensorFloatStatics> : llm::impl::hash_base {};
    template<> struct hash<llm::OSAI::MachineLearning::ITensorFloatStatics2> : llm::impl::hash_base {};
    template<> struct hash<llm::OSAI::MachineLearning::ITensorInt16Bit> : llm::impl::hash_base {};
    template<> struct hash<llm::OSAI::MachineLearning::ITensorInt16BitStatics> : llm::impl::hash_base {};
    template<> struct hash<llm::OSAI::MachineLearning::ITensorInt16BitStatics2> : llm::impl::hash_base {};
    template<> struct hash<llm::OSAI::MachineLearning::ITensorInt32Bit> : llm::impl::hash_base {};
    template<> struct hash<llm::OSAI::MachineLearning::ITensorInt32BitStatics> : llm::impl::hash_base {};
    template<> struct hash<llm::OSAI::MachineLearning::ITensorInt32BitStatics2> : llm::impl::hash_base {};
    template<> struct hash<llm::OSAI::MachineLearning::ITensorInt64Bit> : llm::impl::hash_base {};
    template<> struct hash<llm::OSAI::MachineLearning::ITensorInt64BitStatics> : llm::impl::hash_base {};
    template<> struct hash<llm::OSAI::MachineLearning::ITensorInt64BitStatics2> : llm::impl::hash_base {};
    template<> struct hash<llm::OSAI::MachineLearning::ITensorInt8Bit> : llm::impl::hash_base {};
    template<> struct hash<llm::OSAI::MachineLearning::ITensorInt8BitStatics> : llm::impl::hash_base {};
    template<> struct hash<llm::OSAI::MachineLearning::ITensorInt8BitStatics2> : llm::impl::hash_base {};
    template<> struct hash<llm::OSAI::MachineLearning::ITensorString> : llm::impl::hash_base {};
    template<> struct hash<llm::OSAI::MachineLearning::ITensorStringStatics> : llm::impl::hash_base {};
    template<> struct hash<llm::OSAI::MachineLearning::ITensorStringStatics2> : llm::impl::hash_base {};
    template<> struct hash<llm::OSAI::MachineLearning::ITensorUInt16Bit> : llm::impl::hash_base {};
    template<> struct hash<llm::OSAI::MachineLearning::ITensorUInt16BitStatics> : llm::impl::hash_base {};
    template<> struct hash<llm::OSAI::MachineLearning::ITensorUInt16BitStatics2> : llm::impl::hash_base {};
    template<> struct hash<llm::OSAI::MachineLearning::ITensorUInt32Bit> : llm::impl::hash_base {};
    template<> struct hash<llm::OSAI::MachineLearning::ITensorUInt32BitStatics> : llm::impl::hash_base {};
    template<> struct hash<llm::OSAI::MachineLearning::ITensorUInt32BitStatics2> : llm::impl::hash_base {};
    template<> struct hash<llm::OSAI::MachineLearning::ITensorUInt64Bit> : llm::impl::hash_base {};
    template<> struct hash<llm::OSAI::MachineLearning::ITensorUInt64BitStatics> : llm::impl::hash_base {};
    template<> struct hash<llm::OSAI::MachineLearning::ITensorUInt64BitStatics2> : llm::impl::hash_base {};
    template<> struct hash<llm::OSAI::MachineLearning::ITensorUInt8Bit> : llm::impl::hash_base {};
    template<> struct hash<llm::OSAI::MachineLearning::ITensorUInt8BitStatics> : llm::impl::hash_base {};
    template<> struct hash<llm::OSAI::MachineLearning::ITensorUInt8BitStatics2> : llm::impl::hash_base {};
    template<> struct hash<llm::OSAI::MachineLearning::ImageFeatureDescriptor> : llm::impl::hash_base {};
    template<> struct hash<llm::OSAI::MachineLearning::ImageFeatureValue> : llm::impl::hash_base {};
    template<> struct hash<llm::OSAI::MachineLearning::LearningModel> : llm::impl::hash_base {};
    template<> struct hash<llm::OSAI::MachineLearning::LearningModelBinding> : llm::impl::hash_base {};
    template<> struct hash<llm::OSAI::MachineLearning::LearningModelDevice> : llm::impl::hash_base {};
    template<> struct hash<llm::OSAI::MachineLearning::LearningModelEvaluationResult> : llm::impl::hash_base {};
    template<> struct hash<llm::OSAI::MachineLearning::LearningModelSession> : llm::impl::hash_base {};
    template<> struct hash<llm::OSAI::MachineLearning::LearningModelSessionOptions> : llm::impl::hash_base {};
    template<> struct hash<llm::OSAI::MachineLearning::MapFeatureDescriptor> : llm::impl::hash_base {};
    template<> struct hash<llm::OSAI::MachineLearning::SequenceFeatureDescriptor> : llm::impl::hash_base {};
    template<> struct hash<llm::OSAI::MachineLearning::TensorBoolean> : llm::impl::hash_base {};
    template<> struct hash<llm::OSAI::MachineLearning::TensorDouble> : llm::impl::hash_base {};
    template<> struct hash<llm::OSAI::MachineLearning::TensorFeatureDescriptor> : llm::impl::hash_base {};
    template<> struct hash<llm::OSAI::MachineLearning::TensorFloat> : llm::impl::hash_base {};
    template<> struct hash<llm::OSAI::MachineLearning::TensorFloat16Bit> : llm::impl::hash_base {};
    template<> struct hash<llm::OSAI::MachineLearning::TensorInt16Bit> : llm::impl::hash_base {};
    template<> struct hash<llm::OSAI::MachineLearning::TensorInt32Bit> : llm::impl::hash_base {};
    template<> struct hash<llm::OSAI::MachineLearning::TensorInt64Bit> : llm::impl::hash_base {};
    template<> struct hash<llm::OSAI::MachineLearning::TensorInt8Bit> : llm::impl::hash_base {};
    template<> struct hash<llm::OSAI::MachineLearning::TensorString> : llm::impl::hash_base {};
    template<> struct hash<llm::OSAI::MachineLearning::TensorUInt16Bit> : llm::impl::hash_base {};
    template<> struct hash<llm::OSAI::MachineLearning::TensorUInt32Bit> : llm::impl::hash_base {};
    template<> struct hash<llm::OSAI::MachineLearning::TensorUInt64Bit> : llm::impl::hash_base {};
    template<> struct hash<llm::OSAI::MachineLearning::TensorUInt8Bit> : llm::impl::hash_base {};
#endif
#ifdef __cpp_lib_format
#endif
}
#endif

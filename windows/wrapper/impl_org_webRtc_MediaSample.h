
#pragma once

#include "types.h"
#include "generated/org_webRtc_MediaSample.h"

#ifdef WINUWP
#ifdef __cplusplus_winrt
#include <wrl.h>
#include <mfidl.h>
#endif //__cplusplus_winrt
#ifdef CPPWINRT_VERSION
#include <mfidl.h>
#endif // CPPWINRT_VERSION
#else
#ifdef _WIN32
#include <mfidl.h>
#endif //_WIN32
#endif // WINUWP

namespace wrapper {
  namespace impl {
    namespace org {
      namespace webRtc {

        struct MediaSample : public wrapper::org::webRtc::MediaSample
        {
          ZS_DECLARE_TYPEDEF_PTR(wrapper::org::webRtc::MediaSample, WrapperType);
          ZS_DECLARE_TYPEDEF_PTR(wrapper::impl::org::webRtc::MediaSample, WrapperImplType);

          MediaSampleWeakPtr thisWeak_;
          zsLib::Lock lock_;
#ifdef WINUWP
#ifdef CPPWINRT_VERSION
          winrt::com_ptr<IMFSample> sample_;
#endif //CPPWINRT_VERSION
#endif //WINUWP

          MediaSample() noexcept;
          virtual ~MediaSample() noexcept;

          void wrapper_dispose() noexcept override;

#ifdef WINUWP
#ifdef CPPWINRT_VERSION
          ZS_NO_DISCARD() static wrapper::org::webRtc::MediaSamplePtr toWrapper(winrt::com_ptr<IMFSample> const & sample) noexcept;
          ZS_NO_DISCARD() static winrt::com_ptr<IMFSample> toNative(wrapper::org::webRtc::MediaSamplePtr sample) noexcept;
#endif //CPPWINRT_VERSION
#endif //WINUWP

        };

      } // webRtc
    } // org
  } // namespace impl
} // namespace wrapper


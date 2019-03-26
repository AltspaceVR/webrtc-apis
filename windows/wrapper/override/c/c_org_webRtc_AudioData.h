
#ifndef C_USE_GENERATED_ORG_WEBRTC_AUDIODATA

#pragma once

#include "types.h"


ORG_WEBRTC_WRAPPER_C_PLUS_PLUS_BEGIN_GUARD


/* org_webRtc_AudioData*/

ORG_WEBRTC_WRAPPER_C_EXPORT_API org_webRtc_AudioData_t ORG_WEBRTC_WRAPPER_C_CALLING_CONVENTION org_webRtc_AudioData_wrapperClone(org_webRtc_AudioData_t handle);
ORG_WEBRTC_WRAPPER_C_EXPORT_API void ORG_WEBRTC_WRAPPER_C_CALLING_CONVENTION org_webRtc_AudioData_wrapperDestroy(org_webRtc_AudioData_t handle);
ORG_WEBRTC_WRAPPER_C_EXPORT_API instance_id_t ORG_WEBRTC_WRAPPER_C_CALLING_CONVENTION org_webRtc_AudioData_wrapperInstanceId(org_webRtc_AudioData_t handle);
ORG_WEBRTC_WRAPPER_C_EXPORT_API void ORG_WEBRTC_WRAPPER_C_CALLING_CONVENTION org_webRtc_AudioData_wrapperDispose(org_webRtc_AudioData_t handle);
ORG_WEBRTC_WRAPPER_C_EXPORT_API org_webRtc_AudioData_t ORG_WEBRTC_WRAPPER_C_CALLING_CONVENTION org_webRtc_AudioData_wrapperCreate_AudioData();
ORG_WEBRTC_WRAPPER_C_EXPORT_API bool_t ORG_WEBRTC_WRAPPER_C_CALLING_CONVENTION org_webRtc_AudioData_get_readOnly(org_webRtc_AudioData_t wrapperThisHandle);

ORG_WEBRTC_WRAPPER_C_EXPORT_API void ORG_WEBRTC_WRAPPER_C_CALLING_CONVENTION org_webRtc_AudioData_get_data(
  org_webRtc_AudioData_t wrapperThisHandle,
  uintptr_t buffer,
  binary_size_t size);
ORG_WEBRTC_WRAPPER_C_EXPORT_API void ORG_WEBRTC_WRAPPER_C_CALLING_CONVENTION org_webRtc_AudioData_set_data(
  org_webRtc_AudioData_t wrapperThisHandle,
  uintptr_t buffer,
  binary_size_t size);

ORG_WEBRTC_WRAPPER_C_EXPORT_API binary_size_t ORG_WEBRTC_WRAPPER_C_CALLING_CONVENTION org_webRtc_AudioData_size(org_webRtc_AudioData_t wrapperThisHandle);



ORG_WEBRTC_WRAPPER_C_PLUS_PLUS_END_GUARD

#ifdef __cplusplus


namespace wrapper
{
  org_webRtc_AudioData_t org_webRtc_AudioData_wrapperToHandle(wrapper::org::webRtc::AudioDataPtr value);
  wrapper::org::webRtc::AudioDataPtr org_webRtc_AudioData_wrapperFromHandle(org_webRtc_AudioData_t handle);

} /* namespace wrapper */
#endif /* __cplusplus */

#endif /* ifndef C_USE_GENERATED_ORG_WEBRTC_AUDIODATA */

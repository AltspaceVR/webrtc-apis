
#ifndef C_USE_GENERATED_ORG_WEBRTC_VIDEODEVICEINFO

#pragma once

#include "types.h"


ORG_WEBRTC_WRAPPER_C_PLUS_PLUS_BEGIN_GUARD


/* org_webRtc_VideoDeviceInfo*/

ORG_WEBRTC_WRAPPER_C_EXPORT_API org_webRtc_VideoDeviceInfo_t ORG_WEBRTC_WRAPPER_C_CALLING_CONVENTION org_webRtc_VideoDeviceInfo_wrapperClone(org_webRtc_VideoDeviceInfo_t handle);
ORG_WEBRTC_WRAPPER_C_EXPORT_API void ORG_WEBRTC_WRAPPER_C_CALLING_CONVENTION org_webRtc_VideoDeviceInfo_wrapperDestroy(org_webRtc_VideoDeviceInfo_t handle);
ORG_WEBRTC_WRAPPER_C_EXPORT_API instance_id_t ORG_WEBRTC_WRAPPER_C_CALLING_CONVENTION org_webRtc_VideoDeviceInfo_wrapperInstanceId(org_webRtc_VideoDeviceInfo_t handle);
ORG_WEBRTC_WRAPPER_C_EXPORT_API zs_Any_t ORG_WEBRTC_WRAPPER_C_CALLING_CONVENTION org_webRtc_VideoDeviceInfo_get_info(org_webRtc_VideoDeviceInfo_t wrapperThisHandle);


ORG_WEBRTC_WRAPPER_C_PLUS_PLUS_END_GUARD

#ifdef __cplusplus


namespace wrapper
{
  org_webRtc_VideoDeviceInfo_t org_webRtc_VideoDeviceInfo_wrapperToHandle(wrapper::org::webRtc::VideoDeviceInfoPtr value);
  wrapper::org::webRtc::VideoDeviceInfoPtr org_webRtc_VideoDeviceInfo_wrapperFromHandle(org_webRtc_VideoDeviceInfo_t handle);

} /* namespace wrapper */
#endif /* __cplusplus */

#endif /* ifndef C_USE_GENERATED_ORG_WEBRTC_VIDEODEVICEINFO */

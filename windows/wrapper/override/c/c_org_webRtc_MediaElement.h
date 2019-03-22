
#ifndef C_USE_GENERATED_ORG_WEBRTC_MEDIAELEMENT

#pragma once

#include "types.h"


ORG_WEBRTC_WRAPPER_C_PLUS_PLUS_BEGIN_GUARD


/* org_webRtc_MediaElement*/

ORG_WEBRTC_WRAPPER_C_EXPORT_API org_webRtc_MediaElement_t ORG_WEBRTC_WRAPPER_C_CALLING_CONVENTION org_webRtc_MediaElement_wrapperClone(org_webRtc_MediaElement_t handle);
ORG_WEBRTC_WRAPPER_C_EXPORT_API void ORG_WEBRTC_WRAPPER_C_CALLING_CONVENTION org_webRtc_MediaElement_wrapperDestroy(org_webRtc_MediaElement_t handle);
ORG_WEBRTC_WRAPPER_C_EXPORT_API instance_id_t ORG_WEBRTC_WRAPPER_C_CALLING_CONVENTION org_webRtc_MediaElement_wrapperInstanceId(org_webRtc_MediaElement_t handle);
ORG_WEBRTC_WRAPPER_C_EXPORT_API org_webRtc_MediaElement_t ORG_WEBRTC_WRAPPER_C_CALLING_CONVENTION org_webRtc_MediaElement_wrapperCreate_MediaElementWithNativeQueue(zs_Any_t element);
ORG_WEBRTC_WRAPPER_C_EXPORT_API zs_Any_t ORG_WEBRTC_WRAPPER_C_CALLING_CONVENTION org_webRtc_MediaElement_get_element(org_webRtc_MediaElement_t wrapperThisHandle);


ORG_WEBRTC_WRAPPER_C_PLUS_PLUS_END_GUARD

#ifdef __cplusplus


namespace wrapper
{
  org_webRtc_MediaElement_t org_webRtc_MediaElement_wrapperToHandle(wrapper::org::webRtc::MediaElementPtr value);
  wrapper::org::webRtc::MediaElementPtr org_webRtc_MediaElement_wrapperFromHandle(org_webRtc_MediaElement_t handle);

} /* namespace wrapper */
#endif /* __cplusplus */

#endif /* ifndef C_USE_GENERATED_ORG_WEBRTC_MEDIAELEMENT */

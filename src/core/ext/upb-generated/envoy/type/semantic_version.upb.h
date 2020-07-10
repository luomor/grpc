/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/type/semantic_version.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef ENVOY_TYPE_SEMANTIC_VERSION_PROTO_UPB_H_
#define ENVOY_TYPE_SEMANTIC_VERSION_PROTO_UPB_H_

#include "upb/msg.h"
#include "upb/decode.h"
#include "upb/encode.h"

#include "upb/port_def.inc"

#ifdef __cplusplus
extern "C" {
#endif

struct envoy_type_SemanticVersion;
typedef struct envoy_type_SemanticVersion envoy_type_SemanticVersion;
extern const upb_msglayout envoy_type_SemanticVersion_msginit;


/* envoy.type.SemanticVersion */

UPB_INLINE envoy_type_SemanticVersion *envoy_type_SemanticVersion_new(upb_arena *arena) {
  return (envoy_type_SemanticVersion *)_upb_msg_new(&envoy_type_SemanticVersion_msginit, arena);
}
UPB_INLINE envoy_type_SemanticVersion *envoy_type_SemanticVersion_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_type_SemanticVersion *ret = envoy_type_SemanticVersion_new(arena);
  return (ret && upb_decode(buf, size, ret, &envoy_type_SemanticVersion_msginit, arena)) ? ret : NULL;
}
UPB_INLINE char *envoy_type_SemanticVersion_serialize(const envoy_type_SemanticVersion *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_type_SemanticVersion_msginit, arena, len);
}

UPB_INLINE uint32_t envoy_type_SemanticVersion_major_number(const envoy_type_SemanticVersion *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(0, 0), uint32_t); }
UPB_INLINE uint32_t envoy_type_SemanticVersion_minor_number(const envoy_type_SemanticVersion *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(4, 4), uint32_t); }
UPB_INLINE uint32_t envoy_type_SemanticVersion_patch(const envoy_type_SemanticVersion *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(8, 8), uint32_t); }

UPB_INLINE void envoy_type_SemanticVersion_set_major_number(envoy_type_SemanticVersion *msg, uint32_t value) {
  *UPB_PTR_AT(msg, UPB_SIZE(0, 0), uint32_t) = value;
}
UPB_INLINE void envoy_type_SemanticVersion_set_minor_number(envoy_type_SemanticVersion *msg, uint32_t value) {
  *UPB_PTR_AT(msg, UPB_SIZE(4, 4), uint32_t) = value;
}
UPB_INLINE void envoy_type_SemanticVersion_set_patch(envoy_type_SemanticVersion *msg, uint32_t value) {
  *UPB_PTR_AT(msg, UPB_SIZE(8, 8), uint32_t) = value;
}

#ifdef __cplusplus
}  /* extern "C" */
#endif

#include "upb/port_undef.inc"

#endif  /* ENVOY_TYPE_SEMANTIC_VERSION_PROTO_UPB_H_ */

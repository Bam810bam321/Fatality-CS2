// generated on: 11/6/2023

#ifndef SDK_GENERATED_H
#define SDK_GENERATED_H

#include <cstdint>

#define MEMBER_OFF(n, off, ...) __VA_ARGS__ &get_##n() { return *(__VA_ARGS__ *)(uintptr_t(this) + off); }
#define MEMBER_CUSTOM(n, c, ...) __VA_ARGS__& get_##n () { return *(__VA_ARGS__*)(uintptr_t(this) + sdk::offsets::c::n); }
#define MEMBER(n, c, ...) __VA_ARGS__& get_##n () { return *(__VA_ARGS__*)(uintptr_t(this) + sdk::offsets::schema::c::n); }
#define MEMBER_ARR(n, c, i, ...) std::array<__VA_ARGS__, i>& get_##n () { return *(std::array<__VA_ARGS__, i>*)(uintptr_t(this) + sdk::offsets::schema::c::n); }
// TODO

#include <cstdint>
#include <array>

#include <sdk/utl/utl_vector.h>
#include <sdk/utl/utl_ts_hash.h>
#include <sdk/utl/utl_memory.h>
#include <sdk/utl/utl_string.h>

#include <sdk/math/vector.h>
#include <sdk/math/mat.h>

#include <sdk/color.h>

#include "proto.h"
#include "offsets.h"
#include "offsets_schema.h"

#include "schema/global_types.h"

#include "schema/client.h"
#include "schema/engine2.h"
#include "schema/particles.h"
#include "schema/server.h"
#include "schema/worldrenderer.h"

namespace sdk {} // namespace sdk

#endif // SDK_GENERATED_H

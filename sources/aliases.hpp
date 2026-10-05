#pragma once

#include <cstdint>

namespace units{

    using Ms = uint32_t;
    using Us = uint64_t;

    inline constexpr Us Ms2Us(Ms millisecond){ return static_cast<Us>(millisecond) * 1000;}
    inline constexpr Ms Us2Ms(Us microsecond){ return static_cast<Ms>(microsecond / 1000);}
    
    using TimestampMs = uint64_t;
    using TimestampUs = uint64_t;

    // Percentage in float (.0f to 1.0f)
    using PercentageF = float;
    // Percentage in integer (0 to 100)
    // - Percentage = (float)(integer / 100.0f)
    using Percentage = uint8_t;

} // namespace units
#pragma once

#include <vector>
#include <string>
#include <memory_resource>

#include <cstdint>

#include "exported.hpp"

namespace DrakoEngine {

    using byte = std::byte;
    using u8 = std::uint8_t;
    using u16 = std::uint16_t;
    using u32 = std::uint32_t;
    using u64 = std::uint64_t;
    using i8 = std::int8_t;
    using i16 = std::int16_t;
    using i32 = std::int32_t;
    using i64 = std::int64_t;
    using f32 = float;
    using f64 = double;
    template <class Type>
    using vec = std::vector<Type>;
    using str = std::string;
    template <class Type>
    using pvec = std::pmr::vector<Type>;
    using pstr = std::pmr::string;

}

#include "config.hpp"

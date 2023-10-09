/**
 * \file
 * \brief Generated by ifgen (2.6.3).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace RP2040
{

enum class I2C0_IC_ENABLE_ENABLE : uint8_t
{
    DISABLED /*!< I2C is disabled */,
    ENABLED = 1 /*!< I2C is enabled */
};
static_assert(sizeof(I2C0_IC_ENABLE_ENABLE) == 1);

static constexpr uint16_t I2C0_IC_ENABLE_ENABLE_id = 376;

/**
 * Converts I2C0_IC_ENABLE_ENABLE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(I2C0_IC_ENABLE_ENABLE instance)
{
    const char *result = "UNKNOWN I2C0_IC_ENABLE_ENABLE";

    switch (instance)
    {
    case I2C0_IC_ENABLE_ENABLE::DISABLED:
        result = "DISABLED";
        break;
    case I2C0_IC_ENABLE_ENABLE::ENABLED:
        result = "ENABLED";
        break;
    }

    return result;
}

/**
 * Converts a C string to I2C0_IC_ENABLE_ENABLE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, I2C0_IC_ENABLE_ENABLE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "DISABLED", 8)))
    {
        output = I2C0_IC_ENABLE_ENABLE::DISABLED;
    }
    else if ((result = !strncmp(data, "ENABLED", 7)))
    {
        output = I2C0_IC_ENABLE_ENABLE::ENABLED;
    }

    return result;
}

}; // namespace RP2040
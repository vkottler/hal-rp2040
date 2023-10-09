/**
 * \file
 * \brief Generated by ifgen (2.6.3).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace RP2040
{

enum class I2C0_IC_CON_STOP_DET_IFADDRESSED : uint8_t
{
    DISABLED /*!< slave issues STOP_DET intr always */,
    ENABLED = 1 /*!< slave issues STOP_DET intr only if addressed */
};
static_assert(sizeof(I2C0_IC_CON_STOP_DET_IFADDRESSED) == 1);

static constexpr uint16_t I2C0_IC_CON_STOP_DET_IFADDRESSED_id = 328;

/**
 * Converts I2C0_IC_CON_STOP_DET_IFADDRESSED to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(I2C0_IC_CON_STOP_DET_IFADDRESSED instance)
{
    const char *result = "UNKNOWN I2C0_IC_CON_STOP_DET_IFADDRESSED";

    switch (instance)
    {
    case I2C0_IC_CON_STOP_DET_IFADDRESSED::DISABLED:
        result = "DISABLED";
        break;
    case I2C0_IC_CON_STOP_DET_IFADDRESSED::ENABLED:
        result = "ENABLED";
        break;
    }

    return result;
}

/**
 * Converts a C string to I2C0_IC_CON_STOP_DET_IFADDRESSED.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, I2C0_IC_CON_STOP_DET_IFADDRESSED &output)
{
    bool result = false;

    if ((result = !strncmp(data, "DISABLED", 8)))
    {
        output = I2C0_IC_CON_STOP_DET_IFADDRESSED::DISABLED;
    }
    else if ((result = !strncmp(data, "ENABLED", 7)))
    {
        output = I2C0_IC_CON_STOP_DET_IFADDRESSED::ENABLED;
    }

    return result;
}

}; // namespace RP2040
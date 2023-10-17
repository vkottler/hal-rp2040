/**
 * \file
 * \brief Generated by ifgen (3.1.4).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace RP2040
{

enum class I2C0_IC_ENABLE_STATUS_IC_EN : uint8_t
{
    DISABLED /*!< I2C disabled */,
    ENABLED = 1 /*!< I2C enabled */
};
static_assert(sizeof(I2C0_IC_ENABLE_STATUS_IC_EN) == 1);

/**
 * Converts I2C0_IC_ENABLE_STATUS_IC_EN to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(I2C0_IC_ENABLE_STATUS_IC_EN instance)
{
    const char *result = "UNKNOWN I2C0_IC_ENABLE_STATUS_IC_EN";

    switch (instance)
    {
    case I2C0_IC_ENABLE_STATUS_IC_EN::DISABLED:
        result = "DISABLED";
        break;
    case I2C0_IC_ENABLE_STATUS_IC_EN::ENABLED:
        result = "ENABLED";
        break;
    }

    return result;
}

/**
 * Converts a C string to I2C0_IC_ENABLE_STATUS_IC_EN.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, I2C0_IC_ENABLE_STATUS_IC_EN &output)
{
    bool result = false;

    if ((result = !strncmp(data, "DISABLED", 8)))
    {
        output = I2C0_IC_ENABLE_STATUS_IC_EN::DISABLED;
    }
    else if ((result = !strncmp(data, "ENABLED", 7)))
    {
        output = I2C0_IC_ENABLE_STATUS_IC_EN::ENABLED;
    }

    return result;
}

}; // namespace RP2040

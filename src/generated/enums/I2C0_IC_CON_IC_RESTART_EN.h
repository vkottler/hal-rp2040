/**
 * \file
 * \brief Generated by ifgen (3.1.7).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace RP2040
{

enum class I2C0_IC_CON_IC_RESTART_EN : uint8_t
{
    DISABLED /*!< Master restart disabled */,
    ENABLED = 1 /*!< Master restart enabled */
};
static_assert(sizeof(I2C0_IC_CON_IC_RESTART_EN) == 1);

/**
 * Converts I2C0_IC_CON_IC_RESTART_EN to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(I2C0_IC_CON_IC_RESTART_EN instance)
{
    const char *result = "UNKNOWN I2C0_IC_CON_IC_RESTART_EN";

    switch (instance)
    {
    case I2C0_IC_CON_IC_RESTART_EN::DISABLED:
        result = "DISABLED";
        break;
    case I2C0_IC_CON_IC_RESTART_EN::ENABLED:
        result = "ENABLED";
        break;
    }

    return result;
}

/**
 * Converts a C string to I2C0_IC_CON_IC_RESTART_EN.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, I2C0_IC_CON_IC_RESTART_EN &output)
{
    bool result = false;

    if ((result = !strncmp(data, "DISABLED", 8)))
    {
        output = I2C0_IC_CON_IC_RESTART_EN::DISABLED;
    }
    else if ((result = !strncmp(data, "ENABLED", 7)))
    {
        output = I2C0_IC_CON_IC_RESTART_EN::ENABLED;
    }

    return result;
}

}; // namespace RP2040

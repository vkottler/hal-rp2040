/**
 * \file
 * \brief Generated by ifgen (3.1.2).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace RP2040
{

enum class I2C0_IC_CON_IC_SLAVE_DISABLE : uint8_t
{
    ENABLED /*!< Slave mode is enabled */,
    DISABLED = 1 /*!< Slave mode is disabled */
};
static_assert(sizeof(I2C0_IC_CON_IC_SLAVE_DISABLE) == 1);

/**
 * Converts I2C0_IC_CON_IC_SLAVE_DISABLE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(I2C0_IC_CON_IC_SLAVE_DISABLE instance)
{
    const char *result = "UNKNOWN I2C0_IC_CON_IC_SLAVE_DISABLE";

    switch (instance)
    {
    case I2C0_IC_CON_IC_SLAVE_DISABLE::ENABLED:
        result = "ENABLED";
        break;
    case I2C0_IC_CON_IC_SLAVE_DISABLE::DISABLED:
        result = "DISABLED";
        break;
    }

    return result;
}

/**
 * Converts a C string to I2C0_IC_CON_IC_SLAVE_DISABLE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, I2C0_IC_CON_IC_SLAVE_DISABLE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "ENABLED", 7)))
    {
        output = I2C0_IC_CON_IC_SLAVE_DISABLE::ENABLED;
    }
    else if ((result = !strncmp(data, "DISABLED", 8)))
    {
        output = I2C0_IC_CON_IC_SLAVE_DISABLE::DISABLED;
    }

    return result;
}

}; // namespace RP2040

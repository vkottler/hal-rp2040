/**
 * \file
 * \brief Generated by ifgen (3.1.4).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace RP2040
{

enum class I2C0_IC_CON_TX_EMPTY_CTRL : uint8_t
{
    DISABLED /*!< Default behaviour of TX_EMPTY interrupt */,
    ENABLED = 1 /*!< Controlled generation of TX_EMPTY interrupt */
};
static_assert(sizeof(I2C0_IC_CON_TX_EMPTY_CTRL) == 1);

/**
 * Converts I2C0_IC_CON_TX_EMPTY_CTRL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(I2C0_IC_CON_TX_EMPTY_CTRL instance)
{
    const char *result = "UNKNOWN I2C0_IC_CON_TX_EMPTY_CTRL";

    switch (instance)
    {
    case I2C0_IC_CON_TX_EMPTY_CTRL::DISABLED:
        result = "DISABLED";
        break;
    case I2C0_IC_CON_TX_EMPTY_CTRL::ENABLED:
        result = "ENABLED";
        break;
    }

    return result;
}

/**
 * Converts a C string to I2C0_IC_CON_TX_EMPTY_CTRL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, I2C0_IC_CON_TX_EMPTY_CTRL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "DISABLED", 8)))
    {
        output = I2C0_IC_CON_TX_EMPTY_CTRL::DISABLED;
    }
    else if ((result = !strncmp(data, "ENABLED", 7)))
    {
        output = I2C0_IC_CON_TX_EMPTY_CTRL::ENABLED;
    }

    return result;
}

}; // namespace RP2040

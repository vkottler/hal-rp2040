/**
 * \file
 * \brief Generated by ifgen (3.1.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace RP2040
{

enum class I2C0_IC_CON_SPEED : uint8_t
{
    STANDARD = 1 /*!< Standard Speed mode of operation */,
    FAST = 2 /*!< Fast or Fast Plus mode of operation */,
    HIGH = 3 /*!< High Speed mode of operation */
};
static_assert(sizeof(I2C0_IC_CON_SPEED) == 1);

/**
 * Converts I2C0_IC_CON_SPEED to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(I2C0_IC_CON_SPEED instance)
{
    const char *result = "UNKNOWN I2C0_IC_CON_SPEED";

    switch (instance)
    {
    case I2C0_IC_CON_SPEED::STANDARD:
        result = "STANDARD";
        break;
    case I2C0_IC_CON_SPEED::FAST:
        result = "FAST";
        break;
    case I2C0_IC_CON_SPEED::HIGH:
        result = "HIGH";
        break;
    }

    return result;
}

/**
 * Converts a C string to I2C0_IC_CON_SPEED.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, I2C0_IC_CON_SPEED &output)
{
    bool result = false;

    if ((result = !strncmp(data, "STANDARD", 8)))
    {
        output = I2C0_IC_CON_SPEED::STANDARD;
    }
    else if ((result = !strncmp(data, "FAST", 4)))
    {
        output = I2C0_IC_CON_SPEED::FAST;
    }
    else if ((result = !strncmp(data, "HIGH", 4)))
    {
        output = I2C0_IC_CON_SPEED::HIGH;
    }

    return result;
}

}; // namespace RP2040

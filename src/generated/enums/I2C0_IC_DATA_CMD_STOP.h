/**
 * \file
 * \brief Generated by ifgen (3.1.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace RP2040
{

enum class I2C0_IC_DATA_CMD_STOP : uint8_t
{
    DISABLE /*!< Don't Issue STOP after this command */,
    ENABLE = 1 /*!< Issue STOP after this command */
};
static_assert(sizeof(I2C0_IC_DATA_CMD_STOP) == 1);

/**
 * Converts I2C0_IC_DATA_CMD_STOP to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(I2C0_IC_DATA_CMD_STOP instance)
{
    const char *result = "UNKNOWN I2C0_IC_DATA_CMD_STOP";

    switch (instance)
    {
    case I2C0_IC_DATA_CMD_STOP::DISABLE:
        result = "DISABLE";
        break;
    case I2C0_IC_DATA_CMD_STOP::ENABLE:
        result = "ENABLE";
        break;
    }

    return result;
}

/**
 * Converts a C string to I2C0_IC_DATA_CMD_STOP.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, I2C0_IC_DATA_CMD_STOP &output)
{
    bool result = false;

    if ((result = !strncmp(data, "DISABLE", 7)))
    {
        output = I2C0_IC_DATA_CMD_STOP::DISABLE;
    }
    else if ((result = !strncmp(data, "ENABLE", 6)))
    {
        output = I2C0_IC_DATA_CMD_STOP::ENABLE;
    }

    return result;
}

}; // namespace RP2040

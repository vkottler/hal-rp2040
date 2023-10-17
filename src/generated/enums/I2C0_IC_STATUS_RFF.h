/**
 * \file
 * \brief Generated by ifgen (3.1.2).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace RP2040
{

enum class I2C0_IC_STATUS_RFF : uint8_t
{
    NOT_FULL /*!< Rx FIFO not full */,
    FULL = 1 /*!< Rx FIFO is full */
};
static_assert(sizeof(I2C0_IC_STATUS_RFF) == 1);

/**
 * Converts I2C0_IC_STATUS_RFF to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(I2C0_IC_STATUS_RFF instance)
{
    const char *result = "UNKNOWN I2C0_IC_STATUS_RFF";

    switch (instance)
    {
    case I2C0_IC_STATUS_RFF::NOT_FULL:
        result = "NOT_FULL";
        break;
    case I2C0_IC_STATUS_RFF::FULL:
        result = "FULL";
        break;
    }

    return result;
}

/**
 * Converts a C string to I2C0_IC_STATUS_RFF.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, I2C0_IC_STATUS_RFF &output)
{
    bool result = false;

    if ((result = !strncmp(data, "NOT_FULL", 8)))
    {
        output = I2C0_IC_STATUS_RFF::NOT_FULL;
    }
    else if ((result = !strncmp(data, "FULL", 4)))
    {
        output = I2C0_IC_STATUS_RFF::FULL;
    }

    return result;
}

}; // namespace RP2040

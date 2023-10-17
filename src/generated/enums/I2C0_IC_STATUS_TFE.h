/**
 * \file
 * \brief Generated by ifgen (3.1.2).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace RP2040
{

enum class I2C0_IC_STATUS_TFE : uint8_t
{
    NON_EMPTY /*!< Tx FIFO not empty */,
    EMPTY = 1 /*!< Tx FIFO is empty */
};
static_assert(sizeof(I2C0_IC_STATUS_TFE) == 1);

/**
 * Converts I2C0_IC_STATUS_TFE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(I2C0_IC_STATUS_TFE instance)
{
    const char *result = "UNKNOWN I2C0_IC_STATUS_TFE";

    switch (instance)
    {
    case I2C0_IC_STATUS_TFE::NON_EMPTY:
        result = "NON_EMPTY";
        break;
    case I2C0_IC_STATUS_TFE::EMPTY:
        result = "EMPTY";
        break;
    }

    return result;
}

/**
 * Converts a C string to I2C0_IC_STATUS_TFE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, I2C0_IC_STATUS_TFE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "NON_EMPTY", 9)))
    {
        output = I2C0_IC_STATUS_TFE::NON_EMPTY;
    }
    else if ((result = !strncmp(data, "EMPTY", 5)))
    {
        output = I2C0_IC_STATUS_TFE::EMPTY;
    }

    return result;
}

}; // namespace RP2040

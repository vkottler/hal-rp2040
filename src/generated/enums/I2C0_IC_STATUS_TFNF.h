/**
 * \file
 * \brief Generated by ifgen (3.1.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace RP2040
{

enum class I2C0_IC_STATUS_TFNF : uint8_t
{
    FULL /*!< Tx FIFO is full */,
    NOT_FULL = 1 /*!< Tx FIFO not full */
};
static_assert(sizeof(I2C0_IC_STATUS_TFNF) == 1);

/**
 * Converts I2C0_IC_STATUS_TFNF to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(I2C0_IC_STATUS_TFNF instance)
{
    const char *result = "UNKNOWN I2C0_IC_STATUS_TFNF";

    switch (instance)
    {
    case I2C0_IC_STATUS_TFNF::FULL:
        result = "FULL";
        break;
    case I2C0_IC_STATUS_TFNF::NOT_FULL:
        result = "NOT_FULL";
        break;
    }

    return result;
}

/**
 * Converts a C string to I2C0_IC_STATUS_TFNF.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, I2C0_IC_STATUS_TFNF &output)
{
    bool result = false;

    if ((result = !strncmp(data, "FULL", 4)))
    {
        output = I2C0_IC_STATUS_TFNF::FULL;
    }
    else if ((result = !strncmp(data, "NOT_FULL", 8)))
    {
        output = I2C0_IC_STATUS_TFNF::NOT_FULL;
    }

    return result;
}

}; // namespace RP2040

/**
 * \file
 * \brief Generated by ifgen (3.1.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace RP2040
{

enum class I2C0_IC_CON_IC_10BITADDR_MASTER : uint8_t
{
    ADDR_7BITS /*!< Master 7Bit addressing mode */,
    ADDR_10BITS = 1 /*!< Master 10Bit addressing mode */
};
static_assert(sizeof(I2C0_IC_CON_IC_10BITADDR_MASTER) == 1);

/**
 * Converts I2C0_IC_CON_IC_10BITADDR_MASTER to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(I2C0_IC_CON_IC_10BITADDR_MASTER instance)
{
    const char *result = "UNKNOWN I2C0_IC_CON_IC_10BITADDR_MASTER";

    switch (instance)
    {
    case I2C0_IC_CON_IC_10BITADDR_MASTER::ADDR_7BITS:
        result = "ADDR_7BITS";
        break;
    case I2C0_IC_CON_IC_10BITADDR_MASTER::ADDR_10BITS:
        result = "ADDR_10BITS";
        break;
    }

    return result;
}

/**
 * Converts a C string to I2C0_IC_CON_IC_10BITADDR_MASTER.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        I2C0_IC_CON_IC_10BITADDR_MASTER &output)
{
    bool result = false;

    if ((result = !strncmp(data, "ADDR_7BITS", 10)))
    {
        output = I2C0_IC_CON_IC_10BITADDR_MASTER::ADDR_7BITS;
    }
    else if ((result = !strncmp(data, "ADDR_10BITS", 11)))
    {
        output = I2C0_IC_CON_IC_10BITADDR_MASTER::ADDR_10BITS;
    }

    return result;
}

}; // namespace RP2040

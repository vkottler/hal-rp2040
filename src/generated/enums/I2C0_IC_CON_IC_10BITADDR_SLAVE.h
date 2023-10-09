/**
 * \file
 * \brief Generated by ifgen (2.6.3).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace RP2040
{

enum class I2C0_IC_CON_IC_10BITADDR_SLAVE : uint8_t
{
    ADDR_7BITS /*!< Slave 7Bit addressing */,
    ADDR_10BITS = 1 /*!< Slave 10Bit addressing */
};
static_assert(sizeof(I2C0_IC_CON_IC_10BITADDR_SLAVE) == 1);

static constexpr uint16_t I2C0_IC_CON_IC_10BITADDR_SLAVE_id = 324;

/**
 * Converts I2C0_IC_CON_IC_10BITADDR_SLAVE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(I2C0_IC_CON_IC_10BITADDR_SLAVE instance)
{
    const char *result = "UNKNOWN I2C0_IC_CON_IC_10BITADDR_SLAVE";

    switch (instance)
    {
    case I2C0_IC_CON_IC_10BITADDR_SLAVE::ADDR_7BITS:
        result = "ADDR_7BITS";
        break;
    case I2C0_IC_CON_IC_10BITADDR_SLAVE::ADDR_10BITS:
        result = "ADDR_10BITS";
        break;
    }

    return result;
}

/**
 * Converts a C string to I2C0_IC_CON_IC_10BITADDR_SLAVE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, I2C0_IC_CON_IC_10BITADDR_SLAVE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "ADDR_7BITS", 10)))
    {
        output = I2C0_IC_CON_IC_10BITADDR_SLAVE::ADDR_7BITS;
    }
    else if ((result = !strncmp(data, "ADDR_10BITS", 11)))
    {
        output = I2C0_IC_CON_IC_10BITADDR_SLAVE::ADDR_10BITS;
    }

    return result;
}

}; // namespace RP2040

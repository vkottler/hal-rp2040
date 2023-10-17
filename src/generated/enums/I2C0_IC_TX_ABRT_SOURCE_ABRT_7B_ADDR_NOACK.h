/**
 * \file
 * \brief Generated by ifgen (3.1.6).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace RP2040
{

enum class I2C0_IC_TX_ABRT_SOURCE_ABRT_7B_ADDR_NOACK : uint8_t
{
    INACTIVE /*!< This abort is not generated */,
    ACTIVE =
        1 /*!< This abort is generated because of NOACK for 7-bit address */
};
static_assert(sizeof(I2C0_IC_TX_ABRT_SOURCE_ABRT_7B_ADDR_NOACK) == 1);

/**
 * Converts I2C0_IC_TX_ABRT_SOURCE_ABRT_7B_ADDR_NOACK to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(
    I2C0_IC_TX_ABRT_SOURCE_ABRT_7B_ADDR_NOACK instance)
{
    const char *result = "UNKNOWN I2C0_IC_TX_ABRT_SOURCE_ABRT_7B_ADDR_NOACK";

    switch (instance)
    {
    case I2C0_IC_TX_ABRT_SOURCE_ABRT_7B_ADDR_NOACK::INACTIVE:
        result = "INACTIVE";
        break;
    case I2C0_IC_TX_ABRT_SOURCE_ABRT_7B_ADDR_NOACK::ACTIVE:
        result = "ACTIVE";
        break;
    }

    return result;
}

/**
 * Converts a C string to I2C0_IC_TX_ABRT_SOURCE_ABRT_7B_ADDR_NOACK.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        I2C0_IC_TX_ABRT_SOURCE_ABRT_7B_ADDR_NOACK &output)
{
    bool result = false;

    if ((result = !strncmp(data, "INACTIVE", 8)))
    {
        output = I2C0_IC_TX_ABRT_SOURCE_ABRT_7B_ADDR_NOACK::INACTIVE;
    }
    else if ((result = !strncmp(data, "ACTIVE", 6)))
    {
        output = I2C0_IC_TX_ABRT_SOURCE_ABRT_7B_ADDR_NOACK::ACTIVE;
    }

    return result;
}

}; // namespace RP2040

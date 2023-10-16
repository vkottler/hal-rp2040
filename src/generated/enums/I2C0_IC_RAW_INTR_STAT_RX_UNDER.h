/**
 * \file
 * \brief Generated by ifgen (3.1.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace RP2040
{

enum class I2C0_IC_RAW_INTR_STAT_RX_UNDER : uint8_t
{
    INACTIVE /*!< RX_UNDER interrupt is inactive */,
    ACTIVE = 1 /*!< RX_UNDER interrupt is active */
};
static_assert(sizeof(I2C0_IC_RAW_INTR_STAT_RX_UNDER) == 1);

/**
 * Converts I2C0_IC_RAW_INTR_STAT_RX_UNDER to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(I2C0_IC_RAW_INTR_STAT_RX_UNDER instance)
{
    const char *result = "UNKNOWN I2C0_IC_RAW_INTR_STAT_RX_UNDER";

    switch (instance)
    {
    case I2C0_IC_RAW_INTR_STAT_RX_UNDER::INACTIVE:
        result = "INACTIVE";
        break;
    case I2C0_IC_RAW_INTR_STAT_RX_UNDER::ACTIVE:
        result = "ACTIVE";
        break;
    }

    return result;
}

/**
 * Converts a C string to I2C0_IC_RAW_INTR_STAT_RX_UNDER.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        I2C0_IC_RAW_INTR_STAT_RX_UNDER &output)
{
    bool result = false;

    if ((result = !strncmp(data, "INACTIVE", 8)))
    {
        output = I2C0_IC_RAW_INTR_STAT_RX_UNDER::INACTIVE;
    }
    else if ((result = !strncmp(data, "ACTIVE", 6)))
    {
        output = I2C0_IC_RAW_INTR_STAT_RX_UNDER::ACTIVE;
    }

    return result;
}

}; // namespace RP2040

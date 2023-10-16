/**
 * \file
 * \brief Generated by ifgen (3.1.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace RP2040
{

enum class I2C0_IC_RAW_INTR_STAT_RD_REQ : uint8_t
{
    INACTIVE /*!< RD_REQ interrupt is inactive */,
    ACTIVE = 1 /*!< RD_REQ interrupt is active */
};
static_assert(sizeof(I2C0_IC_RAW_INTR_STAT_RD_REQ) == 1);

/**
 * Converts I2C0_IC_RAW_INTR_STAT_RD_REQ to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(I2C0_IC_RAW_INTR_STAT_RD_REQ instance)
{
    const char *result = "UNKNOWN I2C0_IC_RAW_INTR_STAT_RD_REQ";

    switch (instance)
    {
    case I2C0_IC_RAW_INTR_STAT_RD_REQ::INACTIVE:
        result = "INACTIVE";
        break;
    case I2C0_IC_RAW_INTR_STAT_RD_REQ::ACTIVE:
        result = "ACTIVE";
        break;
    }

    return result;
}

/**
 * Converts a C string to I2C0_IC_RAW_INTR_STAT_RD_REQ.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, I2C0_IC_RAW_INTR_STAT_RD_REQ &output)
{
    bool result = false;

    if ((result = !strncmp(data, "INACTIVE", 8)))
    {
        output = I2C0_IC_RAW_INTR_STAT_RD_REQ::INACTIVE;
    }
    else if ((result = !strncmp(data, "ACTIVE", 6)))
    {
        output = I2C0_IC_RAW_INTR_STAT_RD_REQ::ACTIVE;
    }

    return result;
}

}; // namespace RP2040

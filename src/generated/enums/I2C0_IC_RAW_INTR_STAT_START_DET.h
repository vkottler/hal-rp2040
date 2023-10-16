/**
 * \file
 * \brief Generated by ifgen (3.1.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace RP2040
{

enum class I2C0_IC_RAW_INTR_STAT_START_DET : uint8_t
{
    INACTIVE /*!< START_DET interrupt is inactive */,
    ACTIVE = 1 /*!< START_DET interrupt is active */
};
static_assert(sizeof(I2C0_IC_RAW_INTR_STAT_START_DET) == 1);

static constexpr uint16_t I2C0_IC_RAW_INTR_STAT_START_DET_id = 107;

/**
 * Converts I2C0_IC_RAW_INTR_STAT_START_DET to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(I2C0_IC_RAW_INTR_STAT_START_DET instance)
{
    const char *result = "UNKNOWN I2C0_IC_RAW_INTR_STAT_START_DET";

    switch (instance)
    {
    case I2C0_IC_RAW_INTR_STAT_START_DET::INACTIVE:
        result = "INACTIVE";
        break;
    case I2C0_IC_RAW_INTR_STAT_START_DET::ACTIVE:
        result = "ACTIVE";
        break;
    }

    return result;
}

/**
 * Converts a C string to I2C0_IC_RAW_INTR_STAT_START_DET.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        I2C0_IC_RAW_INTR_STAT_START_DET &output)
{
    bool result = false;

    if ((result = !strncmp(data, "INACTIVE", 8)))
    {
        output = I2C0_IC_RAW_INTR_STAT_START_DET::INACTIVE;
    }
    else if ((result = !strncmp(data, "ACTIVE", 6)))
    {
        output = I2C0_IC_RAW_INTR_STAT_START_DET::ACTIVE;
    }

    return result;
}

}; // namespace RP2040

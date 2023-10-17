/**
 * \file
 * \brief Generated by ifgen (3.1.4).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace RP2040
{

enum class I2C0_IC_STATUS_ACTIVITY : uint8_t
{
    INACTIVE /*!< I2C is idle */,
    ACTIVE = 1 /*!< I2C is active */
};
static_assert(sizeof(I2C0_IC_STATUS_ACTIVITY) == 1);

/**
 * Converts I2C0_IC_STATUS_ACTIVITY to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(I2C0_IC_STATUS_ACTIVITY instance)
{
    const char *result = "UNKNOWN I2C0_IC_STATUS_ACTIVITY";

    switch (instance)
    {
    case I2C0_IC_STATUS_ACTIVITY::INACTIVE:
        result = "INACTIVE";
        break;
    case I2C0_IC_STATUS_ACTIVITY::ACTIVE:
        result = "ACTIVE";
        break;
    }

    return result;
}

/**
 * Converts a C string to I2C0_IC_STATUS_ACTIVITY.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, I2C0_IC_STATUS_ACTIVITY &output)
{
    bool result = false;

    if ((result = !strncmp(data, "INACTIVE", 8)))
    {
        output = I2C0_IC_STATUS_ACTIVITY::INACTIVE;
    }
    else if ((result = !strncmp(data, "ACTIVE", 6)))
    {
        output = I2C0_IC_STATUS_ACTIVITY::ACTIVE;
    }

    return result;
}

}; // namespace RP2040

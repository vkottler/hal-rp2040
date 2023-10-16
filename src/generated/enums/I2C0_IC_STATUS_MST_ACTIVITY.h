/**
 * \file
 * \brief Generated by ifgen (3.1.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace RP2040
{

enum class I2C0_IC_STATUS_MST_ACTIVITY : uint8_t
{
    IDLE /*!< Master is idle */,
    ACTIVE = 1 /*!< Master not idle */
};
static_assert(sizeof(I2C0_IC_STATUS_MST_ACTIVITY) == 1);

/**
 * Converts I2C0_IC_STATUS_MST_ACTIVITY to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(I2C0_IC_STATUS_MST_ACTIVITY instance)
{
    const char *result = "UNKNOWN I2C0_IC_STATUS_MST_ACTIVITY";

    switch (instance)
    {
    case I2C0_IC_STATUS_MST_ACTIVITY::IDLE:
        result = "IDLE";
        break;
    case I2C0_IC_STATUS_MST_ACTIVITY::ACTIVE:
        result = "ACTIVE";
        break;
    }

    return result;
}

/**
 * Converts a C string to I2C0_IC_STATUS_MST_ACTIVITY.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, I2C0_IC_STATUS_MST_ACTIVITY &output)
{
    bool result = false;

    if ((result = !strncmp(data, "IDLE", 4)))
    {
        output = I2C0_IC_STATUS_MST_ACTIVITY::IDLE;
    }
    else if ((result = !strncmp(data, "ACTIVE", 6)))
    {
        output = I2C0_IC_STATUS_MST_ACTIVITY::ACTIVE;
    }

    return result;
}

}; // namespace RP2040

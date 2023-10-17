/**
 * \file
 * \brief Generated by ifgen (3.1.4).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace RP2040
{

enum class I2C0_IC_ENABLE_STATUS_SLV_DISABLED_WHILE_BUSY : uint8_t
{
    INACTIVE /*!< Slave is disabled when it is idle */,
    ACTIVE = 1 /*!< Slave is disabled when it is active */
};
static_assert(sizeof(I2C0_IC_ENABLE_STATUS_SLV_DISABLED_WHILE_BUSY) == 1);

/**
 * Converts I2C0_IC_ENABLE_STATUS_SLV_DISABLED_WHILE_BUSY to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(
    I2C0_IC_ENABLE_STATUS_SLV_DISABLED_WHILE_BUSY instance)
{
    const char *result =
        "UNKNOWN I2C0_IC_ENABLE_STATUS_SLV_DISABLED_WHILE_BUSY";

    switch (instance)
    {
    case I2C0_IC_ENABLE_STATUS_SLV_DISABLED_WHILE_BUSY::INACTIVE:
        result = "INACTIVE";
        break;
    case I2C0_IC_ENABLE_STATUS_SLV_DISABLED_WHILE_BUSY::ACTIVE:
        result = "ACTIVE";
        break;
    }

    return result;
}

/**
 * Converts a C string to I2C0_IC_ENABLE_STATUS_SLV_DISABLED_WHILE_BUSY.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        I2C0_IC_ENABLE_STATUS_SLV_DISABLED_WHILE_BUSY &output)
{
    bool result = false;

    if ((result = !strncmp(data, "INACTIVE", 8)))
    {
        output = I2C0_IC_ENABLE_STATUS_SLV_DISABLED_WHILE_BUSY::INACTIVE;
    }
    else if ((result = !strncmp(data, "ACTIVE", 6)))
    {
        output = I2C0_IC_ENABLE_STATUS_SLV_DISABLED_WHILE_BUSY::ACTIVE;
    }

    return result;
}

}; // namespace RP2040

/**
 * \file
 * \brief Generated by ifgen (3.1.2).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace RP2040
{

enum class I2C0_IC_ENABLE_STATUS_SLV_RX_DATA_LOST : uint8_t
{
    INACTIVE /*!< Slave RX Data is not lost */,
    ACTIVE = 1 /*!< Slave RX Data is lost */
};
static_assert(sizeof(I2C0_IC_ENABLE_STATUS_SLV_RX_DATA_LOST) == 1);

/**
 * Converts I2C0_IC_ENABLE_STATUS_SLV_RX_DATA_LOST to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(I2C0_IC_ENABLE_STATUS_SLV_RX_DATA_LOST instance)
{
    const char *result = "UNKNOWN I2C0_IC_ENABLE_STATUS_SLV_RX_DATA_LOST";

    switch (instance)
    {
    case I2C0_IC_ENABLE_STATUS_SLV_RX_DATA_LOST::INACTIVE:
        result = "INACTIVE";
        break;
    case I2C0_IC_ENABLE_STATUS_SLV_RX_DATA_LOST::ACTIVE:
        result = "ACTIVE";
        break;
    }

    return result;
}

/**
 * Converts a C string to I2C0_IC_ENABLE_STATUS_SLV_RX_DATA_LOST.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        I2C0_IC_ENABLE_STATUS_SLV_RX_DATA_LOST &output)
{
    bool result = false;

    if ((result = !strncmp(data, "INACTIVE", 8)))
    {
        output = I2C0_IC_ENABLE_STATUS_SLV_RX_DATA_LOST::INACTIVE;
    }
    else if ((result = !strncmp(data, "ACTIVE", 6)))
    {
        output = I2C0_IC_ENABLE_STATUS_SLV_RX_DATA_LOST::ACTIVE;
    }

    return result;
}

}; // namespace RP2040

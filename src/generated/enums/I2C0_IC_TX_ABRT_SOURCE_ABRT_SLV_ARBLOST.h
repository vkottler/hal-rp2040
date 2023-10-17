/**
 * \file
 * \brief Generated by ifgen (3.1.6).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace RP2040
{

enum class I2C0_IC_TX_ABRT_SOURCE_ABRT_SLV_ARBLOST : uint8_t
{
    VOID /*!< Slave lost arbitration to remote master- scenario not present */,
    GENERATED = 1 /*!< Slave lost arbitration to remote master */
};
static_assert(sizeof(I2C0_IC_TX_ABRT_SOURCE_ABRT_SLV_ARBLOST) == 1);

/**
 * Converts I2C0_IC_TX_ABRT_SOURCE_ABRT_SLV_ARBLOST to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(I2C0_IC_TX_ABRT_SOURCE_ABRT_SLV_ARBLOST instance)
{
    const char *result = "UNKNOWN I2C0_IC_TX_ABRT_SOURCE_ABRT_SLV_ARBLOST";

    switch (instance)
    {
    case I2C0_IC_TX_ABRT_SOURCE_ABRT_SLV_ARBLOST::VOID:
        result = "VOID";
        break;
    case I2C0_IC_TX_ABRT_SOURCE_ABRT_SLV_ARBLOST::GENERATED:
        result = "GENERATED";
        break;
    }

    return result;
}

/**
 * Converts a C string to I2C0_IC_TX_ABRT_SOURCE_ABRT_SLV_ARBLOST.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        I2C0_IC_TX_ABRT_SOURCE_ABRT_SLV_ARBLOST &output)
{
    bool result = false;

    if ((result = !strncmp(data, "VOID", 4)))
    {
        output = I2C0_IC_TX_ABRT_SOURCE_ABRT_SLV_ARBLOST::VOID;
    }
    else if ((result = !strncmp(data, "GENERATED", 9)))
    {
        output = I2C0_IC_TX_ABRT_SOURCE_ABRT_SLV_ARBLOST::GENERATED;
    }

    return result;
}

}; // namespace RP2040

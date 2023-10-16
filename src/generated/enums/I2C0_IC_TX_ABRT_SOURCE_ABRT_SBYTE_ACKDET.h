/**
 * \file
 * \brief Generated by ifgen (3.1.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace RP2040
{

enum class I2C0_IC_TX_ABRT_SOURCE_ABRT_SBYTE_ACKDET : uint8_t
{
    ABRT_SBYTE_ACKDET_VOID /*!< ACK detected for START byte- scenario not
                              present */
        ,
    ABRT_SBYTE_ACKDET_GENERATED = 1 /*!< ACK detected for START byte */
};
static_assert(sizeof(I2C0_IC_TX_ABRT_SOURCE_ABRT_SBYTE_ACKDET) == 1);

/**
 * Converts I2C0_IC_TX_ABRT_SOURCE_ABRT_SBYTE_ACKDET to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(I2C0_IC_TX_ABRT_SOURCE_ABRT_SBYTE_ACKDET instance)
{
    const char *result = "UNKNOWN I2C0_IC_TX_ABRT_SOURCE_ABRT_SBYTE_ACKDET";

    switch (instance)
    {
    case I2C0_IC_TX_ABRT_SOURCE_ABRT_SBYTE_ACKDET::ABRT_SBYTE_ACKDET_VOID:
        result = "ABRT_SBYTE_ACKDET_VOID";
        break;
    case I2C0_IC_TX_ABRT_SOURCE_ABRT_SBYTE_ACKDET::ABRT_SBYTE_ACKDET_GENERATED:
        result = "ABRT_SBYTE_ACKDET_GENERATED";
        break;
    }

    return result;
}

/**
 * Converts a C string to I2C0_IC_TX_ABRT_SOURCE_ABRT_SBYTE_ACKDET.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        I2C0_IC_TX_ABRT_SOURCE_ABRT_SBYTE_ACKDET &output)
{
    bool result = false;

    if ((result = !strncmp(data, "ABRT_SBYTE_ACKDET_VOID", 22)))
    {
        output =
            I2C0_IC_TX_ABRT_SOURCE_ABRT_SBYTE_ACKDET::ABRT_SBYTE_ACKDET_VOID;
    }
    else if ((result = !strncmp(data, "ABRT_SBYTE_ACKDET_GENERATED", 27)))
    {
        output = I2C0_IC_TX_ABRT_SOURCE_ABRT_SBYTE_ACKDET::
            ABRT_SBYTE_ACKDET_GENERATED;
    }

    return result;
}

}; // namespace RP2040

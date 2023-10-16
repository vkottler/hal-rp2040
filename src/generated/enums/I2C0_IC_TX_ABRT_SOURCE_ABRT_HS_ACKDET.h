/**
 * \file
 * \brief Generated by ifgen (3.1.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace RP2040
{

enum class I2C0_IC_TX_ABRT_SOURCE_ABRT_HS_ACKDET : uint8_t
{
    ABRT_HS_ACK_VOID /*!< HS Master code ACKed in HS Mode- scenario not present
                      */
        ,
    ABRT_HS_ACK_GENERATED = 1 /*!< HS Master code ACKed in HS Mode */
};
static_assert(sizeof(I2C0_IC_TX_ABRT_SOURCE_ABRT_HS_ACKDET) == 1);

/**
 * Converts I2C0_IC_TX_ABRT_SOURCE_ABRT_HS_ACKDET to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(I2C0_IC_TX_ABRT_SOURCE_ABRT_HS_ACKDET instance)
{
    const char *result = "UNKNOWN I2C0_IC_TX_ABRT_SOURCE_ABRT_HS_ACKDET";

    switch (instance)
    {
    case I2C0_IC_TX_ABRT_SOURCE_ABRT_HS_ACKDET::ABRT_HS_ACK_VOID:
        result = "ABRT_HS_ACK_VOID";
        break;
    case I2C0_IC_TX_ABRT_SOURCE_ABRT_HS_ACKDET::ABRT_HS_ACK_GENERATED:
        result = "ABRT_HS_ACK_GENERATED";
        break;
    }

    return result;
}

/**
 * Converts a C string to I2C0_IC_TX_ABRT_SOURCE_ABRT_HS_ACKDET.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        I2C0_IC_TX_ABRT_SOURCE_ABRT_HS_ACKDET &output)
{
    bool result = false;

    if ((result = !strncmp(data, "ABRT_HS_ACK_VOID", 16)))
    {
        output = I2C0_IC_TX_ABRT_SOURCE_ABRT_HS_ACKDET::ABRT_HS_ACK_VOID;
    }
    else if ((result = !strncmp(data, "ABRT_HS_ACK_GENERATED", 21)))
    {
        output = I2C0_IC_TX_ABRT_SOURCE_ABRT_HS_ACKDET::ABRT_HS_ACK_GENERATED;
    }

    return result;
}

}; // namespace RP2040

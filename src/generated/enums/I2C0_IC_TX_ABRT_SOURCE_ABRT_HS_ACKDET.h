/**
 * \file
 * \brief Generated by ifgen (3.1.4).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace RP2040
{

enum class I2C0_IC_TX_ABRT_SOURCE_ABRT_HS_ACKDET : uint8_t
{
    VOID /*!< HS Master code ACKed in HS Mode- scenario not present */,
    GENERATED = 1 /*!< HS Master code ACKed in HS Mode */
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
    case I2C0_IC_TX_ABRT_SOURCE_ABRT_HS_ACKDET::VOID:
        result = "VOID";
        break;
    case I2C0_IC_TX_ABRT_SOURCE_ABRT_HS_ACKDET::GENERATED:
        result = "GENERATED";
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

    if ((result = !strncmp(data, "VOID", 4)))
    {
        output = I2C0_IC_TX_ABRT_SOURCE_ABRT_HS_ACKDET::VOID;
    }
    else if ((result = !strncmp(data, "GENERATED", 9)))
    {
        output = I2C0_IC_TX_ABRT_SOURCE_ABRT_HS_ACKDET::GENERATED;
    }

    return result;
}

}; // namespace RP2040

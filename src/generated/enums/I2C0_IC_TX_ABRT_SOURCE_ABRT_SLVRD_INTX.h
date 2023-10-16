/**
 * \file
 * \brief Generated by ifgen (3.1.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace RP2040
{

enum class I2C0_IC_TX_ABRT_SOURCE_ABRT_SLVRD_INTX : uint8_t
{
    ABRT_SLVRD_INTX_VOID /*!< Slave trying to transmit to remote master in read
                            mode- scenario not present */
        ,
    ABRT_SLVRD_INTX_GENERATED =
        1 /*!< Slave trying to transmit to remote master in read mode */
};
static_assert(sizeof(I2C0_IC_TX_ABRT_SOURCE_ABRT_SLVRD_INTX) == 1);

/**
 * Converts I2C0_IC_TX_ABRT_SOURCE_ABRT_SLVRD_INTX to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(I2C0_IC_TX_ABRT_SOURCE_ABRT_SLVRD_INTX instance)
{
    const char *result = "UNKNOWN I2C0_IC_TX_ABRT_SOURCE_ABRT_SLVRD_INTX";

    switch (instance)
    {
    case I2C0_IC_TX_ABRT_SOURCE_ABRT_SLVRD_INTX::ABRT_SLVRD_INTX_VOID:
        result = "ABRT_SLVRD_INTX_VOID";
        break;
    case I2C0_IC_TX_ABRT_SOURCE_ABRT_SLVRD_INTX::ABRT_SLVRD_INTX_GENERATED:
        result = "ABRT_SLVRD_INTX_GENERATED";
        break;
    }

    return result;
}

/**
 * Converts a C string to I2C0_IC_TX_ABRT_SOURCE_ABRT_SLVRD_INTX.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        I2C0_IC_TX_ABRT_SOURCE_ABRT_SLVRD_INTX &output)
{
    bool result = false;

    if ((result = !strncmp(data, "ABRT_SLVRD_INTX_VOID", 20)))
    {
        output = I2C0_IC_TX_ABRT_SOURCE_ABRT_SLVRD_INTX::ABRT_SLVRD_INTX_VOID;
    }
    else if ((result = !strncmp(data, "ABRT_SLVRD_INTX_GENERATED", 25)))
    {
        output =
            I2C0_IC_TX_ABRT_SOURCE_ABRT_SLVRD_INTX::ABRT_SLVRD_INTX_GENERATED;
    }

    return result;
}

}; // namespace RP2040

/**
 * \file
 * \brief Generated by ifgen (3.1.7).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace RP2040
{

enum class I2C0_IC_TX_ABRT_SOURCE_ABRT_GCALL_READ : uint8_t
{
    VOID /*!< GCALL is followed by read from bus-scenario not present */,
    GENERATED = 1 /*!< GCALL is followed by read from bus */
};
static_assert(sizeof(I2C0_IC_TX_ABRT_SOURCE_ABRT_GCALL_READ) == 1);

/**
 * Converts I2C0_IC_TX_ABRT_SOURCE_ABRT_GCALL_READ to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(I2C0_IC_TX_ABRT_SOURCE_ABRT_GCALL_READ instance)
{
    const char *result = "UNKNOWN I2C0_IC_TX_ABRT_SOURCE_ABRT_GCALL_READ";

    switch (instance)
    {
    case I2C0_IC_TX_ABRT_SOURCE_ABRT_GCALL_READ::VOID:
        result = "VOID";
        break;
    case I2C0_IC_TX_ABRT_SOURCE_ABRT_GCALL_READ::GENERATED:
        result = "GENERATED";
        break;
    }

    return result;
}

/**
 * Converts a C string to I2C0_IC_TX_ABRT_SOURCE_ABRT_GCALL_READ.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        I2C0_IC_TX_ABRT_SOURCE_ABRT_GCALL_READ &output)
{
    bool result = false;

    if ((result = !strncmp(data, "VOID", 4)))
    {
        output = I2C0_IC_TX_ABRT_SOURCE_ABRT_GCALL_READ::VOID;
    }
    else if ((result = !strncmp(data, "GENERATED", 9)))
    {
        output = I2C0_IC_TX_ABRT_SOURCE_ABRT_GCALL_READ::GENERATED;
    }

    return result;
}

}; // namespace RP2040

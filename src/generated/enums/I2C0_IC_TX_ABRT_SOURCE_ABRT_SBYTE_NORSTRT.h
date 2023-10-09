/**
 * \file
 * \brief Generated by ifgen (2.6.3).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace RP2040
{

enum class I2C0_IC_TX_ABRT_SOURCE_ABRT_SBYTE_NORSTRT : uint8_t
{
    ABRT_SBYTE_NORSTRT_VOID /*!< User trying to send START byte when RESTART disabled- scenario not present */,
    ABRT_SBYTE_NORSTRT_GENERATED = 1 /*!< User trying to send START byte when RESTART disabled */
};
static_assert(sizeof(I2C0_IC_TX_ABRT_SOURCE_ABRT_SBYTE_NORSTRT) == 1);

static constexpr uint16_t I2C0_IC_TX_ABRT_SOURCE_ABRT_SBYTE_NORSTRT_id = 395;

/**
 * Converts I2C0_IC_TX_ABRT_SOURCE_ABRT_SBYTE_NORSTRT to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(I2C0_IC_TX_ABRT_SOURCE_ABRT_SBYTE_NORSTRT instance)
{
    const char *result = "UNKNOWN I2C0_IC_TX_ABRT_SOURCE_ABRT_SBYTE_NORSTRT";

    switch (instance)
    {
    case I2C0_IC_TX_ABRT_SOURCE_ABRT_SBYTE_NORSTRT::ABRT_SBYTE_NORSTRT_VOID:
        result = "ABRT_SBYTE_NORSTRT_VOID";
        break;
    case I2C0_IC_TX_ABRT_SOURCE_ABRT_SBYTE_NORSTRT::ABRT_SBYTE_NORSTRT_GENERATED:
        result = "ABRT_SBYTE_NORSTRT_GENERATED";
        break;
    }

    return result;
}

/**
 * Converts a C string to I2C0_IC_TX_ABRT_SOURCE_ABRT_SBYTE_NORSTRT.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, I2C0_IC_TX_ABRT_SOURCE_ABRT_SBYTE_NORSTRT &output)
{
    bool result = false;

    if ((result = !strncmp(data, "ABRT_SBYTE_NORSTRT_VOID", 23)))
    {
        output = I2C0_IC_TX_ABRT_SOURCE_ABRT_SBYTE_NORSTRT::ABRT_SBYTE_NORSTRT_VOID;
    }
    else if ((result = !strncmp(data, "ABRT_SBYTE_NORSTRT_GENERATED", 28)))
    {
        output = I2C0_IC_TX_ABRT_SOURCE_ABRT_SBYTE_NORSTRT::ABRT_SBYTE_NORSTRT_GENERATED;
    }

    return result;
}

}; // namespace RP2040
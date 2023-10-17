/**
 * \file
 * \brief Generated by ifgen (3.1.4).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace RP2040
{

enum class I2C0_IC_TX_ABRT_SOURCE_ABRT_HS_NORSTRT : uint8_t
{
    VOID /*!< User trying to switch Master to HS mode when RESTART disabled-
            scenario not present */
        ,
    GENERATED =
        1 /*!< User trying to switch Master to HS mode when RESTART disabled */
};
static_assert(sizeof(I2C0_IC_TX_ABRT_SOURCE_ABRT_HS_NORSTRT) == 1);

/**
 * Converts I2C0_IC_TX_ABRT_SOURCE_ABRT_HS_NORSTRT to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(I2C0_IC_TX_ABRT_SOURCE_ABRT_HS_NORSTRT instance)
{
    const char *result = "UNKNOWN I2C0_IC_TX_ABRT_SOURCE_ABRT_HS_NORSTRT";

    switch (instance)
    {
    case I2C0_IC_TX_ABRT_SOURCE_ABRT_HS_NORSTRT::VOID:
        result = "VOID";
        break;
    case I2C0_IC_TX_ABRT_SOURCE_ABRT_HS_NORSTRT::GENERATED:
        result = "GENERATED";
        break;
    }

    return result;
}

/**
 * Converts a C string to I2C0_IC_TX_ABRT_SOURCE_ABRT_HS_NORSTRT.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        I2C0_IC_TX_ABRT_SOURCE_ABRT_HS_NORSTRT &output)
{
    bool result = false;

    if ((result = !strncmp(data, "VOID", 4)))
    {
        output = I2C0_IC_TX_ABRT_SOURCE_ABRT_HS_NORSTRT::VOID;
    }
    else if ((result = !strncmp(data, "GENERATED", 9)))
    {
        output = I2C0_IC_TX_ABRT_SOURCE_ABRT_HS_NORSTRT::GENERATED;
    }

    return result;
}

}; // namespace RP2040

/**
 * \file
 * \brief Generated by ifgen (3.1.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace RP2040
{

enum class I2C0_IC_TX_ABRT_SOURCE_ABRT_10B_RD_NORSTRT : uint8_t
{
    ABRT_10B_RD_VOID /*!< Master not trying to read in 10Bit addressing mode
                        when RESTART disabled */
        ,
    ABRT_10B_RD_GENERATED = 1 /*!< Master trying to read in 10Bit addressing
                                 mode when RESTART disabled */
};
static_assert(sizeof(I2C0_IC_TX_ABRT_SOURCE_ABRT_10B_RD_NORSTRT) == 1);

static constexpr uint16_t I2C0_IC_TX_ABRT_SOURCE_ABRT_10B_RD_NORSTRT_id = 130;

/**
 * Converts I2C0_IC_TX_ABRT_SOURCE_ABRT_10B_RD_NORSTRT to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(
    I2C0_IC_TX_ABRT_SOURCE_ABRT_10B_RD_NORSTRT instance)
{
    const char *result = "UNKNOWN I2C0_IC_TX_ABRT_SOURCE_ABRT_10B_RD_NORSTRT";

    switch (instance)
    {
    case I2C0_IC_TX_ABRT_SOURCE_ABRT_10B_RD_NORSTRT::ABRT_10B_RD_VOID:
        result = "ABRT_10B_RD_VOID";
        break;
    case I2C0_IC_TX_ABRT_SOURCE_ABRT_10B_RD_NORSTRT::ABRT_10B_RD_GENERATED:
        result = "ABRT_10B_RD_GENERATED";
        break;
    }

    return result;
}

/**
 * Converts a C string to I2C0_IC_TX_ABRT_SOURCE_ABRT_10B_RD_NORSTRT.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        I2C0_IC_TX_ABRT_SOURCE_ABRT_10B_RD_NORSTRT &output)
{
    bool result = false;

    if ((result = !strncmp(data, "ABRT_10B_RD_VOID", 16)))
    {
        output = I2C0_IC_TX_ABRT_SOURCE_ABRT_10B_RD_NORSTRT::ABRT_10B_RD_VOID;
    }
    else if ((result = !strncmp(data, "ABRT_10B_RD_GENERATED", 21)))
    {
        output =
            I2C0_IC_TX_ABRT_SOURCE_ABRT_10B_RD_NORSTRT::ABRT_10B_RD_GENERATED;
    }

    return result;
}

}; // namespace RP2040

/**
 * \file
 * \brief Generated by ifgen (3.1.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace RP2040
{

enum class I2C0_IC_TX_ABRT_SOURCE_ABRT_MASTER_DIS : uint8_t
{
    ABRT_MASTER_DIS_VOID /*!< User initiating master operation when MASTER
                            disabled- scenario not present */
        ,
    ABRT_MASTER_DIS_GENERATED =
        1 /*!< User initiating master operation when MASTER disabled */
};
static_assert(sizeof(I2C0_IC_TX_ABRT_SOURCE_ABRT_MASTER_DIS) == 1);

static constexpr uint16_t I2C0_IC_TX_ABRT_SOURCE_ABRT_MASTER_DIS_id = 131;

/**
 * Converts I2C0_IC_TX_ABRT_SOURCE_ABRT_MASTER_DIS to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(I2C0_IC_TX_ABRT_SOURCE_ABRT_MASTER_DIS instance)
{
    const char *result = "UNKNOWN I2C0_IC_TX_ABRT_SOURCE_ABRT_MASTER_DIS";

    switch (instance)
    {
    case I2C0_IC_TX_ABRT_SOURCE_ABRT_MASTER_DIS::ABRT_MASTER_DIS_VOID:
        result = "ABRT_MASTER_DIS_VOID";
        break;
    case I2C0_IC_TX_ABRT_SOURCE_ABRT_MASTER_DIS::ABRT_MASTER_DIS_GENERATED:
        result = "ABRT_MASTER_DIS_GENERATED";
        break;
    }

    return result;
}

/**
 * Converts a C string to I2C0_IC_TX_ABRT_SOURCE_ABRT_MASTER_DIS.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        I2C0_IC_TX_ABRT_SOURCE_ABRT_MASTER_DIS &output)
{
    bool result = false;

    if ((result = !strncmp(data, "ABRT_MASTER_DIS_VOID", 20)))
    {
        output = I2C0_IC_TX_ABRT_SOURCE_ABRT_MASTER_DIS::ABRT_MASTER_DIS_VOID;
    }
    else if ((result = !strncmp(data, "ABRT_MASTER_DIS_GENERATED", 25)))
    {
        output =
            I2C0_IC_TX_ABRT_SOURCE_ABRT_MASTER_DIS::ABRT_MASTER_DIS_GENERATED;
    }

    return result;
}

}; // namespace RP2040

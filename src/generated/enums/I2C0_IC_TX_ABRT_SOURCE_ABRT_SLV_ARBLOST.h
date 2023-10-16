/**
 * \file
 * \brief Generated by ifgen (3.1.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace RP2040
{

enum class I2C0_IC_TX_ABRT_SOURCE_ABRT_SLV_ARBLOST : uint8_t
{
    ABRT_SLV_ARBLOST_VOID /*!< Slave lost arbitration to remote master-
                             scenario not present */
        ,
    ABRT_SLV_ARBLOST_GENERATED =
        1 /*!< Slave lost arbitration to remote master */
};
static_assert(sizeof(I2C0_IC_TX_ABRT_SOURCE_ABRT_SLV_ARBLOST) == 1);

static constexpr uint16_t I2C0_IC_TX_ABRT_SOURCE_ABRT_SLV_ARBLOST_id = 134;

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
    case I2C0_IC_TX_ABRT_SOURCE_ABRT_SLV_ARBLOST::ABRT_SLV_ARBLOST_VOID:
        result = "ABRT_SLV_ARBLOST_VOID";
        break;
    case I2C0_IC_TX_ABRT_SOURCE_ABRT_SLV_ARBLOST::ABRT_SLV_ARBLOST_GENERATED:
        result = "ABRT_SLV_ARBLOST_GENERATED";
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

    if ((result = !strncmp(data, "ABRT_SLV_ARBLOST_VOID", 21)))
    {
        output =
            I2C0_IC_TX_ABRT_SOURCE_ABRT_SLV_ARBLOST::ABRT_SLV_ARBLOST_VOID;
    }
    else if ((result = !strncmp(data, "ABRT_SLV_ARBLOST_GENERATED", 26)))
    {
        output = I2C0_IC_TX_ABRT_SOURCE_ABRT_SLV_ARBLOST::
            ABRT_SLV_ARBLOST_GENERATED;
    }

    return result;
}

}; // namespace RP2040

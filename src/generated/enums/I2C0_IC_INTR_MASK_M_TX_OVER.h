/**
 * \file
 * \brief Generated by ifgen (3.1.6).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace RP2040
{

enum class I2C0_IC_INTR_MASK_M_TX_OVER : uint8_t
{
    ENABLED /*!< TX_OVER interrupt is masked */,
    DISABLED = 1 /*!< TX_OVER interrupt is unmasked */
};
static_assert(sizeof(I2C0_IC_INTR_MASK_M_TX_OVER) == 1);

/**
 * Converts I2C0_IC_INTR_MASK_M_TX_OVER to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(I2C0_IC_INTR_MASK_M_TX_OVER instance)
{
    const char *result = "UNKNOWN I2C0_IC_INTR_MASK_M_TX_OVER";

    switch (instance)
    {
    case I2C0_IC_INTR_MASK_M_TX_OVER::ENABLED:
        result = "ENABLED";
        break;
    case I2C0_IC_INTR_MASK_M_TX_OVER::DISABLED:
        result = "DISABLED";
        break;
    }

    return result;
}

/**
 * Converts a C string to I2C0_IC_INTR_MASK_M_TX_OVER.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, I2C0_IC_INTR_MASK_M_TX_OVER &output)
{
    bool result = false;

    if ((result = !strncmp(data, "ENABLED", 7)))
    {
        output = I2C0_IC_INTR_MASK_M_TX_OVER::ENABLED;
    }
    else if ((result = !strncmp(data, "DISABLED", 8)))
    {
        output = I2C0_IC_INTR_MASK_M_TX_OVER::DISABLED;
    }

    return result;
}

}; // namespace RP2040

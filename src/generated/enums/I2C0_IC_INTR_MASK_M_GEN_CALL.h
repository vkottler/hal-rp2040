/**
 * \file
 * \brief Generated by ifgen (3.1.7).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace RP2040
{

enum class I2C0_IC_INTR_MASK_M_GEN_CALL : uint8_t
{
    ENABLED /*!< GEN_CALL interrupt is masked */,
    DISABLED = 1 /*!< GEN_CALL interrupt is unmasked */
};
static_assert(sizeof(I2C0_IC_INTR_MASK_M_GEN_CALL) == 1);

/**
 * Converts I2C0_IC_INTR_MASK_M_GEN_CALL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(I2C0_IC_INTR_MASK_M_GEN_CALL instance)
{
    const char *result = "UNKNOWN I2C0_IC_INTR_MASK_M_GEN_CALL";

    switch (instance)
    {
    case I2C0_IC_INTR_MASK_M_GEN_CALL::ENABLED:
        result = "ENABLED";
        break;
    case I2C0_IC_INTR_MASK_M_GEN_CALL::DISABLED:
        result = "DISABLED";
        break;
    }

    return result;
}

/**
 * Converts a C string to I2C0_IC_INTR_MASK_M_GEN_CALL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, I2C0_IC_INTR_MASK_M_GEN_CALL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "ENABLED", 7)))
    {
        output = I2C0_IC_INTR_MASK_M_GEN_CALL::ENABLED;
    }
    else if ((result = !strncmp(data, "DISABLED", 8)))
    {
        output = I2C0_IC_INTR_MASK_M_GEN_CALL::DISABLED;
    }

    return result;
}

}; // namespace RP2040

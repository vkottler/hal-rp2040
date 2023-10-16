/**
 * \file
 * \brief Generated by ifgen (3.1.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace RP2040
{

enum class I2C0_IC_INTR_STAT_R_GEN_CALL : uint8_t
{
    INACTIVE /*!< R_GEN_CALL interrupt is inactive */,
    ACTIVE = 1 /*!< R_GEN_CALL interrupt is active */
};
static_assert(sizeof(I2C0_IC_INTR_STAT_R_GEN_CALL) == 1);

/**
 * Converts I2C0_IC_INTR_STAT_R_GEN_CALL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(I2C0_IC_INTR_STAT_R_GEN_CALL instance)
{
    const char *result = "UNKNOWN I2C0_IC_INTR_STAT_R_GEN_CALL";

    switch (instance)
    {
    case I2C0_IC_INTR_STAT_R_GEN_CALL::INACTIVE:
        result = "INACTIVE";
        break;
    case I2C0_IC_INTR_STAT_R_GEN_CALL::ACTIVE:
        result = "ACTIVE";
        break;
    }

    return result;
}

/**
 * Converts a C string to I2C0_IC_INTR_STAT_R_GEN_CALL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, I2C0_IC_INTR_STAT_R_GEN_CALL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "INACTIVE", 8)))
    {
        output = I2C0_IC_INTR_STAT_R_GEN_CALL::INACTIVE;
    }
    else if ((result = !strncmp(data, "ACTIVE", 6)))
    {
        output = I2C0_IC_INTR_STAT_R_GEN_CALL::ACTIVE;
    }

    return result;
}

}; // namespace RP2040

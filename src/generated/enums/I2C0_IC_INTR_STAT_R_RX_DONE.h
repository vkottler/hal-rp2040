/**
 * \file
 * \brief Generated by ifgen (2.6.3).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace RP2040
{

enum class I2C0_IC_INTR_STAT_R_RX_DONE : uint8_t
{
    INACTIVE /*!< R_RX_DONE interrupt is inactive */,
    ACTIVE = 1 /*!< R_RX_DONE interrupt is active */
};
static_assert(sizeof(I2C0_IC_INTR_STAT_R_RX_DONE) == 1);

static constexpr uint16_t I2C0_IC_INTR_STAT_R_RX_DONE_id = 344;

/**
 * Converts I2C0_IC_INTR_STAT_R_RX_DONE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(I2C0_IC_INTR_STAT_R_RX_DONE instance)
{
    const char *result = "UNKNOWN I2C0_IC_INTR_STAT_R_RX_DONE";

    switch (instance)
    {
    case I2C0_IC_INTR_STAT_R_RX_DONE::INACTIVE:
        result = "INACTIVE";
        break;
    case I2C0_IC_INTR_STAT_R_RX_DONE::ACTIVE:
        result = "ACTIVE";
        break;
    }

    return result;
}

/**
 * Converts a C string to I2C0_IC_INTR_STAT_R_RX_DONE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, I2C0_IC_INTR_STAT_R_RX_DONE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "INACTIVE", 8)))
    {
        output = I2C0_IC_INTR_STAT_R_RX_DONE::INACTIVE;
    }
    else if ((result = !strncmp(data, "ACTIVE", 6)))
    {
        output = I2C0_IC_INTR_STAT_R_RX_DONE::ACTIVE;
    }

    return result;
}

}; // namespace RP2040

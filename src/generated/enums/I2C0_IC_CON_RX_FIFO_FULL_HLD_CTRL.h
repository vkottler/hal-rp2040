/**
 * \file
 * \brief Generated by ifgen (2.6.3).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace RP2040
{

enum class I2C0_IC_CON_RX_FIFO_FULL_HLD_CTRL : uint8_t
{
    DISABLED /*!< Overflow when RX_FIFO is full */,
    ENABLED = 1 /*!< Hold bus when RX_FIFO is full */
};
static_assert(sizeof(I2C0_IC_CON_RX_FIFO_FULL_HLD_CTRL) == 1);

static constexpr uint16_t I2C0_IC_CON_RX_FIFO_FULL_HLD_CTRL_id = 330;

/**
 * Converts I2C0_IC_CON_RX_FIFO_FULL_HLD_CTRL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(I2C0_IC_CON_RX_FIFO_FULL_HLD_CTRL instance)
{
    const char *result = "UNKNOWN I2C0_IC_CON_RX_FIFO_FULL_HLD_CTRL";

    switch (instance)
    {
    case I2C0_IC_CON_RX_FIFO_FULL_HLD_CTRL::DISABLED:
        result = "DISABLED";
        break;
    case I2C0_IC_CON_RX_FIFO_FULL_HLD_CTRL::ENABLED:
        result = "ENABLED";
        break;
    }

    return result;
}

/**
 * Converts a C string to I2C0_IC_CON_RX_FIFO_FULL_HLD_CTRL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, I2C0_IC_CON_RX_FIFO_FULL_HLD_CTRL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "DISABLED", 8)))
    {
        output = I2C0_IC_CON_RX_FIFO_FULL_HLD_CTRL::DISABLED;
    }
    else if ((result = !strncmp(data, "ENABLED", 7)))
    {
        output = I2C0_IC_CON_RX_FIFO_FULL_HLD_CTRL::ENABLED;
    }

    return result;
}

}; // namespace RP2040

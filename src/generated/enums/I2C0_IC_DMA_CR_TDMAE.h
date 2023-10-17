/**
 * \file
 * \brief Generated by ifgen (3.1.2).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace RP2040
{

enum class I2C0_IC_DMA_CR_TDMAE : uint8_t
{
    DISABLED /*!< transmit FIFO DMA channel disabled */,
    ENABLED = 1 /*!< Transmit FIFO DMA channel enabled */
};
static_assert(sizeof(I2C0_IC_DMA_CR_TDMAE) == 1);

/**
 * Converts I2C0_IC_DMA_CR_TDMAE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(I2C0_IC_DMA_CR_TDMAE instance)
{
    const char *result = "UNKNOWN I2C0_IC_DMA_CR_TDMAE";

    switch (instance)
    {
    case I2C0_IC_DMA_CR_TDMAE::DISABLED:
        result = "DISABLED";
        break;
    case I2C0_IC_DMA_CR_TDMAE::ENABLED:
        result = "ENABLED";
        break;
    }

    return result;
}

/**
 * Converts a C string to I2C0_IC_DMA_CR_TDMAE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, I2C0_IC_DMA_CR_TDMAE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "DISABLED", 8)))
    {
        output = I2C0_IC_DMA_CR_TDMAE::DISABLED;
    }
    else if ((result = !strncmp(data, "ENABLED", 7)))
    {
        output = I2C0_IC_DMA_CR_TDMAE::ENABLED;
    }

    return result;
}

}; // namespace RP2040

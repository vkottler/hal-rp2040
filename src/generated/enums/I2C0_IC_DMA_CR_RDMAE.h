/**
 * \file
 * \brief Generated by ifgen (3.1.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace RP2040
{

enum class I2C0_IC_DMA_CR_RDMAE : uint8_t
{
    DISABLED /*!< Receive FIFO DMA channel disabled */,
    ENABLED = 1 /*!< Receive FIFO DMA channel enabled */
};
static_assert(sizeof(I2C0_IC_DMA_CR_RDMAE) == 1);

/**
 * Converts I2C0_IC_DMA_CR_RDMAE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(I2C0_IC_DMA_CR_RDMAE instance)
{
    const char *result = "UNKNOWN I2C0_IC_DMA_CR_RDMAE";

    switch (instance)
    {
    case I2C0_IC_DMA_CR_RDMAE::DISABLED:
        result = "DISABLED";
        break;
    case I2C0_IC_DMA_CR_RDMAE::ENABLED:
        result = "ENABLED";
        break;
    }

    return result;
}

/**
 * Converts a C string to I2C0_IC_DMA_CR_RDMAE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, I2C0_IC_DMA_CR_RDMAE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "DISABLED", 8)))
    {
        output = I2C0_IC_DMA_CR_RDMAE::DISABLED;
    }
    else if ((result = !strncmp(data, "ENABLED", 7)))
    {
        output = I2C0_IC_DMA_CR_RDMAE::ENABLED;
    }

    return result;
}

}; // namespace RP2040

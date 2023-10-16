/**
 * \file
 * \brief Generated by ifgen (3.1.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace RP2040
{

enum class IO_BANK0_GPIO11_CTRL_IRQOVER : uint8_t
{
    NORMAL /*!< don't invert the interrupt */,
    INVERT = 1 /*!< invert the interrupt */,
    LOW = 2 /*!< drive interrupt low */,
    HIGH = 3 /*!< drive interrupt high */
};
static_assert(sizeof(IO_BANK0_GPIO11_CTRL_IRQOVER) == 1);

static constexpr uint16_t IO_BANK0_GPIO11_CTRL_IRQOVER_id = 203;

/**
 * Converts IO_BANK0_GPIO11_CTRL_IRQOVER to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(IO_BANK0_GPIO11_CTRL_IRQOVER instance)
{
    const char *result = "UNKNOWN IO_BANK0_GPIO11_CTRL_IRQOVER";

    switch (instance)
    {
    case IO_BANK0_GPIO11_CTRL_IRQOVER::NORMAL:
        result = "NORMAL";
        break;
    case IO_BANK0_GPIO11_CTRL_IRQOVER::INVERT:
        result = "INVERT";
        break;
    case IO_BANK0_GPIO11_CTRL_IRQOVER::LOW:
        result = "LOW";
        break;
    case IO_BANK0_GPIO11_CTRL_IRQOVER::HIGH:
        result = "HIGH";
        break;
    }

    return result;
}

/**
 * Converts a C string to IO_BANK0_GPIO11_CTRL_IRQOVER.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, IO_BANK0_GPIO11_CTRL_IRQOVER &output)
{
    bool result = false;

    if ((result = !strncmp(data, "NORMAL", 6)))
    {
        output = IO_BANK0_GPIO11_CTRL_IRQOVER::NORMAL;
    }
    else if ((result = !strncmp(data, "INVERT", 6)))
    {
        output = IO_BANK0_GPIO11_CTRL_IRQOVER::INVERT;
    }
    else if ((result = !strncmp(data, "LOW", 3)))
    {
        output = IO_BANK0_GPIO11_CTRL_IRQOVER::LOW;
    }
    else if ((result = !strncmp(data, "HIGH", 4)))
    {
        output = IO_BANK0_GPIO11_CTRL_IRQOVER::HIGH;
    }

    return result;
}

}; // namespace RP2040

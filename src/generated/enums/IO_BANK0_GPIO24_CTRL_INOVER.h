/**
 * \file
 * \brief Generated by ifgen (3.2.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace RP2040
{

enum class IO_BANK0_GPIO24_CTRL_INOVER : uint8_t
{
    NORMAL /*!< don't invert the peri input */,
    INVERT = 1 /*!< invert the peri input */,
    LOW = 2 /*!< drive peri input low */,
    HIGH = 3 /*!< drive peri input high */
};
static_assert(sizeof(IO_BANK0_GPIO24_CTRL_INOVER) == 1);

/**
 * Converts IO_BANK0_GPIO24_CTRL_INOVER to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(IO_BANK0_GPIO24_CTRL_INOVER instance)
{
    const char *result = "UNKNOWN IO_BANK0_GPIO24_CTRL_INOVER";

    switch (instance)
    {
    case IO_BANK0_GPIO24_CTRL_INOVER::NORMAL:
        result = "NORMAL";
        break;
    case IO_BANK0_GPIO24_CTRL_INOVER::INVERT:
        result = "INVERT";
        break;
    case IO_BANK0_GPIO24_CTRL_INOVER::LOW:
        result = "LOW";
        break;
    case IO_BANK0_GPIO24_CTRL_INOVER::HIGH:
        result = "HIGH";
        break;
    }

    return result;
}

/**
 * Converts a C string to IO_BANK0_GPIO24_CTRL_INOVER.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, IO_BANK0_GPIO24_CTRL_INOVER &output)
{
    bool result = false;

    if ((result = !strncmp(data, "NORMAL", 6)))
    {
        output = IO_BANK0_GPIO24_CTRL_INOVER::NORMAL;
    }
    else if ((result = !strncmp(data, "INVERT", 6)))
    {
        output = IO_BANK0_GPIO24_CTRL_INOVER::INVERT;
    }
    else if ((result = !strncmp(data, "LOW", 3)))
    {
        output = IO_BANK0_GPIO24_CTRL_INOVER::LOW;
    }
    else if ((result = !strncmp(data, "HIGH", 4)))
    {
        output = IO_BANK0_GPIO24_CTRL_INOVER::HIGH;
    }

    return result;
}

}; // namespace RP2040

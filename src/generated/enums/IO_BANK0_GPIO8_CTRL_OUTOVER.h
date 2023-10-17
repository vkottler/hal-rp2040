/**
 * \file
 * \brief Generated by ifgen (3.1.7).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace RP2040
{

enum class IO_BANK0_GPIO8_CTRL_OUTOVER : uint8_t
{
    NORMAL /*!< drive output from peripheral signal selected by funcsel */,
    INVERT = 1 /*!< drive output from inverse of peripheral signal selected by
                  funcsel */
        ,
    LOW = 2 /*!< drive output low */,
    HIGH = 3 /*!< drive output high */
};
static_assert(sizeof(IO_BANK0_GPIO8_CTRL_OUTOVER) == 1);

/**
 * Converts IO_BANK0_GPIO8_CTRL_OUTOVER to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(IO_BANK0_GPIO8_CTRL_OUTOVER instance)
{
    const char *result = "UNKNOWN IO_BANK0_GPIO8_CTRL_OUTOVER";

    switch (instance)
    {
    case IO_BANK0_GPIO8_CTRL_OUTOVER::NORMAL:
        result = "NORMAL";
        break;
    case IO_BANK0_GPIO8_CTRL_OUTOVER::INVERT:
        result = "INVERT";
        break;
    case IO_BANK0_GPIO8_CTRL_OUTOVER::LOW:
        result = "LOW";
        break;
    case IO_BANK0_GPIO8_CTRL_OUTOVER::HIGH:
        result = "HIGH";
        break;
    }

    return result;
}

/**
 * Converts a C string to IO_BANK0_GPIO8_CTRL_OUTOVER.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, IO_BANK0_GPIO8_CTRL_OUTOVER &output)
{
    bool result = false;

    if ((result = !strncmp(data, "NORMAL", 6)))
    {
        output = IO_BANK0_GPIO8_CTRL_OUTOVER::NORMAL;
    }
    else if ((result = !strncmp(data, "INVERT", 6)))
    {
        output = IO_BANK0_GPIO8_CTRL_OUTOVER::INVERT;
    }
    else if ((result = !strncmp(data, "LOW", 3)))
    {
        output = IO_BANK0_GPIO8_CTRL_OUTOVER::LOW;
    }
    else if ((result = !strncmp(data, "HIGH", 4)))
    {
        output = IO_BANK0_GPIO8_CTRL_OUTOVER::HIGH;
    }

    return result;
}

}; // namespace RP2040

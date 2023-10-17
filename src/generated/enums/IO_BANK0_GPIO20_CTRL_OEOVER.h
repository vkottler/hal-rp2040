/**
 * \file
 * \brief Generated by ifgen (3.1.2).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace RP2040
{

enum class IO_BANK0_GPIO20_CTRL_OEOVER : uint8_t
{
    NORMAL /*!< drive output enable from peripheral signal selected by funcsel
            */
        ,
    INVERT = 1 /*!< drive output enable from inverse of peripheral signal
                  selected by funcsel */
        ,
    DISABLE = 2 /*!< disable output */,
    ENABLE = 3 /*!< enable output */
};
static_assert(sizeof(IO_BANK0_GPIO20_CTRL_OEOVER) == 1);

/**
 * Converts IO_BANK0_GPIO20_CTRL_OEOVER to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(IO_BANK0_GPIO20_CTRL_OEOVER instance)
{
    const char *result = "UNKNOWN IO_BANK0_GPIO20_CTRL_OEOVER";

    switch (instance)
    {
    case IO_BANK0_GPIO20_CTRL_OEOVER::NORMAL:
        result = "NORMAL";
        break;
    case IO_BANK0_GPIO20_CTRL_OEOVER::INVERT:
        result = "INVERT";
        break;
    case IO_BANK0_GPIO20_CTRL_OEOVER::DISABLE:
        result = "DISABLE";
        break;
    case IO_BANK0_GPIO20_CTRL_OEOVER::ENABLE:
        result = "ENABLE";
        break;
    }

    return result;
}

/**
 * Converts a C string to IO_BANK0_GPIO20_CTRL_OEOVER.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, IO_BANK0_GPIO20_CTRL_OEOVER &output)
{
    bool result = false;

    if ((result = !strncmp(data, "NORMAL", 6)))
    {
        output = IO_BANK0_GPIO20_CTRL_OEOVER::NORMAL;
    }
    else if ((result = !strncmp(data, "INVERT", 6)))
    {
        output = IO_BANK0_GPIO20_CTRL_OEOVER::INVERT;
    }
    else if ((result = !strncmp(data, "DISABLE", 7)))
    {
        output = IO_BANK0_GPIO20_CTRL_OEOVER::DISABLE;
    }
    else if ((result = !strncmp(data, "ENABLE", 6)))
    {
        output = IO_BANK0_GPIO20_CTRL_OEOVER::ENABLE;
    }

    return result;
}

}; // namespace RP2040

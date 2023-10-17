/**
 * \file
 * \brief Generated by ifgen (3.1.6).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace RP2040
{

enum class PADS_BANK0_GPIO14_DRIVE : uint8_t
{
    _2mA,
    _4mA = 1,
    _8mA = 2,
    _12mA = 3
};
static_assert(sizeof(PADS_BANK0_GPIO14_DRIVE) == 1);

/**
 * Converts PADS_BANK0_GPIO14_DRIVE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PADS_BANK0_GPIO14_DRIVE instance)
{
    const char *result = "UNKNOWN PADS_BANK0_GPIO14_DRIVE";

    switch (instance)
    {
    case PADS_BANK0_GPIO14_DRIVE::_2mA:
        result = "_2mA";
        break;
    case PADS_BANK0_GPIO14_DRIVE::_4mA:
        result = "_4mA";
        break;
    case PADS_BANK0_GPIO14_DRIVE::_8mA:
        result = "_8mA";
        break;
    case PADS_BANK0_GPIO14_DRIVE::_12mA:
        result = "_12mA";
        break;
    }

    return result;
}

/**
 * Converts a C string to PADS_BANK0_GPIO14_DRIVE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PADS_BANK0_GPIO14_DRIVE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_2mA", 4)))
    {
        output = PADS_BANK0_GPIO14_DRIVE::_2mA;
    }
    else if ((result = !strncmp(data, "_4mA", 4)))
    {
        output = PADS_BANK0_GPIO14_DRIVE::_4mA;
    }
    else if ((result = !strncmp(data, "_8mA", 4)))
    {
        output = PADS_BANK0_GPIO14_DRIVE::_8mA;
    }
    else if ((result = !strncmp(data, "_12mA", 5)))
    {
        output = PADS_BANK0_GPIO14_DRIVE::_12mA;
    }

    return result;
}

}; // namespace RP2040

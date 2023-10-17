/**
 * \file
 * \brief Generated by ifgen (3.1.2).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace RP2040
{

enum class PADS_BANK0_GPIO10_DRIVE : uint8_t
{
    2mA,
    4mA = 1,
    8mA = 2,
    12mA = 3
};
static_assert(sizeof(PADS_BANK0_GPIO10_DRIVE) == 1);

/**
 * Converts PADS_BANK0_GPIO10_DRIVE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PADS_BANK0_GPIO10_DRIVE instance)
{
    const char *result = "UNKNOWN PADS_BANK0_GPIO10_DRIVE";

    switch (instance)
    {
    case PADS_BANK0_GPIO10_DRIVE::2mA:
        result = "2mA";
        break;
    case PADS_BANK0_GPIO10_DRIVE::4mA:
        result = "4mA";
        break;
    case PADS_BANK0_GPIO10_DRIVE::8mA:
        result = "8mA";
        break;
    case PADS_BANK0_GPIO10_DRIVE::12mA:
        result = "12mA";
        break;
    }

    return result;
}

/**
 * Converts a C string to PADS_BANK0_GPIO10_DRIVE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PADS_BANK0_GPIO10_DRIVE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "2mA", 3)))
    {
        output = PADS_BANK0_GPIO10_DRIVE::2mA;
    }
    else if ((result = !strncmp(data, "4mA", 3)))
    {
        output = PADS_BANK0_GPIO10_DRIVE::4mA;
    }
    else if ((result = !strncmp(data, "8mA", 3)))
    {
        output = PADS_BANK0_GPIO10_DRIVE::8mA;
    }
    else if ((result = !strncmp(data, "12mA", 4)))
    {
        output = PADS_BANK0_GPIO10_DRIVE::12mA;
    }

    return result;
}

}; // namespace RP2040

/**
 * \file
 * \brief Generated by ifgen (3.1.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace RP2040
{

enum class XOSC_CTRL_FREQ_RANGE : uint16_t
{
    1_15MHZ = 2720,
    RESERVED_1 = 2721,
    RESERVED_2 = 2722,
    RESERVED_3 = 2723
};
static_assert(sizeof(XOSC_CTRL_FREQ_RANGE) == 2);

/**
 * Converts XOSC_CTRL_FREQ_RANGE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(XOSC_CTRL_FREQ_RANGE instance)
{
    const char *result = "UNKNOWN XOSC_CTRL_FREQ_RANGE";

    switch (instance)
    {
    case XOSC_CTRL_FREQ_RANGE::1_15MHZ:
        result = "1_15MHZ";
        break;
    case XOSC_CTRL_FREQ_RANGE::RESERVED_1:
        result = "RESERVED_1";
        break;
    case XOSC_CTRL_FREQ_RANGE::RESERVED_2:
        result = "RESERVED_2";
        break;
    case XOSC_CTRL_FREQ_RANGE::RESERVED_3:
        result = "RESERVED_3";
        break;
    }

    return result;
}

/**
 * Converts a C string to XOSC_CTRL_FREQ_RANGE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, XOSC_CTRL_FREQ_RANGE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "1_15MHZ", 7)))
    {
        output = XOSC_CTRL_FREQ_RANGE::1_15MHZ;
    }
    else if ((result = !strncmp(data, "RESERVED_1", 10)))
    {
        output = XOSC_CTRL_FREQ_RANGE::RESERVED_1;
    }
    else if ((result = !strncmp(data, "RESERVED_2", 10)))
    {
        output = XOSC_CTRL_FREQ_RANGE::RESERVED_2;
    }
    else if ((result = !strncmp(data, "RESERVED_3", 10)))
    {
        output = XOSC_CTRL_FREQ_RANGE::RESERVED_3;
    }

    return result;
}

}; // namespace RP2040

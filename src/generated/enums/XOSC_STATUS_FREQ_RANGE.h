/**
 * \file
 * \brief Generated by ifgen (3.1.2).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace RP2040
{

enum class XOSC_STATUS_FREQ_RANGE : uint8_t
{
    1_15MHZ,
    RESERVED_1 = 1,
    RESERVED_2 = 2,
    RESERVED_3 = 3
};
static_assert(sizeof(XOSC_STATUS_FREQ_RANGE) == 1);

/**
 * Converts XOSC_STATUS_FREQ_RANGE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(XOSC_STATUS_FREQ_RANGE instance)
{
    const char *result = "UNKNOWN XOSC_STATUS_FREQ_RANGE";

    switch (instance)
    {
    case XOSC_STATUS_FREQ_RANGE::1_15MHZ:
        result = "1_15MHZ";
        break;
    case XOSC_STATUS_FREQ_RANGE::RESERVED_1:
        result = "RESERVED_1";
        break;
    case XOSC_STATUS_FREQ_RANGE::RESERVED_2:
        result = "RESERVED_2";
        break;
    case XOSC_STATUS_FREQ_RANGE::RESERVED_3:
        result = "RESERVED_3";
        break;
    }

    return result;
}

/**
 * Converts a C string to XOSC_STATUS_FREQ_RANGE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, XOSC_STATUS_FREQ_RANGE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "1_15MHZ", 7)))
    {
        output = XOSC_STATUS_FREQ_RANGE::1_15MHZ;
    }
    else if ((result = !strncmp(data, "RESERVED_1", 10)))
    {
        output = XOSC_STATUS_FREQ_RANGE::RESERVED_1;
    }
    else if ((result = !strncmp(data, "RESERVED_2", 10)))
    {
        output = XOSC_STATUS_FREQ_RANGE::RESERVED_2;
    }
    else if ((result = !strncmp(data, "RESERVED_3", 10)))
    {
        output = XOSC_STATUS_FREQ_RANGE::RESERVED_3;
    }

    return result;
}

}; // namespace RP2040

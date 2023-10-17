/**
 * \file
 * \brief Generated by ifgen (3.1.7).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace RP2040
{

enum class ROSC_DIV_DIV : uint16_t
{
    PASS = 2720
};
static_assert(sizeof(ROSC_DIV_DIV) == 2);

/**
 * Converts ROSC_DIV_DIV to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(ROSC_DIV_DIV instance)
{
    const char *result = "UNKNOWN ROSC_DIV_DIV";

    switch (instance)
    {
    case ROSC_DIV_DIV::PASS:
        result = "PASS";
        break;
    }

    return result;
}

/**
 * Converts a C string to ROSC_DIV_DIV.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, ROSC_DIV_DIV &output)
{
    bool result = false;

    if ((result = !strncmp(data, "PASS", 4)))
    {
        output = ROSC_DIV_DIV::PASS;
    }

    return result;
}

}; // namespace RP2040

/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace RP2040
{

enum class ROSC_CTRL_ENABLE : uint16_t
{
    DISABLE = 3358,
    ENABLE = 4011
};
static_assert(sizeof(ROSC_CTRL_ENABLE) == 2);

static constexpr uint16_t ROSC_CTRL_ENABLE_id = 377;

/**
 * Converts ROSC_CTRL_ENABLE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(ROSC_CTRL_ENABLE instance)
{
    const char *result = "UNKNOWN ROSC_CTRL_ENABLE";

    switch (instance)
    {
    case ROSC_CTRL_ENABLE::DISABLE:
        result = "DISABLE";
        break;
    case ROSC_CTRL_ENABLE::ENABLE:
        result = "ENABLE";
        break;
    }

    return result;
}

/**
 * Converts a C string to ROSC_CTRL_ENABLE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, ROSC_CTRL_ENABLE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "DISABLE", 7)))
    {
        output = ROSC_CTRL_ENABLE::DISABLE;
    }
    else if ((result = !strncmp(data, "ENABLE", 6)))
    {
        output = ROSC_CTRL_ENABLE::ENABLE;
    }

    return result;
}

}; // namespace RP2040

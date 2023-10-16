/**
 * \file
 * \brief Generated by ifgen (3.1.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace RP2040
{

enum class ROSC_FREQA_PASSWD : uint16_t
{
    PASS = 38550
};
static_assert(sizeof(ROSC_FREQA_PASSWD) == 2);

/**
 * Converts ROSC_FREQA_PASSWD to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(ROSC_FREQA_PASSWD instance)
{
    const char *result = "UNKNOWN ROSC_FREQA_PASSWD";

    switch (instance)
    {
    case ROSC_FREQA_PASSWD::PASS:
        result = "PASS";
        break;
    }

    return result;
}

/**
 * Converts a C string to ROSC_FREQA_PASSWD.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, ROSC_FREQA_PASSWD &output)
{
    bool result = false;

    if ((result = !strncmp(data, "PASS", 4)))
    {
        output = ROSC_FREQA_PASSWD::PASS;
    }

    return result;
}

}; // namespace RP2040

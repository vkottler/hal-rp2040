/**
 * \file
 * \brief Generated by ifgen (3.2.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace RP2040
{

enum class CLOCKS_CLK_REF_CTRL_AUXSRC : uint8_t
{
    pll_usb,
    gpin0 = 1,
    gpin1 = 2
};
static_assert(sizeof(CLOCKS_CLK_REF_CTRL_AUXSRC) == 1);

/**
 * Converts CLOCKS_CLK_REF_CTRL_AUXSRC to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CLOCKS_CLK_REF_CTRL_AUXSRC instance)
{
    const char *result = "UNKNOWN CLOCKS_CLK_REF_CTRL_AUXSRC";

    switch (instance)
    {
    case CLOCKS_CLK_REF_CTRL_AUXSRC::pll_usb:
        result = "pll_usb";
        break;
    case CLOCKS_CLK_REF_CTRL_AUXSRC::gpin0:
        result = "gpin0";
        break;
    case CLOCKS_CLK_REF_CTRL_AUXSRC::gpin1:
        result = "gpin1";
        break;
    }

    return result;
}

/**
 * Converts a C string to CLOCKS_CLK_REF_CTRL_AUXSRC.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CLOCKS_CLK_REF_CTRL_AUXSRC &output)
{
    bool result = false;

    if ((result = !strncmp(data, "pll_usb", 7)))
    {
        output = CLOCKS_CLK_REF_CTRL_AUXSRC::pll_usb;
    }
    else if ((result = !strncmp(data, "gpin0", 5)))
    {
        output = CLOCKS_CLK_REF_CTRL_AUXSRC::gpin0;
    }
    else if ((result = !strncmp(data, "gpin1", 5)))
    {
        output = CLOCKS_CLK_REF_CTRL_AUXSRC::gpin1;
    }

    return result;
}

}; // namespace RP2040

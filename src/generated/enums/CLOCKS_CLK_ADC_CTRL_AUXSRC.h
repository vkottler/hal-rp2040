/**
 * \file
 * \brief Generated by ifgen (3.1.2).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace RP2040
{

enum class CLOCKS_CLK_ADC_CTRL_AUXSRC : uint8_t
{
    clksrc_pll_usb,
    clksrc_pll_sys = 1,
    rosc_clksrc_ph = 2,
    xosc_clksrc = 3,
    clksrc_gpin0 = 4,
    clksrc_gpin1 = 5
};
static_assert(sizeof(CLOCKS_CLK_ADC_CTRL_AUXSRC) == 1);

/**
 * Converts CLOCKS_CLK_ADC_CTRL_AUXSRC to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CLOCKS_CLK_ADC_CTRL_AUXSRC instance)
{
    const char *result = "UNKNOWN CLOCKS_CLK_ADC_CTRL_AUXSRC";

    switch (instance)
    {
    case CLOCKS_CLK_ADC_CTRL_AUXSRC::clksrc_pll_usb:
        result = "clksrc_pll_usb";
        break;
    case CLOCKS_CLK_ADC_CTRL_AUXSRC::clksrc_pll_sys:
        result = "clksrc_pll_sys";
        break;
    case CLOCKS_CLK_ADC_CTRL_AUXSRC::rosc_clksrc_ph:
        result = "rosc_clksrc_ph";
        break;
    case CLOCKS_CLK_ADC_CTRL_AUXSRC::xosc_clksrc:
        result = "xosc_clksrc";
        break;
    case CLOCKS_CLK_ADC_CTRL_AUXSRC::clksrc_gpin0:
        result = "clksrc_gpin0";
        break;
    case CLOCKS_CLK_ADC_CTRL_AUXSRC::clksrc_gpin1:
        result = "clksrc_gpin1";
        break;
    }

    return result;
}

/**
 * Converts a C string to CLOCKS_CLK_ADC_CTRL_AUXSRC.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CLOCKS_CLK_ADC_CTRL_AUXSRC &output)
{
    bool result = false;

    if ((result = !strncmp(data, "clksrc_pll_usb", 14)))
    {
        output = CLOCKS_CLK_ADC_CTRL_AUXSRC::clksrc_pll_usb;
    }
    else if ((result = !strncmp(data, "clksrc_pll_sys", 14)))
    {
        output = CLOCKS_CLK_ADC_CTRL_AUXSRC::clksrc_pll_sys;
    }
    else if ((result = !strncmp(data, "rosc_clksrc_ph", 14)))
    {
        output = CLOCKS_CLK_ADC_CTRL_AUXSRC::rosc_clksrc_ph;
    }
    else if ((result = !strncmp(data, "xosc_clksrc", 11)))
    {
        output = CLOCKS_CLK_ADC_CTRL_AUXSRC::xosc_clksrc;
    }
    else if ((result = !strncmp(data, "clksrc_gpin0", 12)))
    {
        output = CLOCKS_CLK_ADC_CTRL_AUXSRC::clksrc_gpin0;
    }
    else if ((result = !strncmp(data, "clksrc_gpin1", 12)))
    {
        output = CLOCKS_CLK_ADC_CTRL_AUXSRC::clksrc_gpin1;
    }

    return result;
}

}; // namespace RP2040

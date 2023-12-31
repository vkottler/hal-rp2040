/**
 * \file
 * \brief Generated by ifgen (3.2.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace RP2040
{

enum class CLOCKS_FC0_SRC_FC0_SRC : uint8_t
{
    NULL,
    pll_sys_clksrc_primary = 1,
    pll_usb_clksrc_primary = 2,
    rosc_clksrc = 3,
    rosc_clksrc_ph = 4,
    xosc_clksrc = 5,
    clksrc_gpin0 = 6,
    clksrc_gpin1 = 7,
    clk_ref = 8,
    clk_sys = 9,
    clk_peri = 10,
    clk_usb = 11,
    clk_adc = 12,
    clk_rtc = 13
};
static_assert(sizeof(CLOCKS_FC0_SRC_FC0_SRC) == 1);

/**
 * Converts CLOCKS_FC0_SRC_FC0_SRC to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CLOCKS_FC0_SRC_FC0_SRC instance)
{
    const char *result = "UNKNOWN CLOCKS_FC0_SRC_FC0_SRC";

    switch (instance)
    {
    case CLOCKS_FC0_SRC_FC0_SRC::NULL:
        result = "NULL";
        break;
    case CLOCKS_FC0_SRC_FC0_SRC::pll_sys_clksrc_primary:
        result = "pll_sys_clksrc_primary";
        break;
    case CLOCKS_FC0_SRC_FC0_SRC::pll_usb_clksrc_primary:
        result = "pll_usb_clksrc_primary";
        break;
    case CLOCKS_FC0_SRC_FC0_SRC::rosc_clksrc:
        result = "rosc_clksrc";
        break;
    case CLOCKS_FC0_SRC_FC0_SRC::rosc_clksrc_ph:
        result = "rosc_clksrc_ph";
        break;
    case CLOCKS_FC0_SRC_FC0_SRC::xosc_clksrc:
        result = "xosc_clksrc";
        break;
    case CLOCKS_FC0_SRC_FC0_SRC::clksrc_gpin0:
        result = "clksrc_gpin0";
        break;
    case CLOCKS_FC0_SRC_FC0_SRC::clksrc_gpin1:
        result = "clksrc_gpin1";
        break;
    case CLOCKS_FC0_SRC_FC0_SRC::clk_ref:
        result = "clk_ref";
        break;
    case CLOCKS_FC0_SRC_FC0_SRC::clk_sys:
        result = "clk_sys";
        break;
    case CLOCKS_FC0_SRC_FC0_SRC::clk_peri:
        result = "clk_peri";
        break;
    case CLOCKS_FC0_SRC_FC0_SRC::clk_usb:
        result = "clk_usb";
        break;
    case CLOCKS_FC0_SRC_FC0_SRC::clk_adc:
        result = "clk_adc";
        break;
    case CLOCKS_FC0_SRC_FC0_SRC::clk_rtc:
        result = "clk_rtc";
        break;
    }

    return result;
}

/**
 * Converts a C string to CLOCKS_FC0_SRC_FC0_SRC.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CLOCKS_FC0_SRC_FC0_SRC &output)
{
    bool result = false;

    if ((result = !strncmp(data, "NULL", 4)))
    {
        output = CLOCKS_FC0_SRC_FC0_SRC::NULL;
    }
    else if ((result = !strncmp(data, "pll_sys_clksrc_primary", 22)))
    {
        output = CLOCKS_FC0_SRC_FC0_SRC::pll_sys_clksrc_primary;
    }
    else if ((result = !strncmp(data, "pll_usb_clksrc_primary", 22)))
    {
        output = CLOCKS_FC0_SRC_FC0_SRC::pll_usb_clksrc_primary;
    }
    else if ((result = !strncmp(data, "rosc_clksrc", 11)))
    {
        output = CLOCKS_FC0_SRC_FC0_SRC::rosc_clksrc;
    }
    else if ((result = !strncmp(data, "rosc_clksrc_ph", 14)))
    {
        output = CLOCKS_FC0_SRC_FC0_SRC::rosc_clksrc_ph;
    }
    else if ((result = !strncmp(data, "xosc_clksrc", 11)))
    {
        output = CLOCKS_FC0_SRC_FC0_SRC::xosc_clksrc;
    }
    else if ((result = !strncmp(data, "clksrc_gpin0", 12)))
    {
        output = CLOCKS_FC0_SRC_FC0_SRC::clksrc_gpin0;
    }
    else if ((result = !strncmp(data, "clksrc_gpin1", 12)))
    {
        output = CLOCKS_FC0_SRC_FC0_SRC::clksrc_gpin1;
    }
    else if ((result = !strncmp(data, "clk_ref", 7)))
    {
        output = CLOCKS_FC0_SRC_FC0_SRC::clk_ref;
    }
    else if ((result = !strncmp(data, "clk_sys", 7)))
    {
        output = CLOCKS_FC0_SRC_FC0_SRC::clk_sys;
    }
    else if ((result = !strncmp(data, "clk_peri", 8)))
    {
        output = CLOCKS_FC0_SRC_FC0_SRC::clk_peri;
    }
    else if ((result = !strncmp(data, "clk_usb", 7)))
    {
        output = CLOCKS_FC0_SRC_FC0_SRC::clk_usb;
    }
    else if ((result = !strncmp(data, "clk_adc", 7)))
    {
        output = CLOCKS_FC0_SRC_FC0_SRC::clk_adc;
    }
    else if ((result = !strncmp(data, "clk_rtc", 7)))
    {
        output = CLOCKS_FC0_SRC_FC0_SRC::clk_rtc;
    }

    return result;
}

}; // namespace RP2040

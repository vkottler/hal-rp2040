/**
 * \file
 * \brief Generated by ifgen (3.1.7).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace RP2040
{

enum class
    USBCTRL_DPRAM_EP7_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET : uint8_t
{
    _128,
    _256 = 1,
    _512 = 2,
    _1024 = 3
};
static_assert(
    sizeof(USBCTRL_DPRAM_EP7_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET) == 1);

/**
 * Converts USBCTRL_DPRAM_EP7_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET to a C
 * string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(
    USBCTRL_DPRAM_EP7_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET instance)
{
    const char *result =
        "UNKNOWN USBCTRL_DPRAM_EP7_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET";

    switch (instance)
    {
    case USBCTRL_DPRAM_EP7_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET::_128:
        result = "_128";
        break;
    case USBCTRL_DPRAM_EP7_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET::_256:
        result = "_256";
        break;
    case USBCTRL_DPRAM_EP7_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET::_512:
        result = "_512";
        break;
    case USBCTRL_DPRAM_EP7_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET::_1024:
        result = "_1024";
        break;
    }

    return result;
}

/**
 * Converts a C string to
 * USBCTRL_DPRAM_EP7_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(
    const char *data,
    USBCTRL_DPRAM_EP7_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_128", 4)))
    {
        output =
            USBCTRL_DPRAM_EP7_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET::_128;
    }
    else if ((result = !strncmp(data, "_256", 4)))
    {
        output =
            USBCTRL_DPRAM_EP7_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET::_256;
    }
    else if ((result = !strncmp(data, "_512", 4)))
    {
        output =
            USBCTRL_DPRAM_EP7_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET::_512;
    }
    else if ((result = !strncmp(data, "_1024", 5)))
    {
        output = USBCTRL_DPRAM_EP7_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET::
            _1024;
    }

    return result;
}

}; // namespace RP2040

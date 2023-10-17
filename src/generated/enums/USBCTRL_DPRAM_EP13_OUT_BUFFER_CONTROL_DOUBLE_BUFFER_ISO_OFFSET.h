/**
 * \file
 * \brief Generated by ifgen (3.1.2).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace RP2040
{

enum class
    USBCTRL_DPRAM_EP13_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET : uint8_t
{
    128,
    256 = 1,
    512 = 2,
    1024 = 3
};
static_assert(
    sizeof(USBCTRL_DPRAM_EP13_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET) ==
    1);

/**
 * Converts USBCTRL_DPRAM_EP13_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET to a
 * C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(
    USBCTRL_DPRAM_EP13_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET instance)
{
    const char *result =
        "UNKNOWN "
        "USBCTRL_DPRAM_EP13_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET";

    switch (instance)
    {
    case USBCTRL_DPRAM_EP13_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET::128:
        result = "128";
        break;
    case USBCTRL_DPRAM_EP13_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET::256:
        result = "256";
        break;
    case USBCTRL_DPRAM_EP13_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET::512:
        result = "512";
        break;
    case USBCTRL_DPRAM_EP13_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET::1024:
        result = "1024";
        break;
    }

    return result;
}

/**
 * Converts a C string to
 * USBCTRL_DPRAM_EP13_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(
    const char *data,
    USBCTRL_DPRAM_EP13_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET &output)
{
    bool result = false;

    if ((result = !strncmp(data, "128", 3)))
    {
        output =
            USBCTRL_DPRAM_EP13_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET::
                128;
    }
    else if ((result = !strncmp(data, "256", 3)))
    {
        output =
            USBCTRL_DPRAM_EP13_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET::
                256;
    }
    else if ((result = !strncmp(data, "512", 3)))
    {
        output =
            USBCTRL_DPRAM_EP13_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET::
                512;
    }
    else if ((result = !strncmp(data, "1024", 4)))
    {
        output =
            USBCTRL_DPRAM_EP13_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET::
                1024;
    }

    return result;
}

}; // namespace RP2040

/**
 * \file
 * \brief Generated by ifgen (3.1.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace RP2040
{

enum class USBCTRL_DPRAM_EP12_IN_CONTROL_ENDPOINT_TYPE : uint8_t
{
    Control,
    Isochronous = 1,
    Bulk = 2,
    Interrupt = 3
};
static_assert(sizeof(USBCTRL_DPRAM_EP12_IN_CONTROL_ENDPOINT_TYPE) == 1);

/**
 * Converts USBCTRL_DPRAM_EP12_IN_CONTROL_ENDPOINT_TYPE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(
    USBCTRL_DPRAM_EP12_IN_CONTROL_ENDPOINT_TYPE instance)
{
    const char *result = "UNKNOWN USBCTRL_DPRAM_EP12_IN_CONTROL_ENDPOINT_TYPE";

    switch (instance)
    {
    case USBCTRL_DPRAM_EP12_IN_CONTROL_ENDPOINT_TYPE::Control:
        result = "Control";
        break;
    case USBCTRL_DPRAM_EP12_IN_CONTROL_ENDPOINT_TYPE::Isochronous:
        result = "Isochronous";
        break;
    case USBCTRL_DPRAM_EP12_IN_CONTROL_ENDPOINT_TYPE::Bulk:
        result = "Bulk";
        break;
    case USBCTRL_DPRAM_EP12_IN_CONTROL_ENDPOINT_TYPE::Interrupt:
        result = "Interrupt";
        break;
    }

    return result;
}

/**
 * Converts a C string to USBCTRL_DPRAM_EP12_IN_CONTROL_ENDPOINT_TYPE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        USBCTRL_DPRAM_EP12_IN_CONTROL_ENDPOINT_TYPE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "Control", 7)))
    {
        output = USBCTRL_DPRAM_EP12_IN_CONTROL_ENDPOINT_TYPE::Control;
    }
    else if ((result = !strncmp(data, "Isochronous", 11)))
    {
        output = USBCTRL_DPRAM_EP12_IN_CONTROL_ENDPOINT_TYPE::Isochronous;
    }
    else if ((result = !strncmp(data, "Bulk", 4)))
    {
        output = USBCTRL_DPRAM_EP12_IN_CONTROL_ENDPOINT_TYPE::Bulk;
    }
    else if ((result = !strncmp(data, "Interrupt", 9)))
    {
        output = USBCTRL_DPRAM_EP12_IN_CONTROL_ENDPOINT_TYPE::Interrupt;
    }

    return result;
}

}; // namespace RP2040

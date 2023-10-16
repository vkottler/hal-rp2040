/**
 * \file
 * \brief Generated by ifgen (3.1.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace RP2040
{

enum class IO_BANK0_GPIO17_CTRL_FUNCSEL : uint8_t
{
    spi0_ss_n = 1,
    uart0_rx = 2,
    i2c0_scl = 3,
    pwm_b_0 = 4,
    sio_17 = 5,
    pio0_17 = 6,
    pio1_17 = 7,
    usb_muxing_vbus_en = 9,
    null = 31
};
static_assert(sizeof(IO_BANK0_GPIO17_CTRL_FUNCSEL) == 1);

/**
 * Converts IO_BANK0_GPIO17_CTRL_FUNCSEL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(IO_BANK0_GPIO17_CTRL_FUNCSEL instance)
{
    const char *result = "UNKNOWN IO_BANK0_GPIO17_CTRL_FUNCSEL";

    switch (instance)
    {
    case IO_BANK0_GPIO17_CTRL_FUNCSEL::spi0_ss_n:
        result = "spi0_ss_n";
        break;
    case IO_BANK0_GPIO17_CTRL_FUNCSEL::uart0_rx:
        result = "uart0_rx";
        break;
    case IO_BANK0_GPIO17_CTRL_FUNCSEL::i2c0_scl:
        result = "i2c0_scl";
        break;
    case IO_BANK0_GPIO17_CTRL_FUNCSEL::pwm_b_0:
        result = "pwm_b_0";
        break;
    case IO_BANK0_GPIO17_CTRL_FUNCSEL::sio_17:
        result = "sio_17";
        break;
    case IO_BANK0_GPIO17_CTRL_FUNCSEL::pio0_17:
        result = "pio0_17";
        break;
    case IO_BANK0_GPIO17_CTRL_FUNCSEL::pio1_17:
        result = "pio1_17";
        break;
    case IO_BANK0_GPIO17_CTRL_FUNCSEL::usb_muxing_vbus_en:
        result = "usb_muxing_vbus_en";
        break;
    case IO_BANK0_GPIO17_CTRL_FUNCSEL::null:
        result = "null";
        break;
    }

    return result;
}

/**
 * Converts a C string to IO_BANK0_GPIO17_CTRL_FUNCSEL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, IO_BANK0_GPIO17_CTRL_FUNCSEL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "spi0_ss_n", 9)))
    {
        output = IO_BANK0_GPIO17_CTRL_FUNCSEL::spi0_ss_n;
    }
    else if ((result = !strncmp(data, "uart0_rx", 8)))
    {
        output = IO_BANK0_GPIO17_CTRL_FUNCSEL::uart0_rx;
    }
    else if ((result = !strncmp(data, "i2c0_scl", 8)))
    {
        output = IO_BANK0_GPIO17_CTRL_FUNCSEL::i2c0_scl;
    }
    else if ((result = !strncmp(data, "pwm_b_0", 7)))
    {
        output = IO_BANK0_GPIO17_CTRL_FUNCSEL::pwm_b_0;
    }
    else if ((result = !strncmp(data, "sio_17", 6)))
    {
        output = IO_BANK0_GPIO17_CTRL_FUNCSEL::sio_17;
    }
    else if ((result = !strncmp(data, "pio0_17", 7)))
    {
        output = IO_BANK0_GPIO17_CTRL_FUNCSEL::pio0_17;
    }
    else if ((result = !strncmp(data, "pio1_17", 7)))
    {
        output = IO_BANK0_GPIO17_CTRL_FUNCSEL::pio1_17;
    }
    else if ((result = !strncmp(data, "usb_muxing_vbus_en", 18)))
    {
        output = IO_BANK0_GPIO17_CTRL_FUNCSEL::usb_muxing_vbus_en;
    }
    else if ((result = !strncmp(data, "null", 4)))
    {
        output = IO_BANK0_GPIO17_CTRL_FUNCSEL::null;
    }

    return result;
}

}; // namespace RP2040

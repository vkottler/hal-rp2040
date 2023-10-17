/**
 * \file
 * \brief Generated by ifgen (3.1.7).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace RP2040
{

enum class IO_BANK0_GPIO18_CTRL_FUNCSEL : uint8_t
{
    spi0_sclk = 1,
    uart0_cts = 2,
    i2c1_sda = 3,
    pwm_a_1 = 4,
    sio_18 = 5,
    pio0_18 = 6,
    pio1_18 = 7,
    usb_muxing_overcurr_detect = 9,
    null = 31
};
static_assert(sizeof(IO_BANK0_GPIO18_CTRL_FUNCSEL) == 1);

/**
 * Converts IO_BANK0_GPIO18_CTRL_FUNCSEL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(IO_BANK0_GPIO18_CTRL_FUNCSEL instance)
{
    const char *result = "UNKNOWN IO_BANK0_GPIO18_CTRL_FUNCSEL";

    switch (instance)
    {
    case IO_BANK0_GPIO18_CTRL_FUNCSEL::spi0_sclk:
        result = "spi0_sclk";
        break;
    case IO_BANK0_GPIO18_CTRL_FUNCSEL::uart0_cts:
        result = "uart0_cts";
        break;
    case IO_BANK0_GPIO18_CTRL_FUNCSEL::i2c1_sda:
        result = "i2c1_sda";
        break;
    case IO_BANK0_GPIO18_CTRL_FUNCSEL::pwm_a_1:
        result = "pwm_a_1";
        break;
    case IO_BANK0_GPIO18_CTRL_FUNCSEL::sio_18:
        result = "sio_18";
        break;
    case IO_BANK0_GPIO18_CTRL_FUNCSEL::pio0_18:
        result = "pio0_18";
        break;
    case IO_BANK0_GPIO18_CTRL_FUNCSEL::pio1_18:
        result = "pio1_18";
        break;
    case IO_BANK0_GPIO18_CTRL_FUNCSEL::usb_muxing_overcurr_detect:
        result = "usb_muxing_overcurr_detect";
        break;
    case IO_BANK0_GPIO18_CTRL_FUNCSEL::null:
        result = "null";
        break;
    }

    return result;
}

/**
 * Converts a C string to IO_BANK0_GPIO18_CTRL_FUNCSEL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, IO_BANK0_GPIO18_CTRL_FUNCSEL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "spi0_sclk", 9)))
    {
        output = IO_BANK0_GPIO18_CTRL_FUNCSEL::spi0_sclk;
    }
    else if ((result = !strncmp(data, "uart0_cts", 9)))
    {
        output = IO_BANK0_GPIO18_CTRL_FUNCSEL::uart0_cts;
    }
    else if ((result = !strncmp(data, "i2c1_sda", 8)))
    {
        output = IO_BANK0_GPIO18_CTRL_FUNCSEL::i2c1_sda;
    }
    else if ((result = !strncmp(data, "pwm_a_1", 7)))
    {
        output = IO_BANK0_GPIO18_CTRL_FUNCSEL::pwm_a_1;
    }
    else if ((result = !strncmp(data, "sio_18", 6)))
    {
        output = IO_BANK0_GPIO18_CTRL_FUNCSEL::sio_18;
    }
    else if ((result = !strncmp(data, "pio0_18", 7)))
    {
        output = IO_BANK0_GPIO18_CTRL_FUNCSEL::pio0_18;
    }
    else if ((result = !strncmp(data, "pio1_18", 7)))
    {
        output = IO_BANK0_GPIO18_CTRL_FUNCSEL::pio1_18;
    }
    else if ((result = !strncmp(data, "usb_muxing_overcurr_detect", 26)))
    {
        output = IO_BANK0_GPIO18_CTRL_FUNCSEL::usb_muxing_overcurr_detect;
    }
    else if ((result = !strncmp(data, "null", 4)))
    {
        output = IO_BANK0_GPIO18_CTRL_FUNCSEL::null;
    }

    return result;
}

}; // namespace RP2040

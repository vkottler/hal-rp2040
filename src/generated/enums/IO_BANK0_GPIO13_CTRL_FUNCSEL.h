/**
 * \file
 * \brief Generated by ifgen (3.2.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace RP2040
{

enum class IO_BANK0_GPIO13_CTRL_FUNCSEL : uint8_t
{
    spi1_ss_n = 1,
    uart0_rx = 2,
    i2c0_scl = 3,
    pwm_b_6 = 4,
    sio_13 = 5,
    pio0_13 = 6,
    pio1_13 = 7,
    usb_muxing_extphy_vpo = 8,
    usb_muxing_vbus_detect = 9,
    null = 31
};
static_assert(sizeof(IO_BANK0_GPIO13_CTRL_FUNCSEL) == 1);

/**
 * Converts IO_BANK0_GPIO13_CTRL_FUNCSEL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(IO_BANK0_GPIO13_CTRL_FUNCSEL instance)
{
    const char *result = "UNKNOWN IO_BANK0_GPIO13_CTRL_FUNCSEL";

    switch (instance)
    {
    case IO_BANK0_GPIO13_CTRL_FUNCSEL::spi1_ss_n:
        result = "spi1_ss_n";
        break;
    case IO_BANK0_GPIO13_CTRL_FUNCSEL::uart0_rx:
        result = "uart0_rx";
        break;
    case IO_BANK0_GPIO13_CTRL_FUNCSEL::i2c0_scl:
        result = "i2c0_scl";
        break;
    case IO_BANK0_GPIO13_CTRL_FUNCSEL::pwm_b_6:
        result = "pwm_b_6";
        break;
    case IO_BANK0_GPIO13_CTRL_FUNCSEL::sio_13:
        result = "sio_13";
        break;
    case IO_BANK0_GPIO13_CTRL_FUNCSEL::pio0_13:
        result = "pio0_13";
        break;
    case IO_BANK0_GPIO13_CTRL_FUNCSEL::pio1_13:
        result = "pio1_13";
        break;
    case IO_BANK0_GPIO13_CTRL_FUNCSEL::usb_muxing_extphy_vpo:
        result = "usb_muxing_extphy_vpo";
        break;
    case IO_BANK0_GPIO13_CTRL_FUNCSEL::usb_muxing_vbus_detect:
        result = "usb_muxing_vbus_detect";
        break;
    case IO_BANK0_GPIO13_CTRL_FUNCSEL::null:
        result = "null";
        break;
    }

    return result;
}

/**
 * Converts a C string to IO_BANK0_GPIO13_CTRL_FUNCSEL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, IO_BANK0_GPIO13_CTRL_FUNCSEL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "spi1_ss_n", 9)))
    {
        output = IO_BANK0_GPIO13_CTRL_FUNCSEL::spi1_ss_n;
    }
    else if ((result = !strncmp(data, "uart0_rx", 8)))
    {
        output = IO_BANK0_GPIO13_CTRL_FUNCSEL::uart0_rx;
    }
    else if ((result = !strncmp(data, "i2c0_scl", 8)))
    {
        output = IO_BANK0_GPIO13_CTRL_FUNCSEL::i2c0_scl;
    }
    else if ((result = !strncmp(data, "pwm_b_6", 7)))
    {
        output = IO_BANK0_GPIO13_CTRL_FUNCSEL::pwm_b_6;
    }
    else if ((result = !strncmp(data, "sio_13", 6)))
    {
        output = IO_BANK0_GPIO13_CTRL_FUNCSEL::sio_13;
    }
    else if ((result = !strncmp(data, "pio0_13", 7)))
    {
        output = IO_BANK0_GPIO13_CTRL_FUNCSEL::pio0_13;
    }
    else if ((result = !strncmp(data, "pio1_13", 7)))
    {
        output = IO_BANK0_GPIO13_CTRL_FUNCSEL::pio1_13;
    }
    else if ((result = !strncmp(data, "usb_muxing_extphy_vpo", 21)))
    {
        output = IO_BANK0_GPIO13_CTRL_FUNCSEL::usb_muxing_extphy_vpo;
    }
    else if ((result = !strncmp(data, "usb_muxing_vbus_detect", 22)))
    {
        output = IO_BANK0_GPIO13_CTRL_FUNCSEL::usb_muxing_vbus_detect;
    }
    else if ((result = !strncmp(data, "null", 4)))
    {
        output = IO_BANK0_GPIO13_CTRL_FUNCSEL::null;
    }

    return result;
}

}; // namespace RP2040

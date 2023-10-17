/**
 * \file
 * \brief Generated by ifgen (3.1.4).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace RP2040
{

enum class IO_BANK0_GPIO7_CTRL_FUNCSEL : uint8_t
{
    spi0_tx = 1,
    uart1_rts = 2,
    i2c1_scl = 3,
    pwm_b_3 = 4,
    sio_7 = 5,
    pio0_7 = 6,
    pio1_7 = 7,
    usb_muxing_extphy_oe_n = 8,
    usb_muxing_vbus_detect = 9,
    null = 31
};
static_assert(sizeof(IO_BANK0_GPIO7_CTRL_FUNCSEL) == 1);

/**
 * Converts IO_BANK0_GPIO7_CTRL_FUNCSEL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(IO_BANK0_GPIO7_CTRL_FUNCSEL instance)
{
    const char *result = "UNKNOWN IO_BANK0_GPIO7_CTRL_FUNCSEL";

    switch (instance)
    {
    case IO_BANK0_GPIO7_CTRL_FUNCSEL::spi0_tx:
        result = "spi0_tx";
        break;
    case IO_BANK0_GPIO7_CTRL_FUNCSEL::uart1_rts:
        result = "uart1_rts";
        break;
    case IO_BANK0_GPIO7_CTRL_FUNCSEL::i2c1_scl:
        result = "i2c1_scl";
        break;
    case IO_BANK0_GPIO7_CTRL_FUNCSEL::pwm_b_3:
        result = "pwm_b_3";
        break;
    case IO_BANK0_GPIO7_CTRL_FUNCSEL::sio_7:
        result = "sio_7";
        break;
    case IO_BANK0_GPIO7_CTRL_FUNCSEL::pio0_7:
        result = "pio0_7";
        break;
    case IO_BANK0_GPIO7_CTRL_FUNCSEL::pio1_7:
        result = "pio1_7";
        break;
    case IO_BANK0_GPIO7_CTRL_FUNCSEL::usb_muxing_extphy_oe_n:
        result = "usb_muxing_extphy_oe_n";
        break;
    case IO_BANK0_GPIO7_CTRL_FUNCSEL::usb_muxing_vbus_detect:
        result = "usb_muxing_vbus_detect";
        break;
    case IO_BANK0_GPIO7_CTRL_FUNCSEL::null:
        result = "null";
        break;
    }

    return result;
}

/**
 * Converts a C string to IO_BANK0_GPIO7_CTRL_FUNCSEL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, IO_BANK0_GPIO7_CTRL_FUNCSEL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "spi0_tx", 7)))
    {
        output = IO_BANK0_GPIO7_CTRL_FUNCSEL::spi0_tx;
    }
    else if ((result = !strncmp(data, "uart1_rts", 9)))
    {
        output = IO_BANK0_GPIO7_CTRL_FUNCSEL::uart1_rts;
    }
    else if ((result = !strncmp(data, "i2c1_scl", 8)))
    {
        output = IO_BANK0_GPIO7_CTRL_FUNCSEL::i2c1_scl;
    }
    else if ((result = !strncmp(data, "pwm_b_3", 7)))
    {
        output = IO_BANK0_GPIO7_CTRL_FUNCSEL::pwm_b_3;
    }
    else if ((result = !strncmp(data, "sio_7", 5)))
    {
        output = IO_BANK0_GPIO7_CTRL_FUNCSEL::sio_7;
    }
    else if ((result = !strncmp(data, "pio0_7", 6)))
    {
        output = IO_BANK0_GPIO7_CTRL_FUNCSEL::pio0_7;
    }
    else if ((result = !strncmp(data, "pio1_7", 6)))
    {
        output = IO_BANK0_GPIO7_CTRL_FUNCSEL::pio1_7;
    }
    else if ((result = !strncmp(data, "usb_muxing_extphy_oe_n", 22)))
    {
        output = IO_BANK0_GPIO7_CTRL_FUNCSEL::usb_muxing_extphy_oe_n;
    }
    else if ((result = !strncmp(data, "usb_muxing_vbus_detect", 22)))
    {
        output = IO_BANK0_GPIO7_CTRL_FUNCSEL::usb_muxing_vbus_detect;
    }
    else if ((result = !strncmp(data, "null", 4)))
    {
        output = IO_BANK0_GPIO7_CTRL_FUNCSEL::null;
    }

    return result;
}

}; // namespace RP2040

/**
 * \file
 * \brief Generated by ifgen (3.1.6).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace RP2040
{

enum class IO_BANK0_GPIO8_CTRL_FUNCSEL : uint8_t
{
    spi1_rx = 1,
    uart1_tx = 2,
    i2c0_sda = 3,
    pwm_a_4 = 4,
    sio_8 = 5,
    pio0_8 = 6,
    pio1_8 = 7,
    usb_muxing_extphy_rcv = 8,
    usb_muxing_vbus_en = 9,
    null = 31
};
static_assert(sizeof(IO_BANK0_GPIO8_CTRL_FUNCSEL) == 1);

/**
 * Converts IO_BANK0_GPIO8_CTRL_FUNCSEL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(IO_BANK0_GPIO8_CTRL_FUNCSEL instance)
{
    const char *result = "UNKNOWN IO_BANK0_GPIO8_CTRL_FUNCSEL";

    switch (instance)
    {
    case IO_BANK0_GPIO8_CTRL_FUNCSEL::spi1_rx:
        result = "spi1_rx";
        break;
    case IO_BANK0_GPIO8_CTRL_FUNCSEL::uart1_tx:
        result = "uart1_tx";
        break;
    case IO_BANK0_GPIO8_CTRL_FUNCSEL::i2c0_sda:
        result = "i2c0_sda";
        break;
    case IO_BANK0_GPIO8_CTRL_FUNCSEL::pwm_a_4:
        result = "pwm_a_4";
        break;
    case IO_BANK0_GPIO8_CTRL_FUNCSEL::sio_8:
        result = "sio_8";
        break;
    case IO_BANK0_GPIO8_CTRL_FUNCSEL::pio0_8:
        result = "pio0_8";
        break;
    case IO_BANK0_GPIO8_CTRL_FUNCSEL::pio1_8:
        result = "pio1_8";
        break;
    case IO_BANK0_GPIO8_CTRL_FUNCSEL::usb_muxing_extphy_rcv:
        result = "usb_muxing_extphy_rcv";
        break;
    case IO_BANK0_GPIO8_CTRL_FUNCSEL::usb_muxing_vbus_en:
        result = "usb_muxing_vbus_en";
        break;
    case IO_BANK0_GPIO8_CTRL_FUNCSEL::null:
        result = "null";
        break;
    }

    return result;
}

/**
 * Converts a C string to IO_BANK0_GPIO8_CTRL_FUNCSEL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, IO_BANK0_GPIO8_CTRL_FUNCSEL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "spi1_rx", 7)))
    {
        output = IO_BANK0_GPIO8_CTRL_FUNCSEL::spi1_rx;
    }
    else if ((result = !strncmp(data, "uart1_tx", 8)))
    {
        output = IO_BANK0_GPIO8_CTRL_FUNCSEL::uart1_tx;
    }
    else if ((result = !strncmp(data, "i2c0_sda", 8)))
    {
        output = IO_BANK0_GPIO8_CTRL_FUNCSEL::i2c0_sda;
    }
    else if ((result = !strncmp(data, "pwm_a_4", 7)))
    {
        output = IO_BANK0_GPIO8_CTRL_FUNCSEL::pwm_a_4;
    }
    else if ((result = !strncmp(data, "sio_8", 5)))
    {
        output = IO_BANK0_GPIO8_CTRL_FUNCSEL::sio_8;
    }
    else if ((result = !strncmp(data, "pio0_8", 6)))
    {
        output = IO_BANK0_GPIO8_CTRL_FUNCSEL::pio0_8;
    }
    else if ((result = !strncmp(data, "pio1_8", 6)))
    {
        output = IO_BANK0_GPIO8_CTRL_FUNCSEL::pio1_8;
    }
    else if ((result = !strncmp(data, "usb_muxing_extphy_rcv", 21)))
    {
        output = IO_BANK0_GPIO8_CTRL_FUNCSEL::usb_muxing_extphy_rcv;
    }
    else if ((result = !strncmp(data, "usb_muxing_vbus_en", 18)))
    {
        output = IO_BANK0_GPIO8_CTRL_FUNCSEL::usb_muxing_vbus_en;
    }
    else if ((result = !strncmp(data, "null", 4)))
    {
        output = IO_BANK0_GPIO8_CTRL_FUNCSEL::null;
    }

    return result;
}

}; // namespace RP2040

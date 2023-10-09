/**
 * \file
 * \brief Generated by ifgen (2.6.3).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace RP2040
{

enum class IO_BANK0_GPIO4_CTRL_FUNCSEL : uint8_t
{
    spi0_rx = 1,
    uart1_tx = 2,
    i2c0_sda = 3,
    pwm_a_2 = 4,
    sio_4 = 5,
    pio0_4 = 6,
    pio1_4 = 7,
    usb_muxing_vbus_detect = 9,
    null = 31
};
static_assert(sizeof(IO_BANK0_GPIO4_CTRL_FUNCSEL) == 1);

static constexpr uint16_t IO_BANK0_GPIO4_CTRL_FUNCSEL_id = 33;

/**
 * Converts IO_BANK0_GPIO4_CTRL_FUNCSEL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(IO_BANK0_GPIO4_CTRL_FUNCSEL instance)
{
    const char *result = "UNKNOWN IO_BANK0_GPIO4_CTRL_FUNCSEL";

    switch (instance)
    {
    case IO_BANK0_GPIO4_CTRL_FUNCSEL::spi0_rx:
        result = "spi0_rx";
        break;
    case IO_BANK0_GPIO4_CTRL_FUNCSEL::uart1_tx:
        result = "uart1_tx";
        break;
    case IO_BANK0_GPIO4_CTRL_FUNCSEL::i2c0_sda:
        result = "i2c0_sda";
        break;
    case IO_BANK0_GPIO4_CTRL_FUNCSEL::pwm_a_2:
        result = "pwm_a_2";
        break;
    case IO_BANK0_GPIO4_CTRL_FUNCSEL::sio_4:
        result = "sio_4";
        break;
    case IO_BANK0_GPIO4_CTRL_FUNCSEL::pio0_4:
        result = "pio0_4";
        break;
    case IO_BANK0_GPIO4_CTRL_FUNCSEL::pio1_4:
        result = "pio1_4";
        break;
    case IO_BANK0_GPIO4_CTRL_FUNCSEL::usb_muxing_vbus_detect:
        result = "usb_muxing_vbus_detect";
        break;
    case IO_BANK0_GPIO4_CTRL_FUNCSEL::null:
        result = "null";
        break;
    }

    return result;
}

/**
 * Converts a C string to IO_BANK0_GPIO4_CTRL_FUNCSEL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, IO_BANK0_GPIO4_CTRL_FUNCSEL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "spi0_rx", 7)))
    {
        output = IO_BANK0_GPIO4_CTRL_FUNCSEL::spi0_rx;
    }
    else if ((result = !strncmp(data, "uart1_tx", 8)))
    {
        output = IO_BANK0_GPIO4_CTRL_FUNCSEL::uart1_tx;
    }
    else if ((result = !strncmp(data, "i2c0_sda", 8)))
    {
        output = IO_BANK0_GPIO4_CTRL_FUNCSEL::i2c0_sda;
    }
    else if ((result = !strncmp(data, "pwm_a_2", 7)))
    {
        output = IO_BANK0_GPIO4_CTRL_FUNCSEL::pwm_a_2;
    }
    else if ((result = !strncmp(data, "sio_4", 5)))
    {
        output = IO_BANK0_GPIO4_CTRL_FUNCSEL::sio_4;
    }
    else if ((result = !strncmp(data, "pio0_4", 6)))
    {
        output = IO_BANK0_GPIO4_CTRL_FUNCSEL::pio0_4;
    }
    else if ((result = !strncmp(data, "pio1_4", 6)))
    {
        output = IO_BANK0_GPIO4_CTRL_FUNCSEL::pio1_4;
    }
    else if ((result = !strncmp(data, "usb_muxing_vbus_detect", 22)))
    {
        output = IO_BANK0_GPIO4_CTRL_FUNCSEL::usb_muxing_vbus_detect;
    }
    else if ((result = !strncmp(data, "null", 4)))
    {
        output = IO_BANK0_GPIO4_CTRL_FUNCSEL::null;
    }

    return result;
}

}; // namespace RP2040

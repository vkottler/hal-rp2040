/**
 * \file
 * \brief Generated by ifgen (2.6.3).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace RP2040
{

enum class IO_BANK0_GPIO25_CTRL_FUNCSEL : uint8_t
{
    spi1_ss_n = 1,
    uart1_rx = 2,
    i2c0_scl = 3,
    pwm_b_4 = 4,
    sio_25 = 5,
    pio0_25 = 6,
    pio1_25 = 7,
    clocks_gpout_3 = 8,
    usb_muxing_vbus_detect = 9,
    null = 31
};
static_assert(sizeof(IO_BANK0_GPIO25_CTRL_FUNCSEL) == 1);

static constexpr uint16_t IO_BANK0_GPIO25_CTRL_FUNCSEL_id = 138;

/**
 * Converts IO_BANK0_GPIO25_CTRL_FUNCSEL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(IO_BANK0_GPIO25_CTRL_FUNCSEL instance)
{
    const char *result = "UNKNOWN IO_BANK0_GPIO25_CTRL_FUNCSEL";

    switch (instance)
    {
    case IO_BANK0_GPIO25_CTRL_FUNCSEL::spi1_ss_n:
        result = "spi1_ss_n";
        break;
    case IO_BANK0_GPIO25_CTRL_FUNCSEL::uart1_rx:
        result = "uart1_rx";
        break;
    case IO_BANK0_GPIO25_CTRL_FUNCSEL::i2c0_scl:
        result = "i2c0_scl";
        break;
    case IO_BANK0_GPIO25_CTRL_FUNCSEL::pwm_b_4:
        result = "pwm_b_4";
        break;
    case IO_BANK0_GPIO25_CTRL_FUNCSEL::sio_25:
        result = "sio_25";
        break;
    case IO_BANK0_GPIO25_CTRL_FUNCSEL::pio0_25:
        result = "pio0_25";
        break;
    case IO_BANK0_GPIO25_CTRL_FUNCSEL::pio1_25:
        result = "pio1_25";
        break;
    case IO_BANK0_GPIO25_CTRL_FUNCSEL::clocks_gpout_3:
        result = "clocks_gpout_3";
        break;
    case IO_BANK0_GPIO25_CTRL_FUNCSEL::usb_muxing_vbus_detect:
        result = "usb_muxing_vbus_detect";
        break;
    case IO_BANK0_GPIO25_CTRL_FUNCSEL::null:
        result = "null";
        break;
    }

    return result;
}

/**
 * Converts a C string to IO_BANK0_GPIO25_CTRL_FUNCSEL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, IO_BANK0_GPIO25_CTRL_FUNCSEL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "spi1_ss_n", 9)))
    {
        output = IO_BANK0_GPIO25_CTRL_FUNCSEL::spi1_ss_n;
    }
    else if ((result = !strncmp(data, "uart1_rx", 8)))
    {
        output = IO_BANK0_GPIO25_CTRL_FUNCSEL::uart1_rx;
    }
    else if ((result = !strncmp(data, "i2c0_scl", 8)))
    {
        output = IO_BANK0_GPIO25_CTRL_FUNCSEL::i2c0_scl;
    }
    else if ((result = !strncmp(data, "pwm_b_4", 7)))
    {
        output = IO_BANK0_GPIO25_CTRL_FUNCSEL::pwm_b_4;
    }
    else if ((result = !strncmp(data, "sio_25", 6)))
    {
        output = IO_BANK0_GPIO25_CTRL_FUNCSEL::sio_25;
    }
    else if ((result = !strncmp(data, "pio0_25", 7)))
    {
        output = IO_BANK0_GPIO25_CTRL_FUNCSEL::pio0_25;
    }
    else if ((result = !strncmp(data, "pio1_25", 7)))
    {
        output = IO_BANK0_GPIO25_CTRL_FUNCSEL::pio1_25;
    }
    else if ((result = !strncmp(data, "clocks_gpout_3", 14)))
    {
        output = IO_BANK0_GPIO25_CTRL_FUNCSEL::clocks_gpout_3;
    }
    else if ((result = !strncmp(data, "usb_muxing_vbus_detect", 22)))
    {
        output = IO_BANK0_GPIO25_CTRL_FUNCSEL::usb_muxing_vbus_detect;
    }
    else if ((result = !strncmp(data, "null", 4)))
    {
        output = IO_BANK0_GPIO25_CTRL_FUNCSEL::null;
    }

    return result;
}

}; // namespace RP2040
/**
 * \file
 * \brief Generated by ifgen (2.6.3).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace RP2040
{

enum class IO_BANK0_GPIO27_CTRL_FUNCSEL : uint8_t
{
    spi1_tx = 1,
    uart1_rts = 2,
    i2c1_scl = 3,
    pwm_b_5 = 4,
    sio_27 = 5,
    pio0_27 = 6,
    pio1_27 = 7,
    usb_muxing_overcurr_detect = 9,
    null = 31
};
static_assert(sizeof(IO_BANK0_GPIO27_CTRL_FUNCSEL) == 1);

static constexpr uint16_t IO_BANK0_GPIO27_CTRL_FUNCSEL_id = 148;

/**
 * Converts IO_BANK0_GPIO27_CTRL_FUNCSEL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(IO_BANK0_GPIO27_CTRL_FUNCSEL instance)
{
    const char *result = "UNKNOWN IO_BANK0_GPIO27_CTRL_FUNCSEL";

    switch (instance)
    {
    case IO_BANK0_GPIO27_CTRL_FUNCSEL::spi1_tx:
        result = "spi1_tx";
        break;
    case IO_BANK0_GPIO27_CTRL_FUNCSEL::uart1_rts:
        result = "uart1_rts";
        break;
    case IO_BANK0_GPIO27_CTRL_FUNCSEL::i2c1_scl:
        result = "i2c1_scl";
        break;
    case IO_BANK0_GPIO27_CTRL_FUNCSEL::pwm_b_5:
        result = "pwm_b_5";
        break;
    case IO_BANK0_GPIO27_CTRL_FUNCSEL::sio_27:
        result = "sio_27";
        break;
    case IO_BANK0_GPIO27_CTRL_FUNCSEL::pio0_27:
        result = "pio0_27";
        break;
    case IO_BANK0_GPIO27_CTRL_FUNCSEL::pio1_27:
        result = "pio1_27";
        break;
    case IO_BANK0_GPIO27_CTRL_FUNCSEL::usb_muxing_overcurr_detect:
        result = "usb_muxing_overcurr_detect";
        break;
    case IO_BANK0_GPIO27_CTRL_FUNCSEL::null:
        result = "null";
        break;
    }

    return result;
}

/**
 * Converts a C string to IO_BANK0_GPIO27_CTRL_FUNCSEL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, IO_BANK0_GPIO27_CTRL_FUNCSEL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "spi1_tx", 7)))
    {
        output = IO_BANK0_GPIO27_CTRL_FUNCSEL::spi1_tx;
    }
    else if ((result = !strncmp(data, "uart1_rts", 9)))
    {
        output = IO_BANK0_GPIO27_CTRL_FUNCSEL::uart1_rts;
    }
    else if ((result = !strncmp(data, "i2c1_scl", 8)))
    {
        output = IO_BANK0_GPIO27_CTRL_FUNCSEL::i2c1_scl;
    }
    else if ((result = !strncmp(data, "pwm_b_5", 7)))
    {
        output = IO_BANK0_GPIO27_CTRL_FUNCSEL::pwm_b_5;
    }
    else if ((result = !strncmp(data, "sio_27", 6)))
    {
        output = IO_BANK0_GPIO27_CTRL_FUNCSEL::sio_27;
    }
    else if ((result = !strncmp(data, "pio0_27", 7)))
    {
        output = IO_BANK0_GPIO27_CTRL_FUNCSEL::pio0_27;
    }
    else if ((result = !strncmp(data, "pio1_27", 7)))
    {
        output = IO_BANK0_GPIO27_CTRL_FUNCSEL::pio1_27;
    }
    else if ((result = !strncmp(data, "usb_muxing_overcurr_detect", 26)))
    {
        output = IO_BANK0_GPIO27_CTRL_FUNCSEL::usb_muxing_overcurr_detect;
    }
    else if ((result = !strncmp(data, "null", 4)))
    {
        output = IO_BANK0_GPIO27_CTRL_FUNCSEL::null;
    }

    return result;
}

}; // namespace RP2040
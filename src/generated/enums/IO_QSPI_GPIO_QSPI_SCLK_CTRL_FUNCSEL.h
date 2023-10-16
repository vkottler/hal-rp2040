/**
 * \file
 * \brief Generated by ifgen (3.1.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace RP2040
{

enum class IO_QSPI_GPIO_QSPI_SCLK_CTRL_FUNCSEL : uint8_t
{
    xip_sclk,
    sio_30 = 5,
    null = 31
};
static_assert(sizeof(IO_QSPI_GPIO_QSPI_SCLK_CTRL_FUNCSEL) == 1);

/**
 * Converts IO_QSPI_GPIO_QSPI_SCLK_CTRL_FUNCSEL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(IO_QSPI_GPIO_QSPI_SCLK_CTRL_FUNCSEL instance)
{
    const char *result = "UNKNOWN IO_QSPI_GPIO_QSPI_SCLK_CTRL_FUNCSEL";

    switch (instance)
    {
    case IO_QSPI_GPIO_QSPI_SCLK_CTRL_FUNCSEL::xip_sclk:
        result = "xip_sclk";
        break;
    case IO_QSPI_GPIO_QSPI_SCLK_CTRL_FUNCSEL::sio_30:
        result = "sio_30";
        break;
    case IO_QSPI_GPIO_QSPI_SCLK_CTRL_FUNCSEL::null:
        result = "null";
        break;
    }

    return result;
}

/**
 * Converts a C string to IO_QSPI_GPIO_QSPI_SCLK_CTRL_FUNCSEL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        IO_QSPI_GPIO_QSPI_SCLK_CTRL_FUNCSEL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "xip_sclk", 8)))
    {
        output = IO_QSPI_GPIO_QSPI_SCLK_CTRL_FUNCSEL::xip_sclk;
    }
    else if ((result = !strncmp(data, "sio_30", 6)))
    {
        output = IO_QSPI_GPIO_QSPI_SCLK_CTRL_FUNCSEL::sio_30;
    }
    else if ((result = !strncmp(data, "null", 4)))
    {
        output = IO_QSPI_GPIO_QSPI_SCLK_CTRL_FUNCSEL::null;
    }

    return result;
}

}; // namespace RP2040

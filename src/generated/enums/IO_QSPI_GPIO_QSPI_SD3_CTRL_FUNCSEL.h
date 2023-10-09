/**
 * \file
 * \brief Generated by ifgen (2.6.3).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace RP2040
{

enum class IO_QSPI_GPIO_QSPI_SD3_CTRL_FUNCSEL : uint8_t
{
    xip_sd3,
    sio_35 = 5,
    null = 31
};
static_assert(sizeof(IO_QSPI_GPIO_QSPI_SD3_CTRL_FUNCSEL) == 1);

static constexpr uint16_t IO_QSPI_GPIO_QSPI_SD3_CTRL_FUNCSEL_id = 313;

/**
 * Converts IO_QSPI_GPIO_QSPI_SD3_CTRL_FUNCSEL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(IO_QSPI_GPIO_QSPI_SD3_CTRL_FUNCSEL instance)
{
    const char *result = "UNKNOWN IO_QSPI_GPIO_QSPI_SD3_CTRL_FUNCSEL";

    switch (instance)
    {
    case IO_QSPI_GPIO_QSPI_SD3_CTRL_FUNCSEL::xip_sd3:
        result = "xip_sd3";
        break;
    case IO_QSPI_GPIO_QSPI_SD3_CTRL_FUNCSEL::sio_35:
        result = "sio_35";
        break;
    case IO_QSPI_GPIO_QSPI_SD3_CTRL_FUNCSEL::null:
        result = "null";
        break;
    }

    return result;
}

/**
 * Converts a C string to IO_QSPI_GPIO_QSPI_SD3_CTRL_FUNCSEL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, IO_QSPI_GPIO_QSPI_SD3_CTRL_FUNCSEL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "xip_sd3", 7)))
    {
        output = IO_QSPI_GPIO_QSPI_SD3_CTRL_FUNCSEL::xip_sd3;
    }
    else if ((result = !strncmp(data, "sio_35", 6)))
    {
        output = IO_QSPI_GPIO_QSPI_SD3_CTRL_FUNCSEL::sio_35;
    }
    else if ((result = !strncmp(data, "null", 4)))
    {
        output = IO_QSPI_GPIO_QSPI_SD3_CTRL_FUNCSEL::null;
    }

    return result;
}

}; // namespace RP2040

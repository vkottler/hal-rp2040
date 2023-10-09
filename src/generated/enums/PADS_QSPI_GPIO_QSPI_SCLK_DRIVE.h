/**
 * \file
 * \brief Generated by ifgen (2.6.3).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace RP2040
{

enum class PADS_QSPI_GPIO_QSPI_SCLK_DRIVE : uint8_t
{
    2mA,
    4mA = 1,
    8mA = 2,
    12mA = 3
};
static_assert(sizeof(PADS_QSPI_GPIO_QSPI_SCLK_DRIVE) == 1);

static constexpr uint16_t PADS_QSPI_GPIO_QSPI_SCLK_DRIVE_id = 7;

/**
 * Converts PADS_QSPI_GPIO_QSPI_SCLK_DRIVE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PADS_QSPI_GPIO_QSPI_SCLK_DRIVE instance)
{
    const char *result = "UNKNOWN PADS_QSPI_GPIO_QSPI_SCLK_DRIVE";

    switch (instance)
    {
    case PADS_QSPI_GPIO_QSPI_SCLK_DRIVE::2mA:
        result = "2mA";
        break;
    case PADS_QSPI_GPIO_QSPI_SCLK_DRIVE::4mA:
        result = "4mA";
        break;
    case PADS_QSPI_GPIO_QSPI_SCLK_DRIVE::8mA:
        result = "8mA";
        break;
    case PADS_QSPI_GPIO_QSPI_SCLK_DRIVE::12mA:
        result = "12mA";
        break;
    }

    return result;
}

/**
 * Converts a C string to PADS_QSPI_GPIO_QSPI_SCLK_DRIVE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PADS_QSPI_GPIO_QSPI_SCLK_DRIVE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "2mA", 3)))
    {
        output = PADS_QSPI_GPIO_QSPI_SCLK_DRIVE::2mA;
    }
    else if ((result = !strncmp(data, "4mA", 3)))
    {
        output = PADS_QSPI_GPIO_QSPI_SCLK_DRIVE::4mA;
    }
    else if ((result = !strncmp(data, "8mA", 3)))
    {
        output = PADS_QSPI_GPIO_QSPI_SCLK_DRIVE::8mA;
    }
    else if ((result = !strncmp(data, "12mA", 4)))
    {
        output = PADS_QSPI_GPIO_QSPI_SCLK_DRIVE::12mA;
    }

    return result;
}

}; // namespace RP2040
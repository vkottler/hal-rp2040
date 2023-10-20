/**
 * \file
 * \brief Generated by ifgen (3.2.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace RP2040
{

enum class PADS_QSPI_GPIO_QSPI_SD0_DRIVE : uint8_t
{
    _2mA,
    _4mA = 1,
    _8mA = 2,
    _12mA = 3
};
static_assert(sizeof(PADS_QSPI_GPIO_QSPI_SD0_DRIVE) == 1);

/**
 * Converts PADS_QSPI_GPIO_QSPI_SD0_DRIVE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PADS_QSPI_GPIO_QSPI_SD0_DRIVE instance)
{
    const char *result = "UNKNOWN PADS_QSPI_GPIO_QSPI_SD0_DRIVE";

    switch (instance)
    {
    case PADS_QSPI_GPIO_QSPI_SD0_DRIVE::_2mA:
        result = "_2mA";
        break;
    case PADS_QSPI_GPIO_QSPI_SD0_DRIVE::_4mA:
        result = "_4mA";
        break;
    case PADS_QSPI_GPIO_QSPI_SD0_DRIVE::_8mA:
        result = "_8mA";
        break;
    case PADS_QSPI_GPIO_QSPI_SD0_DRIVE::_12mA:
        result = "_12mA";
        break;
    }

    return result;
}

/**
 * Converts a C string to PADS_QSPI_GPIO_QSPI_SD0_DRIVE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        PADS_QSPI_GPIO_QSPI_SD0_DRIVE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_2mA", 4)))
    {
        output = PADS_QSPI_GPIO_QSPI_SD0_DRIVE::_2mA;
    }
    else if ((result = !strncmp(data, "_4mA", 4)))
    {
        output = PADS_QSPI_GPIO_QSPI_SD0_DRIVE::_4mA;
    }
    else if ((result = !strncmp(data, "_8mA", 4)))
    {
        output = PADS_QSPI_GPIO_QSPI_SD0_DRIVE::_8mA;
    }
    else if ((result = !strncmp(data, "_12mA", 5)))
    {
        output = PADS_QSPI_GPIO_QSPI_SD0_DRIVE::_12mA;
    }

    return result;
}

}; // namespace RP2040

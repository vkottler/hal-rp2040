/**
 * \file
 * \brief Generated by ifgen (2.6.3).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace RP2040
{

enum class PADS_BANK0_VOLTAGE_SELECT_VOLTAGE_SELECT : uint8_t
{
    3v3 /*!< Set voltage to 3.3V (DVDD >= 2V5) */,
    1v8 = 1 /*!< Set voltage to 1.8V (DVDD <= 1V8) */
};
static_assert(sizeof(PADS_BANK0_VOLTAGE_SELECT_VOLTAGE_SELECT) == 1);

static constexpr uint16_t PADS_BANK0_VOLTAGE_SELECT_VOLTAGE_SELECT_id = 417;

/**
 * Converts PADS_BANK0_VOLTAGE_SELECT_VOLTAGE_SELECT to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PADS_BANK0_VOLTAGE_SELECT_VOLTAGE_SELECT instance)
{
    const char *result = "UNKNOWN PADS_BANK0_VOLTAGE_SELECT_VOLTAGE_SELECT";

    switch (instance)
    {
    case PADS_BANK0_VOLTAGE_SELECT_VOLTAGE_SELECT::3v3:
        result = "3v3";
        break;
    case PADS_BANK0_VOLTAGE_SELECT_VOLTAGE_SELECT::1v8:
        result = "1v8";
        break;
    }

    return result;
}

/**
 * Converts a C string to PADS_BANK0_VOLTAGE_SELECT_VOLTAGE_SELECT.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        PADS_BANK0_VOLTAGE_SELECT_VOLTAGE_SELECT &output)
{
    bool result = false;

    if ((result = !strncmp(data, "3v3", 3)))
    {
        output = PADS_BANK0_VOLTAGE_SELECT_VOLTAGE_SELECT::3v3;
    }
    else if ((result = !strncmp(data, "1v8", 3)))
    {
        output = PADS_BANK0_VOLTAGE_SELECT_VOLTAGE_SELECT::1v8;
    }

    return result;
}

}; // namespace RP2040

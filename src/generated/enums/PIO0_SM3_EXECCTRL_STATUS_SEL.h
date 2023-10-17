/**
 * \file
 * \brief Generated by ifgen (3.1.6).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace RP2040
{

enum class PIO0_SM3_EXECCTRL_STATUS_SEL : uint8_t
{
    TXLEVEL /*!< All-ones if TX FIFO level < N, otherwise all-zeroes */,
    RXLEVEL = 1 /*!< All-ones if RX FIFO level < N, otherwise all-zeroes */
};
static_assert(sizeof(PIO0_SM3_EXECCTRL_STATUS_SEL) == 1);

/**
 * Converts PIO0_SM3_EXECCTRL_STATUS_SEL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PIO0_SM3_EXECCTRL_STATUS_SEL instance)
{
    const char *result = "UNKNOWN PIO0_SM3_EXECCTRL_STATUS_SEL";

    switch (instance)
    {
    case PIO0_SM3_EXECCTRL_STATUS_SEL::TXLEVEL:
        result = "TXLEVEL";
        break;
    case PIO0_SM3_EXECCTRL_STATUS_SEL::RXLEVEL:
        result = "RXLEVEL";
        break;
    }

    return result;
}

/**
 * Converts a C string to PIO0_SM3_EXECCTRL_STATUS_SEL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PIO0_SM3_EXECCTRL_STATUS_SEL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "TXLEVEL", 7)))
    {
        output = PIO0_SM3_EXECCTRL_STATUS_SEL::TXLEVEL;
    }
    else if ((result = !strncmp(data, "RXLEVEL", 7)))
    {
        output = PIO0_SM3_EXECCTRL_STATUS_SEL::RXLEVEL;
    }

    return result;
}

}; // namespace RP2040

/**
 * \file
 * \brief Generated by ifgen (3.2.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace RP2040
{

enum class PWM_CH6_CSR_DIVMODE : uint8_t
{
    div /*!< Free-running counting at rate dictated by fractional divider */,
    level = 1 /*!< Fractional divider operation is gated by the PWM B pin. */,
    rise = 2 /*!< Counter advances with each rising edge of the PWM B pin. */,
    fall = 3 /*!< Counter advances with each falling edge of the PWM B pin. */
};
static_assert(sizeof(PWM_CH6_CSR_DIVMODE) == 1);

/**
 * Converts PWM_CH6_CSR_DIVMODE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PWM_CH6_CSR_DIVMODE instance)
{
    const char *result = "UNKNOWN PWM_CH6_CSR_DIVMODE";

    switch (instance)
    {
    case PWM_CH6_CSR_DIVMODE::div:
        result = "div";
        break;
    case PWM_CH6_CSR_DIVMODE::level:
        result = "level";
        break;
    case PWM_CH6_CSR_DIVMODE::rise:
        result = "rise";
        break;
    case PWM_CH6_CSR_DIVMODE::fall:
        result = "fall";
        break;
    }

    return result;
}

/**
 * Converts a C string to PWM_CH6_CSR_DIVMODE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PWM_CH6_CSR_DIVMODE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "div", 3)))
    {
        output = PWM_CH6_CSR_DIVMODE::div;
    }
    else if ((result = !strncmp(data, "level", 5)))
    {
        output = PWM_CH6_CSR_DIVMODE::level;
    }
    else if ((result = !strncmp(data, "rise", 4)))
    {
        output = PWM_CH6_CSR_DIVMODE::rise;
    }
    else if ((result = !strncmp(data, "fall", 4)))
    {
        output = PWM_CH6_CSR_DIVMODE::fall;
    }

    return result;
}

}; // namespace RP2040

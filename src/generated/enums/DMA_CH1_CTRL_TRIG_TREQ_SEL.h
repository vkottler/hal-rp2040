/**
 * \file
 * \brief Generated by ifgen (3.1.4).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace RP2040
{

enum class DMA_CH1_CTRL_TRIG_TREQ_SEL : uint8_t
{
    TIMER0 = 59 /*!< Select Timer 0 as TREQ */,
    TIMER1 = 60 /*!< Select Timer 1 as TREQ */,
    TIMER2 = 61 /*!< Select Timer 2 as TREQ (Optional) */,
    TIMER3 = 62 /*!< Select Timer 3 as TREQ (Optional) */,
    PERMANENT = 63 /*!< Permanent request, for unpaced transfers. */
};
static_assert(sizeof(DMA_CH1_CTRL_TRIG_TREQ_SEL) == 1);

/**
 * Converts DMA_CH1_CTRL_TRIG_TREQ_SEL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(DMA_CH1_CTRL_TRIG_TREQ_SEL instance)
{
    const char *result = "UNKNOWN DMA_CH1_CTRL_TRIG_TREQ_SEL";

    switch (instance)
    {
    case DMA_CH1_CTRL_TRIG_TREQ_SEL::TIMER0:
        result = "TIMER0";
        break;
    case DMA_CH1_CTRL_TRIG_TREQ_SEL::TIMER1:
        result = "TIMER1";
        break;
    case DMA_CH1_CTRL_TRIG_TREQ_SEL::TIMER2:
        result = "TIMER2";
        break;
    case DMA_CH1_CTRL_TRIG_TREQ_SEL::TIMER3:
        result = "TIMER3";
        break;
    case DMA_CH1_CTRL_TRIG_TREQ_SEL::PERMANENT:
        result = "PERMANENT";
        break;
    }

    return result;
}

/**
 * Converts a C string to DMA_CH1_CTRL_TRIG_TREQ_SEL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, DMA_CH1_CTRL_TRIG_TREQ_SEL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "TIMER0", 6)))
    {
        output = DMA_CH1_CTRL_TRIG_TREQ_SEL::TIMER0;
    }
    else if ((result = !strncmp(data, "TIMER1", 6)))
    {
        output = DMA_CH1_CTRL_TRIG_TREQ_SEL::TIMER1;
    }
    else if ((result = !strncmp(data, "TIMER2", 6)))
    {
        output = DMA_CH1_CTRL_TRIG_TREQ_SEL::TIMER2;
    }
    else if ((result = !strncmp(data, "TIMER3", 6)))
    {
        output = DMA_CH1_CTRL_TRIG_TREQ_SEL::TIMER3;
    }
    else if ((result = !strncmp(data, "PERMANENT", 9)))
    {
        output = DMA_CH1_CTRL_TRIG_TREQ_SEL::PERMANENT;
    }

    return result;
}

}; // namespace RP2040

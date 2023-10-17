/**
 * \file
 * \brief Generated by ifgen (3.1.2).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace RP2040
{

enum class DMA_CH2_CTRL_TRIG_DATA_SIZE : uint8_t
{
    BYTE,
    HALFWORD = 1,
    WORD = 2
};
static_assert(sizeof(DMA_CH2_CTRL_TRIG_DATA_SIZE) == 1);

/**
 * Converts DMA_CH2_CTRL_TRIG_DATA_SIZE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(DMA_CH2_CTRL_TRIG_DATA_SIZE instance)
{
    const char *result = "UNKNOWN DMA_CH2_CTRL_TRIG_DATA_SIZE";

    switch (instance)
    {
    case DMA_CH2_CTRL_TRIG_DATA_SIZE::BYTE:
        result = "BYTE";
        break;
    case DMA_CH2_CTRL_TRIG_DATA_SIZE::HALFWORD:
        result = "HALFWORD";
        break;
    case DMA_CH2_CTRL_TRIG_DATA_SIZE::WORD:
        result = "WORD";
        break;
    }

    return result;
}

/**
 * Converts a C string to DMA_CH2_CTRL_TRIG_DATA_SIZE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, DMA_CH2_CTRL_TRIG_DATA_SIZE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "BYTE", 4)))
    {
        output = DMA_CH2_CTRL_TRIG_DATA_SIZE::BYTE;
    }
    else if ((result = !strncmp(data, "HALFWORD", 8)))
    {
        output = DMA_CH2_CTRL_TRIG_DATA_SIZE::HALFWORD;
    }
    else if ((result = !strncmp(data, "WORD", 4)))
    {
        output = DMA_CH2_CTRL_TRIG_DATA_SIZE::WORD;
    }

    return result;
}

}; // namespace RP2040

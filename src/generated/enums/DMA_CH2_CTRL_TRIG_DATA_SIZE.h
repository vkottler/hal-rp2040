/**
 * \file
 * \brief Generated by ifgen (2.6.3).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace RP2040
{

enum class DMA_CH2_CTRL_TRIG_DATA_SIZE : uint8_t
{
    SIZE_BYTE,
    SIZE_HALFWORD = 1,
    SIZE_WORD = 2
};
static_assert(sizeof(DMA_CH2_CTRL_TRIG_DATA_SIZE) == 1);

static constexpr uint16_t DMA_CH2_CTRL_TRIG_DATA_SIZE_id = 169;

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
    case DMA_CH2_CTRL_TRIG_DATA_SIZE::SIZE_BYTE:
        result = "SIZE_BYTE";
        break;
    case DMA_CH2_CTRL_TRIG_DATA_SIZE::SIZE_HALFWORD:
        result = "SIZE_HALFWORD";
        break;
    case DMA_CH2_CTRL_TRIG_DATA_SIZE::SIZE_WORD:
        result = "SIZE_WORD";
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

    if ((result = !strncmp(data, "SIZE_BYTE", 9)))
    {
        output = DMA_CH2_CTRL_TRIG_DATA_SIZE::SIZE_BYTE;
    }
    else if ((result = !strncmp(data, "SIZE_HALFWORD", 13)))
    {
        output = DMA_CH2_CTRL_TRIG_DATA_SIZE::SIZE_HALFWORD;
    }
    else if ((result = !strncmp(data, "SIZE_WORD", 9)))
    {
        output = DMA_CH2_CTRL_TRIG_DATA_SIZE::SIZE_WORD;
    }

    return result;
}

}; // namespace RP2040
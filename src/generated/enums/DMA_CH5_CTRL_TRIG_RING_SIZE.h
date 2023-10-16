/**
 * \file
 * \brief Generated by ifgen (3.1.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace RP2040
{

enum class DMA_CH5_CTRL_TRIG_RING_SIZE : uint8_t
{
    RING_NONE
};
static_assert(sizeof(DMA_CH5_CTRL_TRIG_RING_SIZE) == 1);

/**
 * Converts DMA_CH5_CTRL_TRIG_RING_SIZE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(DMA_CH5_CTRL_TRIG_RING_SIZE instance)
{
    const char *result = "UNKNOWN DMA_CH5_CTRL_TRIG_RING_SIZE";

    switch (instance)
    {
    case DMA_CH5_CTRL_TRIG_RING_SIZE::RING_NONE:
        result = "RING_NONE";
        break;
    }

    return result;
}

/**
 * Converts a C string to DMA_CH5_CTRL_TRIG_RING_SIZE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, DMA_CH5_CTRL_TRIG_RING_SIZE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "RING_NONE", 9)))
    {
        output = DMA_CH5_CTRL_TRIG_RING_SIZE::RING_NONE;
    }

    return result;
}

}; // namespace RP2040

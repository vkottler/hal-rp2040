/**
 * \file
 * \brief Generated by ifgen (2.6.3).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace RP2040
{

enum class CLOCKS_CLK_SYS_CTRL_SRC : uint8_t
{
    clk_ref,
    clksrc_clk_sys_aux = 1
};
static_assert(sizeof(CLOCKS_CLK_SYS_CTRL_SRC) == 1);

static constexpr uint16_t CLOCKS_CLK_SYS_CTRL_SRC_id = 268;

/**
 * Converts CLOCKS_CLK_SYS_CTRL_SRC to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CLOCKS_CLK_SYS_CTRL_SRC instance)
{
    const char *result = "UNKNOWN CLOCKS_CLK_SYS_CTRL_SRC";

    switch (instance)
    {
    case CLOCKS_CLK_SYS_CTRL_SRC::clk_ref:
        result = "clk_ref";
        break;
    case CLOCKS_CLK_SYS_CTRL_SRC::clksrc_clk_sys_aux:
        result = "clksrc_clk_sys_aux";
        break;
    }

    return result;
}

/**
 * Converts a C string to CLOCKS_CLK_SYS_CTRL_SRC.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CLOCKS_CLK_SYS_CTRL_SRC &output)
{
    bool result = false;

    if ((result = !strncmp(data, "clk_ref", 7)))
    {
        output = CLOCKS_CLK_SYS_CTRL_SRC::clk_ref;
    }
    else if ((result = !strncmp(data, "clksrc_clk_sys_aux", 18)))
    {
        output = CLOCKS_CLK_SYS_CTRL_SRC::clksrc_clk_sys_aux;
    }

    return result;
}

}; // namespace RP2040

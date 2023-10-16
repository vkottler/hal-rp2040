/**
 * \file
 * \brief Generated by ifgen (3.1.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace RP2040
{

enum class BUSCTRL_PERFSEL2_PERFSEL2 : uint8_t
{
    apb_contested,
    apb = 1,
    fastperi_contested = 2,
    fastperi = 3,
    sram5_contested = 4,
    sram5 = 5,
    sram4_contested = 6,
    sram4 = 7,
    sram3_contested = 8,
    sram3 = 9,
    sram2_contested = 10,
    sram2 = 11,
    sram1_contested = 12,
    sram1 = 13,
    sram0_contested = 14,
    sram0 = 15,
    xip_main_contested = 16,
    xip_main = 17,
    rom_contested = 18,
    rom = 19
};
static_assert(sizeof(BUSCTRL_PERFSEL2_PERFSEL2) == 1);

static constexpr uint16_t BUSCTRL_PERFSEL2_PERFSEL2_id = 4;

/**
 * Converts BUSCTRL_PERFSEL2_PERFSEL2 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(BUSCTRL_PERFSEL2_PERFSEL2 instance)
{
    const char *result = "UNKNOWN BUSCTRL_PERFSEL2_PERFSEL2";

    switch (instance)
    {
    case BUSCTRL_PERFSEL2_PERFSEL2::apb_contested:
        result = "apb_contested";
        break;
    case BUSCTRL_PERFSEL2_PERFSEL2::apb:
        result = "apb";
        break;
    case BUSCTRL_PERFSEL2_PERFSEL2::fastperi_contested:
        result = "fastperi_contested";
        break;
    case BUSCTRL_PERFSEL2_PERFSEL2::fastperi:
        result = "fastperi";
        break;
    case BUSCTRL_PERFSEL2_PERFSEL2::sram5_contested:
        result = "sram5_contested";
        break;
    case BUSCTRL_PERFSEL2_PERFSEL2::sram5:
        result = "sram5";
        break;
    case BUSCTRL_PERFSEL2_PERFSEL2::sram4_contested:
        result = "sram4_contested";
        break;
    case BUSCTRL_PERFSEL2_PERFSEL2::sram4:
        result = "sram4";
        break;
    case BUSCTRL_PERFSEL2_PERFSEL2::sram3_contested:
        result = "sram3_contested";
        break;
    case BUSCTRL_PERFSEL2_PERFSEL2::sram3:
        result = "sram3";
        break;
    case BUSCTRL_PERFSEL2_PERFSEL2::sram2_contested:
        result = "sram2_contested";
        break;
    case BUSCTRL_PERFSEL2_PERFSEL2::sram2:
        result = "sram2";
        break;
    case BUSCTRL_PERFSEL2_PERFSEL2::sram1_contested:
        result = "sram1_contested";
        break;
    case BUSCTRL_PERFSEL2_PERFSEL2::sram1:
        result = "sram1";
        break;
    case BUSCTRL_PERFSEL2_PERFSEL2::sram0_contested:
        result = "sram0_contested";
        break;
    case BUSCTRL_PERFSEL2_PERFSEL2::sram0:
        result = "sram0";
        break;
    case BUSCTRL_PERFSEL2_PERFSEL2::xip_main_contested:
        result = "xip_main_contested";
        break;
    case BUSCTRL_PERFSEL2_PERFSEL2::xip_main:
        result = "xip_main";
        break;
    case BUSCTRL_PERFSEL2_PERFSEL2::rom_contested:
        result = "rom_contested";
        break;
    case BUSCTRL_PERFSEL2_PERFSEL2::rom:
        result = "rom";
        break;
    }

    return result;
}

/**
 * Converts a C string to BUSCTRL_PERFSEL2_PERFSEL2.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, BUSCTRL_PERFSEL2_PERFSEL2 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "apb_contested", 13)))
    {
        output = BUSCTRL_PERFSEL2_PERFSEL2::apb_contested;
    }
    else if ((result = !strncmp(data, "apb", 3)))
    {
        output = BUSCTRL_PERFSEL2_PERFSEL2::apb;
    }
    else if ((result = !strncmp(data, "fastperi_contested", 18)))
    {
        output = BUSCTRL_PERFSEL2_PERFSEL2::fastperi_contested;
    }
    else if ((result = !strncmp(data, "fastperi", 8)))
    {
        output = BUSCTRL_PERFSEL2_PERFSEL2::fastperi;
    }
    else if ((result = !strncmp(data, "sram5_contested", 15)))
    {
        output = BUSCTRL_PERFSEL2_PERFSEL2::sram5_contested;
    }
    else if ((result = !strncmp(data, "sram5", 5)))
    {
        output = BUSCTRL_PERFSEL2_PERFSEL2::sram5;
    }
    else if ((result = !strncmp(data, "sram4_contested", 15)))
    {
        output = BUSCTRL_PERFSEL2_PERFSEL2::sram4_contested;
    }
    else if ((result = !strncmp(data, "sram4", 5)))
    {
        output = BUSCTRL_PERFSEL2_PERFSEL2::sram4;
    }
    else if ((result = !strncmp(data, "sram3_contested", 15)))
    {
        output = BUSCTRL_PERFSEL2_PERFSEL2::sram3_contested;
    }
    else if ((result = !strncmp(data, "sram3", 5)))
    {
        output = BUSCTRL_PERFSEL2_PERFSEL2::sram3;
    }
    else if ((result = !strncmp(data, "sram2_contested", 15)))
    {
        output = BUSCTRL_PERFSEL2_PERFSEL2::sram2_contested;
    }
    else if ((result = !strncmp(data, "sram2", 5)))
    {
        output = BUSCTRL_PERFSEL2_PERFSEL2::sram2;
    }
    else if ((result = !strncmp(data, "sram1_contested", 15)))
    {
        output = BUSCTRL_PERFSEL2_PERFSEL2::sram1_contested;
    }
    else if ((result = !strncmp(data, "sram1", 5)))
    {
        output = BUSCTRL_PERFSEL2_PERFSEL2::sram1;
    }
    else if ((result = !strncmp(data, "sram0_contested", 15)))
    {
        output = BUSCTRL_PERFSEL2_PERFSEL2::sram0_contested;
    }
    else if ((result = !strncmp(data, "sram0", 5)))
    {
        output = BUSCTRL_PERFSEL2_PERFSEL2::sram0;
    }
    else if ((result = !strncmp(data, "xip_main_contested", 18)))
    {
        output = BUSCTRL_PERFSEL2_PERFSEL2::xip_main_contested;
    }
    else if ((result = !strncmp(data, "xip_main", 8)))
    {
        output = BUSCTRL_PERFSEL2_PERFSEL2::xip_main;
    }
    else if ((result = !strncmp(data, "rom_contested", 13)))
    {
        output = BUSCTRL_PERFSEL2_PERFSEL2::rom_contested;
    }
    else if ((result = !strncmp(data, "rom", 3)))
    {
        output = BUSCTRL_PERFSEL2_PERFSEL2::rom;
    }

    return result;
}

}; // namespace RP2040

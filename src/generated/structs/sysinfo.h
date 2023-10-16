/**
 * \file
 * \brief Generated by ifgen (3.1.0).
 */
#pragma once

#include "../ifgen/common.h"

namespace RP2040
{

struct [[gnu::packed]] sysinfo
{
    /* Constant attributes. */
    static constexpr uint16_t id = 1;       /*!< sysinfo's identifier. */
    static constexpr std::size_t size = 68; /*!< sysinfo's size in bytes. */

    /* Fields. */
    const uint32_t CHIP_ID =
        {}; /*!< (read-only) JEDEC JEP-106 compliant chip identifier. */
    const uint32_t PLATFORM =
        {}; /*!< (read-only) Platform register. Allows software to know what
               environment it is running in. */
    static constexpr std::size_t reserved_padding0_length = 14;
    const uint32_t reserved_padding0[reserved_padding0_length] = {};
    uint32_t GITREF_RP2040; /*!< (read-write) Git hash of the chip source. Used
                               to identify chip version. */

    /* Methods. */

    /**
     * Get CHIP_ID's MANUFACTURER field.
     */
    inline uint16_t get_CHIP_ID_MANUFACTURER()
    {
        return (CHIP_ID >> 0u) & 0b111111111111u;
    }

    /**
     * Get CHIP_ID's PART field.
     */
    inline uint16_t get_CHIP_ID_PART()
    {
        return (CHIP_ID >> 12u) & 0b1111111111111111u;
    }

    /**
     * Get CHIP_ID's REVISION field.
     */
    inline uint8_t get_CHIP_ID_REVISION()
    {
        return (CHIP_ID >> 28u) & 0b1111u;
    }

    /**
     * Get all of CHIP_ID's bit fields.
     */
    inline void get_CHIP_ID(uint16_t &MANUFACTURER, uint16_t &PART,
                            uint8_t &REVISION)
    {
        uint32_t curr = CHIP_ID;

        MANUFACTURER = (curr >> 0u) & 0b111111111111u;
        PART = (curr >> 12u) & 0b1111111111111111u;
        REVISION = (curr >> 28u) & 0b1111u;
    }

    /**
     * Get PLATFORM's FPGA bit.
     */
    inline bool get_PLATFORM_FPGA()
    {
        return PLATFORM & (1u << 0u);
    }

    /**
     * Get PLATFORM's ASIC bit.
     */
    inline bool get_PLATFORM_ASIC()
    {
        return PLATFORM & (1u << 1u);
    }

    /**
     * Get all of PLATFORM's bit fields.
     */
    inline void get_PLATFORM(bool &FPGA, bool &ASIC)
    {
        uint32_t curr = PLATFORM;

        FPGA = curr & (1u << 0u);
        ASIC = curr & (1u << 1u);
    }
};

static_assert(sizeof(sysinfo) == sysinfo::size);

static volatile sysinfo *const SYSINFO =
    reinterpret_cast<sysinfo *>(0x40000000);

}; // namespace RP2040

/**
 * \file
 * \brief Generated by ifgen (2.6.3).
 */
#pragma once

#include "../enums/BUSCTRL_PERFSEL0_PERFSEL0.h"
#include "../enums/BUSCTRL_PERFSEL1_PERFSEL1.h"
#include "../enums/BUSCTRL_PERFSEL2_PERFSEL2.h"
#include "../enums/BUSCTRL_PERFSEL3_PERFSEL3.h"
#include "../ifgen/common.h"

namespace RP2040
{

/**
 * Register block for busfabric control signals and performance counters
 */
struct [[gnu::packed]] busctrl
{
    /* Constant attributes. */
    static constexpr uint16_t id = 1;       /*!< busctrl's identifier. */
    static constexpr std::size_t size = 40; /*!< busctrl's size in bytes. */

    /* Fields. */
    uint32_t BUS_PRIORITY;                /*!< (read-write) Set the priority of each master for bus arbitration. */
    const uint32_t BUS_PRIORITY_ACK = {}; /*!< (read-only) Bus priority acknowledge */
    uint32_t PERFCTR0;                    /*!< (read-write) Bus fabric performance counter 0 */
    uint32_t PERFSEL0;                    /*!< (read-write) Bus fabric performance event select for PERFCTR0 */
    uint32_t PERFCTR1;                    /*!< (read-write) Bus fabric performance counter 1 */
    uint32_t PERFSEL1;                    /*!< (read-write) Bus fabric performance event select for PERFCTR1 */
    uint32_t PERFCTR2;                    /*!< (read-write) Bus fabric performance counter 2 */
    uint32_t PERFSEL2;                    /*!< (read-write) Bus fabric performance event select for PERFCTR2 */
    uint32_t PERFCTR3;                    /*!< (read-write) Bus fabric performance counter 3 */
    uint32_t PERFSEL3;                    /*!< (read-write) Bus fabric performance event select for PERFCTR3 */

    /* Methods. */

    /**
     * Get BUS_PRIORITY's PROC0 bit.
     */
    bool get_BUS_PRIORITY_PROC0()
    {
        return BUS_PRIORITY & (1u << 0u);
    }

    /**
     * Set BUS_PRIORITY's PROC0 bit.
     */
    inline void set_BUS_PRIORITY_PROC0()
    {
        BUS_PRIORITY |= 1u << 0u;
    }

    /**
     * Clear BUS_PRIORITY's PROC0 bit.
     */
    inline void clear_BUS_PRIORITY_PROC0()
    {
        BUS_PRIORITY &= ~(1u << 0u);
    }

    /**
     * Toggle BUS_PRIORITY's PROC0 bit.
     */
    inline void toggle_BUS_PRIORITY_PROC0()
    {
        BUS_PRIORITY ^= 1u << 0u;
    }

    /**
     * Get BUS_PRIORITY's PROC1 bit.
     */
    bool get_BUS_PRIORITY_PROC1()
    {
        return BUS_PRIORITY & (1u << 4u);
    }

    /**
     * Set BUS_PRIORITY's PROC1 bit.
     */
    inline void set_BUS_PRIORITY_PROC1()
    {
        BUS_PRIORITY |= 1u << 4u;
    }

    /**
     * Clear BUS_PRIORITY's PROC1 bit.
     */
    inline void clear_BUS_PRIORITY_PROC1()
    {
        BUS_PRIORITY &= ~(1u << 4u);
    }

    /**
     * Toggle BUS_PRIORITY's PROC1 bit.
     */
    inline void toggle_BUS_PRIORITY_PROC1()
    {
        BUS_PRIORITY ^= 1u << 4u;
    }

    /**
     * Get BUS_PRIORITY's DMA_R bit.
     */
    bool get_BUS_PRIORITY_DMA_R()
    {
        return BUS_PRIORITY & (1u << 8u);
    }

    /**
     * Set BUS_PRIORITY's DMA_R bit.
     */
    inline void set_BUS_PRIORITY_DMA_R()
    {
        BUS_PRIORITY |= 1u << 8u;
    }

    /**
     * Clear BUS_PRIORITY's DMA_R bit.
     */
    inline void clear_BUS_PRIORITY_DMA_R()
    {
        BUS_PRIORITY &= ~(1u << 8u);
    }

    /**
     * Toggle BUS_PRIORITY's DMA_R bit.
     */
    inline void toggle_BUS_PRIORITY_DMA_R()
    {
        BUS_PRIORITY ^= 1u << 8u;
    }

    /**
     * Get BUS_PRIORITY's DMA_W bit.
     */
    bool get_BUS_PRIORITY_DMA_W()
    {
        return BUS_PRIORITY & (1u << 12u);
    }

    /**
     * Set BUS_PRIORITY's DMA_W bit.
     */
    inline void set_BUS_PRIORITY_DMA_W()
    {
        BUS_PRIORITY |= 1u << 12u;
    }

    /**
     * Clear BUS_PRIORITY's DMA_W bit.
     */
    inline void clear_BUS_PRIORITY_DMA_W()
    {
        BUS_PRIORITY &= ~(1u << 12u);
    }

    /**
     * Toggle BUS_PRIORITY's DMA_W bit.
     */
    inline void toggle_BUS_PRIORITY_DMA_W()
    {
        BUS_PRIORITY ^= 1u << 12u;
    }

    /**
     * Get BUS_PRIORITY_ACK's BUS_PRIORITY_ACK bit.
     */
    bool get_BUS_PRIORITY_ACK_BUS_PRIORITY_ACK()
    {
        return BUS_PRIORITY_ACK & (1u << 0u);
    }

    /**
     * Get PERFCTR0's PERFCTR0 field.
     */
    uint32_t get_PERFCTR0_PERFCTR0()
    {
        return (PERFCTR0 >> 0u) & 0b111111111111111111111111u;
    }

    /**
     * Set PERFCTR0's PERFCTR0 field.
     */
    inline void set_PERFCTR0_PERFCTR0(uint32_t value)
    {
        uint32_t curr = PERFCTR0;

        curr &= ~(0b111111111111111111111111u << 0u);
        curr |= (value & 0b111111111111111111111111u) << 0u;

        PERFCTR0 = curr;
    }

    /**
     * Get PERFSEL0's PERFSEL0 field.
     */
    BUSCTRL_PERFSEL0_PERFSEL0 get_PERFSEL0_PERFSEL0()
    {
        return BUSCTRL_PERFSEL0_PERFSEL0((PERFSEL0 >> 0u) & 0b11111u);
    }

    /**
     * Set PERFSEL0's PERFSEL0 field.
     */
    inline void set_PERFSEL0_PERFSEL0(BUSCTRL_PERFSEL0_PERFSEL0 value)
    {
        uint32_t curr = PERFSEL0;

        curr &= ~(0b11111u << 0u);
        curr |= (std::to_underlying(value) & 0b11111u) << 0u;

        PERFSEL0 = curr;
    }

    /**
     * Get PERFCTR1's PERFCTR1 field.
     */
    uint32_t get_PERFCTR1_PERFCTR1()
    {
        return (PERFCTR1 >> 0u) & 0b111111111111111111111111u;
    }

    /**
     * Set PERFCTR1's PERFCTR1 field.
     */
    inline void set_PERFCTR1_PERFCTR1(uint32_t value)
    {
        uint32_t curr = PERFCTR1;

        curr &= ~(0b111111111111111111111111u << 0u);
        curr |= (value & 0b111111111111111111111111u) << 0u;

        PERFCTR1 = curr;
    }

    /**
     * Get PERFSEL1's PERFSEL1 field.
     */
    BUSCTRL_PERFSEL1_PERFSEL1 get_PERFSEL1_PERFSEL1()
    {
        return BUSCTRL_PERFSEL1_PERFSEL1((PERFSEL1 >> 0u) & 0b11111u);
    }

    /**
     * Set PERFSEL1's PERFSEL1 field.
     */
    inline void set_PERFSEL1_PERFSEL1(BUSCTRL_PERFSEL1_PERFSEL1 value)
    {
        uint32_t curr = PERFSEL1;

        curr &= ~(0b11111u << 0u);
        curr |= (std::to_underlying(value) & 0b11111u) << 0u;

        PERFSEL1 = curr;
    }

    /**
     * Get PERFCTR2's PERFCTR2 field.
     */
    uint32_t get_PERFCTR2_PERFCTR2()
    {
        return (PERFCTR2 >> 0u) & 0b111111111111111111111111u;
    }

    /**
     * Set PERFCTR2's PERFCTR2 field.
     */
    inline void set_PERFCTR2_PERFCTR2(uint32_t value)
    {
        uint32_t curr = PERFCTR2;

        curr &= ~(0b111111111111111111111111u << 0u);
        curr |= (value & 0b111111111111111111111111u) << 0u;

        PERFCTR2 = curr;
    }

    /**
     * Get PERFSEL2's PERFSEL2 field.
     */
    BUSCTRL_PERFSEL2_PERFSEL2 get_PERFSEL2_PERFSEL2()
    {
        return BUSCTRL_PERFSEL2_PERFSEL2((PERFSEL2 >> 0u) & 0b11111u);
    }

    /**
     * Set PERFSEL2's PERFSEL2 field.
     */
    inline void set_PERFSEL2_PERFSEL2(BUSCTRL_PERFSEL2_PERFSEL2 value)
    {
        uint32_t curr = PERFSEL2;

        curr &= ~(0b11111u << 0u);
        curr |= (std::to_underlying(value) & 0b11111u) << 0u;

        PERFSEL2 = curr;
    }

    /**
     * Get PERFCTR3's PERFCTR3 field.
     */
    uint32_t get_PERFCTR3_PERFCTR3()
    {
        return (PERFCTR3 >> 0u) & 0b111111111111111111111111u;
    }

    /**
     * Set PERFCTR3's PERFCTR3 field.
     */
    inline void set_PERFCTR3_PERFCTR3(uint32_t value)
    {
        uint32_t curr = PERFCTR3;

        curr &= ~(0b111111111111111111111111u << 0u);
        curr |= (value & 0b111111111111111111111111u) << 0u;

        PERFCTR3 = curr;
    }

    /**
     * Get PERFSEL3's PERFSEL3 field.
     */
    BUSCTRL_PERFSEL3_PERFSEL3 get_PERFSEL3_PERFSEL3()
    {
        return BUSCTRL_PERFSEL3_PERFSEL3((PERFSEL3 >> 0u) & 0b11111u);
    }

    /**
     * Set PERFSEL3's PERFSEL3 field.
     */
    inline void set_PERFSEL3_PERFSEL3(BUSCTRL_PERFSEL3_PERFSEL3 value)
    {
        uint32_t curr = PERFSEL3;

        curr &= ~(0b11111u << 0u);
        curr |= (std::to_underlying(value) & 0b11111u) << 0u;

        PERFSEL3 = curr;
    }
};

static_assert(sizeof(busctrl) == busctrl::size);

static volatile busctrl *const BUSCTRL = reinterpret_cast<busctrl *>(0x40030000);

}; // namespace RP2040
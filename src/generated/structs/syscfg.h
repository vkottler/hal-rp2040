/**
 * \file
 * \brief Generated by ifgen (2.6.3).
 */
#pragma once

#include "../ifgen/common.h"

namespace RP2040
{

/**
 * Register block for various chip control signals
 */
struct [[gnu::packed]] syscfg
{
    /* Constant attributes. */
    static constexpr uint16_t id = 1;       /*!< syscfg's identifier. */
    static constexpr std::size_t size = 28; /*!< syscfg's size in bytes. */

    /* Fields. */
    uint32_t PROC0_NMI_MASK; /*!< (read-write) Processor core 0 NMI source
        mask\n Set a bit high to enable NMI from that IRQ */
    uint32_t PROC1_NMI_MASK; /*!< (read-write) Processor core 1 NMI source
        mask\n Set a bit high to enable NMI from that IRQ */
    uint32_t PROC_CONFIG;    /*!< (read-write) Configuration for processors */
    uint32_t PROC_IN_SYNC_BYPASS; /*!< (read-write) For each bit, if 1, bypass
             the input synchronizer between that GPIO\n and the GPIO input
             register in the SIO. The input synchronizers should\n generally be
             unbypassed, to avoid injecting metastabilities into processors.\n
             If you're feeling brave, you can bypass to save two cycles of
             input\n latency. This register applies to GPIO 0...29. */
    uint32_t
        PROC_IN_SYNC_BYPASS_HI; /*!< (read-write) For each bit, if 1, bypass
           the input synchronizer between that GPIO\n and the GPIO input
           register in the SIO. The input synchronizers should\n generally be
           unbypassed, to avoid injecting metastabilities into processors.\n If
           you're feeling brave, you can bypass to save two cycles of input\n
           latency. This register applies to GPIO 30...35 (the QSPI IOs). */
    uint32_t DBGFORCE; /*!< (read-write) Directly control the SWD debug port of
                          either processor */
    uint32_t MEMPOWERDOWN; /*!< (read-write) Control power downs to memories.
      Set high to power down memories.\n Use with extreme caution */

    /* Methods. */

    /**
     * Get PROC_CONFIG's PROC0_HALTED bit.
     */
    bool get_PROC_CONFIG_PROC0_HALTED()
    {
        return PROC_CONFIG & (1u << 0u);
    }

    /**
     * Get PROC_CONFIG's PROC1_HALTED bit.
     */
    bool get_PROC_CONFIG_PROC1_HALTED()
    {
        return PROC_CONFIG & (1u << 1u);
    }

    /**
     * Get PROC_CONFIG's PROC0_DAP_INSTID field.
     */
    uint8_t get_PROC_CONFIG_PROC0_DAP_INSTID()
    {
        return (PROC_CONFIG >> 24u) & 0b1111u;
    }

    /**
     * Set PROC_CONFIG's PROC0_DAP_INSTID field.
     */
    inline void set_PROC_CONFIG_PROC0_DAP_INSTID(uint8_t value)
    {
        uint32_t curr = PROC_CONFIG;

        curr &= ~(0b1111u << 24u);
        curr |= (value & 0b1111u) << 24u;

        PROC_CONFIG = curr;
    }

    /**
     * Get PROC_CONFIG's PROC1_DAP_INSTID field.
     */
    uint8_t get_PROC_CONFIG_PROC1_DAP_INSTID()
    {
        return (PROC_CONFIG >> 28u) & 0b1111u;
    }

    /**
     * Set PROC_CONFIG's PROC1_DAP_INSTID field.
     */
    inline void set_PROC_CONFIG_PROC1_DAP_INSTID(uint8_t value)
    {
        uint32_t curr = PROC_CONFIG;

        curr &= ~(0b1111u << 28u);
        curr |= (value & 0b1111u) << 28u;

        PROC_CONFIG = curr;
    }

    /**
     * Get PROC_IN_SYNC_BYPASS's PROC_IN_SYNC_BYPASS field.
     */
    uint32_t get_PROC_IN_SYNC_BYPASS_PROC_IN_SYNC_BYPASS()
    {
        return (PROC_IN_SYNC_BYPASS >> 0u) & 0b111111111111111111111111111111u;
    }

    /**
     * Set PROC_IN_SYNC_BYPASS's PROC_IN_SYNC_BYPASS field.
     */
    inline void set_PROC_IN_SYNC_BYPASS_PROC_IN_SYNC_BYPASS(uint32_t value)
    {
        uint32_t curr = PROC_IN_SYNC_BYPASS;

        curr &= ~(0b111111111111111111111111111111u << 0u);
        curr |= (value & 0b111111111111111111111111111111u) << 0u;

        PROC_IN_SYNC_BYPASS = curr;
    }

    /**
     * Get PROC_IN_SYNC_BYPASS_HI's PROC_IN_SYNC_BYPASS_HI field.
     */
    uint8_t get_PROC_IN_SYNC_BYPASS_HI_PROC_IN_SYNC_BYPASS_HI()
    {
        return (PROC_IN_SYNC_BYPASS_HI >> 0u) & 0b111111u;
    }

    /**
     * Set PROC_IN_SYNC_BYPASS_HI's PROC_IN_SYNC_BYPASS_HI field.
     */
    inline void set_PROC_IN_SYNC_BYPASS_HI_PROC_IN_SYNC_BYPASS_HI(
        uint8_t value)
    {
        uint32_t curr = PROC_IN_SYNC_BYPASS_HI;

        curr &= ~(0b111111u << 0u);
        curr |= (value & 0b111111u) << 0u;

        PROC_IN_SYNC_BYPASS_HI = curr;
    }

    /**
     * Get DBGFORCE's PROC0_SWDO bit.
     */
    bool get_DBGFORCE_PROC0_SWDO()
    {
        return DBGFORCE & (1u << 0u);
    }

    /**
     * Get DBGFORCE's PROC0_SWDI bit.
     */
    bool get_DBGFORCE_PROC0_SWDI()
    {
        return DBGFORCE & (1u << 1u);
    }

    /**
     * Set DBGFORCE's PROC0_SWDI bit.
     */
    inline void set_DBGFORCE_PROC0_SWDI()
    {
        DBGFORCE |= 1u << 1u;
    }

    /**
     * Clear DBGFORCE's PROC0_SWDI bit.
     */
    inline void clear_DBGFORCE_PROC0_SWDI()
    {
        DBGFORCE &= ~(1u << 1u);
    }

    /**
     * Toggle DBGFORCE's PROC0_SWDI bit.
     */
    inline void toggle_DBGFORCE_PROC0_SWDI()
    {
        DBGFORCE ^= 1u << 1u;
    }

    /**
     * Get DBGFORCE's PROC0_SWCLK bit.
     */
    bool get_DBGFORCE_PROC0_SWCLK()
    {
        return DBGFORCE & (1u << 2u);
    }

    /**
     * Set DBGFORCE's PROC0_SWCLK bit.
     */
    inline void set_DBGFORCE_PROC0_SWCLK()
    {
        DBGFORCE |= 1u << 2u;
    }

    /**
     * Clear DBGFORCE's PROC0_SWCLK bit.
     */
    inline void clear_DBGFORCE_PROC0_SWCLK()
    {
        DBGFORCE &= ~(1u << 2u);
    }

    /**
     * Toggle DBGFORCE's PROC0_SWCLK bit.
     */
    inline void toggle_DBGFORCE_PROC0_SWCLK()
    {
        DBGFORCE ^= 1u << 2u;
    }

    /**
     * Get DBGFORCE's PROC0_ATTACH bit.
     */
    bool get_DBGFORCE_PROC0_ATTACH()
    {
        return DBGFORCE & (1u << 3u);
    }

    /**
     * Set DBGFORCE's PROC0_ATTACH bit.
     */
    inline void set_DBGFORCE_PROC0_ATTACH()
    {
        DBGFORCE |= 1u << 3u;
    }

    /**
     * Clear DBGFORCE's PROC0_ATTACH bit.
     */
    inline void clear_DBGFORCE_PROC0_ATTACH()
    {
        DBGFORCE &= ~(1u << 3u);
    }

    /**
     * Toggle DBGFORCE's PROC0_ATTACH bit.
     */
    inline void toggle_DBGFORCE_PROC0_ATTACH()
    {
        DBGFORCE ^= 1u << 3u;
    }

    /**
     * Get DBGFORCE's PROC1_SWDO bit.
     */
    bool get_DBGFORCE_PROC1_SWDO()
    {
        return DBGFORCE & (1u << 4u);
    }

    /**
     * Get DBGFORCE's PROC1_SWDI bit.
     */
    bool get_DBGFORCE_PROC1_SWDI()
    {
        return DBGFORCE & (1u << 5u);
    }

    /**
     * Set DBGFORCE's PROC1_SWDI bit.
     */
    inline void set_DBGFORCE_PROC1_SWDI()
    {
        DBGFORCE |= 1u << 5u;
    }

    /**
     * Clear DBGFORCE's PROC1_SWDI bit.
     */
    inline void clear_DBGFORCE_PROC1_SWDI()
    {
        DBGFORCE &= ~(1u << 5u);
    }

    /**
     * Toggle DBGFORCE's PROC1_SWDI bit.
     */
    inline void toggle_DBGFORCE_PROC1_SWDI()
    {
        DBGFORCE ^= 1u << 5u;
    }

    /**
     * Get DBGFORCE's PROC1_SWCLK bit.
     */
    bool get_DBGFORCE_PROC1_SWCLK()
    {
        return DBGFORCE & (1u << 6u);
    }

    /**
     * Set DBGFORCE's PROC1_SWCLK bit.
     */
    inline void set_DBGFORCE_PROC1_SWCLK()
    {
        DBGFORCE |= 1u << 6u;
    }

    /**
     * Clear DBGFORCE's PROC1_SWCLK bit.
     */
    inline void clear_DBGFORCE_PROC1_SWCLK()
    {
        DBGFORCE &= ~(1u << 6u);
    }

    /**
     * Toggle DBGFORCE's PROC1_SWCLK bit.
     */
    inline void toggle_DBGFORCE_PROC1_SWCLK()
    {
        DBGFORCE ^= 1u << 6u;
    }

    /**
     * Get DBGFORCE's PROC1_ATTACH bit.
     */
    bool get_DBGFORCE_PROC1_ATTACH()
    {
        return DBGFORCE & (1u << 7u);
    }

    /**
     * Set DBGFORCE's PROC1_ATTACH bit.
     */
    inline void set_DBGFORCE_PROC1_ATTACH()
    {
        DBGFORCE |= 1u << 7u;
    }

    /**
     * Clear DBGFORCE's PROC1_ATTACH bit.
     */
    inline void clear_DBGFORCE_PROC1_ATTACH()
    {
        DBGFORCE &= ~(1u << 7u);
    }

    /**
     * Toggle DBGFORCE's PROC1_ATTACH bit.
     */
    inline void toggle_DBGFORCE_PROC1_ATTACH()
    {
        DBGFORCE ^= 1u << 7u;
    }

    /**
     * Get MEMPOWERDOWN's SRAM0 bit.
     */
    bool get_MEMPOWERDOWN_SRAM0()
    {
        return MEMPOWERDOWN & (1u << 0u);
    }

    /**
     * Set MEMPOWERDOWN's SRAM0 bit.
     */
    inline void set_MEMPOWERDOWN_SRAM0()
    {
        MEMPOWERDOWN |= 1u << 0u;
    }

    /**
     * Clear MEMPOWERDOWN's SRAM0 bit.
     */
    inline void clear_MEMPOWERDOWN_SRAM0()
    {
        MEMPOWERDOWN &= ~(1u << 0u);
    }

    /**
     * Toggle MEMPOWERDOWN's SRAM0 bit.
     */
    inline void toggle_MEMPOWERDOWN_SRAM0()
    {
        MEMPOWERDOWN ^= 1u << 0u;
    }

    /**
     * Get MEMPOWERDOWN's SRAM1 bit.
     */
    bool get_MEMPOWERDOWN_SRAM1()
    {
        return MEMPOWERDOWN & (1u << 1u);
    }

    /**
     * Set MEMPOWERDOWN's SRAM1 bit.
     */
    inline void set_MEMPOWERDOWN_SRAM1()
    {
        MEMPOWERDOWN |= 1u << 1u;
    }

    /**
     * Clear MEMPOWERDOWN's SRAM1 bit.
     */
    inline void clear_MEMPOWERDOWN_SRAM1()
    {
        MEMPOWERDOWN &= ~(1u << 1u);
    }

    /**
     * Toggle MEMPOWERDOWN's SRAM1 bit.
     */
    inline void toggle_MEMPOWERDOWN_SRAM1()
    {
        MEMPOWERDOWN ^= 1u << 1u;
    }

    /**
     * Get MEMPOWERDOWN's SRAM2 bit.
     */
    bool get_MEMPOWERDOWN_SRAM2()
    {
        return MEMPOWERDOWN & (1u << 2u);
    }

    /**
     * Set MEMPOWERDOWN's SRAM2 bit.
     */
    inline void set_MEMPOWERDOWN_SRAM2()
    {
        MEMPOWERDOWN |= 1u << 2u;
    }

    /**
     * Clear MEMPOWERDOWN's SRAM2 bit.
     */
    inline void clear_MEMPOWERDOWN_SRAM2()
    {
        MEMPOWERDOWN &= ~(1u << 2u);
    }

    /**
     * Toggle MEMPOWERDOWN's SRAM2 bit.
     */
    inline void toggle_MEMPOWERDOWN_SRAM2()
    {
        MEMPOWERDOWN ^= 1u << 2u;
    }

    /**
     * Get MEMPOWERDOWN's SRAM3 bit.
     */
    bool get_MEMPOWERDOWN_SRAM3()
    {
        return MEMPOWERDOWN & (1u << 3u);
    }

    /**
     * Set MEMPOWERDOWN's SRAM3 bit.
     */
    inline void set_MEMPOWERDOWN_SRAM3()
    {
        MEMPOWERDOWN |= 1u << 3u;
    }

    /**
     * Clear MEMPOWERDOWN's SRAM3 bit.
     */
    inline void clear_MEMPOWERDOWN_SRAM3()
    {
        MEMPOWERDOWN &= ~(1u << 3u);
    }

    /**
     * Toggle MEMPOWERDOWN's SRAM3 bit.
     */
    inline void toggle_MEMPOWERDOWN_SRAM3()
    {
        MEMPOWERDOWN ^= 1u << 3u;
    }

    /**
     * Get MEMPOWERDOWN's SRAM4 bit.
     */
    bool get_MEMPOWERDOWN_SRAM4()
    {
        return MEMPOWERDOWN & (1u << 4u);
    }

    /**
     * Set MEMPOWERDOWN's SRAM4 bit.
     */
    inline void set_MEMPOWERDOWN_SRAM4()
    {
        MEMPOWERDOWN |= 1u << 4u;
    }

    /**
     * Clear MEMPOWERDOWN's SRAM4 bit.
     */
    inline void clear_MEMPOWERDOWN_SRAM4()
    {
        MEMPOWERDOWN &= ~(1u << 4u);
    }

    /**
     * Toggle MEMPOWERDOWN's SRAM4 bit.
     */
    inline void toggle_MEMPOWERDOWN_SRAM4()
    {
        MEMPOWERDOWN ^= 1u << 4u;
    }

    /**
     * Get MEMPOWERDOWN's SRAM5 bit.
     */
    bool get_MEMPOWERDOWN_SRAM5()
    {
        return MEMPOWERDOWN & (1u << 5u);
    }

    /**
     * Set MEMPOWERDOWN's SRAM5 bit.
     */
    inline void set_MEMPOWERDOWN_SRAM5()
    {
        MEMPOWERDOWN |= 1u << 5u;
    }

    /**
     * Clear MEMPOWERDOWN's SRAM5 bit.
     */
    inline void clear_MEMPOWERDOWN_SRAM5()
    {
        MEMPOWERDOWN &= ~(1u << 5u);
    }

    /**
     * Toggle MEMPOWERDOWN's SRAM5 bit.
     */
    inline void toggle_MEMPOWERDOWN_SRAM5()
    {
        MEMPOWERDOWN ^= 1u << 5u;
    }

    /**
     * Get MEMPOWERDOWN's USB bit.
     */
    bool get_MEMPOWERDOWN_USB()
    {
        return MEMPOWERDOWN & (1u << 6u);
    }

    /**
     * Set MEMPOWERDOWN's USB bit.
     */
    inline void set_MEMPOWERDOWN_USB()
    {
        MEMPOWERDOWN |= 1u << 6u;
    }

    /**
     * Clear MEMPOWERDOWN's USB bit.
     */
    inline void clear_MEMPOWERDOWN_USB()
    {
        MEMPOWERDOWN &= ~(1u << 6u);
    }

    /**
     * Toggle MEMPOWERDOWN's USB bit.
     */
    inline void toggle_MEMPOWERDOWN_USB()
    {
        MEMPOWERDOWN ^= 1u << 6u;
    }

    /**
     * Get MEMPOWERDOWN's ROM bit.
     */
    bool get_MEMPOWERDOWN_ROM()
    {
        return MEMPOWERDOWN & (1u << 7u);
    }

    /**
     * Set MEMPOWERDOWN's ROM bit.
     */
    inline void set_MEMPOWERDOWN_ROM()
    {
        MEMPOWERDOWN |= 1u << 7u;
    }

    /**
     * Clear MEMPOWERDOWN's ROM bit.
     */
    inline void clear_MEMPOWERDOWN_ROM()
    {
        MEMPOWERDOWN &= ~(1u << 7u);
    }

    /**
     * Toggle MEMPOWERDOWN's ROM bit.
     */
    inline void toggle_MEMPOWERDOWN_ROM()
    {
        MEMPOWERDOWN ^= 1u << 7u;
    }
};

static_assert(sizeof(syscfg) == syscfg::size);

static volatile syscfg *const SYSCFG = reinterpret_cast<syscfg *>(0x40004000);

}; // namespace RP2040

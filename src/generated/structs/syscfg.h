/**
 * \file
 * \brief Generated by ifgen (3.2.0).
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
     *
     * Indication that proc0 has halted
     */
    inline bool get_PROC_CONFIG_PROC0_HALTED() volatile
    {
        return PROC_CONFIG & (1u << 0u);
    }

    /**
     * Get PROC_CONFIG's PROC1_HALTED bit.
     *
     * Indication that proc1 has halted
     */
    inline bool get_PROC_CONFIG_PROC1_HALTED() volatile
    {
        return PROC_CONFIG & (1u << 1u);
    }

    /**
     * Get PROC_CONFIG's PROC0_DAP_INSTID field.
     *
     * Configure proc0 DAP instance ID.\n
     *                 Recommend that this is NOT changed until you require
     * debug access in multi-chip environment\n WARNING: do not set to 15 as
     * this is reserved for RescueDP
     */
    inline uint8_t get_PROC_CONFIG_PROC0_DAP_INSTID() volatile
    {
        return (PROC_CONFIG >> 24u) & 0b1111u;
    }

    /**
     * Set PROC_CONFIG's PROC0_DAP_INSTID field.
     *
     * Configure proc0 DAP instance ID.\n
     *                 Recommend that this is NOT changed until you require
     * debug access in multi-chip environment\n WARNING: do not set to 15 as
     * this is reserved for RescueDP
     */
    inline void set_PROC_CONFIG_PROC0_DAP_INSTID(uint8_t value) volatile
    {
        uint32_t curr = PROC_CONFIG;

        curr &= ~(0b1111u << 24u);
        curr |= (value & 0b1111u) << 24u;

        PROC_CONFIG = curr;
    }

    /**
     * Get PROC_CONFIG's PROC1_DAP_INSTID field.
     *
     * Configure proc1 DAP instance ID.\n
     *                 Recommend that this is NOT changed until you require
     * debug access in multi-chip environment\n WARNING: do not set to 15 as
     * this is reserved for RescueDP
     */
    inline uint8_t get_PROC_CONFIG_PROC1_DAP_INSTID() volatile
    {
        return (PROC_CONFIG >> 28u) & 0b1111u;
    }

    /**
     * Set PROC_CONFIG's PROC1_DAP_INSTID field.
     *
     * Configure proc1 DAP instance ID.\n
     *                 Recommend that this is NOT changed until you require
     * debug access in multi-chip environment\n WARNING: do not set to 15 as
     * this is reserved for RescueDP
     */
    inline void set_PROC_CONFIG_PROC1_DAP_INSTID(uint8_t value) volatile
    {
        uint32_t curr = PROC_CONFIG;

        curr &= ~(0b1111u << 28u);
        curr |= (value & 0b1111u) << 28u;

        PROC_CONFIG = curr;
    }

    /**
     * Get all of PROC_CONFIG's bit fields.
     *
     * (read-write) Configuration for processors
     */
    inline void get_PROC_CONFIG(bool &PROC0_HALTED, bool &PROC1_HALTED,
                                uint8_t &PROC0_DAP_INSTID,
                                uint8_t &PROC1_DAP_INSTID) volatile
    {
        uint32_t curr = PROC_CONFIG;

        PROC0_HALTED = curr & (1u << 0u);
        PROC1_HALTED = curr & (1u << 1u);
        PROC0_DAP_INSTID = (curr >> 24u) & 0b1111u;
        PROC1_DAP_INSTID = (curr >> 28u) & 0b1111u;
    }

    /**
     * Set all of PROC_CONFIG's bit fields.
     *
     * (read-write) Configuration for processors
     */
    inline void set_PROC_CONFIG(uint8_t PROC0_DAP_INSTID,
                                uint8_t PROC1_DAP_INSTID) volatile
    {
        uint32_t curr = PROC_CONFIG;

        curr &= ~(0b1111u << 24u);
        curr |= (PROC0_DAP_INSTID & 0b1111u) << 24u;
        curr &= ~(0b1111u << 28u);
        curr |= (PROC1_DAP_INSTID & 0b1111u) << 28u;

        PROC_CONFIG = curr;
    }

    /**
     * Get PROC_IN_SYNC_BYPASS's PROC_IN_SYNC_BYPASS field.
     */
    inline uint32_t get_PROC_IN_SYNC_BYPASS_PROC_IN_SYNC_BYPASS() volatile
    {
        return (PROC_IN_SYNC_BYPASS >> 0u) & 0b111111111111111111111111111111u;
    }

    /**
     * Set PROC_IN_SYNC_BYPASS's PROC_IN_SYNC_BYPASS field.
     */
    inline void set_PROC_IN_SYNC_BYPASS_PROC_IN_SYNC_BYPASS(
        uint32_t value) volatile
    {
        uint32_t curr = PROC_IN_SYNC_BYPASS;

        curr &= ~(0b111111111111111111111111111111u << 0u);
        curr |= (value & 0b111111111111111111111111111111u) << 0u;

        PROC_IN_SYNC_BYPASS = curr;
    }

    /**
     * Get PROC_IN_SYNC_BYPASS_HI's PROC_IN_SYNC_BYPASS_HI field.
     */
    inline uint8_t get_PROC_IN_SYNC_BYPASS_HI_PROC_IN_SYNC_BYPASS_HI() volatile
    {
        return (PROC_IN_SYNC_BYPASS_HI >> 0u) & 0b111111u;
    }

    /**
     * Set PROC_IN_SYNC_BYPASS_HI's PROC_IN_SYNC_BYPASS_HI field.
     */
    inline void set_PROC_IN_SYNC_BYPASS_HI_PROC_IN_SYNC_BYPASS_HI(
        uint8_t value) volatile
    {
        uint32_t curr = PROC_IN_SYNC_BYPASS_HI;

        curr &= ~(0b111111u << 0u);
        curr |= (value & 0b111111u) << 0u;

        PROC_IN_SYNC_BYPASS_HI = curr;
    }

    /**
     * Get DBGFORCE's PROC0_SWDO bit.
     *
     * Observe the value of processor 0 SWDIO output.
     */
    inline bool get_DBGFORCE_PROC0_SWDO() volatile
    {
        return DBGFORCE & (1u << 0u);
    }

    /**
     * Get DBGFORCE's PROC0_SWDI bit.
     *
     * Directly drive processor 0 SWDIO input, if PROC0_ATTACH is set
     */
    inline bool get_DBGFORCE_PROC0_SWDI() volatile
    {
        return DBGFORCE & (1u << 1u);
    }

    /**
     * Set DBGFORCE's PROC0_SWDI bit.
     *
     * Directly drive processor 0 SWDIO input, if PROC0_ATTACH is set
     */
    inline void set_DBGFORCE_PROC0_SWDI() volatile
    {
        DBGFORCE |= 1u << 1u;
    }

    /**
     * Clear DBGFORCE's PROC0_SWDI bit.
     *
     * Directly drive processor 0 SWDIO input, if PROC0_ATTACH is set
     */
    inline void clear_DBGFORCE_PROC0_SWDI() volatile
    {
        DBGFORCE &= ~(1u << 1u);
    }

    /**
     * Toggle DBGFORCE's PROC0_SWDI bit.
     *
     * Directly drive processor 0 SWDIO input, if PROC0_ATTACH is set
     */
    inline void toggle_DBGFORCE_PROC0_SWDI() volatile
    {
        DBGFORCE ^= 1u << 1u;
    }

    /**
     * Get DBGFORCE's PROC0_SWCLK bit.
     *
     * Directly drive processor 0 SWCLK, if PROC0_ATTACH is set
     */
    inline bool get_DBGFORCE_PROC0_SWCLK() volatile
    {
        return DBGFORCE & (1u << 2u);
    }

    /**
     * Set DBGFORCE's PROC0_SWCLK bit.
     *
     * Directly drive processor 0 SWCLK, if PROC0_ATTACH is set
     */
    inline void set_DBGFORCE_PROC0_SWCLK() volatile
    {
        DBGFORCE |= 1u << 2u;
    }

    /**
     * Clear DBGFORCE's PROC0_SWCLK bit.
     *
     * Directly drive processor 0 SWCLK, if PROC0_ATTACH is set
     */
    inline void clear_DBGFORCE_PROC0_SWCLK() volatile
    {
        DBGFORCE &= ~(1u << 2u);
    }

    /**
     * Toggle DBGFORCE's PROC0_SWCLK bit.
     *
     * Directly drive processor 0 SWCLK, if PROC0_ATTACH is set
     */
    inline void toggle_DBGFORCE_PROC0_SWCLK() volatile
    {
        DBGFORCE ^= 1u << 2u;
    }

    /**
     * Get DBGFORCE's PROC0_ATTACH bit.
     *
     * Attach processor 0 debug port to syscfg controls, and disconnect it from
     * external SWD pads.
     */
    inline bool get_DBGFORCE_PROC0_ATTACH() volatile
    {
        return DBGFORCE & (1u << 3u);
    }

    /**
     * Set DBGFORCE's PROC0_ATTACH bit.
     *
     * Attach processor 0 debug port to syscfg controls, and disconnect it from
     * external SWD pads.
     */
    inline void set_DBGFORCE_PROC0_ATTACH() volatile
    {
        DBGFORCE |= 1u << 3u;
    }

    /**
     * Clear DBGFORCE's PROC0_ATTACH bit.
     *
     * Attach processor 0 debug port to syscfg controls, and disconnect it from
     * external SWD pads.
     */
    inline void clear_DBGFORCE_PROC0_ATTACH() volatile
    {
        DBGFORCE &= ~(1u << 3u);
    }

    /**
     * Toggle DBGFORCE's PROC0_ATTACH bit.
     *
     * Attach processor 0 debug port to syscfg controls, and disconnect it from
     * external SWD pads.
     */
    inline void toggle_DBGFORCE_PROC0_ATTACH() volatile
    {
        DBGFORCE ^= 1u << 3u;
    }

    /**
     * Get DBGFORCE's PROC1_SWDO bit.
     *
     * Observe the value of processor 1 SWDIO output.
     */
    inline bool get_DBGFORCE_PROC1_SWDO() volatile
    {
        return DBGFORCE & (1u << 4u);
    }

    /**
     * Get DBGFORCE's PROC1_SWDI bit.
     *
     * Directly drive processor 1 SWDIO input, if PROC1_ATTACH is set
     */
    inline bool get_DBGFORCE_PROC1_SWDI() volatile
    {
        return DBGFORCE & (1u << 5u);
    }

    /**
     * Set DBGFORCE's PROC1_SWDI bit.
     *
     * Directly drive processor 1 SWDIO input, if PROC1_ATTACH is set
     */
    inline void set_DBGFORCE_PROC1_SWDI() volatile
    {
        DBGFORCE |= 1u << 5u;
    }

    /**
     * Clear DBGFORCE's PROC1_SWDI bit.
     *
     * Directly drive processor 1 SWDIO input, if PROC1_ATTACH is set
     */
    inline void clear_DBGFORCE_PROC1_SWDI() volatile
    {
        DBGFORCE &= ~(1u << 5u);
    }

    /**
     * Toggle DBGFORCE's PROC1_SWDI bit.
     *
     * Directly drive processor 1 SWDIO input, if PROC1_ATTACH is set
     */
    inline void toggle_DBGFORCE_PROC1_SWDI() volatile
    {
        DBGFORCE ^= 1u << 5u;
    }

    /**
     * Get DBGFORCE's PROC1_SWCLK bit.
     *
     * Directly drive processor 1 SWCLK, if PROC1_ATTACH is set
     */
    inline bool get_DBGFORCE_PROC1_SWCLK() volatile
    {
        return DBGFORCE & (1u << 6u);
    }

    /**
     * Set DBGFORCE's PROC1_SWCLK bit.
     *
     * Directly drive processor 1 SWCLK, if PROC1_ATTACH is set
     */
    inline void set_DBGFORCE_PROC1_SWCLK() volatile
    {
        DBGFORCE |= 1u << 6u;
    }

    /**
     * Clear DBGFORCE's PROC1_SWCLK bit.
     *
     * Directly drive processor 1 SWCLK, if PROC1_ATTACH is set
     */
    inline void clear_DBGFORCE_PROC1_SWCLK() volatile
    {
        DBGFORCE &= ~(1u << 6u);
    }

    /**
     * Toggle DBGFORCE's PROC1_SWCLK bit.
     *
     * Directly drive processor 1 SWCLK, if PROC1_ATTACH is set
     */
    inline void toggle_DBGFORCE_PROC1_SWCLK() volatile
    {
        DBGFORCE ^= 1u << 6u;
    }

    /**
     * Get DBGFORCE's PROC1_ATTACH bit.
     *
     * Attach processor 1 debug port to syscfg controls, and disconnect it from
     * external SWD pads.
     */
    inline bool get_DBGFORCE_PROC1_ATTACH() volatile
    {
        return DBGFORCE & (1u << 7u);
    }

    /**
     * Set DBGFORCE's PROC1_ATTACH bit.
     *
     * Attach processor 1 debug port to syscfg controls, and disconnect it from
     * external SWD pads.
     */
    inline void set_DBGFORCE_PROC1_ATTACH() volatile
    {
        DBGFORCE |= 1u << 7u;
    }

    /**
     * Clear DBGFORCE's PROC1_ATTACH bit.
     *
     * Attach processor 1 debug port to syscfg controls, and disconnect it from
     * external SWD pads.
     */
    inline void clear_DBGFORCE_PROC1_ATTACH() volatile
    {
        DBGFORCE &= ~(1u << 7u);
    }

    /**
     * Toggle DBGFORCE's PROC1_ATTACH bit.
     *
     * Attach processor 1 debug port to syscfg controls, and disconnect it from
     * external SWD pads.
     */
    inline void toggle_DBGFORCE_PROC1_ATTACH() volatile
    {
        DBGFORCE ^= 1u << 7u;
    }

    /**
     * Get all of DBGFORCE's bit fields.
     *
     * (read-write) Directly control the SWD debug port of either processor
     */
    inline void get_DBGFORCE(bool &PROC0_SWDO, bool &PROC0_SWDI,
                             bool &PROC0_SWCLK, bool &PROC0_ATTACH,
                             bool &PROC1_SWDO, bool &PROC1_SWDI,
                             bool &PROC1_SWCLK, bool &PROC1_ATTACH) volatile
    {
        uint32_t curr = DBGFORCE;

        PROC0_SWDO = curr & (1u << 0u);
        PROC0_SWDI = curr & (1u << 1u);
        PROC0_SWCLK = curr & (1u << 2u);
        PROC0_ATTACH = curr & (1u << 3u);
        PROC1_SWDO = curr & (1u << 4u);
        PROC1_SWDI = curr & (1u << 5u);
        PROC1_SWCLK = curr & (1u << 6u);
        PROC1_ATTACH = curr & (1u << 7u);
    }

    /**
     * Set all of DBGFORCE's bit fields.
     *
     * (read-write) Directly control the SWD debug port of either processor
     */
    inline void set_DBGFORCE(bool PROC0_SWDI, bool PROC0_SWCLK,
                             bool PROC0_ATTACH, bool PROC1_SWDI,
                             bool PROC1_SWCLK, bool PROC1_ATTACH) volatile
    {
        uint32_t curr = DBGFORCE;

        curr &= ~(0b1u << 1u);
        curr |= (PROC0_SWDI & 0b1u) << 1u;
        curr &= ~(0b1u << 2u);
        curr |= (PROC0_SWCLK & 0b1u) << 2u;
        curr &= ~(0b1u << 3u);
        curr |= (PROC0_ATTACH & 0b1u) << 3u;
        curr &= ~(0b1u << 5u);
        curr |= (PROC1_SWDI & 0b1u) << 5u;
        curr &= ~(0b1u << 6u);
        curr |= (PROC1_SWCLK & 0b1u) << 6u;
        curr &= ~(0b1u << 7u);
        curr |= (PROC1_ATTACH & 0b1u) << 7u;

        DBGFORCE = curr;
    }

    /**
     * Get MEMPOWERDOWN's SRAM0 bit.
     */
    inline bool get_MEMPOWERDOWN_SRAM0() volatile
    {
        return MEMPOWERDOWN & (1u << 0u);
    }

    /**
     * Set MEMPOWERDOWN's SRAM0 bit.
     */
    inline void set_MEMPOWERDOWN_SRAM0() volatile
    {
        MEMPOWERDOWN |= 1u << 0u;
    }

    /**
     * Clear MEMPOWERDOWN's SRAM0 bit.
     */
    inline void clear_MEMPOWERDOWN_SRAM0() volatile
    {
        MEMPOWERDOWN &= ~(1u << 0u);
    }

    /**
     * Toggle MEMPOWERDOWN's SRAM0 bit.
     */
    inline void toggle_MEMPOWERDOWN_SRAM0() volatile
    {
        MEMPOWERDOWN ^= 1u << 0u;
    }

    /**
     * Get MEMPOWERDOWN's SRAM1 bit.
     */
    inline bool get_MEMPOWERDOWN_SRAM1() volatile
    {
        return MEMPOWERDOWN & (1u << 1u);
    }

    /**
     * Set MEMPOWERDOWN's SRAM1 bit.
     */
    inline void set_MEMPOWERDOWN_SRAM1() volatile
    {
        MEMPOWERDOWN |= 1u << 1u;
    }

    /**
     * Clear MEMPOWERDOWN's SRAM1 bit.
     */
    inline void clear_MEMPOWERDOWN_SRAM1() volatile
    {
        MEMPOWERDOWN &= ~(1u << 1u);
    }

    /**
     * Toggle MEMPOWERDOWN's SRAM1 bit.
     */
    inline void toggle_MEMPOWERDOWN_SRAM1() volatile
    {
        MEMPOWERDOWN ^= 1u << 1u;
    }

    /**
     * Get MEMPOWERDOWN's SRAM2 bit.
     */
    inline bool get_MEMPOWERDOWN_SRAM2() volatile
    {
        return MEMPOWERDOWN & (1u << 2u);
    }

    /**
     * Set MEMPOWERDOWN's SRAM2 bit.
     */
    inline void set_MEMPOWERDOWN_SRAM2() volatile
    {
        MEMPOWERDOWN |= 1u << 2u;
    }

    /**
     * Clear MEMPOWERDOWN's SRAM2 bit.
     */
    inline void clear_MEMPOWERDOWN_SRAM2() volatile
    {
        MEMPOWERDOWN &= ~(1u << 2u);
    }

    /**
     * Toggle MEMPOWERDOWN's SRAM2 bit.
     */
    inline void toggle_MEMPOWERDOWN_SRAM2() volatile
    {
        MEMPOWERDOWN ^= 1u << 2u;
    }

    /**
     * Get MEMPOWERDOWN's SRAM3 bit.
     */
    inline bool get_MEMPOWERDOWN_SRAM3() volatile
    {
        return MEMPOWERDOWN & (1u << 3u);
    }

    /**
     * Set MEMPOWERDOWN's SRAM3 bit.
     */
    inline void set_MEMPOWERDOWN_SRAM3() volatile
    {
        MEMPOWERDOWN |= 1u << 3u;
    }

    /**
     * Clear MEMPOWERDOWN's SRAM3 bit.
     */
    inline void clear_MEMPOWERDOWN_SRAM3() volatile
    {
        MEMPOWERDOWN &= ~(1u << 3u);
    }

    /**
     * Toggle MEMPOWERDOWN's SRAM3 bit.
     */
    inline void toggle_MEMPOWERDOWN_SRAM3() volatile
    {
        MEMPOWERDOWN ^= 1u << 3u;
    }

    /**
     * Get MEMPOWERDOWN's SRAM4 bit.
     */
    inline bool get_MEMPOWERDOWN_SRAM4() volatile
    {
        return MEMPOWERDOWN & (1u << 4u);
    }

    /**
     * Set MEMPOWERDOWN's SRAM4 bit.
     */
    inline void set_MEMPOWERDOWN_SRAM4() volatile
    {
        MEMPOWERDOWN |= 1u << 4u;
    }

    /**
     * Clear MEMPOWERDOWN's SRAM4 bit.
     */
    inline void clear_MEMPOWERDOWN_SRAM4() volatile
    {
        MEMPOWERDOWN &= ~(1u << 4u);
    }

    /**
     * Toggle MEMPOWERDOWN's SRAM4 bit.
     */
    inline void toggle_MEMPOWERDOWN_SRAM4() volatile
    {
        MEMPOWERDOWN ^= 1u << 4u;
    }

    /**
     * Get MEMPOWERDOWN's SRAM5 bit.
     */
    inline bool get_MEMPOWERDOWN_SRAM5() volatile
    {
        return MEMPOWERDOWN & (1u << 5u);
    }

    /**
     * Set MEMPOWERDOWN's SRAM5 bit.
     */
    inline void set_MEMPOWERDOWN_SRAM5() volatile
    {
        MEMPOWERDOWN |= 1u << 5u;
    }

    /**
     * Clear MEMPOWERDOWN's SRAM5 bit.
     */
    inline void clear_MEMPOWERDOWN_SRAM5() volatile
    {
        MEMPOWERDOWN &= ~(1u << 5u);
    }

    /**
     * Toggle MEMPOWERDOWN's SRAM5 bit.
     */
    inline void toggle_MEMPOWERDOWN_SRAM5() volatile
    {
        MEMPOWERDOWN ^= 1u << 5u;
    }

    /**
     * Get MEMPOWERDOWN's USB bit.
     */
    inline bool get_MEMPOWERDOWN_USB() volatile
    {
        return MEMPOWERDOWN & (1u << 6u);
    }

    /**
     * Set MEMPOWERDOWN's USB bit.
     */
    inline void set_MEMPOWERDOWN_USB() volatile
    {
        MEMPOWERDOWN |= 1u << 6u;
    }

    /**
     * Clear MEMPOWERDOWN's USB bit.
     */
    inline void clear_MEMPOWERDOWN_USB() volatile
    {
        MEMPOWERDOWN &= ~(1u << 6u);
    }

    /**
     * Toggle MEMPOWERDOWN's USB bit.
     */
    inline void toggle_MEMPOWERDOWN_USB() volatile
    {
        MEMPOWERDOWN ^= 1u << 6u;
    }

    /**
     * Get MEMPOWERDOWN's ROM bit.
     */
    inline bool get_MEMPOWERDOWN_ROM() volatile
    {
        return MEMPOWERDOWN & (1u << 7u);
    }

    /**
     * Set MEMPOWERDOWN's ROM bit.
     */
    inline void set_MEMPOWERDOWN_ROM() volatile
    {
        MEMPOWERDOWN |= 1u << 7u;
    }

    /**
     * Clear MEMPOWERDOWN's ROM bit.
     */
    inline void clear_MEMPOWERDOWN_ROM() volatile
    {
        MEMPOWERDOWN &= ~(1u << 7u);
    }

    /**
     * Toggle MEMPOWERDOWN's ROM bit.
     */
    inline void toggle_MEMPOWERDOWN_ROM() volatile
    {
        MEMPOWERDOWN ^= 1u << 7u;
    }

    /**
     * Get all of MEMPOWERDOWN's bit fields.
     *
     * (read-write) Control power downs to memories. Set high to power down
     * memories.\n Use with extreme caution
     */
    inline void get_MEMPOWERDOWN(bool &SRAM0, bool &SRAM1, bool &SRAM2,
                                 bool &SRAM3, bool &SRAM4, bool &SRAM5,
                                 bool &USB, bool &ROM) volatile
    {
        uint32_t curr = MEMPOWERDOWN;

        SRAM0 = curr & (1u << 0u);
        SRAM1 = curr & (1u << 1u);
        SRAM2 = curr & (1u << 2u);
        SRAM3 = curr & (1u << 3u);
        SRAM4 = curr & (1u << 4u);
        SRAM5 = curr & (1u << 5u);
        USB = curr & (1u << 6u);
        ROM = curr & (1u << 7u);
    }

    /**
     * Set all of MEMPOWERDOWN's bit fields.
     *
     * (read-write) Control power downs to memories. Set high to power down
     * memories.\n Use with extreme caution
     */
    inline void set_MEMPOWERDOWN(bool SRAM0, bool SRAM1, bool SRAM2,
                                 bool SRAM3, bool SRAM4, bool SRAM5, bool USB,
                                 bool ROM) volatile
    {
        uint32_t curr = MEMPOWERDOWN;

        curr &= ~(0b1u << 0u);
        curr |= (SRAM0 & 0b1u) << 0u;
        curr &= ~(0b1u << 1u);
        curr |= (SRAM1 & 0b1u) << 1u;
        curr &= ~(0b1u << 2u);
        curr |= (SRAM2 & 0b1u) << 2u;
        curr &= ~(0b1u << 3u);
        curr |= (SRAM3 & 0b1u) << 3u;
        curr &= ~(0b1u << 4u);
        curr |= (SRAM4 & 0b1u) << 4u;
        curr &= ~(0b1u << 5u);
        curr |= (SRAM5 & 0b1u) << 5u;
        curr &= ~(0b1u << 6u);
        curr |= (USB & 0b1u) << 6u;
        curr &= ~(0b1u << 7u);
        curr |= (ROM & 0b1u) << 7u;

        MEMPOWERDOWN = curr;
    }
};

static_assert(sizeof(syscfg) == syscfg::size);

static volatile syscfg *const SYSCFG = reinterpret_cast<syscfg *>(0x40004000);

}; // namespace RP2040

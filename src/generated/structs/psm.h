/**
 * \file
 * \brief Generated by ifgen (2.6.3).
 */
#pragma once

#include "../ifgen/common.h"

namespace RP2040
{

struct [[gnu::packed]] psm
{
    /* Constant attributes. */
    static constexpr uint16_t id = 1;       /*!< psm's identifier. */
    static constexpr std::size_t size = 16; /*!< psm's size in bytes. */

    /* Fields. */
    uint32_t FRCE_ON; /*!< (read-write) Force block out of reset (i.e. power it
                         on) */
    uint32_t
        FRCE_OFF;   /*!< (read-write) Force into reset (i.e. power it off) */
    uint32_t WDSEL; /*!< (read-write) Set to 1 if this peripheral should be
                       reset when the watchdog fires. */
    const uint32_t DONE = {}; /*!< (read-only) Indicates the peripheral's
                                 registers are ready to access. */

    /* Methods. */

    /**
     * Get FRCE_ON's rosc bit.
     */
    bool get_FRCE_ON_rosc()
    {
        return FRCE_ON & (1u << 0u);
    }

    /**
     * Set FRCE_ON's rosc bit.
     */
    inline void set_FRCE_ON_rosc()
    {
        FRCE_ON |= 1u << 0u;
    }

    /**
     * Clear FRCE_ON's rosc bit.
     */
    inline void clear_FRCE_ON_rosc()
    {
        FRCE_ON &= ~(1u << 0u);
    }

    /**
     * Toggle FRCE_ON's rosc bit.
     */
    inline void toggle_FRCE_ON_rosc()
    {
        FRCE_ON ^= 1u << 0u;
    }

    /**
     * Get FRCE_ON's xosc bit.
     */
    bool get_FRCE_ON_xosc()
    {
        return FRCE_ON & (1u << 1u);
    }

    /**
     * Set FRCE_ON's xosc bit.
     */
    inline void set_FRCE_ON_xosc()
    {
        FRCE_ON |= 1u << 1u;
    }

    /**
     * Clear FRCE_ON's xosc bit.
     */
    inline void clear_FRCE_ON_xosc()
    {
        FRCE_ON &= ~(1u << 1u);
    }

    /**
     * Toggle FRCE_ON's xosc bit.
     */
    inline void toggle_FRCE_ON_xosc()
    {
        FRCE_ON ^= 1u << 1u;
    }

    /**
     * Get FRCE_ON's clocks bit.
     */
    bool get_FRCE_ON_clocks()
    {
        return FRCE_ON & (1u << 2u);
    }

    /**
     * Set FRCE_ON's clocks bit.
     */
    inline void set_FRCE_ON_clocks()
    {
        FRCE_ON |= 1u << 2u;
    }

    /**
     * Clear FRCE_ON's clocks bit.
     */
    inline void clear_FRCE_ON_clocks()
    {
        FRCE_ON &= ~(1u << 2u);
    }

    /**
     * Toggle FRCE_ON's clocks bit.
     */
    inline void toggle_FRCE_ON_clocks()
    {
        FRCE_ON ^= 1u << 2u;
    }

    /**
     * Get FRCE_ON's resets bit.
     */
    bool get_FRCE_ON_resets()
    {
        return FRCE_ON & (1u << 3u);
    }

    /**
     * Set FRCE_ON's resets bit.
     */
    inline void set_FRCE_ON_resets()
    {
        FRCE_ON |= 1u << 3u;
    }

    /**
     * Clear FRCE_ON's resets bit.
     */
    inline void clear_FRCE_ON_resets()
    {
        FRCE_ON &= ~(1u << 3u);
    }

    /**
     * Toggle FRCE_ON's resets bit.
     */
    inline void toggle_FRCE_ON_resets()
    {
        FRCE_ON ^= 1u << 3u;
    }

    /**
     * Get FRCE_ON's busfabric bit.
     */
    bool get_FRCE_ON_busfabric()
    {
        return FRCE_ON & (1u << 4u);
    }

    /**
     * Set FRCE_ON's busfabric bit.
     */
    inline void set_FRCE_ON_busfabric()
    {
        FRCE_ON |= 1u << 4u;
    }

    /**
     * Clear FRCE_ON's busfabric bit.
     */
    inline void clear_FRCE_ON_busfabric()
    {
        FRCE_ON &= ~(1u << 4u);
    }

    /**
     * Toggle FRCE_ON's busfabric bit.
     */
    inline void toggle_FRCE_ON_busfabric()
    {
        FRCE_ON ^= 1u << 4u;
    }

    /**
     * Get FRCE_ON's rom bit.
     */
    bool get_FRCE_ON_rom()
    {
        return FRCE_ON & (1u << 5u);
    }

    /**
     * Set FRCE_ON's rom bit.
     */
    inline void set_FRCE_ON_rom()
    {
        FRCE_ON |= 1u << 5u;
    }

    /**
     * Clear FRCE_ON's rom bit.
     */
    inline void clear_FRCE_ON_rom()
    {
        FRCE_ON &= ~(1u << 5u);
    }

    /**
     * Toggle FRCE_ON's rom bit.
     */
    inline void toggle_FRCE_ON_rom()
    {
        FRCE_ON ^= 1u << 5u;
    }

    /**
     * Get FRCE_ON's sram0 bit.
     */
    bool get_FRCE_ON_sram0()
    {
        return FRCE_ON & (1u << 6u);
    }

    /**
     * Set FRCE_ON's sram0 bit.
     */
    inline void set_FRCE_ON_sram0()
    {
        FRCE_ON |= 1u << 6u;
    }

    /**
     * Clear FRCE_ON's sram0 bit.
     */
    inline void clear_FRCE_ON_sram0()
    {
        FRCE_ON &= ~(1u << 6u);
    }

    /**
     * Toggle FRCE_ON's sram0 bit.
     */
    inline void toggle_FRCE_ON_sram0()
    {
        FRCE_ON ^= 1u << 6u;
    }

    /**
     * Get FRCE_ON's sram1 bit.
     */
    bool get_FRCE_ON_sram1()
    {
        return FRCE_ON & (1u << 7u);
    }

    /**
     * Set FRCE_ON's sram1 bit.
     */
    inline void set_FRCE_ON_sram1()
    {
        FRCE_ON |= 1u << 7u;
    }

    /**
     * Clear FRCE_ON's sram1 bit.
     */
    inline void clear_FRCE_ON_sram1()
    {
        FRCE_ON &= ~(1u << 7u);
    }

    /**
     * Toggle FRCE_ON's sram1 bit.
     */
    inline void toggle_FRCE_ON_sram1()
    {
        FRCE_ON ^= 1u << 7u;
    }

    /**
     * Get FRCE_ON's sram2 bit.
     */
    bool get_FRCE_ON_sram2()
    {
        return FRCE_ON & (1u << 8u);
    }

    /**
     * Set FRCE_ON's sram2 bit.
     */
    inline void set_FRCE_ON_sram2()
    {
        FRCE_ON |= 1u << 8u;
    }

    /**
     * Clear FRCE_ON's sram2 bit.
     */
    inline void clear_FRCE_ON_sram2()
    {
        FRCE_ON &= ~(1u << 8u);
    }

    /**
     * Toggle FRCE_ON's sram2 bit.
     */
    inline void toggle_FRCE_ON_sram2()
    {
        FRCE_ON ^= 1u << 8u;
    }

    /**
     * Get FRCE_ON's sram3 bit.
     */
    bool get_FRCE_ON_sram3()
    {
        return FRCE_ON & (1u << 9u);
    }

    /**
     * Set FRCE_ON's sram3 bit.
     */
    inline void set_FRCE_ON_sram3()
    {
        FRCE_ON |= 1u << 9u;
    }

    /**
     * Clear FRCE_ON's sram3 bit.
     */
    inline void clear_FRCE_ON_sram3()
    {
        FRCE_ON &= ~(1u << 9u);
    }

    /**
     * Toggle FRCE_ON's sram3 bit.
     */
    inline void toggle_FRCE_ON_sram3()
    {
        FRCE_ON ^= 1u << 9u;
    }

    /**
     * Get FRCE_ON's sram4 bit.
     */
    bool get_FRCE_ON_sram4()
    {
        return FRCE_ON & (1u << 10u);
    }

    /**
     * Set FRCE_ON's sram4 bit.
     */
    inline void set_FRCE_ON_sram4()
    {
        FRCE_ON |= 1u << 10u;
    }

    /**
     * Clear FRCE_ON's sram4 bit.
     */
    inline void clear_FRCE_ON_sram4()
    {
        FRCE_ON &= ~(1u << 10u);
    }

    /**
     * Toggle FRCE_ON's sram4 bit.
     */
    inline void toggle_FRCE_ON_sram4()
    {
        FRCE_ON ^= 1u << 10u;
    }

    /**
     * Get FRCE_ON's sram5 bit.
     */
    bool get_FRCE_ON_sram5()
    {
        return FRCE_ON & (1u << 11u);
    }

    /**
     * Set FRCE_ON's sram5 bit.
     */
    inline void set_FRCE_ON_sram5()
    {
        FRCE_ON |= 1u << 11u;
    }

    /**
     * Clear FRCE_ON's sram5 bit.
     */
    inline void clear_FRCE_ON_sram5()
    {
        FRCE_ON &= ~(1u << 11u);
    }

    /**
     * Toggle FRCE_ON's sram5 bit.
     */
    inline void toggle_FRCE_ON_sram5()
    {
        FRCE_ON ^= 1u << 11u;
    }

    /**
     * Get FRCE_ON's xip bit.
     */
    bool get_FRCE_ON_xip()
    {
        return FRCE_ON & (1u << 12u);
    }

    /**
     * Set FRCE_ON's xip bit.
     */
    inline void set_FRCE_ON_xip()
    {
        FRCE_ON |= 1u << 12u;
    }

    /**
     * Clear FRCE_ON's xip bit.
     */
    inline void clear_FRCE_ON_xip()
    {
        FRCE_ON &= ~(1u << 12u);
    }

    /**
     * Toggle FRCE_ON's xip bit.
     */
    inline void toggle_FRCE_ON_xip()
    {
        FRCE_ON ^= 1u << 12u;
    }

    /**
     * Get FRCE_ON's vreg_and_chip_reset bit.
     */
    bool get_FRCE_ON_vreg_and_chip_reset()
    {
        return FRCE_ON & (1u << 13u);
    }

    /**
     * Set FRCE_ON's vreg_and_chip_reset bit.
     */
    inline void set_FRCE_ON_vreg_and_chip_reset()
    {
        FRCE_ON |= 1u << 13u;
    }

    /**
     * Clear FRCE_ON's vreg_and_chip_reset bit.
     */
    inline void clear_FRCE_ON_vreg_and_chip_reset()
    {
        FRCE_ON &= ~(1u << 13u);
    }

    /**
     * Toggle FRCE_ON's vreg_and_chip_reset bit.
     */
    inline void toggle_FRCE_ON_vreg_and_chip_reset()
    {
        FRCE_ON ^= 1u << 13u;
    }

    /**
     * Get FRCE_ON's sio bit.
     */
    bool get_FRCE_ON_sio()
    {
        return FRCE_ON & (1u << 14u);
    }

    /**
     * Set FRCE_ON's sio bit.
     */
    inline void set_FRCE_ON_sio()
    {
        FRCE_ON |= 1u << 14u;
    }

    /**
     * Clear FRCE_ON's sio bit.
     */
    inline void clear_FRCE_ON_sio()
    {
        FRCE_ON &= ~(1u << 14u);
    }

    /**
     * Toggle FRCE_ON's sio bit.
     */
    inline void toggle_FRCE_ON_sio()
    {
        FRCE_ON ^= 1u << 14u;
    }

    /**
     * Get FRCE_ON's proc0 bit.
     */
    bool get_FRCE_ON_proc0()
    {
        return FRCE_ON & (1u << 15u);
    }

    /**
     * Set FRCE_ON's proc0 bit.
     */
    inline void set_FRCE_ON_proc0()
    {
        FRCE_ON |= 1u << 15u;
    }

    /**
     * Clear FRCE_ON's proc0 bit.
     */
    inline void clear_FRCE_ON_proc0()
    {
        FRCE_ON &= ~(1u << 15u);
    }

    /**
     * Toggle FRCE_ON's proc0 bit.
     */
    inline void toggle_FRCE_ON_proc0()
    {
        FRCE_ON ^= 1u << 15u;
    }

    /**
     * Get FRCE_ON's proc1 bit.
     */
    bool get_FRCE_ON_proc1()
    {
        return FRCE_ON & (1u << 16u);
    }

    /**
     * Set FRCE_ON's proc1 bit.
     */
    inline void set_FRCE_ON_proc1()
    {
        FRCE_ON |= 1u << 16u;
    }

    /**
     * Clear FRCE_ON's proc1 bit.
     */
    inline void clear_FRCE_ON_proc1()
    {
        FRCE_ON &= ~(1u << 16u);
    }

    /**
     * Toggle FRCE_ON's proc1 bit.
     */
    inline void toggle_FRCE_ON_proc1()
    {
        FRCE_ON ^= 1u << 16u;
    }

    /**
     * Get FRCE_OFF's rosc bit.
     */
    bool get_FRCE_OFF_rosc()
    {
        return FRCE_OFF & (1u << 0u);
    }

    /**
     * Set FRCE_OFF's rosc bit.
     */
    inline void set_FRCE_OFF_rosc()
    {
        FRCE_OFF |= 1u << 0u;
    }

    /**
     * Clear FRCE_OFF's rosc bit.
     */
    inline void clear_FRCE_OFF_rosc()
    {
        FRCE_OFF &= ~(1u << 0u);
    }

    /**
     * Toggle FRCE_OFF's rosc bit.
     */
    inline void toggle_FRCE_OFF_rosc()
    {
        FRCE_OFF ^= 1u << 0u;
    }

    /**
     * Get FRCE_OFF's xosc bit.
     */
    bool get_FRCE_OFF_xosc()
    {
        return FRCE_OFF & (1u << 1u);
    }

    /**
     * Set FRCE_OFF's xosc bit.
     */
    inline void set_FRCE_OFF_xosc()
    {
        FRCE_OFF |= 1u << 1u;
    }

    /**
     * Clear FRCE_OFF's xosc bit.
     */
    inline void clear_FRCE_OFF_xosc()
    {
        FRCE_OFF &= ~(1u << 1u);
    }

    /**
     * Toggle FRCE_OFF's xosc bit.
     */
    inline void toggle_FRCE_OFF_xosc()
    {
        FRCE_OFF ^= 1u << 1u;
    }

    /**
     * Get FRCE_OFF's clocks bit.
     */
    bool get_FRCE_OFF_clocks()
    {
        return FRCE_OFF & (1u << 2u);
    }

    /**
     * Set FRCE_OFF's clocks bit.
     */
    inline void set_FRCE_OFF_clocks()
    {
        FRCE_OFF |= 1u << 2u;
    }

    /**
     * Clear FRCE_OFF's clocks bit.
     */
    inline void clear_FRCE_OFF_clocks()
    {
        FRCE_OFF &= ~(1u << 2u);
    }

    /**
     * Toggle FRCE_OFF's clocks bit.
     */
    inline void toggle_FRCE_OFF_clocks()
    {
        FRCE_OFF ^= 1u << 2u;
    }

    /**
     * Get FRCE_OFF's resets bit.
     */
    bool get_FRCE_OFF_resets()
    {
        return FRCE_OFF & (1u << 3u);
    }

    /**
     * Set FRCE_OFF's resets bit.
     */
    inline void set_FRCE_OFF_resets()
    {
        FRCE_OFF |= 1u << 3u;
    }

    /**
     * Clear FRCE_OFF's resets bit.
     */
    inline void clear_FRCE_OFF_resets()
    {
        FRCE_OFF &= ~(1u << 3u);
    }

    /**
     * Toggle FRCE_OFF's resets bit.
     */
    inline void toggle_FRCE_OFF_resets()
    {
        FRCE_OFF ^= 1u << 3u;
    }

    /**
     * Get FRCE_OFF's busfabric bit.
     */
    bool get_FRCE_OFF_busfabric()
    {
        return FRCE_OFF & (1u << 4u);
    }

    /**
     * Set FRCE_OFF's busfabric bit.
     */
    inline void set_FRCE_OFF_busfabric()
    {
        FRCE_OFF |= 1u << 4u;
    }

    /**
     * Clear FRCE_OFF's busfabric bit.
     */
    inline void clear_FRCE_OFF_busfabric()
    {
        FRCE_OFF &= ~(1u << 4u);
    }

    /**
     * Toggle FRCE_OFF's busfabric bit.
     */
    inline void toggle_FRCE_OFF_busfabric()
    {
        FRCE_OFF ^= 1u << 4u;
    }

    /**
     * Get FRCE_OFF's rom bit.
     */
    bool get_FRCE_OFF_rom()
    {
        return FRCE_OFF & (1u << 5u);
    }

    /**
     * Set FRCE_OFF's rom bit.
     */
    inline void set_FRCE_OFF_rom()
    {
        FRCE_OFF |= 1u << 5u;
    }

    /**
     * Clear FRCE_OFF's rom bit.
     */
    inline void clear_FRCE_OFF_rom()
    {
        FRCE_OFF &= ~(1u << 5u);
    }

    /**
     * Toggle FRCE_OFF's rom bit.
     */
    inline void toggle_FRCE_OFF_rom()
    {
        FRCE_OFF ^= 1u << 5u;
    }

    /**
     * Get FRCE_OFF's sram0 bit.
     */
    bool get_FRCE_OFF_sram0()
    {
        return FRCE_OFF & (1u << 6u);
    }

    /**
     * Set FRCE_OFF's sram0 bit.
     */
    inline void set_FRCE_OFF_sram0()
    {
        FRCE_OFF |= 1u << 6u;
    }

    /**
     * Clear FRCE_OFF's sram0 bit.
     */
    inline void clear_FRCE_OFF_sram0()
    {
        FRCE_OFF &= ~(1u << 6u);
    }

    /**
     * Toggle FRCE_OFF's sram0 bit.
     */
    inline void toggle_FRCE_OFF_sram0()
    {
        FRCE_OFF ^= 1u << 6u;
    }

    /**
     * Get FRCE_OFF's sram1 bit.
     */
    bool get_FRCE_OFF_sram1()
    {
        return FRCE_OFF & (1u << 7u);
    }

    /**
     * Set FRCE_OFF's sram1 bit.
     */
    inline void set_FRCE_OFF_sram1()
    {
        FRCE_OFF |= 1u << 7u;
    }

    /**
     * Clear FRCE_OFF's sram1 bit.
     */
    inline void clear_FRCE_OFF_sram1()
    {
        FRCE_OFF &= ~(1u << 7u);
    }

    /**
     * Toggle FRCE_OFF's sram1 bit.
     */
    inline void toggle_FRCE_OFF_sram1()
    {
        FRCE_OFF ^= 1u << 7u;
    }

    /**
     * Get FRCE_OFF's sram2 bit.
     */
    bool get_FRCE_OFF_sram2()
    {
        return FRCE_OFF & (1u << 8u);
    }

    /**
     * Set FRCE_OFF's sram2 bit.
     */
    inline void set_FRCE_OFF_sram2()
    {
        FRCE_OFF |= 1u << 8u;
    }

    /**
     * Clear FRCE_OFF's sram2 bit.
     */
    inline void clear_FRCE_OFF_sram2()
    {
        FRCE_OFF &= ~(1u << 8u);
    }

    /**
     * Toggle FRCE_OFF's sram2 bit.
     */
    inline void toggle_FRCE_OFF_sram2()
    {
        FRCE_OFF ^= 1u << 8u;
    }

    /**
     * Get FRCE_OFF's sram3 bit.
     */
    bool get_FRCE_OFF_sram3()
    {
        return FRCE_OFF & (1u << 9u);
    }

    /**
     * Set FRCE_OFF's sram3 bit.
     */
    inline void set_FRCE_OFF_sram3()
    {
        FRCE_OFF |= 1u << 9u;
    }

    /**
     * Clear FRCE_OFF's sram3 bit.
     */
    inline void clear_FRCE_OFF_sram3()
    {
        FRCE_OFF &= ~(1u << 9u);
    }

    /**
     * Toggle FRCE_OFF's sram3 bit.
     */
    inline void toggle_FRCE_OFF_sram3()
    {
        FRCE_OFF ^= 1u << 9u;
    }

    /**
     * Get FRCE_OFF's sram4 bit.
     */
    bool get_FRCE_OFF_sram4()
    {
        return FRCE_OFF & (1u << 10u);
    }

    /**
     * Set FRCE_OFF's sram4 bit.
     */
    inline void set_FRCE_OFF_sram4()
    {
        FRCE_OFF |= 1u << 10u;
    }

    /**
     * Clear FRCE_OFF's sram4 bit.
     */
    inline void clear_FRCE_OFF_sram4()
    {
        FRCE_OFF &= ~(1u << 10u);
    }

    /**
     * Toggle FRCE_OFF's sram4 bit.
     */
    inline void toggle_FRCE_OFF_sram4()
    {
        FRCE_OFF ^= 1u << 10u;
    }

    /**
     * Get FRCE_OFF's sram5 bit.
     */
    bool get_FRCE_OFF_sram5()
    {
        return FRCE_OFF & (1u << 11u);
    }

    /**
     * Set FRCE_OFF's sram5 bit.
     */
    inline void set_FRCE_OFF_sram5()
    {
        FRCE_OFF |= 1u << 11u;
    }

    /**
     * Clear FRCE_OFF's sram5 bit.
     */
    inline void clear_FRCE_OFF_sram5()
    {
        FRCE_OFF &= ~(1u << 11u);
    }

    /**
     * Toggle FRCE_OFF's sram5 bit.
     */
    inline void toggle_FRCE_OFF_sram5()
    {
        FRCE_OFF ^= 1u << 11u;
    }

    /**
     * Get FRCE_OFF's xip bit.
     */
    bool get_FRCE_OFF_xip()
    {
        return FRCE_OFF & (1u << 12u);
    }

    /**
     * Set FRCE_OFF's xip bit.
     */
    inline void set_FRCE_OFF_xip()
    {
        FRCE_OFF |= 1u << 12u;
    }

    /**
     * Clear FRCE_OFF's xip bit.
     */
    inline void clear_FRCE_OFF_xip()
    {
        FRCE_OFF &= ~(1u << 12u);
    }

    /**
     * Toggle FRCE_OFF's xip bit.
     */
    inline void toggle_FRCE_OFF_xip()
    {
        FRCE_OFF ^= 1u << 12u;
    }

    /**
     * Get FRCE_OFF's vreg_and_chip_reset bit.
     */
    bool get_FRCE_OFF_vreg_and_chip_reset()
    {
        return FRCE_OFF & (1u << 13u);
    }

    /**
     * Set FRCE_OFF's vreg_and_chip_reset bit.
     */
    inline void set_FRCE_OFF_vreg_and_chip_reset()
    {
        FRCE_OFF |= 1u << 13u;
    }

    /**
     * Clear FRCE_OFF's vreg_and_chip_reset bit.
     */
    inline void clear_FRCE_OFF_vreg_and_chip_reset()
    {
        FRCE_OFF &= ~(1u << 13u);
    }

    /**
     * Toggle FRCE_OFF's vreg_and_chip_reset bit.
     */
    inline void toggle_FRCE_OFF_vreg_and_chip_reset()
    {
        FRCE_OFF ^= 1u << 13u;
    }

    /**
     * Get FRCE_OFF's sio bit.
     */
    bool get_FRCE_OFF_sio()
    {
        return FRCE_OFF & (1u << 14u);
    }

    /**
     * Set FRCE_OFF's sio bit.
     */
    inline void set_FRCE_OFF_sio()
    {
        FRCE_OFF |= 1u << 14u;
    }

    /**
     * Clear FRCE_OFF's sio bit.
     */
    inline void clear_FRCE_OFF_sio()
    {
        FRCE_OFF &= ~(1u << 14u);
    }

    /**
     * Toggle FRCE_OFF's sio bit.
     */
    inline void toggle_FRCE_OFF_sio()
    {
        FRCE_OFF ^= 1u << 14u;
    }

    /**
     * Get FRCE_OFF's proc0 bit.
     */
    bool get_FRCE_OFF_proc0()
    {
        return FRCE_OFF & (1u << 15u);
    }

    /**
     * Set FRCE_OFF's proc0 bit.
     */
    inline void set_FRCE_OFF_proc0()
    {
        FRCE_OFF |= 1u << 15u;
    }

    /**
     * Clear FRCE_OFF's proc0 bit.
     */
    inline void clear_FRCE_OFF_proc0()
    {
        FRCE_OFF &= ~(1u << 15u);
    }

    /**
     * Toggle FRCE_OFF's proc0 bit.
     */
    inline void toggle_FRCE_OFF_proc0()
    {
        FRCE_OFF ^= 1u << 15u;
    }

    /**
     * Get FRCE_OFF's proc1 bit.
     */
    bool get_FRCE_OFF_proc1()
    {
        return FRCE_OFF & (1u << 16u);
    }

    /**
     * Set FRCE_OFF's proc1 bit.
     */
    inline void set_FRCE_OFF_proc1()
    {
        FRCE_OFF |= 1u << 16u;
    }

    /**
     * Clear FRCE_OFF's proc1 bit.
     */
    inline void clear_FRCE_OFF_proc1()
    {
        FRCE_OFF &= ~(1u << 16u);
    }

    /**
     * Toggle FRCE_OFF's proc1 bit.
     */
    inline void toggle_FRCE_OFF_proc1()
    {
        FRCE_OFF ^= 1u << 16u;
    }

    /**
     * Get WDSEL's rosc bit.
     */
    bool get_WDSEL_rosc()
    {
        return WDSEL & (1u << 0u);
    }

    /**
     * Set WDSEL's rosc bit.
     */
    inline void set_WDSEL_rosc()
    {
        WDSEL |= 1u << 0u;
    }

    /**
     * Clear WDSEL's rosc bit.
     */
    inline void clear_WDSEL_rosc()
    {
        WDSEL &= ~(1u << 0u);
    }

    /**
     * Toggle WDSEL's rosc bit.
     */
    inline void toggle_WDSEL_rosc()
    {
        WDSEL ^= 1u << 0u;
    }

    /**
     * Get WDSEL's xosc bit.
     */
    bool get_WDSEL_xosc()
    {
        return WDSEL & (1u << 1u);
    }

    /**
     * Set WDSEL's xosc bit.
     */
    inline void set_WDSEL_xosc()
    {
        WDSEL |= 1u << 1u;
    }

    /**
     * Clear WDSEL's xosc bit.
     */
    inline void clear_WDSEL_xosc()
    {
        WDSEL &= ~(1u << 1u);
    }

    /**
     * Toggle WDSEL's xosc bit.
     */
    inline void toggle_WDSEL_xosc()
    {
        WDSEL ^= 1u << 1u;
    }

    /**
     * Get WDSEL's clocks bit.
     */
    bool get_WDSEL_clocks()
    {
        return WDSEL & (1u << 2u);
    }

    /**
     * Set WDSEL's clocks bit.
     */
    inline void set_WDSEL_clocks()
    {
        WDSEL |= 1u << 2u;
    }

    /**
     * Clear WDSEL's clocks bit.
     */
    inline void clear_WDSEL_clocks()
    {
        WDSEL &= ~(1u << 2u);
    }

    /**
     * Toggle WDSEL's clocks bit.
     */
    inline void toggle_WDSEL_clocks()
    {
        WDSEL ^= 1u << 2u;
    }

    /**
     * Get WDSEL's resets bit.
     */
    bool get_WDSEL_resets()
    {
        return WDSEL & (1u << 3u);
    }

    /**
     * Set WDSEL's resets bit.
     */
    inline void set_WDSEL_resets()
    {
        WDSEL |= 1u << 3u;
    }

    /**
     * Clear WDSEL's resets bit.
     */
    inline void clear_WDSEL_resets()
    {
        WDSEL &= ~(1u << 3u);
    }

    /**
     * Toggle WDSEL's resets bit.
     */
    inline void toggle_WDSEL_resets()
    {
        WDSEL ^= 1u << 3u;
    }

    /**
     * Get WDSEL's busfabric bit.
     */
    bool get_WDSEL_busfabric()
    {
        return WDSEL & (1u << 4u);
    }

    /**
     * Set WDSEL's busfabric bit.
     */
    inline void set_WDSEL_busfabric()
    {
        WDSEL |= 1u << 4u;
    }

    /**
     * Clear WDSEL's busfabric bit.
     */
    inline void clear_WDSEL_busfabric()
    {
        WDSEL &= ~(1u << 4u);
    }

    /**
     * Toggle WDSEL's busfabric bit.
     */
    inline void toggle_WDSEL_busfabric()
    {
        WDSEL ^= 1u << 4u;
    }

    /**
     * Get WDSEL's rom bit.
     */
    bool get_WDSEL_rom()
    {
        return WDSEL & (1u << 5u);
    }

    /**
     * Set WDSEL's rom bit.
     */
    inline void set_WDSEL_rom()
    {
        WDSEL |= 1u << 5u;
    }

    /**
     * Clear WDSEL's rom bit.
     */
    inline void clear_WDSEL_rom()
    {
        WDSEL &= ~(1u << 5u);
    }

    /**
     * Toggle WDSEL's rom bit.
     */
    inline void toggle_WDSEL_rom()
    {
        WDSEL ^= 1u << 5u;
    }

    /**
     * Get WDSEL's sram0 bit.
     */
    bool get_WDSEL_sram0()
    {
        return WDSEL & (1u << 6u);
    }

    /**
     * Set WDSEL's sram0 bit.
     */
    inline void set_WDSEL_sram0()
    {
        WDSEL |= 1u << 6u;
    }

    /**
     * Clear WDSEL's sram0 bit.
     */
    inline void clear_WDSEL_sram0()
    {
        WDSEL &= ~(1u << 6u);
    }

    /**
     * Toggle WDSEL's sram0 bit.
     */
    inline void toggle_WDSEL_sram0()
    {
        WDSEL ^= 1u << 6u;
    }

    /**
     * Get WDSEL's sram1 bit.
     */
    bool get_WDSEL_sram1()
    {
        return WDSEL & (1u << 7u);
    }

    /**
     * Set WDSEL's sram1 bit.
     */
    inline void set_WDSEL_sram1()
    {
        WDSEL |= 1u << 7u;
    }

    /**
     * Clear WDSEL's sram1 bit.
     */
    inline void clear_WDSEL_sram1()
    {
        WDSEL &= ~(1u << 7u);
    }

    /**
     * Toggle WDSEL's sram1 bit.
     */
    inline void toggle_WDSEL_sram1()
    {
        WDSEL ^= 1u << 7u;
    }

    /**
     * Get WDSEL's sram2 bit.
     */
    bool get_WDSEL_sram2()
    {
        return WDSEL & (1u << 8u);
    }

    /**
     * Set WDSEL's sram2 bit.
     */
    inline void set_WDSEL_sram2()
    {
        WDSEL |= 1u << 8u;
    }

    /**
     * Clear WDSEL's sram2 bit.
     */
    inline void clear_WDSEL_sram2()
    {
        WDSEL &= ~(1u << 8u);
    }

    /**
     * Toggle WDSEL's sram2 bit.
     */
    inline void toggle_WDSEL_sram2()
    {
        WDSEL ^= 1u << 8u;
    }

    /**
     * Get WDSEL's sram3 bit.
     */
    bool get_WDSEL_sram3()
    {
        return WDSEL & (1u << 9u);
    }

    /**
     * Set WDSEL's sram3 bit.
     */
    inline void set_WDSEL_sram3()
    {
        WDSEL |= 1u << 9u;
    }

    /**
     * Clear WDSEL's sram3 bit.
     */
    inline void clear_WDSEL_sram3()
    {
        WDSEL &= ~(1u << 9u);
    }

    /**
     * Toggle WDSEL's sram3 bit.
     */
    inline void toggle_WDSEL_sram3()
    {
        WDSEL ^= 1u << 9u;
    }

    /**
     * Get WDSEL's sram4 bit.
     */
    bool get_WDSEL_sram4()
    {
        return WDSEL & (1u << 10u);
    }

    /**
     * Set WDSEL's sram4 bit.
     */
    inline void set_WDSEL_sram4()
    {
        WDSEL |= 1u << 10u;
    }

    /**
     * Clear WDSEL's sram4 bit.
     */
    inline void clear_WDSEL_sram4()
    {
        WDSEL &= ~(1u << 10u);
    }

    /**
     * Toggle WDSEL's sram4 bit.
     */
    inline void toggle_WDSEL_sram4()
    {
        WDSEL ^= 1u << 10u;
    }

    /**
     * Get WDSEL's sram5 bit.
     */
    bool get_WDSEL_sram5()
    {
        return WDSEL & (1u << 11u);
    }

    /**
     * Set WDSEL's sram5 bit.
     */
    inline void set_WDSEL_sram5()
    {
        WDSEL |= 1u << 11u;
    }

    /**
     * Clear WDSEL's sram5 bit.
     */
    inline void clear_WDSEL_sram5()
    {
        WDSEL &= ~(1u << 11u);
    }

    /**
     * Toggle WDSEL's sram5 bit.
     */
    inline void toggle_WDSEL_sram5()
    {
        WDSEL ^= 1u << 11u;
    }

    /**
     * Get WDSEL's xip bit.
     */
    bool get_WDSEL_xip()
    {
        return WDSEL & (1u << 12u);
    }

    /**
     * Set WDSEL's xip bit.
     */
    inline void set_WDSEL_xip()
    {
        WDSEL |= 1u << 12u;
    }

    /**
     * Clear WDSEL's xip bit.
     */
    inline void clear_WDSEL_xip()
    {
        WDSEL &= ~(1u << 12u);
    }

    /**
     * Toggle WDSEL's xip bit.
     */
    inline void toggle_WDSEL_xip()
    {
        WDSEL ^= 1u << 12u;
    }

    /**
     * Get WDSEL's vreg_and_chip_reset bit.
     */
    bool get_WDSEL_vreg_and_chip_reset()
    {
        return WDSEL & (1u << 13u);
    }

    /**
     * Set WDSEL's vreg_and_chip_reset bit.
     */
    inline void set_WDSEL_vreg_and_chip_reset()
    {
        WDSEL |= 1u << 13u;
    }

    /**
     * Clear WDSEL's vreg_and_chip_reset bit.
     */
    inline void clear_WDSEL_vreg_and_chip_reset()
    {
        WDSEL &= ~(1u << 13u);
    }

    /**
     * Toggle WDSEL's vreg_and_chip_reset bit.
     */
    inline void toggle_WDSEL_vreg_and_chip_reset()
    {
        WDSEL ^= 1u << 13u;
    }

    /**
     * Get WDSEL's sio bit.
     */
    bool get_WDSEL_sio()
    {
        return WDSEL & (1u << 14u);
    }

    /**
     * Set WDSEL's sio bit.
     */
    inline void set_WDSEL_sio()
    {
        WDSEL |= 1u << 14u;
    }

    /**
     * Clear WDSEL's sio bit.
     */
    inline void clear_WDSEL_sio()
    {
        WDSEL &= ~(1u << 14u);
    }

    /**
     * Toggle WDSEL's sio bit.
     */
    inline void toggle_WDSEL_sio()
    {
        WDSEL ^= 1u << 14u;
    }

    /**
     * Get WDSEL's proc0 bit.
     */
    bool get_WDSEL_proc0()
    {
        return WDSEL & (1u << 15u);
    }

    /**
     * Set WDSEL's proc0 bit.
     */
    inline void set_WDSEL_proc0()
    {
        WDSEL |= 1u << 15u;
    }

    /**
     * Clear WDSEL's proc0 bit.
     */
    inline void clear_WDSEL_proc0()
    {
        WDSEL &= ~(1u << 15u);
    }

    /**
     * Toggle WDSEL's proc0 bit.
     */
    inline void toggle_WDSEL_proc0()
    {
        WDSEL ^= 1u << 15u;
    }

    /**
     * Get WDSEL's proc1 bit.
     */
    bool get_WDSEL_proc1()
    {
        return WDSEL & (1u << 16u);
    }

    /**
     * Set WDSEL's proc1 bit.
     */
    inline void set_WDSEL_proc1()
    {
        WDSEL |= 1u << 16u;
    }

    /**
     * Clear WDSEL's proc1 bit.
     */
    inline void clear_WDSEL_proc1()
    {
        WDSEL &= ~(1u << 16u);
    }

    /**
     * Toggle WDSEL's proc1 bit.
     */
    inline void toggle_WDSEL_proc1()
    {
        WDSEL ^= 1u << 16u;
    }

    /**
     * Get DONE's rosc bit.
     */
    bool get_DONE_rosc()
    {
        return DONE & (1u << 0u);
    }

    /**
     * Get DONE's xosc bit.
     */
    bool get_DONE_xosc()
    {
        return DONE & (1u << 1u);
    }

    /**
     * Get DONE's clocks bit.
     */
    bool get_DONE_clocks()
    {
        return DONE & (1u << 2u);
    }

    /**
     * Get DONE's resets bit.
     */
    bool get_DONE_resets()
    {
        return DONE & (1u << 3u);
    }

    /**
     * Get DONE's busfabric bit.
     */
    bool get_DONE_busfabric()
    {
        return DONE & (1u << 4u);
    }

    /**
     * Get DONE's rom bit.
     */
    bool get_DONE_rom()
    {
        return DONE & (1u << 5u);
    }

    /**
     * Get DONE's sram0 bit.
     */
    bool get_DONE_sram0()
    {
        return DONE & (1u << 6u);
    }

    /**
     * Get DONE's sram1 bit.
     */
    bool get_DONE_sram1()
    {
        return DONE & (1u << 7u);
    }

    /**
     * Get DONE's sram2 bit.
     */
    bool get_DONE_sram2()
    {
        return DONE & (1u << 8u);
    }

    /**
     * Get DONE's sram3 bit.
     */
    bool get_DONE_sram3()
    {
        return DONE & (1u << 9u);
    }

    /**
     * Get DONE's sram4 bit.
     */
    bool get_DONE_sram4()
    {
        return DONE & (1u << 10u);
    }

    /**
     * Get DONE's sram5 bit.
     */
    bool get_DONE_sram5()
    {
        return DONE & (1u << 11u);
    }

    /**
     * Get DONE's xip bit.
     */
    bool get_DONE_xip()
    {
        return DONE & (1u << 12u);
    }

    /**
     * Get DONE's vreg_and_chip_reset bit.
     */
    bool get_DONE_vreg_and_chip_reset()
    {
        return DONE & (1u << 13u);
    }

    /**
     * Get DONE's sio bit.
     */
    bool get_DONE_sio()
    {
        return DONE & (1u << 14u);
    }

    /**
     * Get DONE's proc0 bit.
     */
    bool get_DONE_proc0()
    {
        return DONE & (1u << 15u);
    }

    /**
     * Get DONE's proc1 bit.
     */
    bool get_DONE_proc1()
    {
        return DONE & (1u << 16u);
    }
};

static_assert(sizeof(psm) == psm::size);

static volatile psm *const PSM = reinterpret_cast<psm *>(0x40010000);

}; // namespace RP2040

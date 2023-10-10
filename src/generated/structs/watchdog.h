/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include "../ifgen/common.h"

namespace RP2040
{

struct [[gnu::packed]] watchdog
{
    /* Constant attributes. */
    static constexpr uint16_t id = 1;       /*!< watchdog's identifier. */
    static constexpr std::size_t size = 48; /*!< watchdog's size in bytes. */

    /* Fields. */
    uint32_t CTRL; /*!< (read-write) Watchdog control\n
   The rst_wdsel register determines which subsystems are reset when the
   watchdog is triggered.\n The watchdog can be triggered in software. */
    uint32_t
        LOAD; /*!< (write-only) Load the watchdog timer. The maximum setting is
                 0xffffff which corresponds to 0xffffff / 2 ticks before
                 triggering a watchdog reset (see errata RP2040-E1). */
    const uint32_t REASON =
        {}; /*!< (read-only) Logs the reason for the last reset. Both bits are
               zero for the case of a hardware reset. */
    uint32_t SCRATCH0; /*!< (read-write) Scratch register. Information persists
                          through soft reset of the chip. */
    uint32_t SCRATCH1; /*!< (read-write) Scratch register. Information persists
                          through soft reset of the chip. */
    uint32_t SCRATCH2; /*!< (read-write) Scratch register. Information persists
                          through soft reset of the chip. */
    uint32_t SCRATCH3; /*!< (read-write) Scratch register. Information persists
                          through soft reset of the chip. */
    uint32_t SCRATCH4; /*!< (read-write) Scratch register. Information persists
                          through soft reset of the chip. */
    uint32_t SCRATCH5; /*!< (read-write) Scratch register. Information persists
                          through soft reset of the chip. */
    uint32_t SCRATCH6; /*!< (read-write) Scratch register. Information persists
                          through soft reset of the chip. */
    uint32_t SCRATCH7; /*!< (read-write) Scratch register. Information persists
                          through soft reset of the chip. */
    uint32_t TICK;     /*!< (read-write) Controls the tick generator */

    /* Methods. */

    /**
     * Get CTRL's TIME field.
     */
    uint32_t get_CTRL_TIME()
    {
        return (CTRL >> 0u) & 0b111111111111111111111111u;
    }

    /**
     * Get CTRL's PAUSE_JTAG bit.
     */
    bool get_CTRL_PAUSE_JTAG()
    {
        return CTRL & (1u << 24u);
    }

    /**
     * Set CTRL's PAUSE_JTAG bit.
     */
    inline void set_CTRL_PAUSE_JTAG()
    {
        CTRL |= 1u << 24u;
    }

    /**
     * Clear CTRL's PAUSE_JTAG bit.
     */
    inline void clear_CTRL_PAUSE_JTAG()
    {
        CTRL &= ~(1u << 24u);
    }

    /**
     * Toggle CTRL's PAUSE_JTAG bit.
     */
    inline void toggle_CTRL_PAUSE_JTAG()
    {
        CTRL ^= 1u << 24u;
    }

    /**
     * Get CTRL's PAUSE_DBG0 bit.
     */
    bool get_CTRL_PAUSE_DBG0()
    {
        return CTRL & (1u << 25u);
    }

    /**
     * Set CTRL's PAUSE_DBG0 bit.
     */
    inline void set_CTRL_PAUSE_DBG0()
    {
        CTRL |= 1u << 25u;
    }

    /**
     * Clear CTRL's PAUSE_DBG0 bit.
     */
    inline void clear_CTRL_PAUSE_DBG0()
    {
        CTRL &= ~(1u << 25u);
    }

    /**
     * Toggle CTRL's PAUSE_DBG0 bit.
     */
    inline void toggle_CTRL_PAUSE_DBG0()
    {
        CTRL ^= 1u << 25u;
    }

    /**
     * Get CTRL's PAUSE_DBG1 bit.
     */
    bool get_CTRL_PAUSE_DBG1()
    {
        return CTRL & (1u << 26u);
    }

    /**
     * Set CTRL's PAUSE_DBG1 bit.
     */
    inline void set_CTRL_PAUSE_DBG1()
    {
        CTRL |= 1u << 26u;
    }

    /**
     * Clear CTRL's PAUSE_DBG1 bit.
     */
    inline void clear_CTRL_PAUSE_DBG1()
    {
        CTRL &= ~(1u << 26u);
    }

    /**
     * Toggle CTRL's PAUSE_DBG1 bit.
     */
    inline void toggle_CTRL_PAUSE_DBG1()
    {
        CTRL ^= 1u << 26u;
    }

    /**
     * Get CTRL's ENABLE bit.
     */
    bool get_CTRL_ENABLE()
    {
        return CTRL & (1u << 30u);
    }

    /**
     * Set CTRL's ENABLE bit.
     */
    inline void set_CTRL_ENABLE()
    {
        CTRL |= 1u << 30u;
    }

    /**
     * Clear CTRL's ENABLE bit.
     */
    inline void clear_CTRL_ENABLE()
    {
        CTRL &= ~(1u << 30u);
    }

    /**
     * Toggle CTRL's ENABLE bit.
     */
    inline void toggle_CTRL_ENABLE()
    {
        CTRL ^= 1u << 30u;
    }

    /**
     * Get CTRL's TRIGGER bit.
     */
    bool get_CTRL_TRIGGER()
    {
        return CTRL & (1u << 31u);
    }

    /**
     * Set CTRL's TRIGGER bit.
     */
    inline void set_CTRL_TRIGGER()
    {
        CTRL |= 1u << 31u;
    }

    /**
     * Clear CTRL's TRIGGER bit.
     */
    inline void clear_CTRL_TRIGGER()
    {
        CTRL &= ~(1u << 31u);
    }

    /**
     * Toggle CTRL's TRIGGER bit.
     */
    inline void toggle_CTRL_TRIGGER()
    {
        CTRL ^= 1u << 31u;
    }

    /**
     * Set LOAD's LOAD field.
     */
    inline void set_LOAD_LOAD(uint32_t value)
    {
        uint32_t curr = LOAD;

        curr &= ~(0b111111111111111111111111u << 0u);
        curr |= (value & 0b111111111111111111111111u) << 0u;

        LOAD = curr;
    }

    /**
     * Get REASON's TIMER bit.
     */
    bool get_REASON_TIMER()
    {
        return REASON & (1u << 0u);
    }

    /**
     * Get REASON's FORCE bit.
     */
    bool get_REASON_FORCE()
    {
        return REASON & (1u << 1u);
    }

    /**
     * Get TICK's CYCLES field.
     */
    uint16_t get_TICK_CYCLES()
    {
        return (TICK >> 0u) & 0b111111111u;
    }

    /**
     * Set TICK's CYCLES field.
     */
    inline void set_TICK_CYCLES(uint16_t value)
    {
        uint32_t curr = TICK;

        curr &= ~(0b111111111u << 0u);
        curr |= (value & 0b111111111u) << 0u;

        TICK = curr;
    }

    /**
     * Get TICK's ENABLE bit.
     */
    bool get_TICK_ENABLE()
    {
        return TICK & (1u << 9u);
    }

    /**
     * Set TICK's ENABLE bit.
     */
    inline void set_TICK_ENABLE()
    {
        TICK |= 1u << 9u;
    }

    /**
     * Clear TICK's ENABLE bit.
     */
    inline void clear_TICK_ENABLE()
    {
        TICK &= ~(1u << 9u);
    }

    /**
     * Toggle TICK's ENABLE bit.
     */
    inline void toggle_TICK_ENABLE()
    {
        TICK ^= 1u << 9u;
    }

    /**
     * Get TICK's RUNNING bit.
     */
    bool get_TICK_RUNNING()
    {
        return TICK & (1u << 10u);
    }

    /**
     * Get TICK's COUNT field.
     */
    uint16_t get_TICK_COUNT()
    {
        return (TICK >> 11u) & 0b111111111u;
    }
};

static_assert(sizeof(watchdog) == watchdog::size);

static volatile watchdog *const WATCHDOG =
    reinterpret_cast<watchdog *>(0x40058000);

}; // namespace RP2040

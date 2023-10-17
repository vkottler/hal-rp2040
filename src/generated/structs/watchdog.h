/**
 * \file
 * \brief Generated by ifgen (3.1.7).
 */
#pragma once

#include "../ifgen/common.h"

namespace RP2040
{

struct [[gnu::packed]] watchdog
{
    /* Constant attributes. */
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
     *
     * Indicates the number of ticks / 2 (see errata RP2040-E1) before a
     * watchdog reset will be triggered
     */
    inline uint32_t get_CTRL_TIME() volatile
    {
        return (CTRL >> 0u) & 0b111111111111111111111111u;
    }

    /**
     * Get CTRL's PAUSE_JTAG bit.
     *
     * Pause the watchdog timer when JTAG is accessing the bus fabric
     */
    inline bool get_CTRL_PAUSE_JTAG() volatile
    {
        return CTRL & (1u << 24u);
    }

    /**
     * Set CTRL's PAUSE_JTAG bit.
     *
     * Pause the watchdog timer when JTAG is accessing the bus fabric
     */
    inline void set_CTRL_PAUSE_JTAG() volatile
    {
        CTRL |= 1u << 24u;
    }

    /**
     * Clear CTRL's PAUSE_JTAG bit.
     *
     * Pause the watchdog timer when JTAG is accessing the bus fabric
     */
    inline void clear_CTRL_PAUSE_JTAG() volatile
    {
        CTRL &= ~(1u << 24u);
    }

    /**
     * Toggle CTRL's PAUSE_JTAG bit.
     *
     * Pause the watchdog timer when JTAG is accessing the bus fabric
     */
    inline void toggle_CTRL_PAUSE_JTAG() volatile
    {
        CTRL ^= 1u << 24u;
    }

    /**
     * Get CTRL's PAUSE_DBG0 bit.
     *
     * Pause the watchdog timer when processor 0 is in debug mode
     */
    inline bool get_CTRL_PAUSE_DBG0() volatile
    {
        return CTRL & (1u << 25u);
    }

    /**
     * Set CTRL's PAUSE_DBG0 bit.
     *
     * Pause the watchdog timer when processor 0 is in debug mode
     */
    inline void set_CTRL_PAUSE_DBG0() volatile
    {
        CTRL |= 1u << 25u;
    }

    /**
     * Clear CTRL's PAUSE_DBG0 bit.
     *
     * Pause the watchdog timer when processor 0 is in debug mode
     */
    inline void clear_CTRL_PAUSE_DBG0() volatile
    {
        CTRL &= ~(1u << 25u);
    }

    /**
     * Toggle CTRL's PAUSE_DBG0 bit.
     *
     * Pause the watchdog timer when processor 0 is in debug mode
     */
    inline void toggle_CTRL_PAUSE_DBG0() volatile
    {
        CTRL ^= 1u << 25u;
    }

    /**
     * Get CTRL's PAUSE_DBG1 bit.
     *
     * Pause the watchdog timer when processor 1 is in debug mode
     */
    inline bool get_CTRL_PAUSE_DBG1() volatile
    {
        return CTRL & (1u << 26u);
    }

    /**
     * Set CTRL's PAUSE_DBG1 bit.
     *
     * Pause the watchdog timer when processor 1 is in debug mode
     */
    inline void set_CTRL_PAUSE_DBG1() volatile
    {
        CTRL |= 1u << 26u;
    }

    /**
     * Clear CTRL's PAUSE_DBG1 bit.
     *
     * Pause the watchdog timer when processor 1 is in debug mode
     */
    inline void clear_CTRL_PAUSE_DBG1() volatile
    {
        CTRL &= ~(1u << 26u);
    }

    /**
     * Toggle CTRL's PAUSE_DBG1 bit.
     *
     * Pause the watchdog timer when processor 1 is in debug mode
     */
    inline void toggle_CTRL_PAUSE_DBG1() volatile
    {
        CTRL ^= 1u << 26u;
    }

    /**
     * Get CTRL's ENABLE bit.
     *
     * When not enabled the watchdog timer is paused
     */
    inline bool get_CTRL_ENABLE() volatile
    {
        return CTRL & (1u << 30u);
    }

    /**
     * Set CTRL's ENABLE bit.
     *
     * When not enabled the watchdog timer is paused
     */
    inline void set_CTRL_ENABLE() volatile
    {
        CTRL |= 1u << 30u;
    }

    /**
     * Clear CTRL's ENABLE bit.
     *
     * When not enabled the watchdog timer is paused
     */
    inline void clear_CTRL_ENABLE() volatile
    {
        CTRL &= ~(1u << 30u);
    }

    /**
     * Toggle CTRL's ENABLE bit.
     *
     * When not enabled the watchdog timer is paused
     */
    inline void toggle_CTRL_ENABLE() volatile
    {
        CTRL ^= 1u << 30u;
    }

    /**
     * Get CTRL's TRIGGER bit.
     *
     * Trigger a watchdog reset
     */
    inline bool get_CTRL_TRIGGER() volatile
    {
        return CTRL & (1u << 31u);
    }

    /**
     * Set CTRL's TRIGGER bit.
     *
     * Trigger a watchdog reset
     */
    inline void set_CTRL_TRIGGER() volatile
    {
        CTRL |= 1u << 31u;
    }

    /**
     * Clear CTRL's TRIGGER bit.
     *
     * Trigger a watchdog reset
     */
    inline void clear_CTRL_TRIGGER() volatile
    {
        CTRL &= ~(1u << 31u);
    }

    /**
     * Toggle CTRL's TRIGGER bit.
     *
     * Trigger a watchdog reset
     */
    inline void toggle_CTRL_TRIGGER() volatile
    {
        CTRL ^= 1u << 31u;
    }

    /**
     * Get all of CTRL's bit fields.
     *
     * (read-write) Watchdog control\n
     *             The rst_wdsel register determines which subsystems are reset
     * when the watchdog is triggered.\n The watchdog can be triggered in
     * software.
     */
    inline void get_CTRL(uint32_t &TIME, bool &PAUSE_JTAG, bool &PAUSE_DBG0,
                         bool &PAUSE_DBG1, bool &ENABLE,
                         bool &TRIGGER) volatile
    {
        uint32_t curr = CTRL;

        TIME = (curr >> 0u) & 0b111111111111111111111111u;
        PAUSE_JTAG = curr & (1u << 24u);
        PAUSE_DBG0 = curr & (1u << 25u);
        PAUSE_DBG1 = curr & (1u << 26u);
        ENABLE = curr & (1u << 30u);
        TRIGGER = curr & (1u << 31u);
    }

    /**
     * Set all of CTRL's bit fields.
     *
     * (read-write) Watchdog control\n
     *             The rst_wdsel register determines which subsystems are reset
     * when the watchdog is triggered.\n The watchdog can be triggered in
     * software.
     */
    inline void set_CTRL(bool PAUSE_JTAG, bool PAUSE_DBG0, bool PAUSE_DBG1,
                         bool ENABLE, bool TRIGGER) volatile
    {
        uint32_t curr = CTRL;

        curr &= ~(0b1u << 24u);
        curr |= (PAUSE_JTAG & 0b1u) << 24u;
        curr &= ~(0b1u << 25u);
        curr |= (PAUSE_DBG0 & 0b1u) << 25u;
        curr &= ~(0b1u << 26u);
        curr |= (PAUSE_DBG1 & 0b1u) << 26u;
        curr &= ~(0b1u << 30u);
        curr |= (ENABLE & 0b1u) << 30u;
        curr &= ~(0b1u << 31u);
        curr |= (TRIGGER & 0b1u) << 31u;

        CTRL = curr;
    }

    /**
     * Set LOAD's LOAD field.
     */
    inline void set_LOAD_LOAD(uint32_t value) volatile
    {
        uint32_t curr = LOAD;

        curr &= ~(0b111111111111111111111111u << 0u);
        curr |= (value & 0b111111111111111111111111u) << 0u;

        LOAD = curr;
    }

    /**
     * Get REASON's TIMER bit.
     */
    inline bool get_REASON_TIMER() volatile
    {
        return REASON & (1u << 0u);
    }

    /**
     * Get REASON's FORCE bit.
     */
    inline bool get_REASON_FORCE() volatile
    {
        return REASON & (1u << 1u);
    }

    /**
     * Get all of REASON's bit fields.
     *
     * (read-only) Logs the reason for the last reset. Both bits are zero for
     * the case of a hardware reset.
     */
    inline void get_REASON(bool &TIMER, bool &FORCE) volatile
    {
        uint32_t curr = REASON;

        TIMER = curr & (1u << 0u);
        FORCE = curr & (1u << 1u);
    }

    /**
     * Get TICK's CYCLES field.
     *
     * Total number of clk_tick cycles before the next tick.
     */
    inline uint16_t get_TICK_CYCLES() volatile
    {
        return (TICK >> 0u) & 0b111111111u;
    }

    /**
     * Set TICK's CYCLES field.
     *
     * Total number of clk_tick cycles before the next tick.
     */
    inline void set_TICK_CYCLES(uint16_t value) volatile
    {
        uint32_t curr = TICK;

        curr &= ~(0b111111111u << 0u);
        curr |= (value & 0b111111111u) << 0u;

        TICK = curr;
    }

    /**
     * Get TICK's ENABLE bit.
     *
     * start / stop tick generation
     */
    inline bool get_TICK_ENABLE() volatile
    {
        return TICK & (1u << 9u);
    }

    /**
     * Set TICK's ENABLE bit.
     *
     * start / stop tick generation
     */
    inline void set_TICK_ENABLE() volatile
    {
        TICK |= 1u << 9u;
    }

    /**
     * Clear TICK's ENABLE bit.
     *
     * start / stop tick generation
     */
    inline void clear_TICK_ENABLE() volatile
    {
        TICK &= ~(1u << 9u);
    }

    /**
     * Toggle TICK's ENABLE bit.
     *
     * start / stop tick generation
     */
    inline void toggle_TICK_ENABLE() volatile
    {
        TICK ^= 1u << 9u;
    }

    /**
     * Get TICK's RUNNING bit.
     *
     * Is the tick generator running?
     */
    inline bool get_TICK_RUNNING() volatile
    {
        return TICK & (1u << 10u);
    }

    /**
     * Get TICK's COUNT field.
     *
     * Count down timer: the remaining number clk_tick cycles before the next
     * tick is generated.
     */
    inline uint16_t get_TICK_COUNT() volatile
    {
        return (TICK >> 11u) & 0b111111111u;
    }

    /**
     * Get all of TICK's bit fields.
     *
     * (read-write) Controls the tick generator
     */
    inline void get_TICK(uint16_t &CYCLES, bool &ENABLE, bool &RUNNING,
                         uint16_t &COUNT) volatile
    {
        uint32_t curr = TICK;

        CYCLES = (curr >> 0u) & 0b111111111u;
        ENABLE = curr & (1u << 9u);
        RUNNING = curr & (1u << 10u);
        COUNT = (curr >> 11u) & 0b111111111u;
    }

    /**
     * Set all of TICK's bit fields.
     *
     * (read-write) Controls the tick generator
     */
    inline void set_TICK(uint16_t CYCLES, bool ENABLE) volatile
    {
        uint32_t curr = TICK;

        curr &= ~(0b111111111u << 0u);
        curr |= (CYCLES & 0b111111111u) << 0u;
        curr &= ~(0b1u << 9u);
        curr |= (ENABLE & 0b1u) << 9u;

        TICK = curr;
    }
};

static_assert(sizeof(watchdog) == watchdog::size);

static volatile watchdog *const WATCHDOG =
    reinterpret_cast<watchdog *>(0x40058000);

}; // namespace RP2040

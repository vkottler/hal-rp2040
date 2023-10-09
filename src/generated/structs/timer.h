/**
 * \file
 * \brief Generated by ifgen (2.6.3).
 */
#pragma once

#include "../ifgen/common.h"

namespace RP2040
{

/**
 * Controls time and alarms\n
 *         time is a 64 bit value indicating the time in usec since power-on\n
 *         timeh is the top 32 bits of time & timel is the bottom 32 bits\n
 *         to change time write to timelw before timehw\n
 *         to read time read from timelr before timehr\n
 *         An alarm is set by setting alarm_enable and writing to the corresponding alarm register\n
 *         When an alarm is pending, the corresponding alarm_running signal will be high\n
 *         An alarm can be cancelled before it has finished by clearing the alarm_enable\n
 *         When an alarm fires, the corresponding alarm_irq is set and alarm_running is cleared\n
 *         To clear the interrupt write a 1 to the corresponding alarm_irq
 */
struct [[gnu::packed]] timer
{
    /* Constant attributes. */
    static constexpr uint16_t id = 1;       /*!< timer's identifier. */
    static constexpr std::size_t size = 68; /*!< timer's size in bytes. */

    /* Fields. */
    uint32_t TIMEHW;          /*!< (read-write) Write to bits 63:32 of time\n
                always write timelw before timehw */
    uint32_t TIMELW;          /*!< (read-write) Write to bits 31:0 of time\n
                writes do not get copied to time until timehw is written */
    uint32_t TIMEHR;          /*!< (read-write) Read from bits 63:32 of time\n
                always read timelr before timehr */
    uint32_t TIMELR;          /*!< (read-write) Read from bits 31:0 of time */
    uint32_t ALARM0;          /*!< (read-write) Arm alarm 0, and configure the time it will fire.\n
                Once armed, the alarm fires when TIMER_ALARM0 == TIMELR.\n
                The alarm will disarm itself once it fires, and can\n
                be disarmed early using the ARMED status register. */
    uint32_t ALARM1;          /*!< (read-write) Arm alarm 1, and configure the time it will fire.\n
                Once armed, the alarm fires when TIMER_ALARM1 == TIMELR.\n
                The alarm will disarm itself once it fires, and can\n
                be disarmed early using the ARMED status register. */
    uint32_t ALARM2;          /*!< (read-write) Arm alarm 2, and configure the time it will fire.\n
                Once armed, the alarm fires when TIMER_ALARM2 == TIMELR.\n
                The alarm will disarm itself once it fires, and can\n
                be disarmed early using the ARMED status register. */
    uint32_t ALARM3;          /*!< (read-write) Arm alarm 3, and configure the time it will fire.\n
                Once armed, the alarm fires when TIMER_ALARM3 == TIMELR.\n
                The alarm will disarm itself once it fires, and can\n
                be disarmed early using the ARMED status register. */
    uint32_t ARMED;           /*!< (read-write) Indicates the armed/disarmed status of each alarm.\n
                A write to the corresponding ALARMx register arms the alarm.\n
                Alarms automatically disarm upon firing, but writing ones here\n
                will disarm immediately without waiting to fire. */
    uint32_t TIMERAWH;        /*!< (read-write) Raw read from bits 63:32 of time (no side effects) */
    uint32_t TIMERAWL;        /*!< (read-write) Raw read from bits 31:0 of time (no side effects) */
    uint32_t DBGPAUSE;        /*!< (read-write) Set bits high to enable pause when the corresponding debug ports are active */
    uint32_t PAUSE;           /*!< (read-write) Set high to pause the timer */
    uint32_t INTR;            /*!< (read-write) Raw Interrupts */
    uint32_t INTE;            /*!< (read-write) Interrupt Enable */
    uint32_t INTF;            /*!< (read-write) Interrupt Force */
    const uint32_t INTS = {}; /*!< (read-only) Interrupt status after masking & forcing */

    /* Methods. */

    /**
     * Get ARMED's ARMED field.
     */
    uint8_t get_ARMED_ARMED()
    {
        return (ARMED >> 0u) & 0b1111u;
    }

    /**
     * Set ARMED's ARMED field.
     */
    inline void set_ARMED_ARMED(uint8_t value)
    {
        uint32_t curr = ARMED;

        curr &= ~(0b1111u << 0u);
        curr |= (value & 0b1111u) << 0u;

        ARMED = curr;
    }

    /**
     * Get DBGPAUSE's DBG0 bit.
     */
    bool get_DBGPAUSE_DBG0()
    {
        return DBGPAUSE & (1u << 1u);
    }

    /**
     * Set DBGPAUSE's DBG0 bit.
     */
    inline void set_DBGPAUSE_DBG0()
    {
        DBGPAUSE |= 1u << 1u;
    }

    /**
     * Clear DBGPAUSE's DBG0 bit.
     */
    inline void clear_DBGPAUSE_DBG0()
    {
        DBGPAUSE &= ~(1u << 1u);
    }

    /**
     * Toggle DBGPAUSE's DBG0 bit.
     */
    inline void toggle_DBGPAUSE_DBG0()
    {
        DBGPAUSE ^= 1u << 1u;
    }

    /**
     * Get DBGPAUSE's DBG1 bit.
     */
    bool get_DBGPAUSE_DBG1()
    {
        return DBGPAUSE & (1u << 2u);
    }

    /**
     * Set DBGPAUSE's DBG1 bit.
     */
    inline void set_DBGPAUSE_DBG1()
    {
        DBGPAUSE |= 1u << 2u;
    }

    /**
     * Clear DBGPAUSE's DBG1 bit.
     */
    inline void clear_DBGPAUSE_DBG1()
    {
        DBGPAUSE &= ~(1u << 2u);
    }

    /**
     * Toggle DBGPAUSE's DBG1 bit.
     */
    inline void toggle_DBGPAUSE_DBG1()
    {
        DBGPAUSE ^= 1u << 2u;
    }

    /**
     * Get PAUSE's PAUSE bit.
     */
    bool get_PAUSE_PAUSE()
    {
        return PAUSE & (1u << 0u);
    }

    /**
     * Set PAUSE's PAUSE bit.
     */
    inline void set_PAUSE_PAUSE()
    {
        PAUSE |= 1u << 0u;
    }

    /**
     * Clear PAUSE's PAUSE bit.
     */
    inline void clear_PAUSE_PAUSE()
    {
        PAUSE &= ~(1u << 0u);
    }

    /**
     * Toggle PAUSE's PAUSE bit.
     */
    inline void toggle_PAUSE_PAUSE()
    {
        PAUSE ^= 1u << 0u;
    }

    /**
     * Get INTR's ALARM_0 bit.
     */
    bool get_INTR_ALARM_0()
    {
        return INTR & (1u << 0u);
    }

    /**
     * Set INTR's ALARM_0 bit.
     */
    inline void set_INTR_ALARM_0()
    {
        INTR |= 1u << 0u;
    }

    /**
     * Clear INTR's ALARM_0 bit.
     */
    inline void clear_INTR_ALARM_0()
    {
        INTR &= ~(1u << 0u);
    }

    /**
     * Toggle INTR's ALARM_0 bit.
     */
    inline void toggle_INTR_ALARM_0()
    {
        INTR ^= 1u << 0u;
    }

    /**
     * Get INTR's ALARM_1 bit.
     */
    bool get_INTR_ALARM_1()
    {
        return INTR & (1u << 1u);
    }

    /**
     * Set INTR's ALARM_1 bit.
     */
    inline void set_INTR_ALARM_1()
    {
        INTR |= 1u << 1u;
    }

    /**
     * Clear INTR's ALARM_1 bit.
     */
    inline void clear_INTR_ALARM_1()
    {
        INTR &= ~(1u << 1u);
    }

    /**
     * Toggle INTR's ALARM_1 bit.
     */
    inline void toggle_INTR_ALARM_1()
    {
        INTR ^= 1u << 1u;
    }

    /**
     * Get INTR's ALARM_2 bit.
     */
    bool get_INTR_ALARM_2()
    {
        return INTR & (1u << 2u);
    }

    /**
     * Set INTR's ALARM_2 bit.
     */
    inline void set_INTR_ALARM_2()
    {
        INTR |= 1u << 2u;
    }

    /**
     * Clear INTR's ALARM_2 bit.
     */
    inline void clear_INTR_ALARM_2()
    {
        INTR &= ~(1u << 2u);
    }

    /**
     * Toggle INTR's ALARM_2 bit.
     */
    inline void toggle_INTR_ALARM_2()
    {
        INTR ^= 1u << 2u;
    }

    /**
     * Get INTR's ALARM_3 bit.
     */
    bool get_INTR_ALARM_3()
    {
        return INTR & (1u << 3u);
    }

    /**
     * Set INTR's ALARM_3 bit.
     */
    inline void set_INTR_ALARM_3()
    {
        INTR |= 1u << 3u;
    }

    /**
     * Clear INTR's ALARM_3 bit.
     */
    inline void clear_INTR_ALARM_3()
    {
        INTR &= ~(1u << 3u);
    }

    /**
     * Toggle INTR's ALARM_3 bit.
     */
    inline void toggle_INTR_ALARM_3()
    {
        INTR ^= 1u << 3u;
    }

    /**
     * Get INTE's ALARM_0 bit.
     */
    bool get_INTE_ALARM_0()
    {
        return INTE & (1u << 0u);
    }

    /**
     * Set INTE's ALARM_0 bit.
     */
    inline void set_INTE_ALARM_0()
    {
        INTE |= 1u << 0u;
    }

    /**
     * Clear INTE's ALARM_0 bit.
     */
    inline void clear_INTE_ALARM_0()
    {
        INTE &= ~(1u << 0u);
    }

    /**
     * Toggle INTE's ALARM_0 bit.
     */
    inline void toggle_INTE_ALARM_0()
    {
        INTE ^= 1u << 0u;
    }

    /**
     * Get INTE's ALARM_1 bit.
     */
    bool get_INTE_ALARM_1()
    {
        return INTE & (1u << 1u);
    }

    /**
     * Set INTE's ALARM_1 bit.
     */
    inline void set_INTE_ALARM_1()
    {
        INTE |= 1u << 1u;
    }

    /**
     * Clear INTE's ALARM_1 bit.
     */
    inline void clear_INTE_ALARM_1()
    {
        INTE &= ~(1u << 1u);
    }

    /**
     * Toggle INTE's ALARM_1 bit.
     */
    inline void toggle_INTE_ALARM_1()
    {
        INTE ^= 1u << 1u;
    }

    /**
     * Get INTE's ALARM_2 bit.
     */
    bool get_INTE_ALARM_2()
    {
        return INTE & (1u << 2u);
    }

    /**
     * Set INTE's ALARM_2 bit.
     */
    inline void set_INTE_ALARM_2()
    {
        INTE |= 1u << 2u;
    }

    /**
     * Clear INTE's ALARM_2 bit.
     */
    inline void clear_INTE_ALARM_2()
    {
        INTE &= ~(1u << 2u);
    }

    /**
     * Toggle INTE's ALARM_2 bit.
     */
    inline void toggle_INTE_ALARM_2()
    {
        INTE ^= 1u << 2u;
    }

    /**
     * Get INTE's ALARM_3 bit.
     */
    bool get_INTE_ALARM_3()
    {
        return INTE & (1u << 3u);
    }

    /**
     * Set INTE's ALARM_3 bit.
     */
    inline void set_INTE_ALARM_3()
    {
        INTE |= 1u << 3u;
    }

    /**
     * Clear INTE's ALARM_3 bit.
     */
    inline void clear_INTE_ALARM_3()
    {
        INTE &= ~(1u << 3u);
    }

    /**
     * Toggle INTE's ALARM_3 bit.
     */
    inline void toggle_INTE_ALARM_3()
    {
        INTE ^= 1u << 3u;
    }

    /**
     * Get INTF's ALARM_0 bit.
     */
    bool get_INTF_ALARM_0()
    {
        return INTF & (1u << 0u);
    }

    /**
     * Set INTF's ALARM_0 bit.
     */
    inline void set_INTF_ALARM_0()
    {
        INTF |= 1u << 0u;
    }

    /**
     * Clear INTF's ALARM_0 bit.
     */
    inline void clear_INTF_ALARM_0()
    {
        INTF &= ~(1u << 0u);
    }

    /**
     * Toggle INTF's ALARM_0 bit.
     */
    inline void toggle_INTF_ALARM_0()
    {
        INTF ^= 1u << 0u;
    }

    /**
     * Get INTF's ALARM_1 bit.
     */
    bool get_INTF_ALARM_1()
    {
        return INTF & (1u << 1u);
    }

    /**
     * Set INTF's ALARM_1 bit.
     */
    inline void set_INTF_ALARM_1()
    {
        INTF |= 1u << 1u;
    }

    /**
     * Clear INTF's ALARM_1 bit.
     */
    inline void clear_INTF_ALARM_1()
    {
        INTF &= ~(1u << 1u);
    }

    /**
     * Toggle INTF's ALARM_1 bit.
     */
    inline void toggle_INTF_ALARM_1()
    {
        INTF ^= 1u << 1u;
    }

    /**
     * Get INTF's ALARM_2 bit.
     */
    bool get_INTF_ALARM_2()
    {
        return INTF & (1u << 2u);
    }

    /**
     * Set INTF's ALARM_2 bit.
     */
    inline void set_INTF_ALARM_2()
    {
        INTF |= 1u << 2u;
    }

    /**
     * Clear INTF's ALARM_2 bit.
     */
    inline void clear_INTF_ALARM_2()
    {
        INTF &= ~(1u << 2u);
    }

    /**
     * Toggle INTF's ALARM_2 bit.
     */
    inline void toggle_INTF_ALARM_2()
    {
        INTF ^= 1u << 2u;
    }

    /**
     * Get INTF's ALARM_3 bit.
     */
    bool get_INTF_ALARM_3()
    {
        return INTF & (1u << 3u);
    }

    /**
     * Set INTF's ALARM_3 bit.
     */
    inline void set_INTF_ALARM_3()
    {
        INTF |= 1u << 3u;
    }

    /**
     * Clear INTF's ALARM_3 bit.
     */
    inline void clear_INTF_ALARM_3()
    {
        INTF &= ~(1u << 3u);
    }

    /**
     * Toggle INTF's ALARM_3 bit.
     */
    inline void toggle_INTF_ALARM_3()
    {
        INTF ^= 1u << 3u;
    }

    /**
     * Get INTS's ALARM_0 bit.
     */
    bool get_INTS_ALARM_0()
    {
        return INTS & (1u << 0u);
    }

    /**
     * Get INTS's ALARM_1 bit.
     */
    bool get_INTS_ALARM_1()
    {
        return INTS & (1u << 1u);
    }

    /**
     * Get INTS's ALARM_2 bit.
     */
    bool get_INTS_ALARM_2()
    {
        return INTS & (1u << 2u);
    }

    /**
     * Get INTS's ALARM_3 bit.
     */
    bool get_INTS_ALARM_3()
    {
        return INTS & (1u << 3u);
    }
};

static_assert(sizeof(timer) == timer::size);

static volatile timer *const TIMER = reinterpret_cast<timer *>(0x40054000);

}; // namespace RP2040

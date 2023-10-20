/**
 * \file
 * \brief Generated by ifgen (3.2.0).
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
 *         An alarm is set by setting alarm_enable and writing to the
 * corresponding alarm register\n When an alarm is pending, the corresponding
 * alarm_running signal will be high\n An alarm can be cancelled before it has
 * finished by clearing the alarm_enable\n When an alarm fires, the
 * corresponding alarm_irq is set and alarm_running is cleared\n To clear the
 * interrupt write a 1 to the corresponding alarm_irq
 */
struct [[gnu::packed]] timer
{
    /* Constant attributes. */
    static constexpr std::size_t size = 68; /*!< timer's size in bytes. */

    /* Fields. */
    uint32_t TIMEHW; /*!< (read-write) Write to bits 63:32 of time\n
       always write timelw before timehw */
    uint32_t TIMELW; /*!< (read-write) Write to bits 31:0 of time\n
       writes do not get copied to time until timehw is written */
    uint32_t TIMEHR; /*!< (read-write) Read from bits 63:32 of time\n
       always read timelr before timehr */
    uint32_t TIMELR; /*!< (read-write) Read from bits 31:0 of time */
    uint32_t
        ALARM0; /*!< (read-write) Arm alarm 0, and configure the time it
  will fire.\n   Once armed, the alarm fires when TIMER_ALARM0 == TIMELR.\n
  The alarm will disarm itself once it fires, and can\n
  be disarmed early using the ARMED status register. */
    uint32_t
        ALARM1; /*!< (read-write) Arm alarm 1, and configure the time it
  will fire.\n   Once armed, the alarm fires when TIMER_ALARM1 == TIMELR.\n
  The alarm will disarm itself once it fires, and can\n
  be disarmed early using the ARMED status register. */
    uint32_t
        ALARM2; /*!< (read-write) Arm alarm 2, and configure the time it
  will fire.\n   Once armed, the alarm fires when TIMER_ALARM2 == TIMELR.\n
  The alarm will disarm itself once it fires, and can\n
  be disarmed early using the ARMED status register. */
    uint32_t
        ALARM3;        /*!< (read-write) Arm alarm 3, and configure the time it
         will fire.\n   Once armed, the alarm fires when TIMER_ALARM3 == TIMELR.\n
         The alarm will disarm itself once it fires, and can\n
         be disarmed early using the ARMED status register. */
    uint32_t ARMED;    /*!< (read-write) Indicates the armed/disarmed status of
         each alarm.\n    A write to the corresponding ALARMx register arms the
         alarm.\n    Alarms automatically disarm upon firing, but writing ones
         here\n    will disarm immediately without waiting to fire. */
    uint32_t TIMERAWH; /*!< (read-write) Raw read from bits 63:32 of time (no
                          side effects) */
    uint32_t TIMERAWL; /*!< (read-write) Raw read from bits 31:0 of time (no
                          side effects) */
    uint32_t DBGPAUSE; /*!< (read-write) Set bits high to enable pause when the
                          corresponding debug ports are active */
    uint32_t PAUSE;    /*!< (read-write) Set high to pause the timer */
    uint32_t INTR;     /*!< (read-write) Raw Interrupts */
    uint32_t INTE;     /*!< (read-write) Interrupt Enable */
    uint32_t INTF;     /*!< (read-write) Interrupt Force */
    const uint32_t INTS =
        {}; /*!< (read-only) Interrupt status after masking & forcing */

    /* Methods. */

    /**
     * Get ARMED's ARMED field.
     */
    inline uint8_t get_ARMED_ARMED() volatile
    {
        return (ARMED >> 0u) & 0b1111u;
    }

    /**
     * Set ARMED's ARMED field.
     */
    inline void set_ARMED_ARMED(uint8_t value) volatile
    {
        uint32_t curr = ARMED;

        curr &= ~(0b1111u << 0u);
        curr |= (value & 0b1111u) << 0u;

        ARMED = curr;
    }

    /**
     * Get DBGPAUSE's DBG0 bit.
     *
     * Pause when processor 0 is in debug mode
     */
    inline bool get_DBGPAUSE_DBG0() volatile
    {
        return DBGPAUSE & (1u << 1u);
    }

    /**
     * Set DBGPAUSE's DBG0 bit.
     *
     * Pause when processor 0 is in debug mode
     */
    inline void set_DBGPAUSE_DBG0() volatile
    {
        DBGPAUSE |= 1u << 1u;
    }

    /**
     * Clear DBGPAUSE's DBG0 bit.
     *
     * Pause when processor 0 is in debug mode
     */
    inline void clear_DBGPAUSE_DBG0() volatile
    {
        DBGPAUSE &= ~(1u << 1u);
    }

    /**
     * Toggle DBGPAUSE's DBG0 bit.
     *
     * Pause when processor 0 is in debug mode
     */
    inline void toggle_DBGPAUSE_DBG0() volatile
    {
        DBGPAUSE ^= 1u << 1u;
    }

    /**
     * Get DBGPAUSE's DBG1 bit.
     *
     * Pause when processor 1 is in debug mode
     */
    inline bool get_DBGPAUSE_DBG1() volatile
    {
        return DBGPAUSE & (1u << 2u);
    }

    /**
     * Set DBGPAUSE's DBG1 bit.
     *
     * Pause when processor 1 is in debug mode
     */
    inline void set_DBGPAUSE_DBG1() volatile
    {
        DBGPAUSE |= 1u << 2u;
    }

    /**
     * Clear DBGPAUSE's DBG1 bit.
     *
     * Pause when processor 1 is in debug mode
     */
    inline void clear_DBGPAUSE_DBG1() volatile
    {
        DBGPAUSE &= ~(1u << 2u);
    }

    /**
     * Toggle DBGPAUSE's DBG1 bit.
     *
     * Pause when processor 1 is in debug mode
     */
    inline void toggle_DBGPAUSE_DBG1() volatile
    {
        DBGPAUSE ^= 1u << 2u;
    }

    /**
     * Get all of DBGPAUSE's bit fields.
     *
     * (read-write) Set bits high to enable pause when the corresponding debug
     * ports are active
     */
    inline void get_DBGPAUSE(bool &DBG0, bool &DBG1) volatile
    {
        uint32_t curr = DBGPAUSE;

        DBG0 = curr & (1u << 1u);
        DBG1 = curr & (1u << 2u);
    }

    /**
     * Set all of DBGPAUSE's bit fields.
     *
     * (read-write) Set bits high to enable pause when the corresponding debug
     * ports are active
     */
    inline void set_DBGPAUSE(bool DBG0, bool DBG1) volatile
    {
        uint32_t curr = DBGPAUSE;

        curr &= ~(0b1u << 1u);
        curr |= (DBG0 & 0b1u) << 1u;
        curr &= ~(0b1u << 2u);
        curr |= (DBG1 & 0b1u) << 2u;

        DBGPAUSE = curr;
    }

    /**
     * Get PAUSE's PAUSE bit.
     */
    inline bool get_PAUSE_PAUSE() volatile
    {
        return PAUSE & (1u << 0u);
    }

    /**
     * Set PAUSE's PAUSE bit.
     */
    inline void set_PAUSE_PAUSE() volatile
    {
        PAUSE |= 1u << 0u;
    }

    /**
     * Clear PAUSE's PAUSE bit.
     */
    inline void clear_PAUSE_PAUSE() volatile
    {
        PAUSE &= ~(1u << 0u);
    }

    /**
     * Toggle PAUSE's PAUSE bit.
     */
    inline void toggle_PAUSE_PAUSE() volatile
    {
        PAUSE ^= 1u << 0u;
    }

    /**
     * Get INTR's ALARM_0 bit.
     */
    inline bool get_INTR_ALARM_0() volatile
    {
        return INTR & (1u << 0u);
    }

    /**
     * Set INTR's ALARM_0 bit.
     */
    inline void set_INTR_ALARM_0() volatile
    {
        INTR |= 1u << 0u;
    }

    /**
     * Clear INTR's ALARM_0 bit.
     */
    inline void clear_INTR_ALARM_0() volatile
    {
        INTR &= ~(1u << 0u);
    }

    /**
     * Toggle INTR's ALARM_0 bit.
     */
    inline void toggle_INTR_ALARM_0() volatile
    {
        INTR ^= 1u << 0u;
    }

    /**
     * Get INTR's ALARM_1 bit.
     */
    inline bool get_INTR_ALARM_1() volatile
    {
        return INTR & (1u << 1u);
    }

    /**
     * Set INTR's ALARM_1 bit.
     */
    inline void set_INTR_ALARM_1() volatile
    {
        INTR |= 1u << 1u;
    }

    /**
     * Clear INTR's ALARM_1 bit.
     */
    inline void clear_INTR_ALARM_1() volatile
    {
        INTR &= ~(1u << 1u);
    }

    /**
     * Toggle INTR's ALARM_1 bit.
     */
    inline void toggle_INTR_ALARM_1() volatile
    {
        INTR ^= 1u << 1u;
    }

    /**
     * Get INTR's ALARM_2 bit.
     */
    inline bool get_INTR_ALARM_2() volatile
    {
        return INTR & (1u << 2u);
    }

    /**
     * Set INTR's ALARM_2 bit.
     */
    inline void set_INTR_ALARM_2() volatile
    {
        INTR |= 1u << 2u;
    }

    /**
     * Clear INTR's ALARM_2 bit.
     */
    inline void clear_INTR_ALARM_2() volatile
    {
        INTR &= ~(1u << 2u);
    }

    /**
     * Toggle INTR's ALARM_2 bit.
     */
    inline void toggle_INTR_ALARM_2() volatile
    {
        INTR ^= 1u << 2u;
    }

    /**
     * Get INTR's ALARM_3 bit.
     */
    inline bool get_INTR_ALARM_3() volatile
    {
        return INTR & (1u << 3u);
    }

    /**
     * Set INTR's ALARM_3 bit.
     */
    inline void set_INTR_ALARM_3() volatile
    {
        INTR |= 1u << 3u;
    }

    /**
     * Clear INTR's ALARM_3 bit.
     */
    inline void clear_INTR_ALARM_3() volatile
    {
        INTR &= ~(1u << 3u);
    }

    /**
     * Toggle INTR's ALARM_3 bit.
     */
    inline void toggle_INTR_ALARM_3() volatile
    {
        INTR ^= 1u << 3u;
    }

    /**
     * Get all of INTR's bit fields.
     *
     * (read-write) Raw Interrupts
     */
    inline void get_INTR(bool &ALARM_0, bool &ALARM_1, bool &ALARM_2,
                         bool &ALARM_3) volatile
    {
        uint32_t curr = INTR;

        ALARM_0 = curr & (1u << 0u);
        ALARM_1 = curr & (1u << 1u);
        ALARM_2 = curr & (1u << 2u);
        ALARM_3 = curr & (1u << 3u);
    }

    /**
     * Set all of INTR's bit fields.
     *
     * (read-write) Raw Interrupts
     */
    inline void set_INTR(bool ALARM_0, bool ALARM_1, bool ALARM_2,
                         bool ALARM_3) volatile
    {
        uint32_t curr = INTR;

        curr &= ~(0b1u << 0u);
        curr |= (ALARM_0 & 0b1u) << 0u;
        curr &= ~(0b1u << 1u);
        curr |= (ALARM_1 & 0b1u) << 1u;
        curr &= ~(0b1u << 2u);
        curr |= (ALARM_2 & 0b1u) << 2u;
        curr &= ~(0b1u << 3u);
        curr |= (ALARM_3 & 0b1u) << 3u;

        INTR = curr;
    }

    /**
     * Get INTE's ALARM_0 bit.
     */
    inline bool get_INTE_ALARM_0() volatile
    {
        return INTE & (1u << 0u);
    }

    /**
     * Set INTE's ALARM_0 bit.
     */
    inline void set_INTE_ALARM_0() volatile
    {
        INTE |= 1u << 0u;
    }

    /**
     * Clear INTE's ALARM_0 bit.
     */
    inline void clear_INTE_ALARM_0() volatile
    {
        INTE &= ~(1u << 0u);
    }

    /**
     * Toggle INTE's ALARM_0 bit.
     */
    inline void toggle_INTE_ALARM_0() volatile
    {
        INTE ^= 1u << 0u;
    }

    /**
     * Get INTE's ALARM_1 bit.
     */
    inline bool get_INTE_ALARM_1() volatile
    {
        return INTE & (1u << 1u);
    }

    /**
     * Set INTE's ALARM_1 bit.
     */
    inline void set_INTE_ALARM_1() volatile
    {
        INTE |= 1u << 1u;
    }

    /**
     * Clear INTE's ALARM_1 bit.
     */
    inline void clear_INTE_ALARM_1() volatile
    {
        INTE &= ~(1u << 1u);
    }

    /**
     * Toggle INTE's ALARM_1 bit.
     */
    inline void toggle_INTE_ALARM_1() volatile
    {
        INTE ^= 1u << 1u;
    }

    /**
     * Get INTE's ALARM_2 bit.
     */
    inline bool get_INTE_ALARM_2() volatile
    {
        return INTE & (1u << 2u);
    }

    /**
     * Set INTE's ALARM_2 bit.
     */
    inline void set_INTE_ALARM_2() volatile
    {
        INTE |= 1u << 2u;
    }

    /**
     * Clear INTE's ALARM_2 bit.
     */
    inline void clear_INTE_ALARM_2() volatile
    {
        INTE &= ~(1u << 2u);
    }

    /**
     * Toggle INTE's ALARM_2 bit.
     */
    inline void toggle_INTE_ALARM_2() volatile
    {
        INTE ^= 1u << 2u;
    }

    /**
     * Get INTE's ALARM_3 bit.
     */
    inline bool get_INTE_ALARM_3() volatile
    {
        return INTE & (1u << 3u);
    }

    /**
     * Set INTE's ALARM_3 bit.
     */
    inline void set_INTE_ALARM_3() volatile
    {
        INTE |= 1u << 3u;
    }

    /**
     * Clear INTE's ALARM_3 bit.
     */
    inline void clear_INTE_ALARM_3() volatile
    {
        INTE &= ~(1u << 3u);
    }

    /**
     * Toggle INTE's ALARM_3 bit.
     */
    inline void toggle_INTE_ALARM_3() volatile
    {
        INTE ^= 1u << 3u;
    }

    /**
     * Get all of INTE's bit fields.
     *
     * (read-write) Interrupt Enable
     */
    inline void get_INTE(bool &ALARM_0, bool &ALARM_1, bool &ALARM_2,
                         bool &ALARM_3) volatile
    {
        uint32_t curr = INTE;

        ALARM_0 = curr & (1u << 0u);
        ALARM_1 = curr & (1u << 1u);
        ALARM_2 = curr & (1u << 2u);
        ALARM_3 = curr & (1u << 3u);
    }

    /**
     * Set all of INTE's bit fields.
     *
     * (read-write) Interrupt Enable
     */
    inline void set_INTE(bool ALARM_0, bool ALARM_1, bool ALARM_2,
                         bool ALARM_3) volatile
    {
        uint32_t curr = INTE;

        curr &= ~(0b1u << 0u);
        curr |= (ALARM_0 & 0b1u) << 0u;
        curr &= ~(0b1u << 1u);
        curr |= (ALARM_1 & 0b1u) << 1u;
        curr &= ~(0b1u << 2u);
        curr |= (ALARM_2 & 0b1u) << 2u;
        curr &= ~(0b1u << 3u);
        curr |= (ALARM_3 & 0b1u) << 3u;

        INTE = curr;
    }

    /**
     * Get INTF's ALARM_0 bit.
     */
    inline bool get_INTF_ALARM_0() volatile
    {
        return INTF & (1u << 0u);
    }

    /**
     * Set INTF's ALARM_0 bit.
     */
    inline void set_INTF_ALARM_0() volatile
    {
        INTF |= 1u << 0u;
    }

    /**
     * Clear INTF's ALARM_0 bit.
     */
    inline void clear_INTF_ALARM_0() volatile
    {
        INTF &= ~(1u << 0u);
    }

    /**
     * Toggle INTF's ALARM_0 bit.
     */
    inline void toggle_INTF_ALARM_0() volatile
    {
        INTF ^= 1u << 0u;
    }

    /**
     * Get INTF's ALARM_1 bit.
     */
    inline bool get_INTF_ALARM_1() volatile
    {
        return INTF & (1u << 1u);
    }

    /**
     * Set INTF's ALARM_1 bit.
     */
    inline void set_INTF_ALARM_1() volatile
    {
        INTF |= 1u << 1u;
    }

    /**
     * Clear INTF's ALARM_1 bit.
     */
    inline void clear_INTF_ALARM_1() volatile
    {
        INTF &= ~(1u << 1u);
    }

    /**
     * Toggle INTF's ALARM_1 bit.
     */
    inline void toggle_INTF_ALARM_1() volatile
    {
        INTF ^= 1u << 1u;
    }

    /**
     * Get INTF's ALARM_2 bit.
     */
    inline bool get_INTF_ALARM_2() volatile
    {
        return INTF & (1u << 2u);
    }

    /**
     * Set INTF's ALARM_2 bit.
     */
    inline void set_INTF_ALARM_2() volatile
    {
        INTF |= 1u << 2u;
    }

    /**
     * Clear INTF's ALARM_2 bit.
     */
    inline void clear_INTF_ALARM_2() volatile
    {
        INTF &= ~(1u << 2u);
    }

    /**
     * Toggle INTF's ALARM_2 bit.
     */
    inline void toggle_INTF_ALARM_2() volatile
    {
        INTF ^= 1u << 2u;
    }

    /**
     * Get INTF's ALARM_3 bit.
     */
    inline bool get_INTF_ALARM_3() volatile
    {
        return INTF & (1u << 3u);
    }

    /**
     * Set INTF's ALARM_3 bit.
     */
    inline void set_INTF_ALARM_3() volatile
    {
        INTF |= 1u << 3u;
    }

    /**
     * Clear INTF's ALARM_3 bit.
     */
    inline void clear_INTF_ALARM_3() volatile
    {
        INTF &= ~(1u << 3u);
    }

    /**
     * Toggle INTF's ALARM_3 bit.
     */
    inline void toggle_INTF_ALARM_3() volatile
    {
        INTF ^= 1u << 3u;
    }

    /**
     * Get all of INTF's bit fields.
     *
     * (read-write) Interrupt Force
     */
    inline void get_INTF(bool &ALARM_0, bool &ALARM_1, bool &ALARM_2,
                         bool &ALARM_3) volatile
    {
        uint32_t curr = INTF;

        ALARM_0 = curr & (1u << 0u);
        ALARM_1 = curr & (1u << 1u);
        ALARM_2 = curr & (1u << 2u);
        ALARM_3 = curr & (1u << 3u);
    }

    /**
     * Set all of INTF's bit fields.
     *
     * (read-write) Interrupt Force
     */
    inline void set_INTF(bool ALARM_0, bool ALARM_1, bool ALARM_2,
                         bool ALARM_3) volatile
    {
        uint32_t curr = INTF;

        curr &= ~(0b1u << 0u);
        curr |= (ALARM_0 & 0b1u) << 0u;
        curr &= ~(0b1u << 1u);
        curr |= (ALARM_1 & 0b1u) << 1u;
        curr &= ~(0b1u << 2u);
        curr |= (ALARM_2 & 0b1u) << 2u;
        curr &= ~(0b1u << 3u);
        curr |= (ALARM_3 & 0b1u) << 3u;

        INTF = curr;
    }

    /**
     * Get INTS's ALARM_0 bit.
     */
    inline bool get_INTS_ALARM_0() volatile
    {
        return INTS & (1u << 0u);
    }

    /**
     * Get INTS's ALARM_1 bit.
     */
    inline bool get_INTS_ALARM_1() volatile
    {
        return INTS & (1u << 1u);
    }

    /**
     * Get INTS's ALARM_2 bit.
     */
    inline bool get_INTS_ALARM_2() volatile
    {
        return INTS & (1u << 2u);
    }

    /**
     * Get INTS's ALARM_3 bit.
     */
    inline bool get_INTS_ALARM_3() volatile
    {
        return INTS & (1u << 3u);
    }

    /**
     * Get all of INTS's bit fields.
     *
     * (read-only) Interrupt status after masking & forcing
     */
    inline void get_INTS(bool &ALARM_0, bool &ALARM_1, bool &ALARM_2,
                         bool &ALARM_3) volatile
    {
        uint32_t curr = INTS;

        ALARM_0 = curr & (1u << 0u);
        ALARM_1 = curr & (1u << 1u);
        ALARM_2 = curr & (1u << 2u);
        ALARM_3 = curr & (1u << 3u);
    }
};

static_assert(sizeof(timer) == timer::size);

static volatile timer *const TIMER = reinterpret_cast<timer *>(0x40054000);

}; // namespace RP2040

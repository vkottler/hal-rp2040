/**
 * \file
 * \brief Generated by ifgen (3.1.6).
 */
#pragma once

#include "../enums/XOSC_CTRL_ENABLE.h"
#include "../enums/XOSC_CTRL_FREQ_RANGE.h"
#include "../enums/XOSC_STATUS_FREQ_RANGE.h"
#include "../ifgen/common.h"

namespace RP2040
{

/**
 * Controls the crystal oscillator
 */
struct [[gnu::packed]] xosc
{
    /* Constant attributes. */
    static constexpr std::size_t size = 32; /*!< xosc's size in bytes. */

    /* Fields. */
    uint32_t CTRL;    /*!< (read-write) Crystal Oscillator Control */
    uint32_t STATUS;  /*!< (read-write) Crystal Oscillator Status */
    uint32_t DORMANT; /*!< (read-write) Crystal Oscillator pause control\n
This is used to save power by pausing the XOSC\n
On power-up this field is initialised to WAKE\n
An invalid write will also select WAKE\n
WARNING: stop the PLLs before selecting dormant mode\n
WARNING: setup the irq before selecting dormant mode */
    uint32_t STARTUP; /*!< (read-write) Controls the startup delay */
    static constexpr std::size_t reserved_padding0_length = 3;
    const uint32_t reserved_padding0[reserved_padding0_length] = {};
    uint32_t COUNT; /*!< (read-write) A down counter running at the xosc
frequency which counts to zero and stops.\n To start the counter write a
non-zero value.\n Can be used for short software pauses when setting up time
sensitive hardware. */

    /* Methods. */

    /**
     * Get CTRL's FREQ_RANGE field.
     */
    inline XOSC_CTRL_FREQ_RANGE get_CTRL_FREQ_RANGE() volatile
    {
        return XOSC_CTRL_FREQ_RANGE((CTRL >> 0u) & 0b111111111111u);
    }

    /**
     * Set CTRL's FREQ_RANGE field.
     *
     * Frequency range. This resets to 0xAA0 and cannot be changed.
     */
    inline void set_CTRL_FREQ_RANGE(XOSC_CTRL_FREQ_RANGE value) volatile
    {
        uint32_t curr = CTRL;

        curr &= ~(0b111111111111u << 0u);
        curr |= (std::to_underlying(value) & 0b111111111111u) << 0u;

        CTRL = curr;
    }

    /**
     * Get CTRL's ENABLE field.
     */
    inline XOSC_CTRL_ENABLE get_CTRL_ENABLE() volatile
    {
        return XOSC_CTRL_ENABLE((CTRL >> 12u) & 0b111111111111u);
    }

    /**
     * Set CTRL's ENABLE field.
     *
     * On power-up this field is initialised to DISABLE and the chip runs from
     * the ROSC.\n If the chip has subsequently been programmed to run from the
     * XOSC then setting this field to DISABLE may lock-up the chip. If this is
     * a concern then run the clk_ref from the ROSC and enable the clk_sys
     * RESUS feature.\n The 12-bit code is intended to give some protection
     * against accidental writes. An invalid setting will enable the
     * oscillator.
     */
    inline void set_CTRL_ENABLE(XOSC_CTRL_ENABLE value) volatile
    {
        uint32_t curr = CTRL;

        curr &= ~(0b111111111111u << 12u);
        curr |= (std::to_underlying(value) & 0b111111111111u) << 12u;

        CTRL = curr;
    }

    /**
     * Get all of CTRL's bit fields.
     */
    inline void get_CTRL(XOSC_CTRL_FREQ_RANGE &FREQ_RANGE,
                         XOSC_CTRL_ENABLE &ENABLE) volatile
    {
        uint32_t curr = CTRL;

        FREQ_RANGE = XOSC_CTRL_FREQ_RANGE((curr >> 0u) & 0b111111111111u);
        ENABLE = XOSC_CTRL_ENABLE((curr >> 12u) & 0b111111111111u);
    }

    /**
     * Set all of CTRL's bit fields.
     *
     * (read-write) Crystal Oscillator Control
     */
    inline void set_CTRL(XOSC_CTRL_FREQ_RANGE FREQ_RANGE,
                         XOSC_CTRL_ENABLE ENABLE) volatile
    {
        uint32_t curr = CTRL;

        curr &= ~(0b111111111111u << 0u);
        curr |= (std::to_underlying(FREQ_RANGE) & 0b111111111111u) << 0u;
        curr &= ~(0b111111111111u << 12u);
        curr |= (std::to_underlying(ENABLE) & 0b111111111111u) << 12u;

        CTRL = curr;
    }

    /**
     * Get STATUS's FREQ_RANGE field.
     */
    inline XOSC_STATUS_FREQ_RANGE get_STATUS_FREQ_RANGE() volatile
    {
        return XOSC_STATUS_FREQ_RANGE((STATUS >> 0u) & 0b11u);
    }

    /**
     * Get STATUS's ENABLED bit.
     */
    inline bool get_STATUS_ENABLED() volatile
    {
        return STATUS & (1u << 12u);
    }

    /**
     * Get STATUS's BADWRITE bit.
     */
    inline bool get_STATUS_BADWRITE() volatile
    {
        return STATUS & (1u << 24u);
    }

    /**
     * Set STATUS's BADWRITE bit.
     *
     * An invalid value has been written to CTRL_ENABLE or CTRL_FREQ_RANGE or
     * DORMANT
     */
    inline void set_STATUS_BADWRITE() volatile
    {
        STATUS |= 1u << 24u;
    }

    /**
     * Clear STATUS's BADWRITE bit.
     *
     * An invalid value has been written to CTRL_ENABLE or CTRL_FREQ_RANGE or
     * DORMANT
     */
    inline void clear_STATUS_BADWRITE() volatile
    {
        STATUS &= ~(1u << 24u);
    }

    /**
     * Toggle STATUS's BADWRITE bit.
     *
     * An invalid value has been written to CTRL_ENABLE or CTRL_FREQ_RANGE or
     * DORMANT
     */
    inline void toggle_STATUS_BADWRITE() volatile
    {
        STATUS ^= 1u << 24u;
    }

    /**
     * Get STATUS's STABLE bit.
     */
    inline bool get_STATUS_STABLE() volatile
    {
        return STATUS & (1u << 31u);
    }

    /**
     * Get all of STATUS's bit fields.
     */
    inline void get_STATUS(XOSC_STATUS_FREQ_RANGE &FREQ_RANGE, bool &ENABLED,
                           bool &BADWRITE, bool &STABLE) volatile
    {
        uint32_t curr = STATUS;

        FREQ_RANGE = XOSC_STATUS_FREQ_RANGE((curr >> 0u) & 0b11u);
        ENABLED = curr & (1u << 12u);
        BADWRITE = curr & (1u << 24u);
        STABLE = curr & (1u << 31u);
    }

    /**
     * Get STARTUP's DELAY field.
     */
    inline uint16_t get_STARTUP_DELAY() volatile
    {
        return (STARTUP >> 0u) & 0b11111111111111u;
    }

    /**
     * Set STARTUP's DELAY field.
     *
     * in multiples of 256*xtal_period. The reset value of 0xc4 corresponds to
     * approx 50 000 cycles.
     */
    inline void set_STARTUP_DELAY(uint16_t value) volatile
    {
        uint32_t curr = STARTUP;

        curr &= ~(0b11111111111111u << 0u);
        curr |= (value & 0b11111111111111u) << 0u;

        STARTUP = curr;
    }

    /**
     * Get STARTUP's X4 bit.
     */
    inline bool get_STARTUP_X4() volatile
    {
        return STARTUP & (1u << 20u);
    }

    /**
     * Set STARTUP's X4 bit.
     *
     * Multiplies the startup_delay by 4. This is of little value to the user
     * given that the delay can be programmed directly.
     */
    inline void set_STARTUP_X4() volatile
    {
        STARTUP |= 1u << 20u;
    }

    /**
     * Clear STARTUP's X4 bit.
     *
     * Multiplies the startup_delay by 4. This is of little value to the user
     * given that the delay can be programmed directly.
     */
    inline void clear_STARTUP_X4() volatile
    {
        STARTUP &= ~(1u << 20u);
    }

    /**
     * Toggle STARTUP's X4 bit.
     *
     * Multiplies the startup_delay by 4. This is of little value to the user
     * given that the delay can be programmed directly.
     */
    inline void toggle_STARTUP_X4() volatile
    {
        STARTUP ^= 1u << 20u;
    }

    /**
     * Get all of STARTUP's bit fields.
     */
    inline void get_STARTUP(uint16_t &DELAY, bool &X4) volatile
    {
        uint32_t curr = STARTUP;

        DELAY = (curr >> 0u) & 0b11111111111111u;
        X4 = curr & (1u << 20u);
    }

    /**
     * Set all of STARTUP's bit fields.
     *
     * (read-write) Controls the startup delay
     */
    inline void set_STARTUP(uint16_t DELAY, bool X4) volatile
    {
        uint32_t curr = STARTUP;

        curr &= ~(0b11111111111111u << 0u);
        curr |= (DELAY & 0b11111111111111u) << 0u;
        curr &= ~(0b1u << 20u);
        curr |= (X4 & 0b1u) << 20u;

        STARTUP = curr;
    }

    /**
     * Get COUNT's COUNT field.
     */
    inline uint8_t get_COUNT_COUNT() volatile
    {
        return (COUNT >> 0u) & 0b11111111u;
    }

    /**
     * Set COUNT's COUNT field.
     */
    inline void set_COUNT_COUNT(uint8_t value) volatile
    {
        uint32_t curr = COUNT;

        curr &= ~(0b11111111u << 0u);
        curr |= (value & 0b11111111u) << 0u;

        COUNT = curr;
    }
};

static_assert(sizeof(xosc) == xosc::size);

static volatile xosc *const XOSC = reinterpret_cast<xosc *>(0x40024000);

}; // namespace RP2040

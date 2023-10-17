/**
 * \file
 * \brief Generated by ifgen (3.1.6).
 */
#pragma once

#include "../enums/ROSC_CTRL_ENABLE.h"
#include "../enums/ROSC_CTRL_FREQ_RANGE.h"
#include "../enums/ROSC_DIV_DIV.h"
#include "../enums/ROSC_FREQA_PASSWD.h"
#include "../enums/ROSC_FREQB_PASSWD.h"
#include "../ifgen/common.h"

namespace RP2040
{

struct [[gnu::packed]] rosc
{
    /* Constant attributes. */
    static constexpr std::size_t size = 36; /*!< rosc's size in bytes. */

    /* Fields. */
    uint32_t CTRL;    /*!< (read-write) Ring Oscillator control */
    uint32_t FREQA;   /*!< (read-write) The FREQA & FREQB registers control the
       frequency by controlling the drive strength of each stage\n        The
   drive strength   has 4 levels determined by the number of bits set\n
   Increasing   the number of   bits set increases the drive strength and
   increases   the   oscillation frequency\n   0 bits set is the default drive
   strength\n   1   bit set   doubles the drive strength\n   2 bits set triples
   drive strength\n   3   bits set   quadruples drive strength */
    uint32_t FREQB;   /*!< (read-write) For a detailed description see freqa
                         register */
    uint32_t DORMANT; /*!< (read-write) Ring Oscillator pause control\n
   This is used to save power by pausing the ROSC\n
   On power-up this field is initialised to WAKE\n
   An invalid write will also select WAKE\n
   Warning: setup the irq before selecting dormant mode */
    uint32_t DIV;     /*!< (read-write) Controls the output divider */
    uint32_t PHASE;   /*!< (read-write) Controls the phase shifted output */
    uint32_t STATUS;  /*!< (read-write) Ring Oscillator Status */
    const uint32_t RANDOMBIT =
        {}; /*!< (read-only) This just reads the state of the oscillator output
               so randomness is compromised if the ring oscillator is stopped
               or run at a harmonic of the bus frequency */
    uint32_t COUNT; /*!< (read-write) A down counter running at the ROSC
 frequency which counts to zero and stops.\n To start the counter write a
 non-zero value.\n Can be used for short software pauses when setting up time
 sensitive hardware. */

    /* Methods. */

    /**
     * Get CTRL's FREQ_RANGE field.
     */
    inline ROSC_CTRL_FREQ_RANGE get_CTRL_FREQ_RANGE() volatile
    {
        return ROSC_CTRL_FREQ_RANGE((CTRL >> 0u) & 0b111111111111u);
    }

    /**
     * Set CTRL's FREQ_RANGE field.
     *
     * Controls the number of delay stages in the ROSC ring\n
     *                 LOW uses stages 0 to 7\n
     *                 MEDIUM uses stages 0 to 5\n
     *                 HIGH uses stages 0 to 3\n
     *                 TOOHIGH uses stages 0 to 1 and should not be used
     * because its frequency exceeds design specifications\n The clock output
     * will not glitch when changing the range up one step at a time\n The
     * clock output will glitch when changing the range down\n Note: the values
     * here are gray coded which is why HIGH comes before TOOHIGH
     */
    inline void set_CTRL_FREQ_RANGE(ROSC_CTRL_FREQ_RANGE value) volatile
    {
        uint32_t curr = CTRL;

        curr &= ~(0b111111111111u << 0u);
        curr |= (std::to_underlying(value) & 0b111111111111u) << 0u;

        CTRL = curr;
    }

    /**
     * Get CTRL's ENABLE field.
     */
    inline ROSC_CTRL_ENABLE get_CTRL_ENABLE() volatile
    {
        return ROSC_CTRL_ENABLE((CTRL >> 12u) & 0b111111111111u);
    }

    /**
     * Set CTRL's ENABLE field.
     *
     * On power-up this field is initialised to ENABLE\n
     *                 The system clock must be switched to another source
     * before setting this field to DISABLE otherwise the chip will lock up\n
     *                 The 12-bit code is intended to give some protection
     * against accidental writes. An invalid setting will enable the
     * oscillator.
     */
    inline void set_CTRL_ENABLE(ROSC_CTRL_ENABLE value) volatile
    {
        uint32_t curr = CTRL;

        curr &= ~(0b111111111111u << 12u);
        curr |= (std::to_underlying(value) & 0b111111111111u) << 12u;

        CTRL = curr;
    }

    /**
     * Get all of CTRL's bit fields.
     */
    inline void get_CTRL(ROSC_CTRL_FREQ_RANGE &FREQ_RANGE,
                         ROSC_CTRL_ENABLE &ENABLE) volatile
    {
        uint32_t curr = CTRL;

        FREQ_RANGE = ROSC_CTRL_FREQ_RANGE((curr >> 0u) & 0b111111111111u);
        ENABLE = ROSC_CTRL_ENABLE((curr >> 12u) & 0b111111111111u);
    }

    /**
     * Set all of CTRL's bit fields.
     *
     * (read-write) Ring Oscillator control
     */
    inline void set_CTRL(ROSC_CTRL_FREQ_RANGE FREQ_RANGE,
                         ROSC_CTRL_ENABLE ENABLE) volatile
    {
        uint32_t curr = CTRL;

        curr &= ~(0b111111111111u << 0u);
        curr |= (std::to_underlying(FREQ_RANGE) & 0b111111111111u) << 0u;
        curr &= ~(0b111111111111u << 12u);
        curr |= (std::to_underlying(ENABLE) & 0b111111111111u) << 12u;

        CTRL = curr;
    }

    /**
     * Get FREQA's DS0 field.
     */
    inline uint8_t get_FREQA_DS0() volatile
    {
        return (FREQA >> 0u) & 0b111u;
    }

    /**
     * Set FREQA's DS0 field.
     *
     * Stage 0 drive strength
     */
    inline void set_FREQA_DS0(uint8_t value) volatile
    {
        uint32_t curr = FREQA;

        curr &= ~(0b111u << 0u);
        curr |= (value & 0b111u) << 0u;

        FREQA = curr;
    }

    /**
     * Get FREQA's DS1 field.
     */
    inline uint8_t get_FREQA_DS1() volatile
    {
        return (FREQA >> 4u) & 0b111u;
    }

    /**
     * Set FREQA's DS1 field.
     *
     * Stage 1 drive strength
     */
    inline void set_FREQA_DS1(uint8_t value) volatile
    {
        uint32_t curr = FREQA;

        curr &= ~(0b111u << 4u);
        curr |= (value & 0b111u) << 4u;

        FREQA = curr;
    }

    /**
     * Get FREQA's DS2 field.
     */
    inline uint8_t get_FREQA_DS2() volatile
    {
        return (FREQA >> 8u) & 0b111u;
    }

    /**
     * Set FREQA's DS2 field.
     *
     * Stage 2 drive strength
     */
    inline void set_FREQA_DS2(uint8_t value) volatile
    {
        uint32_t curr = FREQA;

        curr &= ~(0b111u << 8u);
        curr |= (value & 0b111u) << 8u;

        FREQA = curr;
    }

    /**
     * Get FREQA's DS3 field.
     */
    inline uint8_t get_FREQA_DS3() volatile
    {
        return (FREQA >> 12u) & 0b111u;
    }

    /**
     * Set FREQA's DS3 field.
     *
     * Stage 3 drive strength
     */
    inline void set_FREQA_DS3(uint8_t value) volatile
    {
        uint32_t curr = FREQA;

        curr &= ~(0b111u << 12u);
        curr |= (value & 0b111u) << 12u;

        FREQA = curr;
    }

    /**
     * Get FREQA's PASSWD field.
     */
    inline ROSC_FREQA_PASSWD get_FREQA_PASSWD() volatile
    {
        return ROSC_FREQA_PASSWD((FREQA >> 16u) & 0b1111111111111111u);
    }

    /**
     * Set FREQA's PASSWD field.
     *
     * Set to 0x9696 to apply the settings\n
     *                 Any other value in this field will set all drive
     * strengths to 0
     */
    inline void set_FREQA_PASSWD(ROSC_FREQA_PASSWD value) volatile
    {
        uint32_t curr = FREQA;

        curr &= ~(0b1111111111111111u << 16u);
        curr |= (std::to_underlying(value) & 0b1111111111111111u) << 16u;

        FREQA = curr;
    }

    /**
     * Get all of FREQA's bit fields.
     */
    inline void get_FREQA(uint8_t &DS0, uint8_t &DS1, uint8_t &DS2,
                          uint8_t &DS3, ROSC_FREQA_PASSWD &PASSWD) volatile
    {
        uint32_t curr = FREQA;

        DS0 = (curr >> 0u) & 0b111u;
        DS1 = (curr >> 4u) & 0b111u;
        DS2 = (curr >> 8u) & 0b111u;
        DS3 = (curr >> 12u) & 0b111u;
        PASSWD = ROSC_FREQA_PASSWD((curr >> 16u) & 0b1111111111111111u);
    }

    /**
     * Set all of FREQA's bit fields.
     *
     * (read-write) The FREQA & FREQB registers control the frequency by
     * controlling the drive strength of each stage\n The drive strength has 4
     * levels determined by the number of bits set\n Increasing the number of
     * bits set increases the drive strength and increases the oscillation
     * frequency\n 0 bits set is the default drive strength\n 1 bit set doubles
     * the drive strength\n 2 bits set triples drive strength\n 3 bits set
     * quadruples drive strength
     */
    inline void set_FREQA(uint8_t DS0, uint8_t DS1, uint8_t DS2, uint8_t DS3,
                          ROSC_FREQA_PASSWD PASSWD) volatile
    {
        uint32_t curr = FREQA;

        curr &= ~(0b111u << 0u);
        curr |= (DS0 & 0b111u) << 0u;
        curr &= ~(0b111u << 4u);
        curr |= (DS1 & 0b111u) << 4u;
        curr &= ~(0b111u << 8u);
        curr |= (DS2 & 0b111u) << 8u;
        curr &= ~(0b111u << 12u);
        curr |= (DS3 & 0b111u) << 12u;
        curr &= ~(0b1111111111111111u << 16u);
        curr |= (std::to_underlying(PASSWD) & 0b1111111111111111u) << 16u;

        FREQA = curr;
    }

    /**
     * Get FREQB's DS4 field.
     */
    inline uint8_t get_FREQB_DS4() volatile
    {
        return (FREQB >> 0u) & 0b111u;
    }

    /**
     * Set FREQB's DS4 field.
     *
     * Stage 4 drive strength
     */
    inline void set_FREQB_DS4(uint8_t value) volatile
    {
        uint32_t curr = FREQB;

        curr &= ~(0b111u << 0u);
        curr |= (value & 0b111u) << 0u;

        FREQB = curr;
    }

    /**
     * Get FREQB's DS5 field.
     */
    inline uint8_t get_FREQB_DS5() volatile
    {
        return (FREQB >> 4u) & 0b111u;
    }

    /**
     * Set FREQB's DS5 field.
     *
     * Stage 5 drive strength
     */
    inline void set_FREQB_DS5(uint8_t value) volatile
    {
        uint32_t curr = FREQB;

        curr &= ~(0b111u << 4u);
        curr |= (value & 0b111u) << 4u;

        FREQB = curr;
    }

    /**
     * Get FREQB's DS6 field.
     */
    inline uint8_t get_FREQB_DS6() volatile
    {
        return (FREQB >> 8u) & 0b111u;
    }

    /**
     * Set FREQB's DS6 field.
     *
     * Stage 6 drive strength
     */
    inline void set_FREQB_DS6(uint8_t value) volatile
    {
        uint32_t curr = FREQB;

        curr &= ~(0b111u << 8u);
        curr |= (value & 0b111u) << 8u;

        FREQB = curr;
    }

    /**
     * Get FREQB's DS7 field.
     */
    inline uint8_t get_FREQB_DS7() volatile
    {
        return (FREQB >> 12u) & 0b111u;
    }

    /**
     * Set FREQB's DS7 field.
     *
     * Stage 7 drive strength
     */
    inline void set_FREQB_DS7(uint8_t value) volatile
    {
        uint32_t curr = FREQB;

        curr &= ~(0b111u << 12u);
        curr |= (value & 0b111u) << 12u;

        FREQB = curr;
    }

    /**
     * Get FREQB's PASSWD field.
     */
    inline ROSC_FREQB_PASSWD get_FREQB_PASSWD() volatile
    {
        return ROSC_FREQB_PASSWD((FREQB >> 16u) & 0b1111111111111111u);
    }

    /**
     * Set FREQB's PASSWD field.
     *
     * Set to 0x9696 to apply the settings\n
     *                 Any other value in this field will set all drive
     * strengths to 0
     */
    inline void set_FREQB_PASSWD(ROSC_FREQB_PASSWD value) volatile
    {
        uint32_t curr = FREQB;

        curr &= ~(0b1111111111111111u << 16u);
        curr |= (std::to_underlying(value) & 0b1111111111111111u) << 16u;

        FREQB = curr;
    }

    /**
     * Get all of FREQB's bit fields.
     */
    inline void get_FREQB(uint8_t &DS4, uint8_t &DS5, uint8_t &DS6,
                          uint8_t &DS7, ROSC_FREQB_PASSWD &PASSWD) volatile
    {
        uint32_t curr = FREQB;

        DS4 = (curr >> 0u) & 0b111u;
        DS5 = (curr >> 4u) & 0b111u;
        DS6 = (curr >> 8u) & 0b111u;
        DS7 = (curr >> 12u) & 0b111u;
        PASSWD = ROSC_FREQB_PASSWD((curr >> 16u) & 0b1111111111111111u);
    }

    /**
     * Set all of FREQB's bit fields.
     *
     * (read-write) For a detailed description see freqa register
     */
    inline void set_FREQB(uint8_t DS4, uint8_t DS5, uint8_t DS6, uint8_t DS7,
                          ROSC_FREQB_PASSWD PASSWD) volatile
    {
        uint32_t curr = FREQB;

        curr &= ~(0b111u << 0u);
        curr |= (DS4 & 0b111u) << 0u;
        curr &= ~(0b111u << 4u);
        curr |= (DS5 & 0b111u) << 4u;
        curr &= ~(0b111u << 8u);
        curr |= (DS6 & 0b111u) << 8u;
        curr &= ~(0b111u << 12u);
        curr |= (DS7 & 0b111u) << 12u;
        curr &= ~(0b1111111111111111u << 16u);
        curr |= (std::to_underlying(PASSWD) & 0b1111111111111111u) << 16u;

        FREQB = curr;
    }

    /**
     * Get DIV's DIV field.
     */
    inline ROSC_DIV_DIV get_DIV_DIV() volatile
    {
        return ROSC_DIV_DIV((DIV >> 0u) & 0b111111111111u);
    }

    /**
     * Set DIV's DIV field.
     *
     * set to 0xaa0 + div where\n
     *                 div = 0 divides by 32\n
     *                 div = 1-31 divides by div\n
     *                 any other value sets div=31\n
     *                 this register resets to div=16
     */
    inline void set_DIV_DIV(ROSC_DIV_DIV value) volatile
    {
        uint32_t curr = DIV;

        curr &= ~(0b111111111111u << 0u);
        curr |= (std::to_underlying(value) & 0b111111111111u) << 0u;

        DIV = curr;
    }

    /**
     * Get PHASE's SHIFT field.
     */
    inline uint8_t get_PHASE_SHIFT() volatile
    {
        return (PHASE >> 0u) & 0b11u;
    }

    /**
     * Set PHASE's SHIFT field.
     *
     * phase shift the phase-shifted output by SHIFT input clocks\n
     *                 this can be changed on-the-fly\n
     *                 must be set to 0 before setting div=1
     */
    inline void set_PHASE_SHIFT(uint8_t value) volatile
    {
        uint32_t curr = PHASE;

        curr &= ~(0b11u << 0u);
        curr |= (value & 0b11u) << 0u;

        PHASE = curr;
    }

    /**
     * Get PHASE's FLIP bit.
     */
    inline bool get_PHASE_FLIP() volatile
    {
        return PHASE & (1u << 2u);
    }

    /**
     * Set PHASE's FLIP bit.
     *
     * invert the phase-shifted output\n
     *                 this is ignored when div=1
     */
    inline void set_PHASE_FLIP() volatile
    {
        PHASE |= 1u << 2u;
    }

    /**
     * Clear PHASE's FLIP bit.
     *
     * invert the phase-shifted output\n
     *                 this is ignored when div=1
     */
    inline void clear_PHASE_FLIP() volatile
    {
        PHASE &= ~(1u << 2u);
    }

    /**
     * Toggle PHASE's FLIP bit.
     *
     * invert the phase-shifted output\n
     *                 this is ignored when div=1
     */
    inline void toggle_PHASE_FLIP() volatile
    {
        PHASE ^= 1u << 2u;
    }

    /**
     * Get PHASE's ENABLE bit.
     */
    inline bool get_PHASE_ENABLE() volatile
    {
        return PHASE & (1u << 3u);
    }

    /**
     * Set PHASE's ENABLE bit.
     *
     * enable the phase-shifted output\n
     *                 this can be changed on-the-fly
     */
    inline void set_PHASE_ENABLE() volatile
    {
        PHASE |= 1u << 3u;
    }

    /**
     * Clear PHASE's ENABLE bit.
     *
     * enable the phase-shifted output\n
     *                 this can be changed on-the-fly
     */
    inline void clear_PHASE_ENABLE() volatile
    {
        PHASE &= ~(1u << 3u);
    }

    /**
     * Toggle PHASE's ENABLE bit.
     *
     * enable the phase-shifted output\n
     *                 this can be changed on-the-fly
     */
    inline void toggle_PHASE_ENABLE() volatile
    {
        PHASE ^= 1u << 3u;
    }

    /**
     * Get PHASE's PASSWD field.
     */
    inline uint8_t get_PHASE_PASSWD() volatile
    {
        return (PHASE >> 4u) & 0b11111111u;
    }

    /**
     * Set PHASE's PASSWD field.
     *
     * set to 0xaa\n
     *                 any other value enables the output with shift=0
     */
    inline void set_PHASE_PASSWD(uint8_t value) volatile
    {
        uint32_t curr = PHASE;

        curr &= ~(0b11111111u << 4u);
        curr |= (value & 0b11111111u) << 4u;

        PHASE = curr;
    }

    /**
     * Get all of PHASE's bit fields.
     */
    inline void get_PHASE(uint8_t &SHIFT, bool &FLIP, bool &ENABLE,
                          uint8_t &PASSWD) volatile
    {
        uint32_t curr = PHASE;

        SHIFT = (curr >> 0u) & 0b11u;
        FLIP = curr & (1u << 2u);
        ENABLE = curr & (1u << 3u);
        PASSWD = (curr >> 4u) & 0b11111111u;
    }

    /**
     * Set all of PHASE's bit fields.
     *
     * (read-write) Controls the phase shifted output
     */
    inline void set_PHASE(uint8_t SHIFT, bool FLIP, bool ENABLE,
                          uint8_t PASSWD) volatile
    {
        uint32_t curr = PHASE;

        curr &= ~(0b11u << 0u);
        curr |= (SHIFT & 0b11u) << 0u;
        curr &= ~(0b1u << 2u);
        curr |= (FLIP & 0b1u) << 2u;
        curr &= ~(0b1u << 3u);
        curr |= (ENABLE & 0b1u) << 3u;
        curr &= ~(0b11111111u << 4u);
        curr |= (PASSWD & 0b11111111u) << 4u;

        PHASE = curr;
    }

    /**
     * Get STATUS's ENABLED bit.
     */
    inline bool get_STATUS_ENABLED() volatile
    {
        return STATUS & (1u << 12u);
    }

    /**
     * Get STATUS's DIV_RUNNING bit.
     */
    inline bool get_STATUS_DIV_RUNNING() volatile
    {
        return STATUS & (1u << 16u);
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
     * FREQA or FREQB or DIV or PHASE or DORMANT
     */
    inline void set_STATUS_BADWRITE() volatile
    {
        STATUS |= 1u << 24u;
    }

    /**
     * Clear STATUS's BADWRITE bit.
     *
     * An invalid value has been written to CTRL_ENABLE or CTRL_FREQ_RANGE or
     * FREQA or FREQB or DIV or PHASE or DORMANT
     */
    inline void clear_STATUS_BADWRITE() volatile
    {
        STATUS &= ~(1u << 24u);
    }

    /**
     * Toggle STATUS's BADWRITE bit.
     *
     * An invalid value has been written to CTRL_ENABLE or CTRL_FREQ_RANGE or
     * FREQA or FREQB or DIV or PHASE or DORMANT
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
    inline void get_STATUS(bool &ENABLED, bool &DIV_RUNNING, bool &BADWRITE,
                           bool &STABLE) volatile
    {
        uint32_t curr = STATUS;

        ENABLED = curr & (1u << 12u);
        DIV_RUNNING = curr & (1u << 16u);
        BADWRITE = curr & (1u << 24u);
        STABLE = curr & (1u << 31u);
    }

    /**
     * Get RANDOMBIT's RANDOMBIT bit.
     */
    inline bool get_RANDOMBIT_RANDOMBIT() volatile
    {
        return RANDOMBIT & (1u << 0u);
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

static_assert(sizeof(rosc) == rosc::size);

static volatile rosc *const ROSC = reinterpret_cast<rosc *>(0x40060000);

}; // namespace RP2040

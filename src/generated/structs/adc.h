/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include "../ifgen/common.h"

namespace RP2040
{

/**
 * Control and data interface to SAR ADC
 */
struct [[gnu::packed]] adc
{
    /* Constant attributes. */
    static constexpr uint16_t id = 1;       /*!< adc's identifier. */
    static constexpr std::size_t size = 36; /*!< adc's size in bytes. */

    /* Fields. */
    uint32_t CS; /*!< (read-write) ADC Control and Status */
    const uint32_t RESULT =
        {};       /*!< (read-only) Result of most recent ADC conversion */
    uint32_t FCS; /*!< (read-write) FIFO control and status */
    const uint32_t FIFO = {}; /*!< (read-only) Conversion result FIFO */
    uint32_t DIV; /*!< (read-write) Clock divider. If non-zero, CS_START_MANY
  will start conversions\n at regular intervals rather than back-to-back.\n The
  divider is reset when either of these fields are written.\n Total period is 1
  + INT + FRAC / 256 */
    const uint32_t INTR = {}; /*!< (read-only) Raw Interrupts */
    uint32_t INTE;            /*!< (read-write) Interrupt Enable */
    uint32_t INTF;            /*!< (read-write) Interrupt Force */
    const uint32_t INTS =
        {}; /*!< (read-only) Interrupt status after masking & forcing */

    /* Methods. */

    /**
     * Get CS's EN bit.
     */
    bool get_CS_EN()
    {
        return CS & (1u << 0u);
    }

    /**
     * Set CS's EN bit.
     */
    inline void set_CS_EN()
    {
        CS |= 1u << 0u;
    }

    /**
     * Clear CS's EN bit.
     */
    inline void clear_CS_EN()
    {
        CS &= ~(1u << 0u);
    }

    /**
     * Toggle CS's EN bit.
     */
    inline void toggle_CS_EN()
    {
        CS ^= 1u << 0u;
    }

    /**
     * Get CS's TS_EN bit.
     */
    bool get_CS_TS_EN()
    {
        return CS & (1u << 1u);
    }

    /**
     * Set CS's TS_EN bit.
     */
    inline void set_CS_TS_EN()
    {
        CS |= 1u << 1u;
    }

    /**
     * Clear CS's TS_EN bit.
     */
    inline void clear_CS_TS_EN()
    {
        CS &= ~(1u << 1u);
    }

    /**
     * Toggle CS's TS_EN bit.
     */
    inline void toggle_CS_TS_EN()
    {
        CS ^= 1u << 1u;
    }

    /**
     * Get CS's START_ONCE bit.
     */
    bool get_CS_START_ONCE()
    {
        return CS & (1u << 2u);
    }

    /**
     * Set CS's START_ONCE bit.
     */
    inline void set_CS_START_ONCE()
    {
        CS |= 1u << 2u;
    }

    /**
     * Clear CS's START_ONCE bit.
     */
    inline void clear_CS_START_ONCE()
    {
        CS &= ~(1u << 2u);
    }

    /**
     * Toggle CS's START_ONCE bit.
     */
    inline void toggle_CS_START_ONCE()
    {
        CS ^= 1u << 2u;
    }

    /**
     * Get CS's START_MANY bit.
     */
    bool get_CS_START_MANY()
    {
        return CS & (1u << 3u);
    }

    /**
     * Set CS's START_MANY bit.
     */
    inline void set_CS_START_MANY()
    {
        CS |= 1u << 3u;
    }

    /**
     * Clear CS's START_MANY bit.
     */
    inline void clear_CS_START_MANY()
    {
        CS &= ~(1u << 3u);
    }

    /**
     * Toggle CS's START_MANY bit.
     */
    inline void toggle_CS_START_MANY()
    {
        CS ^= 1u << 3u;
    }

    /**
     * Get CS's READY bit.
     */
    bool get_CS_READY()
    {
        return CS & (1u << 8u);
    }

    /**
     * Get CS's ERR bit.
     */
    bool get_CS_ERR()
    {
        return CS & (1u << 9u);
    }

    /**
     * Get CS's ERR_STICKY bit.
     */
    bool get_CS_ERR_STICKY()
    {
        return CS & (1u << 10u);
    }

    /**
     * Set CS's ERR_STICKY bit.
     */
    inline void set_CS_ERR_STICKY()
    {
        CS |= 1u << 10u;
    }

    /**
     * Clear CS's ERR_STICKY bit.
     */
    inline void clear_CS_ERR_STICKY()
    {
        CS &= ~(1u << 10u);
    }

    /**
     * Toggle CS's ERR_STICKY bit.
     */
    inline void toggle_CS_ERR_STICKY()
    {
        CS ^= 1u << 10u;
    }

    /**
     * Get CS's AINSEL field.
     */
    uint8_t get_CS_AINSEL()
    {
        return (CS >> 12u) & 0b111u;
    }

    /**
     * Set CS's AINSEL field.
     */
    inline void set_CS_AINSEL(uint8_t value)
    {
        uint32_t curr = CS;

        curr &= ~(0b111u << 12u);
        curr |= (value & 0b111u) << 12u;

        CS = curr;
    }

    /**
     * Get CS's RROBIN field.
     */
    uint8_t get_CS_RROBIN()
    {
        return (CS >> 16u) & 0b11111u;
    }

    /**
     * Set CS's RROBIN field.
     */
    inline void set_CS_RROBIN(uint8_t value)
    {
        uint32_t curr = CS;

        curr &= ~(0b11111u << 16u);
        curr |= (value & 0b11111u) << 16u;

        CS = curr;
    }

    /**
     * Get RESULT's RESULT field.
     */
    uint16_t get_RESULT_RESULT()
    {
        return (RESULT >> 0u) & 0b111111111111u;
    }

    /**
     * Get FCS's EN bit.
     */
    bool get_FCS_EN()
    {
        return FCS & (1u << 0u);
    }

    /**
     * Set FCS's EN bit.
     */
    inline void set_FCS_EN()
    {
        FCS |= 1u << 0u;
    }

    /**
     * Clear FCS's EN bit.
     */
    inline void clear_FCS_EN()
    {
        FCS &= ~(1u << 0u);
    }

    /**
     * Toggle FCS's EN bit.
     */
    inline void toggle_FCS_EN()
    {
        FCS ^= 1u << 0u;
    }

    /**
     * Get FCS's SHIFT bit.
     */
    bool get_FCS_SHIFT()
    {
        return FCS & (1u << 1u);
    }

    /**
     * Set FCS's SHIFT bit.
     */
    inline void set_FCS_SHIFT()
    {
        FCS |= 1u << 1u;
    }

    /**
     * Clear FCS's SHIFT bit.
     */
    inline void clear_FCS_SHIFT()
    {
        FCS &= ~(1u << 1u);
    }

    /**
     * Toggle FCS's SHIFT bit.
     */
    inline void toggle_FCS_SHIFT()
    {
        FCS ^= 1u << 1u;
    }

    /**
     * Get FCS's ERR bit.
     */
    bool get_FCS_ERR()
    {
        return FCS & (1u << 2u);
    }

    /**
     * Set FCS's ERR bit.
     */
    inline void set_FCS_ERR()
    {
        FCS |= 1u << 2u;
    }

    /**
     * Clear FCS's ERR bit.
     */
    inline void clear_FCS_ERR()
    {
        FCS &= ~(1u << 2u);
    }

    /**
     * Toggle FCS's ERR bit.
     */
    inline void toggle_FCS_ERR()
    {
        FCS ^= 1u << 2u;
    }

    /**
     * Get FCS's DREQ_EN bit.
     */
    bool get_FCS_DREQ_EN()
    {
        return FCS & (1u << 3u);
    }

    /**
     * Set FCS's DREQ_EN bit.
     */
    inline void set_FCS_DREQ_EN()
    {
        FCS |= 1u << 3u;
    }

    /**
     * Clear FCS's DREQ_EN bit.
     */
    inline void clear_FCS_DREQ_EN()
    {
        FCS &= ~(1u << 3u);
    }

    /**
     * Toggle FCS's DREQ_EN bit.
     */
    inline void toggle_FCS_DREQ_EN()
    {
        FCS ^= 1u << 3u;
    }

    /**
     * Get FCS's EMPTY bit.
     */
    bool get_FCS_EMPTY()
    {
        return FCS & (1u << 8u);
    }

    /**
     * Get FCS's FULL bit.
     */
    bool get_FCS_FULL()
    {
        return FCS & (1u << 9u);
    }

    /**
     * Get FCS's UNDER bit.
     */
    bool get_FCS_UNDER()
    {
        return FCS & (1u << 10u);
    }

    /**
     * Set FCS's UNDER bit.
     */
    inline void set_FCS_UNDER()
    {
        FCS |= 1u << 10u;
    }

    /**
     * Clear FCS's UNDER bit.
     */
    inline void clear_FCS_UNDER()
    {
        FCS &= ~(1u << 10u);
    }

    /**
     * Toggle FCS's UNDER bit.
     */
    inline void toggle_FCS_UNDER()
    {
        FCS ^= 1u << 10u;
    }

    /**
     * Get FCS's OVER bit.
     */
    bool get_FCS_OVER()
    {
        return FCS & (1u << 11u);
    }

    /**
     * Set FCS's OVER bit.
     */
    inline void set_FCS_OVER()
    {
        FCS |= 1u << 11u;
    }

    /**
     * Clear FCS's OVER bit.
     */
    inline void clear_FCS_OVER()
    {
        FCS &= ~(1u << 11u);
    }

    /**
     * Toggle FCS's OVER bit.
     */
    inline void toggle_FCS_OVER()
    {
        FCS ^= 1u << 11u;
    }

    /**
     * Get FCS's LEVEL field.
     */
    uint8_t get_FCS_LEVEL()
    {
        return (FCS >> 16u) & 0b1111u;
    }

    /**
     * Get FCS's THRESH field.
     */
    uint8_t get_FCS_THRESH()
    {
        return (FCS >> 24u) & 0b1111u;
    }

    /**
     * Set FCS's THRESH field.
     */
    inline void set_FCS_THRESH(uint8_t value)
    {
        uint32_t curr = FCS;

        curr &= ~(0b1111u << 24u);
        curr |= (value & 0b1111u) << 24u;

        FCS = curr;
    }

    /**
     * Get FIFO's VAL field.
     */
    uint16_t get_FIFO_VAL()
    {
        return (FIFO >> 0u) & 0b111111111111u;
    }

    /**
     * Get FIFO's ERR bit.
     */
    bool get_FIFO_ERR()
    {
        return FIFO & (1u << 15u);
    }

    /**
     * Get DIV's FRAC field.
     */
    uint8_t get_DIV_FRAC()
    {
        return (DIV >> 0u) & 0b11111111u;
    }

    /**
     * Set DIV's FRAC field.
     */
    inline void set_DIV_FRAC(uint8_t value)
    {
        uint32_t curr = DIV;

        curr &= ~(0b11111111u << 0u);
        curr |= (value & 0b11111111u) << 0u;

        DIV = curr;
    }

    /**
     * Get DIV's INT field.
     */
    uint16_t get_DIV_INT()
    {
        return (DIV >> 8u) & 0b1111111111111111u;
    }

    /**
     * Set DIV's INT field.
     */
    inline void set_DIV_INT(uint16_t value)
    {
        uint32_t curr = DIV;

        curr &= ~(0b1111111111111111u << 8u);
        curr |= (value & 0b1111111111111111u) << 8u;

        DIV = curr;
    }

    /**
     * Get INTR's FIFO bit.
     */
    bool get_INTR_FIFO()
    {
        return INTR & (1u << 0u);
    }

    /**
     * Get INTE's FIFO bit.
     */
    bool get_INTE_FIFO()
    {
        return INTE & (1u << 0u);
    }

    /**
     * Set INTE's FIFO bit.
     */
    inline void set_INTE_FIFO()
    {
        INTE |= 1u << 0u;
    }

    /**
     * Clear INTE's FIFO bit.
     */
    inline void clear_INTE_FIFO()
    {
        INTE &= ~(1u << 0u);
    }

    /**
     * Toggle INTE's FIFO bit.
     */
    inline void toggle_INTE_FIFO()
    {
        INTE ^= 1u << 0u;
    }

    /**
     * Get INTF's FIFO bit.
     */
    bool get_INTF_FIFO()
    {
        return INTF & (1u << 0u);
    }

    /**
     * Set INTF's FIFO bit.
     */
    inline void set_INTF_FIFO()
    {
        INTF |= 1u << 0u;
    }

    /**
     * Clear INTF's FIFO bit.
     */
    inline void clear_INTF_FIFO()
    {
        INTF &= ~(1u << 0u);
    }

    /**
     * Toggle INTF's FIFO bit.
     */
    inline void toggle_INTF_FIFO()
    {
        INTF ^= 1u << 0u;
    }

    /**
     * Get INTS's FIFO bit.
     */
    bool get_INTS_FIFO()
    {
        return INTS & (1u << 0u);
    }
};

static_assert(sizeof(adc) == adc::size);

static volatile adc *const ADC = reinterpret_cast<adc *>(0x4004c000);

}; // namespace RP2040

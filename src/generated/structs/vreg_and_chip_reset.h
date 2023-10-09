/**
 * \file
 * \brief Generated by ifgen (2.6.3).
 */
#pragma once

#include "../ifgen/common.h"

namespace RP2040
{

/**
 * control and status for on-chip voltage regulator and chip level reset
 * subsystem
 */
struct [[gnu::packed]] vreg_and_chip_reset
{
    /* Constant attributes. */
    static constexpr uint16_t id = 1; /*!< vreg_and_chip_reset's identifier. */
    static constexpr std::size_t size =
        12; /*!< vreg_and_chip_reset's size in bytes. */

    /* Fields. */
    uint32_t VREG; /*!< (read-write) Voltage regulator control and status */
    uint32_t BOD;  /*!< (read-write) brown-out detection control */
    uint32_t CHIP_RESET; /*!< (read-write) Chip reset control and status */

    /* Methods. */

    /**
     * Get VREG's EN bit.
     */
    bool get_VREG_EN()
    {
        return VREG & (1u << 0u);
    }

    /**
     * Set VREG's EN bit.
     */
    inline void set_VREG_EN()
    {
        VREG |= 1u << 0u;
    }

    /**
     * Clear VREG's EN bit.
     */
    inline void clear_VREG_EN()
    {
        VREG &= ~(1u << 0u);
    }

    /**
     * Toggle VREG's EN bit.
     */
    inline void toggle_VREG_EN()
    {
        VREG ^= 1u << 0u;
    }

    /**
     * Get VREG's HIZ bit.
     */
    bool get_VREG_HIZ()
    {
        return VREG & (1u << 1u);
    }

    /**
     * Set VREG's HIZ bit.
     */
    inline void set_VREG_HIZ()
    {
        VREG |= 1u << 1u;
    }

    /**
     * Clear VREG's HIZ bit.
     */
    inline void clear_VREG_HIZ()
    {
        VREG &= ~(1u << 1u);
    }

    /**
     * Toggle VREG's HIZ bit.
     */
    inline void toggle_VREG_HIZ()
    {
        VREG ^= 1u << 1u;
    }

    /**
     * Get VREG's VSEL field.
     */
    uint8_t get_VREG_VSEL()
    {
        return (VREG >> 4u) & 0b1111u;
    }

    /**
     * Set VREG's VSEL field.
     */
    inline void set_VREG_VSEL(uint8_t value)
    {
        uint32_t curr = VREG;

        curr &= ~(0b1111u << 4u);
        curr |= (value & 0b1111u) << 4u;

        VREG = curr;
    }

    /**
     * Get VREG's ROK bit.
     */
    bool get_VREG_ROK()
    {
        return VREG & (1u << 12u);
    }

    /**
     * Get BOD's EN bit.
     */
    bool get_BOD_EN()
    {
        return BOD & (1u << 0u);
    }

    /**
     * Set BOD's EN bit.
     */
    inline void set_BOD_EN()
    {
        BOD |= 1u << 0u;
    }

    /**
     * Clear BOD's EN bit.
     */
    inline void clear_BOD_EN()
    {
        BOD &= ~(1u << 0u);
    }

    /**
     * Toggle BOD's EN bit.
     */
    inline void toggle_BOD_EN()
    {
        BOD ^= 1u << 0u;
    }

    /**
     * Get BOD's VSEL field.
     */
    uint8_t get_BOD_VSEL()
    {
        return (BOD >> 4u) & 0b1111u;
    }

    /**
     * Set BOD's VSEL field.
     */
    inline void set_BOD_VSEL(uint8_t value)
    {
        uint32_t curr = BOD;

        curr &= ~(0b1111u << 4u);
        curr |= (value & 0b1111u) << 4u;

        BOD = curr;
    }

    /**
     * Get CHIP_RESET's HAD_POR bit.
     */
    bool get_CHIP_RESET_HAD_POR()
    {
        return CHIP_RESET & (1u << 8u);
    }

    /**
     * Get CHIP_RESET's HAD_RUN bit.
     */
    bool get_CHIP_RESET_HAD_RUN()
    {
        return CHIP_RESET & (1u << 16u);
    }

    /**
     * Get CHIP_RESET's HAD_PSM_RESTART bit.
     */
    bool get_CHIP_RESET_HAD_PSM_RESTART()
    {
        return CHIP_RESET & (1u << 20u);
    }

    /**
     * Get CHIP_RESET's PSM_RESTART_FLAG bit.
     */
    bool get_CHIP_RESET_PSM_RESTART_FLAG()
    {
        return CHIP_RESET & (1u << 24u);
    }

    /**
     * Set CHIP_RESET's PSM_RESTART_FLAG bit.
     */
    inline void set_CHIP_RESET_PSM_RESTART_FLAG()
    {
        CHIP_RESET |= 1u << 24u;
    }

    /**
     * Clear CHIP_RESET's PSM_RESTART_FLAG bit.
     */
    inline void clear_CHIP_RESET_PSM_RESTART_FLAG()
    {
        CHIP_RESET &= ~(1u << 24u);
    }

    /**
     * Toggle CHIP_RESET's PSM_RESTART_FLAG bit.
     */
    inline void toggle_CHIP_RESET_PSM_RESTART_FLAG()
    {
        CHIP_RESET ^= 1u << 24u;
    }
};

static_assert(sizeof(vreg_and_chip_reset) == vreg_and_chip_reset::size);

static volatile vreg_and_chip_reset *const VREG_AND_CHIP_RESET =
    reinterpret_cast<vreg_and_chip_reset *>(0x40064000);

}; // namespace RP2040

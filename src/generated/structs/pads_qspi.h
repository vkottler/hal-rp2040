/**
 * \file
 * \brief Generated by ifgen (3.1.0).
 */
#pragma once

#include "../enums/PADS_QSPI_GPIO_QSPI_SCLK_DRIVE.h"
#include "../enums/PADS_QSPI_GPIO_QSPI_SD0_DRIVE.h"
#include "../enums/PADS_QSPI_GPIO_QSPI_SD1_DRIVE.h"
#include "../enums/PADS_QSPI_GPIO_QSPI_SD2_DRIVE.h"
#include "../enums/PADS_QSPI_GPIO_QSPI_SD3_DRIVE.h"
#include "../enums/PADS_QSPI_GPIO_QSPI_SS_DRIVE.h"
#include "../enums/PADS_QSPI_VOLTAGE_SELECT_VOLTAGE_SELECT.h"
#include "../ifgen/common.h"

namespace RP2040
{

struct [[gnu::packed]] pads_qspi
{
    /* Constant attributes. */
    static constexpr std::size_t size = 28; /*!< pads_qspi's size in bytes. */

    /* Fields. */
    uint32_t
        VOLTAGE_SELECT; /*!< (read-write) Voltage select. Per bank control */
    uint32_t GPIO_QSPI_SCLK; /*!< (read-write) Pad control register */
    uint32_t GPIO_QSPI_SD0;  /*!< (read-write) Pad control register */
    uint32_t GPIO_QSPI_SD1;  /*!< (read-write) Pad control register */
    uint32_t GPIO_QSPI_SD2;  /*!< (read-write) Pad control register */
    uint32_t GPIO_QSPI_SD3;  /*!< (read-write) Pad control register */
    uint32_t GPIO_QSPI_SS;   /*!< (read-write) Pad control register */

    /* Methods. */

    /**
     * Get VOLTAGE_SELECT's VOLTAGE_SELECT bit.
     */
    inline PADS_QSPI_VOLTAGE_SELECT_VOLTAGE_SELECT
    get_VOLTAGE_SELECT_VOLTAGE_SELECT()
    {
        return PADS_QSPI_VOLTAGE_SELECT_VOLTAGE_SELECT(VOLTAGE_SELECT &
                                                       (1u << 0u));
    }

    /**
     * Set VOLTAGE_SELECT's VOLTAGE_SELECT bit.
     */
    inline void set_VOLTAGE_SELECT_VOLTAGE_SELECT()
    {
        VOLTAGE_SELECT |= 1u << 0u;
    }

    /**
     * Clear VOLTAGE_SELECT's VOLTAGE_SELECT bit.
     */
    inline void clear_VOLTAGE_SELECT_VOLTAGE_SELECT()
    {
        VOLTAGE_SELECT &= ~(1u << 0u);
    }

    /**
     * Toggle VOLTAGE_SELECT's VOLTAGE_SELECT bit.
     */
    inline void toggle_VOLTAGE_SELECT_VOLTAGE_SELECT()
    {
        VOLTAGE_SELECT ^= 1u << 0u;
    }

    /**
     * Get GPIO_QSPI_SCLK's SLEWFAST bit.
     */
    inline bool get_GPIO_QSPI_SCLK_SLEWFAST()
    {
        return GPIO_QSPI_SCLK & (1u << 0u);
    }

    /**
     * Set GPIO_QSPI_SCLK's SLEWFAST bit.
     */
    inline void set_GPIO_QSPI_SCLK_SLEWFAST()
    {
        GPIO_QSPI_SCLK |= 1u << 0u;
    }

    /**
     * Clear GPIO_QSPI_SCLK's SLEWFAST bit.
     */
    inline void clear_GPIO_QSPI_SCLK_SLEWFAST()
    {
        GPIO_QSPI_SCLK &= ~(1u << 0u);
    }

    /**
     * Toggle GPIO_QSPI_SCLK's SLEWFAST bit.
     */
    inline void toggle_GPIO_QSPI_SCLK_SLEWFAST()
    {
        GPIO_QSPI_SCLK ^= 1u << 0u;
    }

    /**
     * Get GPIO_QSPI_SCLK's SCHMITT bit.
     */
    inline bool get_GPIO_QSPI_SCLK_SCHMITT()
    {
        return GPIO_QSPI_SCLK & (1u << 1u);
    }

    /**
     * Set GPIO_QSPI_SCLK's SCHMITT bit.
     */
    inline void set_GPIO_QSPI_SCLK_SCHMITT()
    {
        GPIO_QSPI_SCLK |= 1u << 1u;
    }

    /**
     * Clear GPIO_QSPI_SCLK's SCHMITT bit.
     */
    inline void clear_GPIO_QSPI_SCLK_SCHMITT()
    {
        GPIO_QSPI_SCLK &= ~(1u << 1u);
    }

    /**
     * Toggle GPIO_QSPI_SCLK's SCHMITT bit.
     */
    inline void toggle_GPIO_QSPI_SCLK_SCHMITT()
    {
        GPIO_QSPI_SCLK ^= 1u << 1u;
    }

    /**
     * Get GPIO_QSPI_SCLK's PDE bit.
     */
    inline bool get_GPIO_QSPI_SCLK_PDE()
    {
        return GPIO_QSPI_SCLK & (1u << 2u);
    }

    /**
     * Set GPIO_QSPI_SCLK's PDE bit.
     */
    inline void set_GPIO_QSPI_SCLK_PDE()
    {
        GPIO_QSPI_SCLK |= 1u << 2u;
    }

    /**
     * Clear GPIO_QSPI_SCLK's PDE bit.
     */
    inline void clear_GPIO_QSPI_SCLK_PDE()
    {
        GPIO_QSPI_SCLK &= ~(1u << 2u);
    }

    /**
     * Toggle GPIO_QSPI_SCLK's PDE bit.
     */
    inline void toggle_GPIO_QSPI_SCLK_PDE()
    {
        GPIO_QSPI_SCLK ^= 1u << 2u;
    }

    /**
     * Get GPIO_QSPI_SCLK's PUE bit.
     */
    inline bool get_GPIO_QSPI_SCLK_PUE()
    {
        return GPIO_QSPI_SCLK & (1u << 3u);
    }

    /**
     * Set GPIO_QSPI_SCLK's PUE bit.
     */
    inline void set_GPIO_QSPI_SCLK_PUE()
    {
        GPIO_QSPI_SCLK |= 1u << 3u;
    }

    /**
     * Clear GPIO_QSPI_SCLK's PUE bit.
     */
    inline void clear_GPIO_QSPI_SCLK_PUE()
    {
        GPIO_QSPI_SCLK &= ~(1u << 3u);
    }

    /**
     * Toggle GPIO_QSPI_SCLK's PUE bit.
     */
    inline void toggle_GPIO_QSPI_SCLK_PUE()
    {
        GPIO_QSPI_SCLK ^= 1u << 3u;
    }

    /**
     * Get GPIO_QSPI_SCLK's DRIVE field.
     */
    inline PADS_QSPI_GPIO_QSPI_SCLK_DRIVE get_GPIO_QSPI_SCLK_DRIVE()
    {
        return PADS_QSPI_GPIO_QSPI_SCLK_DRIVE((GPIO_QSPI_SCLK >> 4u) & 0b11u);
    }

    /**
     * Set GPIO_QSPI_SCLK's DRIVE field.
     */
    inline void set_GPIO_QSPI_SCLK_DRIVE(PADS_QSPI_GPIO_QSPI_SCLK_DRIVE value)
    {
        uint32_t curr = GPIO_QSPI_SCLK;

        curr &= ~(0b11u << 4u);
        curr |= (std::to_underlying(value) & 0b11u) << 4u;

        GPIO_QSPI_SCLK = curr;
    }

    /**
     * Get GPIO_QSPI_SCLK's IE bit.
     */
    inline bool get_GPIO_QSPI_SCLK_IE()
    {
        return GPIO_QSPI_SCLK & (1u << 6u);
    }

    /**
     * Set GPIO_QSPI_SCLK's IE bit.
     */
    inline void set_GPIO_QSPI_SCLK_IE()
    {
        GPIO_QSPI_SCLK |= 1u << 6u;
    }

    /**
     * Clear GPIO_QSPI_SCLK's IE bit.
     */
    inline void clear_GPIO_QSPI_SCLK_IE()
    {
        GPIO_QSPI_SCLK &= ~(1u << 6u);
    }

    /**
     * Toggle GPIO_QSPI_SCLK's IE bit.
     */
    inline void toggle_GPIO_QSPI_SCLK_IE()
    {
        GPIO_QSPI_SCLK ^= 1u << 6u;
    }

    /**
     * Get GPIO_QSPI_SCLK's OD bit.
     */
    inline bool get_GPIO_QSPI_SCLK_OD()
    {
        return GPIO_QSPI_SCLK & (1u << 7u);
    }

    /**
     * Set GPIO_QSPI_SCLK's OD bit.
     */
    inline void set_GPIO_QSPI_SCLK_OD()
    {
        GPIO_QSPI_SCLK |= 1u << 7u;
    }

    /**
     * Clear GPIO_QSPI_SCLK's OD bit.
     */
    inline void clear_GPIO_QSPI_SCLK_OD()
    {
        GPIO_QSPI_SCLK &= ~(1u << 7u);
    }

    /**
     * Toggle GPIO_QSPI_SCLK's OD bit.
     */
    inline void toggle_GPIO_QSPI_SCLK_OD()
    {
        GPIO_QSPI_SCLK ^= 1u << 7u;
    }

    /**
     * Get all of GPIO_QSPI_SCLK's bit fields.
     */
    inline void get_GPIO_QSPI_SCLK(bool &SLEWFAST, bool &SCHMITT, bool &PDE,
                                   bool &PUE,
                                   PADS_QSPI_GPIO_QSPI_SCLK_DRIVE &DRIVE,
                                   bool &IE, bool &OD)
    {
        uint32_t curr = GPIO_QSPI_SCLK;

        SLEWFAST = curr & (1u << 0u);
        SCHMITT = curr & (1u << 1u);
        PDE = curr & (1u << 2u);
        PUE = curr & (1u << 3u);
        DRIVE = PADS_QSPI_GPIO_QSPI_SCLK_DRIVE((curr >> 4u) & 0b11u);
        IE = curr & (1u << 6u);
        OD = curr & (1u << 7u);
    }

    /**
     * Set all of GPIO_QSPI_SCLK's bit fields.
     */
    inline void set_GPIO_QSPI_SCLK(bool SLEWFAST, bool SCHMITT, bool PDE,
                                   bool PUE,
                                   PADS_QSPI_GPIO_QSPI_SCLK_DRIVE DRIVE,
                                   bool IE, bool OD)
    {
        uint32_t curr = GPIO_QSPI_SCLK;

        curr &= ~(0b1u << 0u);
        curr |= (SLEWFAST & 0b1u) << 0u;
        curr &= ~(0b1u << 1u);
        curr |= (SCHMITT & 0b1u) << 1u;
        curr &= ~(0b1u << 2u);
        curr |= (PDE & 0b1u) << 2u;
        curr &= ~(0b1u << 3u);
        curr |= (PUE & 0b1u) << 3u;
        curr &= ~(0b11u << 4u);
        curr |= (std::to_underlying(DRIVE) & 0b11u) << 4u;
        curr &= ~(0b1u << 6u);
        curr |= (IE & 0b1u) << 6u;
        curr &= ~(0b1u << 7u);
        curr |= (OD & 0b1u) << 7u;

        GPIO_QSPI_SCLK = curr;
    }

    /**
     * Get GPIO_QSPI_SD0's SLEWFAST bit.
     */
    inline bool get_GPIO_QSPI_SD0_SLEWFAST()
    {
        return GPIO_QSPI_SD0 & (1u << 0u);
    }

    /**
     * Set GPIO_QSPI_SD0's SLEWFAST bit.
     */
    inline void set_GPIO_QSPI_SD0_SLEWFAST()
    {
        GPIO_QSPI_SD0 |= 1u << 0u;
    }

    /**
     * Clear GPIO_QSPI_SD0's SLEWFAST bit.
     */
    inline void clear_GPIO_QSPI_SD0_SLEWFAST()
    {
        GPIO_QSPI_SD0 &= ~(1u << 0u);
    }

    /**
     * Toggle GPIO_QSPI_SD0's SLEWFAST bit.
     */
    inline void toggle_GPIO_QSPI_SD0_SLEWFAST()
    {
        GPIO_QSPI_SD0 ^= 1u << 0u;
    }

    /**
     * Get GPIO_QSPI_SD0's SCHMITT bit.
     */
    inline bool get_GPIO_QSPI_SD0_SCHMITT()
    {
        return GPIO_QSPI_SD0 & (1u << 1u);
    }

    /**
     * Set GPIO_QSPI_SD0's SCHMITT bit.
     */
    inline void set_GPIO_QSPI_SD0_SCHMITT()
    {
        GPIO_QSPI_SD0 |= 1u << 1u;
    }

    /**
     * Clear GPIO_QSPI_SD0's SCHMITT bit.
     */
    inline void clear_GPIO_QSPI_SD0_SCHMITT()
    {
        GPIO_QSPI_SD0 &= ~(1u << 1u);
    }

    /**
     * Toggle GPIO_QSPI_SD0's SCHMITT bit.
     */
    inline void toggle_GPIO_QSPI_SD0_SCHMITT()
    {
        GPIO_QSPI_SD0 ^= 1u << 1u;
    }

    /**
     * Get GPIO_QSPI_SD0's PDE bit.
     */
    inline bool get_GPIO_QSPI_SD0_PDE()
    {
        return GPIO_QSPI_SD0 & (1u << 2u);
    }

    /**
     * Set GPIO_QSPI_SD0's PDE bit.
     */
    inline void set_GPIO_QSPI_SD0_PDE()
    {
        GPIO_QSPI_SD0 |= 1u << 2u;
    }

    /**
     * Clear GPIO_QSPI_SD0's PDE bit.
     */
    inline void clear_GPIO_QSPI_SD0_PDE()
    {
        GPIO_QSPI_SD0 &= ~(1u << 2u);
    }

    /**
     * Toggle GPIO_QSPI_SD0's PDE bit.
     */
    inline void toggle_GPIO_QSPI_SD0_PDE()
    {
        GPIO_QSPI_SD0 ^= 1u << 2u;
    }

    /**
     * Get GPIO_QSPI_SD0's PUE bit.
     */
    inline bool get_GPIO_QSPI_SD0_PUE()
    {
        return GPIO_QSPI_SD0 & (1u << 3u);
    }

    /**
     * Set GPIO_QSPI_SD0's PUE bit.
     */
    inline void set_GPIO_QSPI_SD0_PUE()
    {
        GPIO_QSPI_SD0 |= 1u << 3u;
    }

    /**
     * Clear GPIO_QSPI_SD0's PUE bit.
     */
    inline void clear_GPIO_QSPI_SD0_PUE()
    {
        GPIO_QSPI_SD0 &= ~(1u << 3u);
    }

    /**
     * Toggle GPIO_QSPI_SD0's PUE bit.
     */
    inline void toggle_GPIO_QSPI_SD0_PUE()
    {
        GPIO_QSPI_SD0 ^= 1u << 3u;
    }

    /**
     * Get GPIO_QSPI_SD0's DRIVE field.
     */
    inline PADS_QSPI_GPIO_QSPI_SD0_DRIVE get_GPIO_QSPI_SD0_DRIVE()
    {
        return PADS_QSPI_GPIO_QSPI_SD0_DRIVE((GPIO_QSPI_SD0 >> 4u) & 0b11u);
    }

    /**
     * Set GPIO_QSPI_SD0's DRIVE field.
     */
    inline void set_GPIO_QSPI_SD0_DRIVE(PADS_QSPI_GPIO_QSPI_SD0_DRIVE value)
    {
        uint32_t curr = GPIO_QSPI_SD0;

        curr &= ~(0b11u << 4u);
        curr |= (std::to_underlying(value) & 0b11u) << 4u;

        GPIO_QSPI_SD0 = curr;
    }

    /**
     * Get GPIO_QSPI_SD0's IE bit.
     */
    inline bool get_GPIO_QSPI_SD0_IE()
    {
        return GPIO_QSPI_SD0 & (1u << 6u);
    }

    /**
     * Set GPIO_QSPI_SD0's IE bit.
     */
    inline void set_GPIO_QSPI_SD0_IE()
    {
        GPIO_QSPI_SD0 |= 1u << 6u;
    }

    /**
     * Clear GPIO_QSPI_SD0's IE bit.
     */
    inline void clear_GPIO_QSPI_SD0_IE()
    {
        GPIO_QSPI_SD0 &= ~(1u << 6u);
    }

    /**
     * Toggle GPIO_QSPI_SD0's IE bit.
     */
    inline void toggle_GPIO_QSPI_SD0_IE()
    {
        GPIO_QSPI_SD0 ^= 1u << 6u;
    }

    /**
     * Get GPIO_QSPI_SD0's OD bit.
     */
    inline bool get_GPIO_QSPI_SD0_OD()
    {
        return GPIO_QSPI_SD0 & (1u << 7u);
    }

    /**
     * Set GPIO_QSPI_SD0's OD bit.
     */
    inline void set_GPIO_QSPI_SD0_OD()
    {
        GPIO_QSPI_SD0 |= 1u << 7u;
    }

    /**
     * Clear GPIO_QSPI_SD0's OD bit.
     */
    inline void clear_GPIO_QSPI_SD0_OD()
    {
        GPIO_QSPI_SD0 &= ~(1u << 7u);
    }

    /**
     * Toggle GPIO_QSPI_SD0's OD bit.
     */
    inline void toggle_GPIO_QSPI_SD0_OD()
    {
        GPIO_QSPI_SD0 ^= 1u << 7u;
    }

    /**
     * Get all of GPIO_QSPI_SD0's bit fields.
     */
    inline void get_GPIO_QSPI_SD0(bool &SLEWFAST, bool &SCHMITT, bool &PDE,
                                  bool &PUE,
                                  PADS_QSPI_GPIO_QSPI_SD0_DRIVE &DRIVE,
                                  bool &IE, bool &OD)
    {
        uint32_t curr = GPIO_QSPI_SD0;

        SLEWFAST = curr & (1u << 0u);
        SCHMITT = curr & (1u << 1u);
        PDE = curr & (1u << 2u);
        PUE = curr & (1u << 3u);
        DRIVE = PADS_QSPI_GPIO_QSPI_SD0_DRIVE((curr >> 4u) & 0b11u);
        IE = curr & (1u << 6u);
        OD = curr & (1u << 7u);
    }

    /**
     * Set all of GPIO_QSPI_SD0's bit fields.
     */
    inline void set_GPIO_QSPI_SD0(bool SLEWFAST, bool SCHMITT, bool PDE,
                                  bool PUE,
                                  PADS_QSPI_GPIO_QSPI_SD0_DRIVE DRIVE, bool IE,
                                  bool OD)
    {
        uint32_t curr = GPIO_QSPI_SD0;

        curr &= ~(0b1u << 0u);
        curr |= (SLEWFAST & 0b1u) << 0u;
        curr &= ~(0b1u << 1u);
        curr |= (SCHMITT & 0b1u) << 1u;
        curr &= ~(0b1u << 2u);
        curr |= (PDE & 0b1u) << 2u;
        curr &= ~(0b1u << 3u);
        curr |= (PUE & 0b1u) << 3u;
        curr &= ~(0b11u << 4u);
        curr |= (std::to_underlying(DRIVE) & 0b11u) << 4u;
        curr &= ~(0b1u << 6u);
        curr |= (IE & 0b1u) << 6u;
        curr &= ~(0b1u << 7u);
        curr |= (OD & 0b1u) << 7u;

        GPIO_QSPI_SD0 = curr;
    }

    /**
     * Get GPIO_QSPI_SD1's SLEWFAST bit.
     */
    inline bool get_GPIO_QSPI_SD1_SLEWFAST()
    {
        return GPIO_QSPI_SD1 & (1u << 0u);
    }

    /**
     * Set GPIO_QSPI_SD1's SLEWFAST bit.
     */
    inline void set_GPIO_QSPI_SD1_SLEWFAST()
    {
        GPIO_QSPI_SD1 |= 1u << 0u;
    }

    /**
     * Clear GPIO_QSPI_SD1's SLEWFAST bit.
     */
    inline void clear_GPIO_QSPI_SD1_SLEWFAST()
    {
        GPIO_QSPI_SD1 &= ~(1u << 0u);
    }

    /**
     * Toggle GPIO_QSPI_SD1's SLEWFAST bit.
     */
    inline void toggle_GPIO_QSPI_SD1_SLEWFAST()
    {
        GPIO_QSPI_SD1 ^= 1u << 0u;
    }

    /**
     * Get GPIO_QSPI_SD1's SCHMITT bit.
     */
    inline bool get_GPIO_QSPI_SD1_SCHMITT()
    {
        return GPIO_QSPI_SD1 & (1u << 1u);
    }

    /**
     * Set GPIO_QSPI_SD1's SCHMITT bit.
     */
    inline void set_GPIO_QSPI_SD1_SCHMITT()
    {
        GPIO_QSPI_SD1 |= 1u << 1u;
    }

    /**
     * Clear GPIO_QSPI_SD1's SCHMITT bit.
     */
    inline void clear_GPIO_QSPI_SD1_SCHMITT()
    {
        GPIO_QSPI_SD1 &= ~(1u << 1u);
    }

    /**
     * Toggle GPIO_QSPI_SD1's SCHMITT bit.
     */
    inline void toggle_GPIO_QSPI_SD1_SCHMITT()
    {
        GPIO_QSPI_SD1 ^= 1u << 1u;
    }

    /**
     * Get GPIO_QSPI_SD1's PDE bit.
     */
    inline bool get_GPIO_QSPI_SD1_PDE()
    {
        return GPIO_QSPI_SD1 & (1u << 2u);
    }

    /**
     * Set GPIO_QSPI_SD1's PDE bit.
     */
    inline void set_GPIO_QSPI_SD1_PDE()
    {
        GPIO_QSPI_SD1 |= 1u << 2u;
    }

    /**
     * Clear GPIO_QSPI_SD1's PDE bit.
     */
    inline void clear_GPIO_QSPI_SD1_PDE()
    {
        GPIO_QSPI_SD1 &= ~(1u << 2u);
    }

    /**
     * Toggle GPIO_QSPI_SD1's PDE bit.
     */
    inline void toggle_GPIO_QSPI_SD1_PDE()
    {
        GPIO_QSPI_SD1 ^= 1u << 2u;
    }

    /**
     * Get GPIO_QSPI_SD1's PUE bit.
     */
    inline bool get_GPIO_QSPI_SD1_PUE()
    {
        return GPIO_QSPI_SD1 & (1u << 3u);
    }

    /**
     * Set GPIO_QSPI_SD1's PUE bit.
     */
    inline void set_GPIO_QSPI_SD1_PUE()
    {
        GPIO_QSPI_SD1 |= 1u << 3u;
    }

    /**
     * Clear GPIO_QSPI_SD1's PUE bit.
     */
    inline void clear_GPIO_QSPI_SD1_PUE()
    {
        GPIO_QSPI_SD1 &= ~(1u << 3u);
    }

    /**
     * Toggle GPIO_QSPI_SD1's PUE bit.
     */
    inline void toggle_GPIO_QSPI_SD1_PUE()
    {
        GPIO_QSPI_SD1 ^= 1u << 3u;
    }

    /**
     * Get GPIO_QSPI_SD1's DRIVE field.
     */
    inline PADS_QSPI_GPIO_QSPI_SD1_DRIVE get_GPIO_QSPI_SD1_DRIVE()
    {
        return PADS_QSPI_GPIO_QSPI_SD1_DRIVE((GPIO_QSPI_SD1 >> 4u) & 0b11u);
    }

    /**
     * Set GPIO_QSPI_SD1's DRIVE field.
     */
    inline void set_GPIO_QSPI_SD1_DRIVE(PADS_QSPI_GPIO_QSPI_SD1_DRIVE value)
    {
        uint32_t curr = GPIO_QSPI_SD1;

        curr &= ~(0b11u << 4u);
        curr |= (std::to_underlying(value) & 0b11u) << 4u;

        GPIO_QSPI_SD1 = curr;
    }

    /**
     * Get GPIO_QSPI_SD1's IE bit.
     */
    inline bool get_GPIO_QSPI_SD1_IE()
    {
        return GPIO_QSPI_SD1 & (1u << 6u);
    }

    /**
     * Set GPIO_QSPI_SD1's IE bit.
     */
    inline void set_GPIO_QSPI_SD1_IE()
    {
        GPIO_QSPI_SD1 |= 1u << 6u;
    }

    /**
     * Clear GPIO_QSPI_SD1's IE bit.
     */
    inline void clear_GPIO_QSPI_SD1_IE()
    {
        GPIO_QSPI_SD1 &= ~(1u << 6u);
    }

    /**
     * Toggle GPIO_QSPI_SD1's IE bit.
     */
    inline void toggle_GPIO_QSPI_SD1_IE()
    {
        GPIO_QSPI_SD1 ^= 1u << 6u;
    }

    /**
     * Get GPIO_QSPI_SD1's OD bit.
     */
    inline bool get_GPIO_QSPI_SD1_OD()
    {
        return GPIO_QSPI_SD1 & (1u << 7u);
    }

    /**
     * Set GPIO_QSPI_SD1's OD bit.
     */
    inline void set_GPIO_QSPI_SD1_OD()
    {
        GPIO_QSPI_SD1 |= 1u << 7u;
    }

    /**
     * Clear GPIO_QSPI_SD1's OD bit.
     */
    inline void clear_GPIO_QSPI_SD1_OD()
    {
        GPIO_QSPI_SD1 &= ~(1u << 7u);
    }

    /**
     * Toggle GPIO_QSPI_SD1's OD bit.
     */
    inline void toggle_GPIO_QSPI_SD1_OD()
    {
        GPIO_QSPI_SD1 ^= 1u << 7u;
    }

    /**
     * Get all of GPIO_QSPI_SD1's bit fields.
     */
    inline void get_GPIO_QSPI_SD1(bool &SLEWFAST, bool &SCHMITT, bool &PDE,
                                  bool &PUE,
                                  PADS_QSPI_GPIO_QSPI_SD1_DRIVE &DRIVE,
                                  bool &IE, bool &OD)
    {
        uint32_t curr = GPIO_QSPI_SD1;

        SLEWFAST = curr & (1u << 0u);
        SCHMITT = curr & (1u << 1u);
        PDE = curr & (1u << 2u);
        PUE = curr & (1u << 3u);
        DRIVE = PADS_QSPI_GPIO_QSPI_SD1_DRIVE((curr >> 4u) & 0b11u);
        IE = curr & (1u << 6u);
        OD = curr & (1u << 7u);
    }

    /**
     * Set all of GPIO_QSPI_SD1's bit fields.
     */
    inline void set_GPIO_QSPI_SD1(bool SLEWFAST, bool SCHMITT, bool PDE,
                                  bool PUE,
                                  PADS_QSPI_GPIO_QSPI_SD1_DRIVE DRIVE, bool IE,
                                  bool OD)
    {
        uint32_t curr = GPIO_QSPI_SD1;

        curr &= ~(0b1u << 0u);
        curr |= (SLEWFAST & 0b1u) << 0u;
        curr &= ~(0b1u << 1u);
        curr |= (SCHMITT & 0b1u) << 1u;
        curr &= ~(0b1u << 2u);
        curr |= (PDE & 0b1u) << 2u;
        curr &= ~(0b1u << 3u);
        curr |= (PUE & 0b1u) << 3u;
        curr &= ~(0b11u << 4u);
        curr |= (std::to_underlying(DRIVE) & 0b11u) << 4u;
        curr &= ~(0b1u << 6u);
        curr |= (IE & 0b1u) << 6u;
        curr &= ~(0b1u << 7u);
        curr |= (OD & 0b1u) << 7u;

        GPIO_QSPI_SD1 = curr;
    }

    /**
     * Get GPIO_QSPI_SD2's SLEWFAST bit.
     */
    inline bool get_GPIO_QSPI_SD2_SLEWFAST()
    {
        return GPIO_QSPI_SD2 & (1u << 0u);
    }

    /**
     * Set GPIO_QSPI_SD2's SLEWFAST bit.
     */
    inline void set_GPIO_QSPI_SD2_SLEWFAST()
    {
        GPIO_QSPI_SD2 |= 1u << 0u;
    }

    /**
     * Clear GPIO_QSPI_SD2's SLEWFAST bit.
     */
    inline void clear_GPIO_QSPI_SD2_SLEWFAST()
    {
        GPIO_QSPI_SD2 &= ~(1u << 0u);
    }

    /**
     * Toggle GPIO_QSPI_SD2's SLEWFAST bit.
     */
    inline void toggle_GPIO_QSPI_SD2_SLEWFAST()
    {
        GPIO_QSPI_SD2 ^= 1u << 0u;
    }

    /**
     * Get GPIO_QSPI_SD2's SCHMITT bit.
     */
    inline bool get_GPIO_QSPI_SD2_SCHMITT()
    {
        return GPIO_QSPI_SD2 & (1u << 1u);
    }

    /**
     * Set GPIO_QSPI_SD2's SCHMITT bit.
     */
    inline void set_GPIO_QSPI_SD2_SCHMITT()
    {
        GPIO_QSPI_SD2 |= 1u << 1u;
    }

    /**
     * Clear GPIO_QSPI_SD2's SCHMITT bit.
     */
    inline void clear_GPIO_QSPI_SD2_SCHMITT()
    {
        GPIO_QSPI_SD2 &= ~(1u << 1u);
    }

    /**
     * Toggle GPIO_QSPI_SD2's SCHMITT bit.
     */
    inline void toggle_GPIO_QSPI_SD2_SCHMITT()
    {
        GPIO_QSPI_SD2 ^= 1u << 1u;
    }

    /**
     * Get GPIO_QSPI_SD2's PDE bit.
     */
    inline bool get_GPIO_QSPI_SD2_PDE()
    {
        return GPIO_QSPI_SD2 & (1u << 2u);
    }

    /**
     * Set GPIO_QSPI_SD2's PDE bit.
     */
    inline void set_GPIO_QSPI_SD2_PDE()
    {
        GPIO_QSPI_SD2 |= 1u << 2u;
    }

    /**
     * Clear GPIO_QSPI_SD2's PDE bit.
     */
    inline void clear_GPIO_QSPI_SD2_PDE()
    {
        GPIO_QSPI_SD2 &= ~(1u << 2u);
    }

    /**
     * Toggle GPIO_QSPI_SD2's PDE bit.
     */
    inline void toggle_GPIO_QSPI_SD2_PDE()
    {
        GPIO_QSPI_SD2 ^= 1u << 2u;
    }

    /**
     * Get GPIO_QSPI_SD2's PUE bit.
     */
    inline bool get_GPIO_QSPI_SD2_PUE()
    {
        return GPIO_QSPI_SD2 & (1u << 3u);
    }

    /**
     * Set GPIO_QSPI_SD2's PUE bit.
     */
    inline void set_GPIO_QSPI_SD2_PUE()
    {
        GPIO_QSPI_SD2 |= 1u << 3u;
    }

    /**
     * Clear GPIO_QSPI_SD2's PUE bit.
     */
    inline void clear_GPIO_QSPI_SD2_PUE()
    {
        GPIO_QSPI_SD2 &= ~(1u << 3u);
    }

    /**
     * Toggle GPIO_QSPI_SD2's PUE bit.
     */
    inline void toggle_GPIO_QSPI_SD2_PUE()
    {
        GPIO_QSPI_SD2 ^= 1u << 3u;
    }

    /**
     * Get GPIO_QSPI_SD2's DRIVE field.
     */
    inline PADS_QSPI_GPIO_QSPI_SD2_DRIVE get_GPIO_QSPI_SD2_DRIVE()
    {
        return PADS_QSPI_GPIO_QSPI_SD2_DRIVE((GPIO_QSPI_SD2 >> 4u) & 0b11u);
    }

    /**
     * Set GPIO_QSPI_SD2's DRIVE field.
     */
    inline void set_GPIO_QSPI_SD2_DRIVE(PADS_QSPI_GPIO_QSPI_SD2_DRIVE value)
    {
        uint32_t curr = GPIO_QSPI_SD2;

        curr &= ~(0b11u << 4u);
        curr |= (std::to_underlying(value) & 0b11u) << 4u;

        GPIO_QSPI_SD2 = curr;
    }

    /**
     * Get GPIO_QSPI_SD2's IE bit.
     */
    inline bool get_GPIO_QSPI_SD2_IE()
    {
        return GPIO_QSPI_SD2 & (1u << 6u);
    }

    /**
     * Set GPIO_QSPI_SD2's IE bit.
     */
    inline void set_GPIO_QSPI_SD2_IE()
    {
        GPIO_QSPI_SD2 |= 1u << 6u;
    }

    /**
     * Clear GPIO_QSPI_SD2's IE bit.
     */
    inline void clear_GPIO_QSPI_SD2_IE()
    {
        GPIO_QSPI_SD2 &= ~(1u << 6u);
    }

    /**
     * Toggle GPIO_QSPI_SD2's IE bit.
     */
    inline void toggle_GPIO_QSPI_SD2_IE()
    {
        GPIO_QSPI_SD2 ^= 1u << 6u;
    }

    /**
     * Get GPIO_QSPI_SD2's OD bit.
     */
    inline bool get_GPIO_QSPI_SD2_OD()
    {
        return GPIO_QSPI_SD2 & (1u << 7u);
    }

    /**
     * Set GPIO_QSPI_SD2's OD bit.
     */
    inline void set_GPIO_QSPI_SD2_OD()
    {
        GPIO_QSPI_SD2 |= 1u << 7u;
    }

    /**
     * Clear GPIO_QSPI_SD2's OD bit.
     */
    inline void clear_GPIO_QSPI_SD2_OD()
    {
        GPIO_QSPI_SD2 &= ~(1u << 7u);
    }

    /**
     * Toggle GPIO_QSPI_SD2's OD bit.
     */
    inline void toggle_GPIO_QSPI_SD2_OD()
    {
        GPIO_QSPI_SD2 ^= 1u << 7u;
    }

    /**
     * Get all of GPIO_QSPI_SD2's bit fields.
     */
    inline void get_GPIO_QSPI_SD2(bool &SLEWFAST, bool &SCHMITT, bool &PDE,
                                  bool &PUE,
                                  PADS_QSPI_GPIO_QSPI_SD2_DRIVE &DRIVE,
                                  bool &IE, bool &OD)
    {
        uint32_t curr = GPIO_QSPI_SD2;

        SLEWFAST = curr & (1u << 0u);
        SCHMITT = curr & (1u << 1u);
        PDE = curr & (1u << 2u);
        PUE = curr & (1u << 3u);
        DRIVE = PADS_QSPI_GPIO_QSPI_SD2_DRIVE((curr >> 4u) & 0b11u);
        IE = curr & (1u << 6u);
        OD = curr & (1u << 7u);
    }

    /**
     * Set all of GPIO_QSPI_SD2's bit fields.
     */
    inline void set_GPIO_QSPI_SD2(bool SLEWFAST, bool SCHMITT, bool PDE,
                                  bool PUE,
                                  PADS_QSPI_GPIO_QSPI_SD2_DRIVE DRIVE, bool IE,
                                  bool OD)
    {
        uint32_t curr = GPIO_QSPI_SD2;

        curr &= ~(0b1u << 0u);
        curr |= (SLEWFAST & 0b1u) << 0u;
        curr &= ~(0b1u << 1u);
        curr |= (SCHMITT & 0b1u) << 1u;
        curr &= ~(0b1u << 2u);
        curr |= (PDE & 0b1u) << 2u;
        curr &= ~(0b1u << 3u);
        curr |= (PUE & 0b1u) << 3u;
        curr &= ~(0b11u << 4u);
        curr |= (std::to_underlying(DRIVE) & 0b11u) << 4u;
        curr &= ~(0b1u << 6u);
        curr |= (IE & 0b1u) << 6u;
        curr &= ~(0b1u << 7u);
        curr |= (OD & 0b1u) << 7u;

        GPIO_QSPI_SD2 = curr;
    }

    /**
     * Get GPIO_QSPI_SD3's SLEWFAST bit.
     */
    inline bool get_GPIO_QSPI_SD3_SLEWFAST()
    {
        return GPIO_QSPI_SD3 & (1u << 0u);
    }

    /**
     * Set GPIO_QSPI_SD3's SLEWFAST bit.
     */
    inline void set_GPIO_QSPI_SD3_SLEWFAST()
    {
        GPIO_QSPI_SD3 |= 1u << 0u;
    }

    /**
     * Clear GPIO_QSPI_SD3's SLEWFAST bit.
     */
    inline void clear_GPIO_QSPI_SD3_SLEWFAST()
    {
        GPIO_QSPI_SD3 &= ~(1u << 0u);
    }

    /**
     * Toggle GPIO_QSPI_SD3's SLEWFAST bit.
     */
    inline void toggle_GPIO_QSPI_SD3_SLEWFAST()
    {
        GPIO_QSPI_SD3 ^= 1u << 0u;
    }

    /**
     * Get GPIO_QSPI_SD3's SCHMITT bit.
     */
    inline bool get_GPIO_QSPI_SD3_SCHMITT()
    {
        return GPIO_QSPI_SD3 & (1u << 1u);
    }

    /**
     * Set GPIO_QSPI_SD3's SCHMITT bit.
     */
    inline void set_GPIO_QSPI_SD3_SCHMITT()
    {
        GPIO_QSPI_SD3 |= 1u << 1u;
    }

    /**
     * Clear GPIO_QSPI_SD3's SCHMITT bit.
     */
    inline void clear_GPIO_QSPI_SD3_SCHMITT()
    {
        GPIO_QSPI_SD3 &= ~(1u << 1u);
    }

    /**
     * Toggle GPIO_QSPI_SD3's SCHMITT bit.
     */
    inline void toggle_GPIO_QSPI_SD3_SCHMITT()
    {
        GPIO_QSPI_SD3 ^= 1u << 1u;
    }

    /**
     * Get GPIO_QSPI_SD3's PDE bit.
     */
    inline bool get_GPIO_QSPI_SD3_PDE()
    {
        return GPIO_QSPI_SD3 & (1u << 2u);
    }

    /**
     * Set GPIO_QSPI_SD3's PDE bit.
     */
    inline void set_GPIO_QSPI_SD3_PDE()
    {
        GPIO_QSPI_SD3 |= 1u << 2u;
    }

    /**
     * Clear GPIO_QSPI_SD3's PDE bit.
     */
    inline void clear_GPIO_QSPI_SD3_PDE()
    {
        GPIO_QSPI_SD3 &= ~(1u << 2u);
    }

    /**
     * Toggle GPIO_QSPI_SD3's PDE bit.
     */
    inline void toggle_GPIO_QSPI_SD3_PDE()
    {
        GPIO_QSPI_SD3 ^= 1u << 2u;
    }

    /**
     * Get GPIO_QSPI_SD3's PUE bit.
     */
    inline bool get_GPIO_QSPI_SD3_PUE()
    {
        return GPIO_QSPI_SD3 & (1u << 3u);
    }

    /**
     * Set GPIO_QSPI_SD3's PUE bit.
     */
    inline void set_GPIO_QSPI_SD3_PUE()
    {
        GPIO_QSPI_SD3 |= 1u << 3u;
    }

    /**
     * Clear GPIO_QSPI_SD3's PUE bit.
     */
    inline void clear_GPIO_QSPI_SD3_PUE()
    {
        GPIO_QSPI_SD3 &= ~(1u << 3u);
    }

    /**
     * Toggle GPIO_QSPI_SD3's PUE bit.
     */
    inline void toggle_GPIO_QSPI_SD3_PUE()
    {
        GPIO_QSPI_SD3 ^= 1u << 3u;
    }

    /**
     * Get GPIO_QSPI_SD3's DRIVE field.
     */
    inline PADS_QSPI_GPIO_QSPI_SD3_DRIVE get_GPIO_QSPI_SD3_DRIVE()
    {
        return PADS_QSPI_GPIO_QSPI_SD3_DRIVE((GPIO_QSPI_SD3 >> 4u) & 0b11u);
    }

    /**
     * Set GPIO_QSPI_SD3's DRIVE field.
     */
    inline void set_GPIO_QSPI_SD3_DRIVE(PADS_QSPI_GPIO_QSPI_SD3_DRIVE value)
    {
        uint32_t curr = GPIO_QSPI_SD3;

        curr &= ~(0b11u << 4u);
        curr |= (std::to_underlying(value) & 0b11u) << 4u;

        GPIO_QSPI_SD3 = curr;
    }

    /**
     * Get GPIO_QSPI_SD3's IE bit.
     */
    inline bool get_GPIO_QSPI_SD3_IE()
    {
        return GPIO_QSPI_SD3 & (1u << 6u);
    }

    /**
     * Set GPIO_QSPI_SD3's IE bit.
     */
    inline void set_GPIO_QSPI_SD3_IE()
    {
        GPIO_QSPI_SD3 |= 1u << 6u;
    }

    /**
     * Clear GPIO_QSPI_SD3's IE bit.
     */
    inline void clear_GPIO_QSPI_SD3_IE()
    {
        GPIO_QSPI_SD3 &= ~(1u << 6u);
    }

    /**
     * Toggle GPIO_QSPI_SD3's IE bit.
     */
    inline void toggle_GPIO_QSPI_SD3_IE()
    {
        GPIO_QSPI_SD3 ^= 1u << 6u;
    }

    /**
     * Get GPIO_QSPI_SD3's OD bit.
     */
    inline bool get_GPIO_QSPI_SD3_OD()
    {
        return GPIO_QSPI_SD3 & (1u << 7u);
    }

    /**
     * Set GPIO_QSPI_SD3's OD bit.
     */
    inline void set_GPIO_QSPI_SD3_OD()
    {
        GPIO_QSPI_SD3 |= 1u << 7u;
    }

    /**
     * Clear GPIO_QSPI_SD3's OD bit.
     */
    inline void clear_GPIO_QSPI_SD3_OD()
    {
        GPIO_QSPI_SD3 &= ~(1u << 7u);
    }

    /**
     * Toggle GPIO_QSPI_SD3's OD bit.
     */
    inline void toggle_GPIO_QSPI_SD3_OD()
    {
        GPIO_QSPI_SD3 ^= 1u << 7u;
    }

    /**
     * Get all of GPIO_QSPI_SD3's bit fields.
     */
    inline void get_GPIO_QSPI_SD3(bool &SLEWFAST, bool &SCHMITT, bool &PDE,
                                  bool &PUE,
                                  PADS_QSPI_GPIO_QSPI_SD3_DRIVE &DRIVE,
                                  bool &IE, bool &OD)
    {
        uint32_t curr = GPIO_QSPI_SD3;

        SLEWFAST = curr & (1u << 0u);
        SCHMITT = curr & (1u << 1u);
        PDE = curr & (1u << 2u);
        PUE = curr & (1u << 3u);
        DRIVE = PADS_QSPI_GPIO_QSPI_SD3_DRIVE((curr >> 4u) & 0b11u);
        IE = curr & (1u << 6u);
        OD = curr & (1u << 7u);
    }

    /**
     * Set all of GPIO_QSPI_SD3's bit fields.
     */
    inline void set_GPIO_QSPI_SD3(bool SLEWFAST, bool SCHMITT, bool PDE,
                                  bool PUE,
                                  PADS_QSPI_GPIO_QSPI_SD3_DRIVE DRIVE, bool IE,
                                  bool OD)
    {
        uint32_t curr = GPIO_QSPI_SD3;

        curr &= ~(0b1u << 0u);
        curr |= (SLEWFAST & 0b1u) << 0u;
        curr &= ~(0b1u << 1u);
        curr |= (SCHMITT & 0b1u) << 1u;
        curr &= ~(0b1u << 2u);
        curr |= (PDE & 0b1u) << 2u;
        curr &= ~(0b1u << 3u);
        curr |= (PUE & 0b1u) << 3u;
        curr &= ~(0b11u << 4u);
        curr |= (std::to_underlying(DRIVE) & 0b11u) << 4u;
        curr &= ~(0b1u << 6u);
        curr |= (IE & 0b1u) << 6u;
        curr &= ~(0b1u << 7u);
        curr |= (OD & 0b1u) << 7u;

        GPIO_QSPI_SD3 = curr;
    }

    /**
     * Get GPIO_QSPI_SS's SLEWFAST bit.
     */
    inline bool get_GPIO_QSPI_SS_SLEWFAST()
    {
        return GPIO_QSPI_SS & (1u << 0u);
    }

    /**
     * Set GPIO_QSPI_SS's SLEWFAST bit.
     */
    inline void set_GPIO_QSPI_SS_SLEWFAST()
    {
        GPIO_QSPI_SS |= 1u << 0u;
    }

    /**
     * Clear GPIO_QSPI_SS's SLEWFAST bit.
     */
    inline void clear_GPIO_QSPI_SS_SLEWFAST()
    {
        GPIO_QSPI_SS &= ~(1u << 0u);
    }

    /**
     * Toggle GPIO_QSPI_SS's SLEWFAST bit.
     */
    inline void toggle_GPIO_QSPI_SS_SLEWFAST()
    {
        GPIO_QSPI_SS ^= 1u << 0u;
    }

    /**
     * Get GPIO_QSPI_SS's SCHMITT bit.
     */
    inline bool get_GPIO_QSPI_SS_SCHMITT()
    {
        return GPIO_QSPI_SS & (1u << 1u);
    }

    /**
     * Set GPIO_QSPI_SS's SCHMITT bit.
     */
    inline void set_GPIO_QSPI_SS_SCHMITT()
    {
        GPIO_QSPI_SS |= 1u << 1u;
    }

    /**
     * Clear GPIO_QSPI_SS's SCHMITT bit.
     */
    inline void clear_GPIO_QSPI_SS_SCHMITT()
    {
        GPIO_QSPI_SS &= ~(1u << 1u);
    }

    /**
     * Toggle GPIO_QSPI_SS's SCHMITT bit.
     */
    inline void toggle_GPIO_QSPI_SS_SCHMITT()
    {
        GPIO_QSPI_SS ^= 1u << 1u;
    }

    /**
     * Get GPIO_QSPI_SS's PDE bit.
     */
    inline bool get_GPIO_QSPI_SS_PDE()
    {
        return GPIO_QSPI_SS & (1u << 2u);
    }

    /**
     * Set GPIO_QSPI_SS's PDE bit.
     */
    inline void set_GPIO_QSPI_SS_PDE()
    {
        GPIO_QSPI_SS |= 1u << 2u;
    }

    /**
     * Clear GPIO_QSPI_SS's PDE bit.
     */
    inline void clear_GPIO_QSPI_SS_PDE()
    {
        GPIO_QSPI_SS &= ~(1u << 2u);
    }

    /**
     * Toggle GPIO_QSPI_SS's PDE bit.
     */
    inline void toggle_GPIO_QSPI_SS_PDE()
    {
        GPIO_QSPI_SS ^= 1u << 2u;
    }

    /**
     * Get GPIO_QSPI_SS's PUE bit.
     */
    inline bool get_GPIO_QSPI_SS_PUE()
    {
        return GPIO_QSPI_SS & (1u << 3u);
    }

    /**
     * Set GPIO_QSPI_SS's PUE bit.
     */
    inline void set_GPIO_QSPI_SS_PUE()
    {
        GPIO_QSPI_SS |= 1u << 3u;
    }

    /**
     * Clear GPIO_QSPI_SS's PUE bit.
     */
    inline void clear_GPIO_QSPI_SS_PUE()
    {
        GPIO_QSPI_SS &= ~(1u << 3u);
    }

    /**
     * Toggle GPIO_QSPI_SS's PUE bit.
     */
    inline void toggle_GPIO_QSPI_SS_PUE()
    {
        GPIO_QSPI_SS ^= 1u << 3u;
    }

    /**
     * Get GPIO_QSPI_SS's DRIVE field.
     */
    inline PADS_QSPI_GPIO_QSPI_SS_DRIVE get_GPIO_QSPI_SS_DRIVE()
    {
        return PADS_QSPI_GPIO_QSPI_SS_DRIVE((GPIO_QSPI_SS >> 4u) & 0b11u);
    }

    /**
     * Set GPIO_QSPI_SS's DRIVE field.
     */
    inline void set_GPIO_QSPI_SS_DRIVE(PADS_QSPI_GPIO_QSPI_SS_DRIVE value)
    {
        uint32_t curr = GPIO_QSPI_SS;

        curr &= ~(0b11u << 4u);
        curr |= (std::to_underlying(value) & 0b11u) << 4u;

        GPIO_QSPI_SS = curr;
    }

    /**
     * Get GPIO_QSPI_SS's IE bit.
     */
    inline bool get_GPIO_QSPI_SS_IE()
    {
        return GPIO_QSPI_SS & (1u << 6u);
    }

    /**
     * Set GPIO_QSPI_SS's IE bit.
     */
    inline void set_GPIO_QSPI_SS_IE()
    {
        GPIO_QSPI_SS |= 1u << 6u;
    }

    /**
     * Clear GPIO_QSPI_SS's IE bit.
     */
    inline void clear_GPIO_QSPI_SS_IE()
    {
        GPIO_QSPI_SS &= ~(1u << 6u);
    }

    /**
     * Toggle GPIO_QSPI_SS's IE bit.
     */
    inline void toggle_GPIO_QSPI_SS_IE()
    {
        GPIO_QSPI_SS ^= 1u << 6u;
    }

    /**
     * Get GPIO_QSPI_SS's OD bit.
     */
    inline bool get_GPIO_QSPI_SS_OD()
    {
        return GPIO_QSPI_SS & (1u << 7u);
    }

    /**
     * Set GPIO_QSPI_SS's OD bit.
     */
    inline void set_GPIO_QSPI_SS_OD()
    {
        GPIO_QSPI_SS |= 1u << 7u;
    }

    /**
     * Clear GPIO_QSPI_SS's OD bit.
     */
    inline void clear_GPIO_QSPI_SS_OD()
    {
        GPIO_QSPI_SS &= ~(1u << 7u);
    }

    /**
     * Toggle GPIO_QSPI_SS's OD bit.
     */
    inline void toggle_GPIO_QSPI_SS_OD()
    {
        GPIO_QSPI_SS ^= 1u << 7u;
    }

    /**
     * Get all of GPIO_QSPI_SS's bit fields.
     */
    inline void get_GPIO_QSPI_SS(bool &SLEWFAST, bool &SCHMITT, bool &PDE,
                                 bool &PUE,
                                 PADS_QSPI_GPIO_QSPI_SS_DRIVE &DRIVE, bool &IE,
                                 bool &OD)
    {
        uint32_t curr = GPIO_QSPI_SS;

        SLEWFAST = curr & (1u << 0u);
        SCHMITT = curr & (1u << 1u);
        PDE = curr & (1u << 2u);
        PUE = curr & (1u << 3u);
        DRIVE = PADS_QSPI_GPIO_QSPI_SS_DRIVE((curr >> 4u) & 0b11u);
        IE = curr & (1u << 6u);
        OD = curr & (1u << 7u);
    }

    /**
     * Set all of GPIO_QSPI_SS's bit fields.
     */
    inline void set_GPIO_QSPI_SS(bool SLEWFAST, bool SCHMITT, bool PDE,
                                 bool PUE, PADS_QSPI_GPIO_QSPI_SS_DRIVE DRIVE,
                                 bool IE, bool OD)
    {
        uint32_t curr = GPIO_QSPI_SS;

        curr &= ~(0b1u << 0u);
        curr |= (SLEWFAST & 0b1u) << 0u;
        curr &= ~(0b1u << 1u);
        curr |= (SCHMITT & 0b1u) << 1u;
        curr &= ~(0b1u << 2u);
        curr |= (PDE & 0b1u) << 2u;
        curr &= ~(0b1u << 3u);
        curr |= (PUE & 0b1u) << 3u;
        curr &= ~(0b11u << 4u);
        curr |= (std::to_underlying(DRIVE) & 0b11u) << 4u;
        curr &= ~(0b1u << 6u);
        curr |= (IE & 0b1u) << 6u;
        curr &= ~(0b1u << 7u);
        curr |= (OD & 0b1u) << 7u;

        GPIO_QSPI_SS = curr;
    }
};

static_assert(sizeof(pads_qspi) == pads_qspi::size);

static volatile pads_qspi *const PADS_QSPI =
    reinterpret_cast<pads_qspi *>(0x40020000);

}; // namespace RP2040

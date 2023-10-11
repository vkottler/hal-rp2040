/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include "../ifgen/common.h"

namespace RP2040
{

/**
 * QSPI flash execute-in-place block
 */
struct [[gnu::packed]] xip_ctrl
{
    /* Constant attributes. */
    static constexpr uint16_t id = 1;       /*!< xip_ctrl's identifier. */
    static constexpr std::size_t size = 32; /*!< xip_ctrl's size in bytes. */

    /* Fields. */
    uint32_t CTRL;            /*!< (read-write) Cache control */
    uint32_t FLUSH;           /*!< (read-write) Cache Flush control */
    const uint32_t STAT = {}; /*!< (read-only) Cache Status */
    uint32_t CTR_HIT;         /*!< (read-write) Cache Hit counter\n
                A 32 bit saturating counter that increments upon each cache hit,\n
                i.e. when an XIP access is serviced directly from cached data.\n
                Write any value to clear. */
    uint32_t CTR_ACC;         /*!< (read-write) Cache Access counter\n
                A 32 bit saturating counter that increments upon each XIP access,\n
                whether the cache is hit or not. This includes noncacheable accesses.\n
                Write any value to clear. */
    uint32_t STREAM_ADDR;     /*!< (read-write) FIFO stream address */
    uint32_t STREAM_CTR;      /*!< (read-write) FIFO stream control */
    uint32_t
        STREAM_FIFO; /*!< (read-write) FIFO stream data\n
       Streamed data is buffered here, for retrieval by the system DMA.\n
       This FIFO can also be accessed via the XIP_AUX slave, to avoid
       exposing\n     the DMA to bus stalls caused by other XIP traffic. */

    /* Methods. */

    /**
     * Get CTRL's EN bit.
     */
    bool get_CTRL_EN()
    {
        return CTRL & (1u << 0u);
    }

    /**
     * Set CTRL's EN bit.
     */
    inline void set_CTRL_EN()
    {
        CTRL |= 1u << 0u;
    }

    /**
     * Clear CTRL's EN bit.
     */
    inline void clear_CTRL_EN()
    {
        CTRL &= ~(1u << 0u);
    }

    /**
     * Toggle CTRL's EN bit.
     */
    inline void toggle_CTRL_EN()
    {
        CTRL ^= 1u << 0u;
    }

    /**
     * Get CTRL's ERR_BADWRITE bit.
     */
    bool get_CTRL_ERR_BADWRITE()
    {
        return CTRL & (1u << 1u);
    }

    /**
     * Set CTRL's ERR_BADWRITE bit.
     */
    inline void set_CTRL_ERR_BADWRITE()
    {
        CTRL |= 1u << 1u;
    }

    /**
     * Clear CTRL's ERR_BADWRITE bit.
     */
    inline void clear_CTRL_ERR_BADWRITE()
    {
        CTRL &= ~(1u << 1u);
    }

    /**
     * Toggle CTRL's ERR_BADWRITE bit.
     */
    inline void toggle_CTRL_ERR_BADWRITE()
    {
        CTRL ^= 1u << 1u;
    }

    /**
     * Get CTRL's POWER_DOWN bit.
     */
    bool get_CTRL_POWER_DOWN()
    {
        return CTRL & (1u << 3u);
    }

    /**
     * Set CTRL's POWER_DOWN bit.
     */
    inline void set_CTRL_POWER_DOWN()
    {
        CTRL |= 1u << 3u;
    }

    /**
     * Clear CTRL's POWER_DOWN bit.
     */
    inline void clear_CTRL_POWER_DOWN()
    {
        CTRL &= ~(1u << 3u);
    }

    /**
     * Toggle CTRL's POWER_DOWN bit.
     */
    inline void toggle_CTRL_POWER_DOWN()
    {
        CTRL ^= 1u << 3u;
    }

    /**
     * Get FLUSH's FLUSH bit.
     */
    bool get_FLUSH_FLUSH()
    {
        return FLUSH & (1u << 0u);
    }

    /**
     * Set FLUSH's FLUSH bit.
     */
    inline void set_FLUSH_FLUSH()
    {
        FLUSH |= 1u << 0u;
    }

    /**
     * Clear FLUSH's FLUSH bit.
     */
    inline void clear_FLUSH_FLUSH()
    {
        FLUSH &= ~(1u << 0u);
    }

    /**
     * Toggle FLUSH's FLUSH bit.
     */
    inline void toggle_FLUSH_FLUSH()
    {
        FLUSH ^= 1u << 0u;
    }

    /**
     * Get STAT's FLUSH_READY bit.
     */
    bool get_STAT_FLUSH_READY()
    {
        return STAT & (1u << 0u);
    }

    /**
     * Get STAT's FIFO_EMPTY bit.
     */
    bool get_STAT_FIFO_EMPTY()
    {
        return STAT & (1u << 1u);
    }

    /**
     * Get STAT's FIFO_FULL bit.
     */
    bool get_STAT_FIFO_FULL()
    {
        return STAT & (1u << 2u);
    }

    /**
     * Get STREAM_ADDR's STREAM_ADDR field.
     */
    uint32_t get_STREAM_ADDR_STREAM_ADDR()
    {
        return (STREAM_ADDR >> 2u) & 0b111111111111111111111111111111u;
    }

    /**
     * Set STREAM_ADDR's STREAM_ADDR field.
     */
    inline void set_STREAM_ADDR_STREAM_ADDR(uint32_t value)
    {
        uint32_t curr = STREAM_ADDR;

        curr &= ~(0b111111111111111111111111111111u << 2u);
        curr |= (value & 0b111111111111111111111111111111u) << 2u;

        STREAM_ADDR = curr;
    }

    /**
     * Get STREAM_CTR's STREAM_CTR field.
     */
    uint32_t get_STREAM_CTR_STREAM_CTR()
    {
        return (STREAM_CTR >> 0u) & 0b1111111111111111111111u;
    }

    /**
     * Set STREAM_CTR's STREAM_CTR field.
     */
    inline void set_STREAM_CTR_STREAM_CTR(uint32_t value)
    {
        uint32_t curr = STREAM_CTR;

        curr &= ~(0b1111111111111111111111u << 0u);
        curr |= (value & 0b1111111111111111111111u) << 0u;

        STREAM_CTR = curr;
    }
};

static_assert(sizeof(xip_ctrl) == xip_ctrl::size);

static volatile xip_ctrl *const XIP_CTRL =
    reinterpret_cast<xip_ctrl *>(0x14000000);

}; // namespace RP2040

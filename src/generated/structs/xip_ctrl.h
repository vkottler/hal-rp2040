/**
 * \file
 * \brief Generated by ifgen (3.1.2).
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
    inline bool get_CTRL_EN() volatile
    {
        return CTRL & (1u << 0u);
    }

    /**
     * Set CTRL's EN bit.
     */
    inline void set_CTRL_EN() volatile
    {
        CTRL |= 1u << 0u;
    }

    /**
     * Clear CTRL's EN bit.
     */
    inline void clear_CTRL_EN() volatile
    {
        CTRL &= ~(1u << 0u);
    }

    /**
     * Toggle CTRL's EN bit.
     */
    inline void toggle_CTRL_EN() volatile
    {
        CTRL ^= 1u << 0u;
    }

    /**
     * Get CTRL's ERR_BADWRITE bit.
     */
    inline bool get_CTRL_ERR_BADWRITE() volatile
    {
        return CTRL & (1u << 1u);
    }

    /**
     * Set CTRL's ERR_BADWRITE bit.
     */
    inline void set_CTRL_ERR_BADWRITE() volatile
    {
        CTRL |= 1u << 1u;
    }

    /**
     * Clear CTRL's ERR_BADWRITE bit.
     */
    inline void clear_CTRL_ERR_BADWRITE() volatile
    {
        CTRL &= ~(1u << 1u);
    }

    /**
     * Toggle CTRL's ERR_BADWRITE bit.
     */
    inline void toggle_CTRL_ERR_BADWRITE() volatile
    {
        CTRL ^= 1u << 1u;
    }

    /**
     * Get CTRL's POWER_DOWN bit.
     */
    inline bool get_CTRL_POWER_DOWN() volatile
    {
        return CTRL & (1u << 3u);
    }

    /**
     * Set CTRL's POWER_DOWN bit.
     */
    inline void set_CTRL_POWER_DOWN() volatile
    {
        CTRL |= 1u << 3u;
    }

    /**
     * Clear CTRL's POWER_DOWN bit.
     */
    inline void clear_CTRL_POWER_DOWN() volatile
    {
        CTRL &= ~(1u << 3u);
    }

    /**
     * Toggle CTRL's POWER_DOWN bit.
     */
    inline void toggle_CTRL_POWER_DOWN() volatile
    {
        CTRL ^= 1u << 3u;
    }

    /**
     * Get all of CTRL's bit fields.
     */
    inline void get_CTRL(bool &EN, bool &ERR_BADWRITE,
                         bool &POWER_DOWN) volatile
    {
        uint32_t curr = CTRL;

        EN = curr & (1u << 0u);
        ERR_BADWRITE = curr & (1u << 1u);
        POWER_DOWN = curr & (1u << 3u);
    }

    /**
     * Set all of CTRL's bit fields.
     */
    inline void set_CTRL(bool EN, bool ERR_BADWRITE, bool POWER_DOWN) volatile
    {
        uint32_t curr = CTRL;

        curr &= ~(0b1u << 0u);
        curr |= (EN & 0b1u) << 0u;
        curr &= ~(0b1u << 1u);
        curr |= (ERR_BADWRITE & 0b1u) << 1u;
        curr &= ~(0b1u << 3u);
        curr |= (POWER_DOWN & 0b1u) << 3u;

        CTRL = curr;
    }

    /**
     * Get FLUSH's FLUSH bit.
     */
    inline bool get_FLUSH_FLUSH() volatile
    {
        return FLUSH & (1u << 0u);
    }

    /**
     * Set FLUSH's FLUSH bit.
     */
    inline void set_FLUSH_FLUSH() volatile
    {
        FLUSH |= 1u << 0u;
    }

    /**
     * Clear FLUSH's FLUSH bit.
     */
    inline void clear_FLUSH_FLUSH() volatile
    {
        FLUSH &= ~(1u << 0u);
    }

    /**
     * Toggle FLUSH's FLUSH bit.
     */
    inline void toggle_FLUSH_FLUSH() volatile
    {
        FLUSH ^= 1u << 0u;
    }

    /**
     * Get STAT's FLUSH_READY bit.
     */
    inline bool get_STAT_FLUSH_READY() volatile
    {
        return STAT & (1u << 0u);
    }

    /**
     * Get STAT's FIFO_EMPTY bit.
     */
    inline bool get_STAT_FIFO_EMPTY() volatile
    {
        return STAT & (1u << 1u);
    }

    /**
     * Get STAT's FIFO_FULL bit.
     */
    inline bool get_STAT_FIFO_FULL() volatile
    {
        return STAT & (1u << 2u);
    }

    /**
     * Get all of STAT's bit fields.
     */
    inline void get_STAT(bool &FLUSH_READY, bool &FIFO_EMPTY,
                         bool &FIFO_FULL) volatile
    {
        uint32_t curr = STAT;

        FLUSH_READY = curr & (1u << 0u);
        FIFO_EMPTY = curr & (1u << 1u);
        FIFO_FULL = curr & (1u << 2u);
    }

    /**
     * Get STREAM_ADDR's STREAM_ADDR field.
     */
    inline uint32_t get_STREAM_ADDR_STREAM_ADDR() volatile
    {
        return (STREAM_ADDR >> 2u) & 0b111111111111111111111111111111u;
    }

    /**
     * Set STREAM_ADDR's STREAM_ADDR field.
     */
    inline void set_STREAM_ADDR_STREAM_ADDR(uint32_t value) volatile
    {
        uint32_t curr = STREAM_ADDR;

        curr &= ~(0b111111111111111111111111111111u << 2u);
        curr |= (value & 0b111111111111111111111111111111u) << 2u;

        STREAM_ADDR = curr;
    }

    /**
     * Get STREAM_CTR's STREAM_CTR field.
     */
    inline uint32_t get_STREAM_CTR_STREAM_CTR() volatile
    {
        return (STREAM_CTR >> 0u) & 0b1111111111111111111111u;
    }

    /**
     * Set STREAM_CTR's STREAM_CTR field.
     */
    inline void set_STREAM_CTR_STREAM_CTR(uint32_t value) volatile
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

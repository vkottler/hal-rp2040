/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include "../ifgen/common.h"

namespace RP2040
{

struct [[gnu::packed]] uart
{
    /* Constant attributes. */
    static constexpr uint16_t id = 1;         /*!< uart's identifier. */
    static constexpr std::size_t size = 4096; /*!< uart's size in bytes. */

    /* Fields. */
    uint32_t UARTDR;  /*!< (read-write) Data Register, UARTDR */
    uint32_t UARTRSR; /*!< (read-write) Receive Status Register/Error Clear
                         Register, UARTRSR/UARTECR */
    static constexpr std::size_t reserved_padding0_length = 4;
    const uint32_t reserved_padding0[reserved_padding0_length] = {};
    const uint32_t UARTFR = {}; /*!< (read-only) Flag Register, UARTFR */
    const uint32_t reserved_padding1 = {};
    uint32_t UARTILPR; /*!< (read-write) IrDA Low-Power Counter Register,
                          UARTILPR */
    uint32_t
        UARTIBRD; /*!< (read-write) Integer Baud Rate Register, UARTIBRD */
    uint32_t
        UARTFBRD; /*!< (read-write) Fractional Baud Rate Register, UARTFBRD */
    uint32_t UARTLCR_H; /*!< (read-write) Line Control Register, UARTLCR_H */
    uint32_t UARTCR;    /*!< (read-write) Control Register, UARTCR */
    uint32_t UARTIFLS;  /*!< (read-write) Interrupt FIFO Level Select Register,
                           UARTIFLS */
    uint32_t UARTIMSC;  /*!< (read-write) Interrupt Mask Set/Clear Register,
                           UARTIMSC */
    const uint32_t UARTRIS =
        {}; /*!< (read-only) Raw Interrupt Status Register, UARTRIS */
    const uint32_t UARTMIS =
        {}; /*!< (read-only) Masked Interrupt Status Register, UARTMIS */
    uint32_t UARTICR;   /*!< (read-write) Interrupt Clear Register, UARTICR */
    uint32_t UARTDMACR; /*!< (read-write) DMA Control Register, UARTDMACR */
    static constexpr std::size_t reserved_padding2_length = 997;
    const uint32_t reserved_padding2[reserved_padding2_length] = {};
    const uint32_t UARTPERIPHID0 =
        {}; /*!< (read-only) UARTPeriphID0 Register */
    const uint32_t UARTPERIPHID1 =
        {}; /*!< (read-only) UARTPeriphID1 Register */
    const uint32_t UARTPERIPHID2 =
        {}; /*!< (read-only) UARTPeriphID2 Register */
    const uint32_t UARTPERIPHID3 =
        {}; /*!< (read-only) UARTPeriphID3 Register */
    const uint32_t UARTPCELLID0 = {}; /*!< (read-only) UARTPCellID0 Register */
    const uint32_t UARTPCELLID1 = {}; /*!< (read-only) UARTPCellID1 Register */
    const uint32_t UARTPCELLID2 = {}; /*!< (read-only) UARTPCellID2 Register */
    const uint32_t UARTPCELLID3 = {}; /*!< (read-only) UARTPCellID3 Register */

    /* Methods. */

    /**
     * Get UARTDR's DATA field.
     */
    uint8_t get_UARTDR_DATA()
    {
        return (UARTDR >> 0u) & 0b11111111u;
    }

    /**
     * Set UARTDR's DATA field.
     */
    inline void set_UARTDR_DATA(uint8_t value)
    {
        uint32_t curr = UARTDR;

        curr &= ~(0b11111111u << 0u);
        curr |= (value & 0b11111111u) << 0u;

        UARTDR = curr;
    }

    /**
     * Get UARTDR's FE bit.
     */
    bool get_UARTDR_FE()
    {
        return UARTDR & (1u << 8u);
    }

    /**
     * Get UARTDR's PE bit.
     */
    bool get_UARTDR_PE()
    {
        return UARTDR & (1u << 9u);
    }

    /**
     * Get UARTDR's BE bit.
     */
    bool get_UARTDR_BE()
    {
        return UARTDR & (1u << 10u);
    }

    /**
     * Get UARTDR's OE bit.
     */
    bool get_UARTDR_OE()
    {
        return UARTDR & (1u << 11u);
    }

    /**
     * Get UARTRSR's FE bit.
     */
    bool get_UARTRSR_FE()
    {
        return UARTRSR & (1u << 0u);
    }

    /**
     * Set UARTRSR's FE bit.
     */
    inline void set_UARTRSR_FE()
    {
        UARTRSR |= 1u << 0u;
    }

    /**
     * Clear UARTRSR's FE bit.
     */
    inline void clear_UARTRSR_FE()
    {
        UARTRSR &= ~(1u << 0u);
    }

    /**
     * Toggle UARTRSR's FE bit.
     */
    inline void toggle_UARTRSR_FE()
    {
        UARTRSR ^= 1u << 0u;
    }

    /**
     * Get UARTRSR's PE bit.
     */
    bool get_UARTRSR_PE()
    {
        return UARTRSR & (1u << 1u);
    }

    /**
     * Set UARTRSR's PE bit.
     */
    inline void set_UARTRSR_PE()
    {
        UARTRSR |= 1u << 1u;
    }

    /**
     * Clear UARTRSR's PE bit.
     */
    inline void clear_UARTRSR_PE()
    {
        UARTRSR &= ~(1u << 1u);
    }

    /**
     * Toggle UARTRSR's PE bit.
     */
    inline void toggle_UARTRSR_PE()
    {
        UARTRSR ^= 1u << 1u;
    }

    /**
     * Get UARTRSR's BE bit.
     */
    bool get_UARTRSR_BE()
    {
        return UARTRSR & (1u << 2u);
    }

    /**
     * Set UARTRSR's BE bit.
     */
    inline void set_UARTRSR_BE()
    {
        UARTRSR |= 1u << 2u;
    }

    /**
     * Clear UARTRSR's BE bit.
     */
    inline void clear_UARTRSR_BE()
    {
        UARTRSR &= ~(1u << 2u);
    }

    /**
     * Toggle UARTRSR's BE bit.
     */
    inline void toggle_UARTRSR_BE()
    {
        UARTRSR ^= 1u << 2u;
    }

    /**
     * Get UARTRSR's OE bit.
     */
    bool get_UARTRSR_OE()
    {
        return UARTRSR & (1u << 3u);
    }

    /**
     * Set UARTRSR's OE bit.
     */
    inline void set_UARTRSR_OE()
    {
        UARTRSR |= 1u << 3u;
    }

    /**
     * Clear UARTRSR's OE bit.
     */
    inline void clear_UARTRSR_OE()
    {
        UARTRSR &= ~(1u << 3u);
    }

    /**
     * Toggle UARTRSR's OE bit.
     */
    inline void toggle_UARTRSR_OE()
    {
        UARTRSR ^= 1u << 3u;
    }

    /**
     * Get UARTFR's CTS bit.
     */
    bool get_UARTFR_CTS()
    {
        return UARTFR & (1u << 0u);
    }

    /**
     * Get UARTFR's DSR bit.
     */
    bool get_UARTFR_DSR()
    {
        return UARTFR & (1u << 1u);
    }

    /**
     * Get UARTFR's DCD bit.
     */
    bool get_UARTFR_DCD()
    {
        return UARTFR & (1u << 2u);
    }

    /**
     * Get UARTFR's BUSY bit.
     */
    bool get_UARTFR_BUSY()
    {
        return UARTFR & (1u << 3u);
    }

    /**
     * Get UARTFR's RXFE bit.
     */
    bool get_UARTFR_RXFE()
    {
        return UARTFR & (1u << 4u);
    }

    /**
     * Get UARTFR's TXFF bit.
     */
    bool get_UARTFR_TXFF()
    {
        return UARTFR & (1u << 5u);
    }

    /**
     * Get UARTFR's RXFF bit.
     */
    bool get_UARTFR_RXFF()
    {
        return UARTFR & (1u << 6u);
    }

    /**
     * Get UARTFR's TXFE bit.
     */
    bool get_UARTFR_TXFE()
    {
        return UARTFR & (1u << 7u);
    }

    /**
     * Get UARTFR's RI bit.
     */
    bool get_UARTFR_RI()
    {
        return UARTFR & (1u << 8u);
    }

    /**
     * Get UARTILPR's ILPDVSR field.
     */
    uint8_t get_UARTILPR_ILPDVSR()
    {
        return (UARTILPR >> 0u) & 0b11111111u;
    }

    /**
     * Set UARTILPR's ILPDVSR field.
     */
    inline void set_UARTILPR_ILPDVSR(uint8_t value)
    {
        uint32_t curr = UARTILPR;

        curr &= ~(0b11111111u << 0u);
        curr |= (value & 0b11111111u) << 0u;

        UARTILPR = curr;
    }

    /**
     * Get UARTIBRD's BAUD_DIVINT field.
     */
    uint16_t get_UARTIBRD_BAUD_DIVINT()
    {
        return (UARTIBRD >> 0u) & 0b1111111111111111u;
    }

    /**
     * Set UARTIBRD's BAUD_DIVINT field.
     */
    inline void set_UARTIBRD_BAUD_DIVINT(uint16_t value)
    {
        uint32_t curr = UARTIBRD;

        curr &= ~(0b1111111111111111u << 0u);
        curr |= (value & 0b1111111111111111u) << 0u;

        UARTIBRD = curr;
    }

    /**
     * Get UARTFBRD's BAUD_DIVFRAC field.
     */
    uint8_t get_UARTFBRD_BAUD_DIVFRAC()
    {
        return (UARTFBRD >> 0u) & 0b111111u;
    }

    /**
     * Set UARTFBRD's BAUD_DIVFRAC field.
     */
    inline void set_UARTFBRD_BAUD_DIVFRAC(uint8_t value)
    {
        uint32_t curr = UARTFBRD;

        curr &= ~(0b111111u << 0u);
        curr |= (value & 0b111111u) << 0u;

        UARTFBRD = curr;
    }

    /**
     * Get UARTLCR_H's BRK bit.
     */
    bool get_UARTLCR_H_BRK()
    {
        return UARTLCR_H & (1u << 0u);
    }

    /**
     * Set UARTLCR_H's BRK bit.
     */
    inline void set_UARTLCR_H_BRK()
    {
        UARTLCR_H |= 1u << 0u;
    }

    /**
     * Clear UARTLCR_H's BRK bit.
     */
    inline void clear_UARTLCR_H_BRK()
    {
        UARTLCR_H &= ~(1u << 0u);
    }

    /**
     * Toggle UARTLCR_H's BRK bit.
     */
    inline void toggle_UARTLCR_H_BRK()
    {
        UARTLCR_H ^= 1u << 0u;
    }

    /**
     * Get UARTLCR_H's PEN bit.
     */
    bool get_UARTLCR_H_PEN()
    {
        return UARTLCR_H & (1u << 1u);
    }

    /**
     * Set UARTLCR_H's PEN bit.
     */
    inline void set_UARTLCR_H_PEN()
    {
        UARTLCR_H |= 1u << 1u;
    }

    /**
     * Clear UARTLCR_H's PEN bit.
     */
    inline void clear_UARTLCR_H_PEN()
    {
        UARTLCR_H &= ~(1u << 1u);
    }

    /**
     * Toggle UARTLCR_H's PEN bit.
     */
    inline void toggle_UARTLCR_H_PEN()
    {
        UARTLCR_H ^= 1u << 1u;
    }

    /**
     * Get UARTLCR_H's EPS bit.
     */
    bool get_UARTLCR_H_EPS()
    {
        return UARTLCR_H & (1u << 2u);
    }

    /**
     * Set UARTLCR_H's EPS bit.
     */
    inline void set_UARTLCR_H_EPS()
    {
        UARTLCR_H |= 1u << 2u;
    }

    /**
     * Clear UARTLCR_H's EPS bit.
     */
    inline void clear_UARTLCR_H_EPS()
    {
        UARTLCR_H &= ~(1u << 2u);
    }

    /**
     * Toggle UARTLCR_H's EPS bit.
     */
    inline void toggle_UARTLCR_H_EPS()
    {
        UARTLCR_H ^= 1u << 2u;
    }

    /**
     * Get UARTLCR_H's STP2 bit.
     */
    bool get_UARTLCR_H_STP2()
    {
        return UARTLCR_H & (1u << 3u);
    }

    /**
     * Set UARTLCR_H's STP2 bit.
     */
    inline void set_UARTLCR_H_STP2()
    {
        UARTLCR_H |= 1u << 3u;
    }

    /**
     * Clear UARTLCR_H's STP2 bit.
     */
    inline void clear_UARTLCR_H_STP2()
    {
        UARTLCR_H &= ~(1u << 3u);
    }

    /**
     * Toggle UARTLCR_H's STP2 bit.
     */
    inline void toggle_UARTLCR_H_STP2()
    {
        UARTLCR_H ^= 1u << 3u;
    }

    /**
     * Get UARTLCR_H's FEN bit.
     */
    bool get_UARTLCR_H_FEN()
    {
        return UARTLCR_H & (1u << 4u);
    }

    /**
     * Set UARTLCR_H's FEN bit.
     */
    inline void set_UARTLCR_H_FEN()
    {
        UARTLCR_H |= 1u << 4u;
    }

    /**
     * Clear UARTLCR_H's FEN bit.
     */
    inline void clear_UARTLCR_H_FEN()
    {
        UARTLCR_H &= ~(1u << 4u);
    }

    /**
     * Toggle UARTLCR_H's FEN bit.
     */
    inline void toggle_UARTLCR_H_FEN()
    {
        UARTLCR_H ^= 1u << 4u;
    }

    /**
     * Get UARTLCR_H's WLEN field.
     */
    uint8_t get_UARTLCR_H_WLEN()
    {
        return (UARTLCR_H >> 5u) & 0b11u;
    }

    /**
     * Set UARTLCR_H's WLEN field.
     */
    inline void set_UARTLCR_H_WLEN(uint8_t value)
    {
        uint32_t curr = UARTLCR_H;

        curr &= ~(0b11u << 5u);
        curr |= (value & 0b11u) << 5u;

        UARTLCR_H = curr;
    }

    /**
     * Get UARTLCR_H's SPS bit.
     */
    bool get_UARTLCR_H_SPS()
    {
        return UARTLCR_H & (1u << 7u);
    }

    /**
     * Set UARTLCR_H's SPS bit.
     */
    inline void set_UARTLCR_H_SPS()
    {
        UARTLCR_H |= 1u << 7u;
    }

    /**
     * Clear UARTLCR_H's SPS bit.
     */
    inline void clear_UARTLCR_H_SPS()
    {
        UARTLCR_H &= ~(1u << 7u);
    }

    /**
     * Toggle UARTLCR_H's SPS bit.
     */
    inline void toggle_UARTLCR_H_SPS()
    {
        UARTLCR_H ^= 1u << 7u;
    }

    /**
     * Get UARTCR's UARTEN bit.
     */
    bool get_UARTCR_UARTEN()
    {
        return UARTCR & (1u << 0u);
    }

    /**
     * Set UARTCR's UARTEN bit.
     */
    inline void set_UARTCR_UARTEN()
    {
        UARTCR |= 1u << 0u;
    }

    /**
     * Clear UARTCR's UARTEN bit.
     */
    inline void clear_UARTCR_UARTEN()
    {
        UARTCR &= ~(1u << 0u);
    }

    /**
     * Toggle UARTCR's UARTEN bit.
     */
    inline void toggle_UARTCR_UARTEN()
    {
        UARTCR ^= 1u << 0u;
    }

    /**
     * Get UARTCR's SIREN bit.
     */
    bool get_UARTCR_SIREN()
    {
        return UARTCR & (1u << 1u);
    }

    /**
     * Set UARTCR's SIREN bit.
     */
    inline void set_UARTCR_SIREN()
    {
        UARTCR |= 1u << 1u;
    }

    /**
     * Clear UARTCR's SIREN bit.
     */
    inline void clear_UARTCR_SIREN()
    {
        UARTCR &= ~(1u << 1u);
    }

    /**
     * Toggle UARTCR's SIREN bit.
     */
    inline void toggle_UARTCR_SIREN()
    {
        UARTCR ^= 1u << 1u;
    }

    /**
     * Get UARTCR's SIRLP bit.
     */
    bool get_UARTCR_SIRLP()
    {
        return UARTCR & (1u << 2u);
    }

    /**
     * Set UARTCR's SIRLP bit.
     */
    inline void set_UARTCR_SIRLP()
    {
        UARTCR |= 1u << 2u;
    }

    /**
     * Clear UARTCR's SIRLP bit.
     */
    inline void clear_UARTCR_SIRLP()
    {
        UARTCR &= ~(1u << 2u);
    }

    /**
     * Toggle UARTCR's SIRLP bit.
     */
    inline void toggle_UARTCR_SIRLP()
    {
        UARTCR ^= 1u << 2u;
    }

    /**
     * Get UARTCR's LBE bit.
     */
    bool get_UARTCR_LBE()
    {
        return UARTCR & (1u << 7u);
    }

    /**
     * Set UARTCR's LBE bit.
     */
    inline void set_UARTCR_LBE()
    {
        UARTCR |= 1u << 7u;
    }

    /**
     * Clear UARTCR's LBE bit.
     */
    inline void clear_UARTCR_LBE()
    {
        UARTCR &= ~(1u << 7u);
    }

    /**
     * Toggle UARTCR's LBE bit.
     */
    inline void toggle_UARTCR_LBE()
    {
        UARTCR ^= 1u << 7u;
    }

    /**
     * Get UARTCR's TXE bit.
     */
    bool get_UARTCR_TXE()
    {
        return UARTCR & (1u << 8u);
    }

    /**
     * Set UARTCR's TXE bit.
     */
    inline void set_UARTCR_TXE()
    {
        UARTCR |= 1u << 8u;
    }

    /**
     * Clear UARTCR's TXE bit.
     */
    inline void clear_UARTCR_TXE()
    {
        UARTCR &= ~(1u << 8u);
    }

    /**
     * Toggle UARTCR's TXE bit.
     */
    inline void toggle_UARTCR_TXE()
    {
        UARTCR ^= 1u << 8u;
    }

    /**
     * Get UARTCR's RXE bit.
     */
    bool get_UARTCR_RXE()
    {
        return UARTCR & (1u << 9u);
    }

    /**
     * Set UARTCR's RXE bit.
     */
    inline void set_UARTCR_RXE()
    {
        UARTCR |= 1u << 9u;
    }

    /**
     * Clear UARTCR's RXE bit.
     */
    inline void clear_UARTCR_RXE()
    {
        UARTCR &= ~(1u << 9u);
    }

    /**
     * Toggle UARTCR's RXE bit.
     */
    inline void toggle_UARTCR_RXE()
    {
        UARTCR ^= 1u << 9u;
    }

    /**
     * Get UARTCR's DTR bit.
     */
    bool get_UARTCR_DTR()
    {
        return UARTCR & (1u << 10u);
    }

    /**
     * Set UARTCR's DTR bit.
     */
    inline void set_UARTCR_DTR()
    {
        UARTCR |= 1u << 10u;
    }

    /**
     * Clear UARTCR's DTR bit.
     */
    inline void clear_UARTCR_DTR()
    {
        UARTCR &= ~(1u << 10u);
    }

    /**
     * Toggle UARTCR's DTR bit.
     */
    inline void toggle_UARTCR_DTR()
    {
        UARTCR ^= 1u << 10u;
    }

    /**
     * Get UARTCR's RTS bit.
     */
    bool get_UARTCR_RTS()
    {
        return UARTCR & (1u << 11u);
    }

    /**
     * Set UARTCR's RTS bit.
     */
    inline void set_UARTCR_RTS()
    {
        UARTCR |= 1u << 11u;
    }

    /**
     * Clear UARTCR's RTS bit.
     */
    inline void clear_UARTCR_RTS()
    {
        UARTCR &= ~(1u << 11u);
    }

    /**
     * Toggle UARTCR's RTS bit.
     */
    inline void toggle_UARTCR_RTS()
    {
        UARTCR ^= 1u << 11u;
    }

    /**
     * Get UARTCR's OUT1 bit.
     */
    bool get_UARTCR_OUT1()
    {
        return UARTCR & (1u << 12u);
    }

    /**
     * Set UARTCR's OUT1 bit.
     */
    inline void set_UARTCR_OUT1()
    {
        UARTCR |= 1u << 12u;
    }

    /**
     * Clear UARTCR's OUT1 bit.
     */
    inline void clear_UARTCR_OUT1()
    {
        UARTCR &= ~(1u << 12u);
    }

    /**
     * Toggle UARTCR's OUT1 bit.
     */
    inline void toggle_UARTCR_OUT1()
    {
        UARTCR ^= 1u << 12u;
    }

    /**
     * Get UARTCR's OUT2 bit.
     */
    bool get_UARTCR_OUT2()
    {
        return UARTCR & (1u << 13u);
    }

    /**
     * Set UARTCR's OUT2 bit.
     */
    inline void set_UARTCR_OUT2()
    {
        UARTCR |= 1u << 13u;
    }

    /**
     * Clear UARTCR's OUT2 bit.
     */
    inline void clear_UARTCR_OUT2()
    {
        UARTCR &= ~(1u << 13u);
    }

    /**
     * Toggle UARTCR's OUT2 bit.
     */
    inline void toggle_UARTCR_OUT2()
    {
        UARTCR ^= 1u << 13u;
    }

    /**
     * Get UARTCR's RTSEN bit.
     */
    bool get_UARTCR_RTSEN()
    {
        return UARTCR & (1u << 14u);
    }

    /**
     * Set UARTCR's RTSEN bit.
     */
    inline void set_UARTCR_RTSEN()
    {
        UARTCR |= 1u << 14u;
    }

    /**
     * Clear UARTCR's RTSEN bit.
     */
    inline void clear_UARTCR_RTSEN()
    {
        UARTCR &= ~(1u << 14u);
    }

    /**
     * Toggle UARTCR's RTSEN bit.
     */
    inline void toggle_UARTCR_RTSEN()
    {
        UARTCR ^= 1u << 14u;
    }

    /**
     * Get UARTCR's CTSEN bit.
     */
    bool get_UARTCR_CTSEN()
    {
        return UARTCR & (1u << 15u);
    }

    /**
     * Set UARTCR's CTSEN bit.
     */
    inline void set_UARTCR_CTSEN()
    {
        UARTCR |= 1u << 15u;
    }

    /**
     * Clear UARTCR's CTSEN bit.
     */
    inline void clear_UARTCR_CTSEN()
    {
        UARTCR &= ~(1u << 15u);
    }

    /**
     * Toggle UARTCR's CTSEN bit.
     */
    inline void toggle_UARTCR_CTSEN()
    {
        UARTCR ^= 1u << 15u;
    }

    /**
     * Get UARTIFLS's TXIFLSEL field.
     */
    uint8_t get_UARTIFLS_TXIFLSEL()
    {
        return (UARTIFLS >> 0u) & 0b111u;
    }

    /**
     * Set UARTIFLS's TXIFLSEL field.
     */
    inline void set_UARTIFLS_TXIFLSEL(uint8_t value)
    {
        uint32_t curr = UARTIFLS;

        curr &= ~(0b111u << 0u);
        curr |= (value & 0b111u) << 0u;

        UARTIFLS = curr;
    }

    /**
     * Get UARTIFLS's RXIFLSEL field.
     */
    uint8_t get_UARTIFLS_RXIFLSEL()
    {
        return (UARTIFLS >> 3u) & 0b111u;
    }

    /**
     * Set UARTIFLS's RXIFLSEL field.
     */
    inline void set_UARTIFLS_RXIFLSEL(uint8_t value)
    {
        uint32_t curr = UARTIFLS;

        curr &= ~(0b111u << 3u);
        curr |= (value & 0b111u) << 3u;

        UARTIFLS = curr;
    }

    /**
     * Get UARTIMSC's RIMIM bit.
     */
    bool get_UARTIMSC_RIMIM()
    {
        return UARTIMSC & (1u << 0u);
    }

    /**
     * Set UARTIMSC's RIMIM bit.
     */
    inline void set_UARTIMSC_RIMIM()
    {
        UARTIMSC |= 1u << 0u;
    }

    /**
     * Clear UARTIMSC's RIMIM bit.
     */
    inline void clear_UARTIMSC_RIMIM()
    {
        UARTIMSC &= ~(1u << 0u);
    }

    /**
     * Toggle UARTIMSC's RIMIM bit.
     */
    inline void toggle_UARTIMSC_RIMIM()
    {
        UARTIMSC ^= 1u << 0u;
    }

    /**
     * Get UARTIMSC's CTSMIM bit.
     */
    bool get_UARTIMSC_CTSMIM()
    {
        return UARTIMSC & (1u << 1u);
    }

    /**
     * Set UARTIMSC's CTSMIM bit.
     */
    inline void set_UARTIMSC_CTSMIM()
    {
        UARTIMSC |= 1u << 1u;
    }

    /**
     * Clear UARTIMSC's CTSMIM bit.
     */
    inline void clear_UARTIMSC_CTSMIM()
    {
        UARTIMSC &= ~(1u << 1u);
    }

    /**
     * Toggle UARTIMSC's CTSMIM bit.
     */
    inline void toggle_UARTIMSC_CTSMIM()
    {
        UARTIMSC ^= 1u << 1u;
    }

    /**
     * Get UARTIMSC's DCDMIM bit.
     */
    bool get_UARTIMSC_DCDMIM()
    {
        return UARTIMSC & (1u << 2u);
    }

    /**
     * Set UARTIMSC's DCDMIM bit.
     */
    inline void set_UARTIMSC_DCDMIM()
    {
        UARTIMSC |= 1u << 2u;
    }

    /**
     * Clear UARTIMSC's DCDMIM bit.
     */
    inline void clear_UARTIMSC_DCDMIM()
    {
        UARTIMSC &= ~(1u << 2u);
    }

    /**
     * Toggle UARTIMSC's DCDMIM bit.
     */
    inline void toggle_UARTIMSC_DCDMIM()
    {
        UARTIMSC ^= 1u << 2u;
    }

    /**
     * Get UARTIMSC's DSRMIM bit.
     */
    bool get_UARTIMSC_DSRMIM()
    {
        return UARTIMSC & (1u << 3u);
    }

    /**
     * Set UARTIMSC's DSRMIM bit.
     */
    inline void set_UARTIMSC_DSRMIM()
    {
        UARTIMSC |= 1u << 3u;
    }

    /**
     * Clear UARTIMSC's DSRMIM bit.
     */
    inline void clear_UARTIMSC_DSRMIM()
    {
        UARTIMSC &= ~(1u << 3u);
    }

    /**
     * Toggle UARTIMSC's DSRMIM bit.
     */
    inline void toggle_UARTIMSC_DSRMIM()
    {
        UARTIMSC ^= 1u << 3u;
    }

    /**
     * Get UARTIMSC's RXIM bit.
     */
    bool get_UARTIMSC_RXIM()
    {
        return UARTIMSC & (1u << 4u);
    }

    /**
     * Set UARTIMSC's RXIM bit.
     */
    inline void set_UARTIMSC_RXIM()
    {
        UARTIMSC |= 1u << 4u;
    }

    /**
     * Clear UARTIMSC's RXIM bit.
     */
    inline void clear_UARTIMSC_RXIM()
    {
        UARTIMSC &= ~(1u << 4u);
    }

    /**
     * Toggle UARTIMSC's RXIM bit.
     */
    inline void toggle_UARTIMSC_RXIM()
    {
        UARTIMSC ^= 1u << 4u;
    }

    /**
     * Get UARTIMSC's TXIM bit.
     */
    bool get_UARTIMSC_TXIM()
    {
        return UARTIMSC & (1u << 5u);
    }

    /**
     * Set UARTIMSC's TXIM bit.
     */
    inline void set_UARTIMSC_TXIM()
    {
        UARTIMSC |= 1u << 5u;
    }

    /**
     * Clear UARTIMSC's TXIM bit.
     */
    inline void clear_UARTIMSC_TXIM()
    {
        UARTIMSC &= ~(1u << 5u);
    }

    /**
     * Toggle UARTIMSC's TXIM bit.
     */
    inline void toggle_UARTIMSC_TXIM()
    {
        UARTIMSC ^= 1u << 5u;
    }

    /**
     * Get UARTIMSC's RTIM bit.
     */
    bool get_UARTIMSC_RTIM()
    {
        return UARTIMSC & (1u << 6u);
    }

    /**
     * Set UARTIMSC's RTIM bit.
     */
    inline void set_UARTIMSC_RTIM()
    {
        UARTIMSC |= 1u << 6u;
    }

    /**
     * Clear UARTIMSC's RTIM bit.
     */
    inline void clear_UARTIMSC_RTIM()
    {
        UARTIMSC &= ~(1u << 6u);
    }

    /**
     * Toggle UARTIMSC's RTIM bit.
     */
    inline void toggle_UARTIMSC_RTIM()
    {
        UARTIMSC ^= 1u << 6u;
    }

    /**
     * Get UARTIMSC's FEIM bit.
     */
    bool get_UARTIMSC_FEIM()
    {
        return UARTIMSC & (1u << 7u);
    }

    /**
     * Set UARTIMSC's FEIM bit.
     */
    inline void set_UARTIMSC_FEIM()
    {
        UARTIMSC |= 1u << 7u;
    }

    /**
     * Clear UARTIMSC's FEIM bit.
     */
    inline void clear_UARTIMSC_FEIM()
    {
        UARTIMSC &= ~(1u << 7u);
    }

    /**
     * Toggle UARTIMSC's FEIM bit.
     */
    inline void toggle_UARTIMSC_FEIM()
    {
        UARTIMSC ^= 1u << 7u;
    }

    /**
     * Get UARTIMSC's PEIM bit.
     */
    bool get_UARTIMSC_PEIM()
    {
        return UARTIMSC & (1u << 8u);
    }

    /**
     * Set UARTIMSC's PEIM bit.
     */
    inline void set_UARTIMSC_PEIM()
    {
        UARTIMSC |= 1u << 8u;
    }

    /**
     * Clear UARTIMSC's PEIM bit.
     */
    inline void clear_UARTIMSC_PEIM()
    {
        UARTIMSC &= ~(1u << 8u);
    }

    /**
     * Toggle UARTIMSC's PEIM bit.
     */
    inline void toggle_UARTIMSC_PEIM()
    {
        UARTIMSC ^= 1u << 8u;
    }

    /**
     * Get UARTIMSC's BEIM bit.
     */
    bool get_UARTIMSC_BEIM()
    {
        return UARTIMSC & (1u << 9u);
    }

    /**
     * Set UARTIMSC's BEIM bit.
     */
    inline void set_UARTIMSC_BEIM()
    {
        UARTIMSC |= 1u << 9u;
    }

    /**
     * Clear UARTIMSC's BEIM bit.
     */
    inline void clear_UARTIMSC_BEIM()
    {
        UARTIMSC &= ~(1u << 9u);
    }

    /**
     * Toggle UARTIMSC's BEIM bit.
     */
    inline void toggle_UARTIMSC_BEIM()
    {
        UARTIMSC ^= 1u << 9u;
    }

    /**
     * Get UARTIMSC's OEIM bit.
     */
    bool get_UARTIMSC_OEIM()
    {
        return UARTIMSC & (1u << 10u);
    }

    /**
     * Set UARTIMSC's OEIM bit.
     */
    inline void set_UARTIMSC_OEIM()
    {
        UARTIMSC |= 1u << 10u;
    }

    /**
     * Clear UARTIMSC's OEIM bit.
     */
    inline void clear_UARTIMSC_OEIM()
    {
        UARTIMSC &= ~(1u << 10u);
    }

    /**
     * Toggle UARTIMSC's OEIM bit.
     */
    inline void toggle_UARTIMSC_OEIM()
    {
        UARTIMSC ^= 1u << 10u;
    }

    /**
     * Get UARTRIS's RIRMIS bit.
     */
    bool get_UARTRIS_RIRMIS()
    {
        return UARTRIS & (1u << 0u);
    }

    /**
     * Get UARTRIS's CTSRMIS bit.
     */
    bool get_UARTRIS_CTSRMIS()
    {
        return UARTRIS & (1u << 1u);
    }

    /**
     * Get UARTRIS's DCDRMIS bit.
     */
    bool get_UARTRIS_DCDRMIS()
    {
        return UARTRIS & (1u << 2u);
    }

    /**
     * Get UARTRIS's DSRRMIS bit.
     */
    bool get_UARTRIS_DSRRMIS()
    {
        return UARTRIS & (1u << 3u);
    }

    /**
     * Get UARTRIS's RXRIS bit.
     */
    bool get_UARTRIS_RXRIS()
    {
        return UARTRIS & (1u << 4u);
    }

    /**
     * Get UARTRIS's TXRIS bit.
     */
    bool get_UARTRIS_TXRIS()
    {
        return UARTRIS & (1u << 5u);
    }

    /**
     * Get UARTRIS's RTRIS bit.
     */
    bool get_UARTRIS_RTRIS()
    {
        return UARTRIS & (1u << 6u);
    }

    /**
     * Get UARTRIS's FERIS bit.
     */
    bool get_UARTRIS_FERIS()
    {
        return UARTRIS & (1u << 7u);
    }

    /**
     * Get UARTRIS's PERIS bit.
     */
    bool get_UARTRIS_PERIS()
    {
        return UARTRIS & (1u << 8u);
    }

    /**
     * Get UARTRIS's BERIS bit.
     */
    bool get_UARTRIS_BERIS()
    {
        return UARTRIS & (1u << 9u);
    }

    /**
     * Get UARTRIS's OERIS bit.
     */
    bool get_UARTRIS_OERIS()
    {
        return UARTRIS & (1u << 10u);
    }

    /**
     * Get UARTMIS's RIMMIS bit.
     */
    bool get_UARTMIS_RIMMIS()
    {
        return UARTMIS & (1u << 0u);
    }

    /**
     * Get UARTMIS's CTSMMIS bit.
     */
    bool get_UARTMIS_CTSMMIS()
    {
        return UARTMIS & (1u << 1u);
    }

    /**
     * Get UARTMIS's DCDMMIS bit.
     */
    bool get_UARTMIS_DCDMMIS()
    {
        return UARTMIS & (1u << 2u);
    }

    /**
     * Get UARTMIS's DSRMMIS bit.
     */
    bool get_UARTMIS_DSRMMIS()
    {
        return UARTMIS & (1u << 3u);
    }

    /**
     * Get UARTMIS's RXMIS bit.
     */
    bool get_UARTMIS_RXMIS()
    {
        return UARTMIS & (1u << 4u);
    }

    /**
     * Get UARTMIS's TXMIS bit.
     */
    bool get_UARTMIS_TXMIS()
    {
        return UARTMIS & (1u << 5u);
    }

    /**
     * Get UARTMIS's RTMIS bit.
     */
    bool get_UARTMIS_RTMIS()
    {
        return UARTMIS & (1u << 6u);
    }

    /**
     * Get UARTMIS's FEMIS bit.
     */
    bool get_UARTMIS_FEMIS()
    {
        return UARTMIS & (1u << 7u);
    }

    /**
     * Get UARTMIS's PEMIS bit.
     */
    bool get_UARTMIS_PEMIS()
    {
        return UARTMIS & (1u << 8u);
    }

    /**
     * Get UARTMIS's BEMIS bit.
     */
    bool get_UARTMIS_BEMIS()
    {
        return UARTMIS & (1u << 9u);
    }

    /**
     * Get UARTMIS's OEMIS bit.
     */
    bool get_UARTMIS_OEMIS()
    {
        return UARTMIS & (1u << 10u);
    }

    /**
     * Get UARTICR's RIMIC bit.
     */
    bool get_UARTICR_RIMIC()
    {
        return UARTICR & (1u << 0u);
    }

    /**
     * Set UARTICR's RIMIC bit.
     */
    inline void set_UARTICR_RIMIC()
    {
        UARTICR |= 1u << 0u;
    }

    /**
     * Clear UARTICR's RIMIC bit.
     */
    inline void clear_UARTICR_RIMIC()
    {
        UARTICR &= ~(1u << 0u);
    }

    /**
     * Toggle UARTICR's RIMIC bit.
     */
    inline void toggle_UARTICR_RIMIC()
    {
        UARTICR ^= 1u << 0u;
    }

    /**
     * Get UARTICR's CTSMIC bit.
     */
    bool get_UARTICR_CTSMIC()
    {
        return UARTICR & (1u << 1u);
    }

    /**
     * Set UARTICR's CTSMIC bit.
     */
    inline void set_UARTICR_CTSMIC()
    {
        UARTICR |= 1u << 1u;
    }

    /**
     * Clear UARTICR's CTSMIC bit.
     */
    inline void clear_UARTICR_CTSMIC()
    {
        UARTICR &= ~(1u << 1u);
    }

    /**
     * Toggle UARTICR's CTSMIC bit.
     */
    inline void toggle_UARTICR_CTSMIC()
    {
        UARTICR ^= 1u << 1u;
    }

    /**
     * Get UARTICR's DCDMIC bit.
     */
    bool get_UARTICR_DCDMIC()
    {
        return UARTICR & (1u << 2u);
    }

    /**
     * Set UARTICR's DCDMIC bit.
     */
    inline void set_UARTICR_DCDMIC()
    {
        UARTICR |= 1u << 2u;
    }

    /**
     * Clear UARTICR's DCDMIC bit.
     */
    inline void clear_UARTICR_DCDMIC()
    {
        UARTICR &= ~(1u << 2u);
    }

    /**
     * Toggle UARTICR's DCDMIC bit.
     */
    inline void toggle_UARTICR_DCDMIC()
    {
        UARTICR ^= 1u << 2u;
    }

    /**
     * Get UARTICR's DSRMIC bit.
     */
    bool get_UARTICR_DSRMIC()
    {
        return UARTICR & (1u << 3u);
    }

    /**
     * Set UARTICR's DSRMIC bit.
     */
    inline void set_UARTICR_DSRMIC()
    {
        UARTICR |= 1u << 3u;
    }

    /**
     * Clear UARTICR's DSRMIC bit.
     */
    inline void clear_UARTICR_DSRMIC()
    {
        UARTICR &= ~(1u << 3u);
    }

    /**
     * Toggle UARTICR's DSRMIC bit.
     */
    inline void toggle_UARTICR_DSRMIC()
    {
        UARTICR ^= 1u << 3u;
    }

    /**
     * Get UARTICR's RXIC bit.
     */
    bool get_UARTICR_RXIC()
    {
        return UARTICR & (1u << 4u);
    }

    /**
     * Set UARTICR's RXIC bit.
     */
    inline void set_UARTICR_RXIC()
    {
        UARTICR |= 1u << 4u;
    }

    /**
     * Clear UARTICR's RXIC bit.
     */
    inline void clear_UARTICR_RXIC()
    {
        UARTICR &= ~(1u << 4u);
    }

    /**
     * Toggle UARTICR's RXIC bit.
     */
    inline void toggle_UARTICR_RXIC()
    {
        UARTICR ^= 1u << 4u;
    }

    /**
     * Get UARTICR's TXIC bit.
     */
    bool get_UARTICR_TXIC()
    {
        return UARTICR & (1u << 5u);
    }

    /**
     * Set UARTICR's TXIC bit.
     */
    inline void set_UARTICR_TXIC()
    {
        UARTICR |= 1u << 5u;
    }

    /**
     * Clear UARTICR's TXIC bit.
     */
    inline void clear_UARTICR_TXIC()
    {
        UARTICR &= ~(1u << 5u);
    }

    /**
     * Toggle UARTICR's TXIC bit.
     */
    inline void toggle_UARTICR_TXIC()
    {
        UARTICR ^= 1u << 5u;
    }

    /**
     * Get UARTICR's RTIC bit.
     */
    bool get_UARTICR_RTIC()
    {
        return UARTICR & (1u << 6u);
    }

    /**
     * Set UARTICR's RTIC bit.
     */
    inline void set_UARTICR_RTIC()
    {
        UARTICR |= 1u << 6u;
    }

    /**
     * Clear UARTICR's RTIC bit.
     */
    inline void clear_UARTICR_RTIC()
    {
        UARTICR &= ~(1u << 6u);
    }

    /**
     * Toggle UARTICR's RTIC bit.
     */
    inline void toggle_UARTICR_RTIC()
    {
        UARTICR ^= 1u << 6u;
    }

    /**
     * Get UARTICR's FEIC bit.
     */
    bool get_UARTICR_FEIC()
    {
        return UARTICR & (1u << 7u);
    }

    /**
     * Set UARTICR's FEIC bit.
     */
    inline void set_UARTICR_FEIC()
    {
        UARTICR |= 1u << 7u;
    }

    /**
     * Clear UARTICR's FEIC bit.
     */
    inline void clear_UARTICR_FEIC()
    {
        UARTICR &= ~(1u << 7u);
    }

    /**
     * Toggle UARTICR's FEIC bit.
     */
    inline void toggle_UARTICR_FEIC()
    {
        UARTICR ^= 1u << 7u;
    }

    /**
     * Get UARTICR's PEIC bit.
     */
    bool get_UARTICR_PEIC()
    {
        return UARTICR & (1u << 8u);
    }

    /**
     * Set UARTICR's PEIC bit.
     */
    inline void set_UARTICR_PEIC()
    {
        UARTICR |= 1u << 8u;
    }

    /**
     * Clear UARTICR's PEIC bit.
     */
    inline void clear_UARTICR_PEIC()
    {
        UARTICR &= ~(1u << 8u);
    }

    /**
     * Toggle UARTICR's PEIC bit.
     */
    inline void toggle_UARTICR_PEIC()
    {
        UARTICR ^= 1u << 8u;
    }

    /**
     * Get UARTICR's BEIC bit.
     */
    bool get_UARTICR_BEIC()
    {
        return UARTICR & (1u << 9u);
    }

    /**
     * Set UARTICR's BEIC bit.
     */
    inline void set_UARTICR_BEIC()
    {
        UARTICR |= 1u << 9u;
    }

    /**
     * Clear UARTICR's BEIC bit.
     */
    inline void clear_UARTICR_BEIC()
    {
        UARTICR &= ~(1u << 9u);
    }

    /**
     * Toggle UARTICR's BEIC bit.
     */
    inline void toggle_UARTICR_BEIC()
    {
        UARTICR ^= 1u << 9u;
    }

    /**
     * Get UARTICR's OEIC bit.
     */
    bool get_UARTICR_OEIC()
    {
        return UARTICR & (1u << 10u);
    }

    /**
     * Set UARTICR's OEIC bit.
     */
    inline void set_UARTICR_OEIC()
    {
        UARTICR |= 1u << 10u;
    }

    /**
     * Clear UARTICR's OEIC bit.
     */
    inline void clear_UARTICR_OEIC()
    {
        UARTICR &= ~(1u << 10u);
    }

    /**
     * Toggle UARTICR's OEIC bit.
     */
    inline void toggle_UARTICR_OEIC()
    {
        UARTICR ^= 1u << 10u;
    }

    /**
     * Get UARTDMACR's RXDMAE bit.
     */
    bool get_UARTDMACR_RXDMAE()
    {
        return UARTDMACR & (1u << 0u);
    }

    /**
     * Set UARTDMACR's RXDMAE bit.
     */
    inline void set_UARTDMACR_RXDMAE()
    {
        UARTDMACR |= 1u << 0u;
    }

    /**
     * Clear UARTDMACR's RXDMAE bit.
     */
    inline void clear_UARTDMACR_RXDMAE()
    {
        UARTDMACR &= ~(1u << 0u);
    }

    /**
     * Toggle UARTDMACR's RXDMAE bit.
     */
    inline void toggle_UARTDMACR_RXDMAE()
    {
        UARTDMACR ^= 1u << 0u;
    }

    /**
     * Get UARTDMACR's TXDMAE bit.
     */
    bool get_UARTDMACR_TXDMAE()
    {
        return UARTDMACR & (1u << 1u);
    }

    /**
     * Set UARTDMACR's TXDMAE bit.
     */
    inline void set_UARTDMACR_TXDMAE()
    {
        UARTDMACR |= 1u << 1u;
    }

    /**
     * Clear UARTDMACR's TXDMAE bit.
     */
    inline void clear_UARTDMACR_TXDMAE()
    {
        UARTDMACR &= ~(1u << 1u);
    }

    /**
     * Toggle UARTDMACR's TXDMAE bit.
     */
    inline void toggle_UARTDMACR_TXDMAE()
    {
        UARTDMACR ^= 1u << 1u;
    }

    /**
     * Get UARTDMACR's DMAONERR bit.
     */
    bool get_UARTDMACR_DMAONERR()
    {
        return UARTDMACR & (1u << 2u);
    }

    /**
     * Set UARTDMACR's DMAONERR bit.
     */
    inline void set_UARTDMACR_DMAONERR()
    {
        UARTDMACR |= 1u << 2u;
    }

    /**
     * Clear UARTDMACR's DMAONERR bit.
     */
    inline void clear_UARTDMACR_DMAONERR()
    {
        UARTDMACR &= ~(1u << 2u);
    }

    /**
     * Toggle UARTDMACR's DMAONERR bit.
     */
    inline void toggle_UARTDMACR_DMAONERR()
    {
        UARTDMACR ^= 1u << 2u;
    }

    /**
     * Get UARTPERIPHID0's PARTNUMBER0 field.
     */
    uint8_t get_UARTPERIPHID0_PARTNUMBER0()
    {
        return (UARTPERIPHID0 >> 0u) & 0b11111111u;
    }

    /**
     * Get UARTPERIPHID1's PARTNUMBER1 field.
     */
    uint8_t get_UARTPERIPHID1_PARTNUMBER1()
    {
        return (UARTPERIPHID1 >> 0u) & 0b1111u;
    }

    /**
     * Get UARTPERIPHID1's DESIGNER0 field.
     */
    uint8_t get_UARTPERIPHID1_DESIGNER0()
    {
        return (UARTPERIPHID1 >> 4u) & 0b1111u;
    }

    /**
     * Get UARTPERIPHID2's DESIGNER1 field.
     */
    uint8_t get_UARTPERIPHID2_DESIGNER1()
    {
        return (UARTPERIPHID2 >> 0u) & 0b1111u;
    }

    /**
     * Get UARTPERIPHID2's REVISION field.
     */
    uint8_t get_UARTPERIPHID2_REVISION()
    {
        return (UARTPERIPHID2 >> 4u) & 0b1111u;
    }

    /**
     * Get UARTPERIPHID3's CONFIGURATION field.
     */
    uint8_t get_UARTPERIPHID3_CONFIGURATION()
    {
        return (UARTPERIPHID3 >> 0u) & 0b11111111u;
    }

    /**
     * Get UARTPCELLID0's UARTPCELLID0 field.
     */
    uint8_t get_UARTPCELLID0_UARTPCELLID0()
    {
        return (UARTPCELLID0 >> 0u) & 0b11111111u;
    }

    /**
     * Get UARTPCELLID1's UARTPCELLID1 field.
     */
    uint8_t get_UARTPCELLID1_UARTPCELLID1()
    {
        return (UARTPCELLID1 >> 0u) & 0b11111111u;
    }

    /**
     * Get UARTPCELLID2's UARTPCELLID2 field.
     */
    uint8_t get_UARTPCELLID2_UARTPCELLID2()
    {
        return (UARTPCELLID2 >> 0u) & 0b11111111u;
    }

    /**
     * Get UARTPCELLID3's UARTPCELLID3 field.
     */
    uint8_t get_UARTPCELLID3_UARTPCELLID3()
    {
        return (UARTPCELLID3 >> 0u) & 0b11111111u;
    }
};

static_assert(sizeof(uart) == uart::size);

static volatile uart *const UART0 = reinterpret_cast<uart *>(0x40034000);

static volatile uart *const UART1 = reinterpret_cast<uart *>(0x40038000);

}; // namespace RP2040

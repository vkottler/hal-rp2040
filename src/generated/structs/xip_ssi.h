/**
 * \file
 * \brief Generated by ifgen (2.6.3).
 */
#pragma once

#include "../enums/XIP_SSI_CTRLR0_SPI_FRF.h"
#include "../enums/XIP_SSI_CTRLR0_TMOD.h"
#include "../enums/XIP_SSI_SPI_CTRLR0_INST_L.h"
#include "../enums/XIP_SSI_SPI_CTRLR0_TRANS_TYPE.h"
#include "../ifgen/common.h"

namespace RP2040
{

/**
 * DW_apb_ssi has the following features:\n
 *         * APB interface - Allows for easy integration into a DesignWare
 * Synthesizable Components for AMBA 2 implementation.\n
 *         * APB3 and APB4 protocol support.\n
 *         * Scalable APB data bus width - Supports APB data bus widths of 8,
 * 16, and 32 bits.\n
 *         * Serial-master or serial-slave operation - Enables serial
 * communication with serial-master or serial-slave peripheral devices.\n
 *         * Programmable Dual/Quad/Octal SPI support in Master Mode.\n
 *         * Dual Data Rate (DDR) and Read Data Strobe (RDS) Support - Enables
 * the DW_apb_ssi master to perform operations with the device in DDR and RDS
 * modes when working in Dual/Quad/Octal mode of operation.\n
 *         * Data Mask Support - Enables the DW_apb_ssi to selectively update
 * the bytes in the device. This feature is applicable only in enhanced SPI
 * modes.\n
 *         * eXecute-In-Place (XIP) support - Enables the DW_apb_ssi master to
 * behave as a memory mapped I/O and fetches the data from the device based on
 * the APB read request. This feature is applicable only in enhanced SPI
 * modes.\n
 *         * DMA Controller Interface - Enables the DW_apb_ssi to interface to
 * a DMA controller over the bus using a handshaking interface for transfer
 * requests.\n
 *         * Independent masking of interrupts - Master collision, transmit
 * FIFO overflow, transmit FIFO empty, receive FIFO full, receive FIFO
 * underflow, and receive FIFO overflow interrupts can all be masked
 * independently.\n
 *         * Multi-master contention detection - Informs the processor of
 * multiple serial-master accesses on the serial bus.\n
 *         * Bypass of meta-stability flip-flops for synchronous clocks - When
 * the APB clock (pclk) and the DW_apb_ssi serial clock (ssi_clk) are
 * synchronous, meta-stable flip-flops are not used when transferring control
 * signals across these clock domains.\n
 *         * Programmable delay on the sample time of the received serial data
 * bit (rxd); enables programmable control of routing delays resulting in
 * higher serial data-bit rates.\n
 *         * Programmable features:\n
 *         - Serial interface operation - Choice of Motorola SPI, Texas
 * Instruments Synchronous Serial Protocol or National Semiconductor
 * Microwire.\n
 *         - Clock bit-rate - Dynamic control of the serial bit rate of the
 * data transfer; used in only serial-master mode of operation.\n
 *         - Data Item size (4 to 32 bits) - Item size of each data transfer
 * under the control of the programmer.\n
 *         * Configured features:\n
 *         - FIFO depth - 16 words deep. The FIFO width is fixed at 32 bits.\n
 *         - 1 slave select output.\n
 *         - Hardware slave-select - Dedicated hardware slave-select line.\n
 *         - Combined interrupt line - one combined interrupt line from the
 * DW_apb_ssi to the interrupt controller.\n
 *         - Interrupt polarity - active high interrupt lines.\n
 *         - Serial clock polarity - low serial-clock polarity directly after
 * reset.\n
 *         - Serial clock phase - capture on first edge of serial-clock
 * directly after reset.
 */
struct [[gnu::packed]] xip_ssi
{
    /* Constant attributes. */
    static constexpr uint16_t id = 1;        /*!< xip_ssi's identifier. */
    static constexpr std::size_t size = 252; /*!< xip_ssi's size in bytes. */

    /* Fields. */
    uint32_t CTRLR0;           /*!< (read-write) Control register 0 */
    uint32_t CTRLR1;           /*!< (read-write) Master Control register 1 */
    uint32_t SSIENR;           /*!< (read-write) SSI Enable */
    uint32_t MWCR;             /*!< (read-write) Microwire Control */
    uint32_t SER;              /*!< (read-write) Slave enable */
    uint32_t BAUDR;            /*!< (read-write) Baud rate */
    uint32_t TXFTLR;           /*!< (read-write) TX FIFO threshold level */
    uint32_t RXFTLR;           /*!< (read-write) RX FIFO threshold level */
    const uint32_t TXFLR = {}; /*!< (read-only) TX FIFO level */
    const uint32_t RXFLR = {}; /*!< (read-only) RX FIFO level */
    const uint32_t SR = {};    /*!< (read-only) Status register */
    uint32_t IMR;              /*!< (read-write) Interrupt mask */
    const uint32_t ISR = {};   /*!< (read-only) Interrupt status */
    const uint32_t RISR = {};  /*!< (read-only) Raw interrupt status */
    const uint32_t TXOICR =
        {}; /*!< (read-only) TX FIFO overflow interrupt clear */
    const uint32_t RXOICR =
        {}; /*!< (read-only) RX FIFO overflow interrupt clear */
    const uint32_t RXUICR =
        {}; /*!< (read-only) RX FIFO underflow interrupt clear */
    const uint32_t MSTICR =
        {};                  /*!< (read-only) Multi-master interrupt clear */
    const uint32_t ICR = {}; /*!< (read-only) Interrupt clear */
    uint32_t DMACR;          /*!< (read-write) DMA control */
    uint32_t DMATDLR;        /*!< (read-write) DMA TX data level */
    uint32_t DMARDLR;        /*!< (read-write) DMA RX data level */
    const uint32_t IDR = {}; /*!< (read-only) Identification register */
    const uint32_t SSI_VERSION_ID = {}; /*!< (read-only) Version ID */
    uint32_t DR0; /*!< (read-write) Data Register 0 (of 36) */
    static constexpr std::size_t reserved_padding0_length = 35;
    const uint32_t reserved_padding0[reserved_padding0_length] = {};
    uint32_t RX_SAMPLE_DLY;  /*!< (read-write) RX sample delay */
    uint32_t SPI_CTRLR0;     /*!< (read-write) SPI control */
    uint32_t TXD_DRIVE_EDGE; /*!< (read-write) TX drive edge */

    /* Methods. */

    /**
     * Get CTRLR0's DFS field.
     */
    uint8_t get_CTRLR0_DFS()
    {
        return (CTRLR0 >> 0u) & 0b1111u;
    }

    /**
     * Set CTRLR0's DFS field.
     */
    inline void set_CTRLR0_DFS(uint8_t value)
    {
        uint32_t curr = CTRLR0;

        curr &= ~(0b1111u << 0u);
        curr |= (value & 0b1111u) << 0u;

        CTRLR0 = curr;
    }

    /**
     * Get CTRLR0's FRF field.
     */
    uint8_t get_CTRLR0_FRF()
    {
        return (CTRLR0 >> 4u) & 0b11u;
    }

    /**
     * Set CTRLR0's FRF field.
     */
    inline void set_CTRLR0_FRF(uint8_t value)
    {
        uint32_t curr = CTRLR0;

        curr &= ~(0b11u << 4u);
        curr |= (value & 0b11u) << 4u;

        CTRLR0 = curr;
    }

    /**
     * Get CTRLR0's SCPH bit.
     */
    bool get_CTRLR0_SCPH()
    {
        return CTRLR0 & (1u << 6u);
    }

    /**
     * Set CTRLR0's SCPH bit.
     */
    inline void set_CTRLR0_SCPH()
    {
        CTRLR0 |= 1u << 6u;
    }

    /**
     * Clear CTRLR0's SCPH bit.
     */
    inline void clear_CTRLR0_SCPH()
    {
        CTRLR0 &= ~(1u << 6u);
    }

    /**
     * Toggle CTRLR0's SCPH bit.
     */
    inline void toggle_CTRLR0_SCPH()
    {
        CTRLR0 ^= 1u << 6u;
    }

    /**
     * Get CTRLR0's SCPOL bit.
     */
    bool get_CTRLR0_SCPOL()
    {
        return CTRLR0 & (1u << 7u);
    }

    /**
     * Set CTRLR0's SCPOL bit.
     */
    inline void set_CTRLR0_SCPOL()
    {
        CTRLR0 |= 1u << 7u;
    }

    /**
     * Clear CTRLR0's SCPOL bit.
     */
    inline void clear_CTRLR0_SCPOL()
    {
        CTRLR0 &= ~(1u << 7u);
    }

    /**
     * Toggle CTRLR0's SCPOL bit.
     */
    inline void toggle_CTRLR0_SCPOL()
    {
        CTRLR0 ^= 1u << 7u;
    }

    /**
     * Get CTRLR0's TMOD field.
     */
    XIP_SSI_CTRLR0_TMOD get_CTRLR0_TMOD()
    {
        return XIP_SSI_CTRLR0_TMOD((CTRLR0 >> 8u) & 0b11u);
    }

    /**
     * Set CTRLR0's TMOD field.
     */
    inline void set_CTRLR0_TMOD(XIP_SSI_CTRLR0_TMOD value)
    {
        uint32_t curr = CTRLR0;

        curr &= ~(0b11u << 8u);
        curr |= (std::to_underlying(value) & 0b11u) << 8u;

        CTRLR0 = curr;
    }

    /**
     * Get CTRLR0's SLV_OE bit.
     */
    bool get_CTRLR0_SLV_OE()
    {
        return CTRLR0 & (1u << 10u);
    }

    /**
     * Set CTRLR0's SLV_OE bit.
     */
    inline void set_CTRLR0_SLV_OE()
    {
        CTRLR0 |= 1u << 10u;
    }

    /**
     * Clear CTRLR0's SLV_OE bit.
     */
    inline void clear_CTRLR0_SLV_OE()
    {
        CTRLR0 &= ~(1u << 10u);
    }

    /**
     * Toggle CTRLR0's SLV_OE bit.
     */
    inline void toggle_CTRLR0_SLV_OE()
    {
        CTRLR0 ^= 1u << 10u;
    }

    /**
     * Get CTRLR0's SRL bit.
     */
    bool get_CTRLR0_SRL()
    {
        return CTRLR0 & (1u << 11u);
    }

    /**
     * Set CTRLR0's SRL bit.
     */
    inline void set_CTRLR0_SRL()
    {
        CTRLR0 |= 1u << 11u;
    }

    /**
     * Clear CTRLR0's SRL bit.
     */
    inline void clear_CTRLR0_SRL()
    {
        CTRLR0 &= ~(1u << 11u);
    }

    /**
     * Toggle CTRLR0's SRL bit.
     */
    inline void toggle_CTRLR0_SRL()
    {
        CTRLR0 ^= 1u << 11u;
    }

    /**
     * Get CTRLR0's CFS field.
     */
    uint8_t get_CTRLR0_CFS()
    {
        return (CTRLR0 >> 12u) & 0b1111u;
    }

    /**
     * Set CTRLR0's CFS field.
     */
    inline void set_CTRLR0_CFS(uint8_t value)
    {
        uint32_t curr = CTRLR0;

        curr &= ~(0b1111u << 12u);
        curr |= (value & 0b1111u) << 12u;

        CTRLR0 = curr;
    }

    /**
     * Get CTRLR0's DFS_32 field.
     */
    uint8_t get_CTRLR0_DFS_32()
    {
        return (CTRLR0 >> 16u) & 0b11111u;
    }

    /**
     * Set CTRLR0's DFS_32 field.
     */
    inline void set_CTRLR0_DFS_32(uint8_t value)
    {
        uint32_t curr = CTRLR0;

        curr &= ~(0b11111u << 16u);
        curr |= (value & 0b11111u) << 16u;

        CTRLR0 = curr;
    }

    /**
     * Get CTRLR0's SPI_FRF field.
     */
    XIP_SSI_CTRLR0_SPI_FRF get_CTRLR0_SPI_FRF()
    {
        return XIP_SSI_CTRLR0_SPI_FRF((CTRLR0 >> 21u) & 0b11u);
    }

    /**
     * Set CTRLR0's SPI_FRF field.
     */
    inline void set_CTRLR0_SPI_FRF(XIP_SSI_CTRLR0_SPI_FRF value)
    {
        uint32_t curr = CTRLR0;

        curr &= ~(0b11u << 21u);
        curr |= (std::to_underlying(value) & 0b11u) << 21u;

        CTRLR0 = curr;
    }

    /**
     * Get CTRLR0's SSTE bit.
     */
    bool get_CTRLR0_SSTE()
    {
        return CTRLR0 & (1u << 24u);
    }

    /**
     * Set CTRLR0's SSTE bit.
     */
    inline void set_CTRLR0_SSTE()
    {
        CTRLR0 |= 1u << 24u;
    }

    /**
     * Clear CTRLR0's SSTE bit.
     */
    inline void clear_CTRLR0_SSTE()
    {
        CTRLR0 &= ~(1u << 24u);
    }

    /**
     * Toggle CTRLR0's SSTE bit.
     */
    inline void toggle_CTRLR0_SSTE()
    {
        CTRLR0 ^= 1u << 24u;
    }

    /**
     * Get CTRLR1's NDF field.
     */
    uint16_t get_CTRLR1_NDF()
    {
        return (CTRLR1 >> 0u) & 0b1111111111111111u;
    }

    /**
     * Set CTRLR1's NDF field.
     */
    inline void set_CTRLR1_NDF(uint16_t value)
    {
        uint32_t curr = CTRLR1;

        curr &= ~(0b1111111111111111u << 0u);
        curr |= (value & 0b1111111111111111u) << 0u;

        CTRLR1 = curr;
    }

    /**
     * Get SSIENR's SSI_EN bit.
     */
    bool get_SSIENR_SSI_EN()
    {
        return SSIENR & (1u << 0u);
    }

    /**
     * Set SSIENR's SSI_EN bit.
     */
    inline void set_SSIENR_SSI_EN()
    {
        SSIENR |= 1u << 0u;
    }

    /**
     * Clear SSIENR's SSI_EN bit.
     */
    inline void clear_SSIENR_SSI_EN()
    {
        SSIENR &= ~(1u << 0u);
    }

    /**
     * Toggle SSIENR's SSI_EN bit.
     */
    inline void toggle_SSIENR_SSI_EN()
    {
        SSIENR ^= 1u << 0u;
    }

    /**
     * Get MWCR's MWMOD bit.
     */
    bool get_MWCR_MWMOD()
    {
        return MWCR & (1u << 0u);
    }

    /**
     * Set MWCR's MWMOD bit.
     */
    inline void set_MWCR_MWMOD()
    {
        MWCR |= 1u << 0u;
    }

    /**
     * Clear MWCR's MWMOD bit.
     */
    inline void clear_MWCR_MWMOD()
    {
        MWCR &= ~(1u << 0u);
    }

    /**
     * Toggle MWCR's MWMOD bit.
     */
    inline void toggle_MWCR_MWMOD()
    {
        MWCR ^= 1u << 0u;
    }

    /**
     * Get MWCR's MDD bit.
     */
    bool get_MWCR_MDD()
    {
        return MWCR & (1u << 1u);
    }

    /**
     * Set MWCR's MDD bit.
     */
    inline void set_MWCR_MDD()
    {
        MWCR |= 1u << 1u;
    }

    /**
     * Clear MWCR's MDD bit.
     */
    inline void clear_MWCR_MDD()
    {
        MWCR &= ~(1u << 1u);
    }

    /**
     * Toggle MWCR's MDD bit.
     */
    inline void toggle_MWCR_MDD()
    {
        MWCR ^= 1u << 1u;
    }

    /**
     * Get MWCR's MHS bit.
     */
    bool get_MWCR_MHS()
    {
        return MWCR & (1u << 2u);
    }

    /**
     * Set MWCR's MHS bit.
     */
    inline void set_MWCR_MHS()
    {
        MWCR |= 1u << 2u;
    }

    /**
     * Clear MWCR's MHS bit.
     */
    inline void clear_MWCR_MHS()
    {
        MWCR &= ~(1u << 2u);
    }

    /**
     * Toggle MWCR's MHS bit.
     */
    inline void toggle_MWCR_MHS()
    {
        MWCR ^= 1u << 2u;
    }

    /**
     * Get SER's SER bit.
     */
    bool get_SER_SER()
    {
        return SER & (1u << 0u);
    }

    /**
     * Set SER's SER bit.
     */
    inline void set_SER_SER()
    {
        SER |= 1u << 0u;
    }

    /**
     * Clear SER's SER bit.
     */
    inline void clear_SER_SER()
    {
        SER &= ~(1u << 0u);
    }

    /**
     * Toggle SER's SER bit.
     */
    inline void toggle_SER_SER()
    {
        SER ^= 1u << 0u;
    }

    /**
     * Get BAUDR's SCKDV field.
     */
    uint16_t get_BAUDR_SCKDV()
    {
        return (BAUDR >> 0u) & 0b1111111111111111u;
    }

    /**
     * Set BAUDR's SCKDV field.
     */
    inline void set_BAUDR_SCKDV(uint16_t value)
    {
        uint32_t curr = BAUDR;

        curr &= ~(0b1111111111111111u << 0u);
        curr |= (value & 0b1111111111111111u) << 0u;

        BAUDR = curr;
    }

    /**
     * Get TXFTLR's TFT field.
     */
    uint8_t get_TXFTLR_TFT()
    {
        return (TXFTLR >> 0u) & 0b11111111u;
    }

    /**
     * Set TXFTLR's TFT field.
     */
    inline void set_TXFTLR_TFT(uint8_t value)
    {
        uint32_t curr = TXFTLR;

        curr &= ~(0b11111111u << 0u);
        curr |= (value & 0b11111111u) << 0u;

        TXFTLR = curr;
    }

    /**
     * Get RXFTLR's RFT field.
     */
    uint8_t get_RXFTLR_RFT()
    {
        return (RXFTLR >> 0u) & 0b11111111u;
    }

    /**
     * Set RXFTLR's RFT field.
     */
    inline void set_RXFTLR_RFT(uint8_t value)
    {
        uint32_t curr = RXFTLR;

        curr &= ~(0b11111111u << 0u);
        curr |= (value & 0b11111111u) << 0u;

        RXFTLR = curr;
    }

    /**
     * Get TXFLR's TFTFL field.
     */
    uint8_t get_TXFLR_TFTFL()
    {
        return (TXFLR >> 0u) & 0b11111111u;
    }

    /**
     * Get RXFLR's RXTFL field.
     */
    uint8_t get_RXFLR_RXTFL()
    {
        return (RXFLR >> 0u) & 0b11111111u;
    }

    /**
     * Get SR's BUSY bit.
     */
    bool get_SR_BUSY()
    {
        return SR & (1u << 0u);
    }

    /**
     * Get SR's TFNF bit.
     */
    bool get_SR_TFNF()
    {
        return SR & (1u << 1u);
    }

    /**
     * Get SR's TFE bit.
     */
    bool get_SR_TFE()
    {
        return SR & (1u << 2u);
    }

    /**
     * Get SR's RFNE bit.
     */
    bool get_SR_RFNE()
    {
        return SR & (1u << 3u);
    }

    /**
     * Get SR's RFF bit.
     */
    bool get_SR_RFF()
    {
        return SR & (1u << 4u);
    }

    /**
     * Get SR's TXE bit.
     */
    bool get_SR_TXE()
    {
        return SR & (1u << 5u);
    }

    /**
     * Get SR's DCOL bit.
     */
    bool get_SR_DCOL()
    {
        return SR & (1u << 6u);
    }

    /**
     * Get IMR's TXEIM bit.
     */
    bool get_IMR_TXEIM()
    {
        return IMR & (1u << 0u);
    }

    /**
     * Set IMR's TXEIM bit.
     */
    inline void set_IMR_TXEIM()
    {
        IMR |= 1u << 0u;
    }

    /**
     * Clear IMR's TXEIM bit.
     */
    inline void clear_IMR_TXEIM()
    {
        IMR &= ~(1u << 0u);
    }

    /**
     * Toggle IMR's TXEIM bit.
     */
    inline void toggle_IMR_TXEIM()
    {
        IMR ^= 1u << 0u;
    }

    /**
     * Get IMR's TXOIM bit.
     */
    bool get_IMR_TXOIM()
    {
        return IMR & (1u << 1u);
    }

    /**
     * Set IMR's TXOIM bit.
     */
    inline void set_IMR_TXOIM()
    {
        IMR |= 1u << 1u;
    }

    /**
     * Clear IMR's TXOIM bit.
     */
    inline void clear_IMR_TXOIM()
    {
        IMR &= ~(1u << 1u);
    }

    /**
     * Toggle IMR's TXOIM bit.
     */
    inline void toggle_IMR_TXOIM()
    {
        IMR ^= 1u << 1u;
    }

    /**
     * Get IMR's RXUIM bit.
     */
    bool get_IMR_RXUIM()
    {
        return IMR & (1u << 2u);
    }

    /**
     * Set IMR's RXUIM bit.
     */
    inline void set_IMR_RXUIM()
    {
        IMR |= 1u << 2u;
    }

    /**
     * Clear IMR's RXUIM bit.
     */
    inline void clear_IMR_RXUIM()
    {
        IMR &= ~(1u << 2u);
    }

    /**
     * Toggle IMR's RXUIM bit.
     */
    inline void toggle_IMR_RXUIM()
    {
        IMR ^= 1u << 2u;
    }

    /**
     * Get IMR's RXOIM bit.
     */
    bool get_IMR_RXOIM()
    {
        return IMR & (1u << 3u);
    }

    /**
     * Set IMR's RXOIM bit.
     */
    inline void set_IMR_RXOIM()
    {
        IMR |= 1u << 3u;
    }

    /**
     * Clear IMR's RXOIM bit.
     */
    inline void clear_IMR_RXOIM()
    {
        IMR &= ~(1u << 3u);
    }

    /**
     * Toggle IMR's RXOIM bit.
     */
    inline void toggle_IMR_RXOIM()
    {
        IMR ^= 1u << 3u;
    }

    /**
     * Get IMR's RXFIM bit.
     */
    bool get_IMR_RXFIM()
    {
        return IMR & (1u << 4u);
    }

    /**
     * Set IMR's RXFIM bit.
     */
    inline void set_IMR_RXFIM()
    {
        IMR |= 1u << 4u;
    }

    /**
     * Clear IMR's RXFIM bit.
     */
    inline void clear_IMR_RXFIM()
    {
        IMR &= ~(1u << 4u);
    }

    /**
     * Toggle IMR's RXFIM bit.
     */
    inline void toggle_IMR_RXFIM()
    {
        IMR ^= 1u << 4u;
    }

    /**
     * Get IMR's MSTIM bit.
     */
    bool get_IMR_MSTIM()
    {
        return IMR & (1u << 5u);
    }

    /**
     * Set IMR's MSTIM bit.
     */
    inline void set_IMR_MSTIM()
    {
        IMR |= 1u << 5u;
    }

    /**
     * Clear IMR's MSTIM bit.
     */
    inline void clear_IMR_MSTIM()
    {
        IMR &= ~(1u << 5u);
    }

    /**
     * Toggle IMR's MSTIM bit.
     */
    inline void toggle_IMR_MSTIM()
    {
        IMR ^= 1u << 5u;
    }

    /**
     * Get ISR's TXEIS bit.
     */
    bool get_ISR_TXEIS()
    {
        return ISR & (1u << 0u);
    }

    /**
     * Get ISR's TXOIS bit.
     */
    bool get_ISR_TXOIS()
    {
        return ISR & (1u << 1u);
    }

    /**
     * Get ISR's RXUIS bit.
     */
    bool get_ISR_RXUIS()
    {
        return ISR & (1u << 2u);
    }

    /**
     * Get ISR's RXOIS bit.
     */
    bool get_ISR_RXOIS()
    {
        return ISR & (1u << 3u);
    }

    /**
     * Get ISR's RXFIS bit.
     */
    bool get_ISR_RXFIS()
    {
        return ISR & (1u << 4u);
    }

    /**
     * Get ISR's MSTIS bit.
     */
    bool get_ISR_MSTIS()
    {
        return ISR & (1u << 5u);
    }

    /**
     * Get RISR's TXEIR bit.
     */
    bool get_RISR_TXEIR()
    {
        return RISR & (1u << 0u);
    }

    /**
     * Get RISR's TXOIR bit.
     */
    bool get_RISR_TXOIR()
    {
        return RISR & (1u << 1u);
    }

    /**
     * Get RISR's RXUIR bit.
     */
    bool get_RISR_RXUIR()
    {
        return RISR & (1u << 2u);
    }

    /**
     * Get RISR's RXOIR bit.
     */
    bool get_RISR_RXOIR()
    {
        return RISR & (1u << 3u);
    }

    /**
     * Get RISR's RXFIR bit.
     */
    bool get_RISR_RXFIR()
    {
        return RISR & (1u << 4u);
    }

    /**
     * Get RISR's MSTIR bit.
     */
    bool get_RISR_MSTIR()
    {
        return RISR & (1u << 5u);
    }

    /**
     * Get TXOICR's TXOICR bit.
     */
    bool get_TXOICR_TXOICR()
    {
        return TXOICR & (1u << 0u);
    }

    /**
     * Get RXOICR's RXOICR bit.
     */
    bool get_RXOICR_RXOICR()
    {
        return RXOICR & (1u << 0u);
    }

    /**
     * Get RXUICR's RXUICR bit.
     */
    bool get_RXUICR_RXUICR()
    {
        return RXUICR & (1u << 0u);
    }

    /**
     * Get MSTICR's MSTICR bit.
     */
    bool get_MSTICR_MSTICR()
    {
        return MSTICR & (1u << 0u);
    }

    /**
     * Get ICR's ICR bit.
     */
    bool get_ICR_ICR()
    {
        return ICR & (1u << 0u);
    }

    /**
     * Get DMACR's RDMAE bit.
     */
    bool get_DMACR_RDMAE()
    {
        return DMACR & (1u << 0u);
    }

    /**
     * Set DMACR's RDMAE bit.
     */
    inline void set_DMACR_RDMAE()
    {
        DMACR |= 1u << 0u;
    }

    /**
     * Clear DMACR's RDMAE bit.
     */
    inline void clear_DMACR_RDMAE()
    {
        DMACR &= ~(1u << 0u);
    }

    /**
     * Toggle DMACR's RDMAE bit.
     */
    inline void toggle_DMACR_RDMAE()
    {
        DMACR ^= 1u << 0u;
    }

    /**
     * Get DMACR's TDMAE bit.
     */
    bool get_DMACR_TDMAE()
    {
        return DMACR & (1u << 1u);
    }

    /**
     * Set DMACR's TDMAE bit.
     */
    inline void set_DMACR_TDMAE()
    {
        DMACR |= 1u << 1u;
    }

    /**
     * Clear DMACR's TDMAE bit.
     */
    inline void clear_DMACR_TDMAE()
    {
        DMACR &= ~(1u << 1u);
    }

    /**
     * Toggle DMACR's TDMAE bit.
     */
    inline void toggle_DMACR_TDMAE()
    {
        DMACR ^= 1u << 1u;
    }

    /**
     * Get DMATDLR's DMATDL field.
     */
    uint8_t get_DMATDLR_DMATDL()
    {
        return (DMATDLR >> 0u) & 0b11111111u;
    }

    /**
     * Set DMATDLR's DMATDL field.
     */
    inline void set_DMATDLR_DMATDL(uint8_t value)
    {
        uint32_t curr = DMATDLR;

        curr &= ~(0b11111111u << 0u);
        curr |= (value & 0b11111111u) << 0u;

        DMATDLR = curr;
    }

    /**
     * Get DMARDLR's DMARDL field.
     */
    uint8_t get_DMARDLR_DMARDL()
    {
        return (DMARDLR >> 0u) & 0b11111111u;
    }

    /**
     * Set DMARDLR's DMARDL field.
     */
    inline void set_DMARDLR_DMARDL(uint8_t value)
    {
        uint32_t curr = DMARDLR;

        curr &= ~(0b11111111u << 0u);
        curr |= (value & 0b11111111u) << 0u;

        DMARDLR = curr;
    }

    /**
     * Get IDR's IDCODE field.
     */
    uint32_t get_IDR_IDCODE()
    {
        return (IDR >> 0u) & 0b11111111111111111111111111111111u;
    }

    /**
     * Get SSI_VERSION_ID's SSI_COMP_VERSION field.
     */
    uint32_t get_SSI_VERSION_ID_SSI_COMP_VERSION()
    {
        return (SSI_VERSION_ID >> 0u) & 0b11111111111111111111111111111111u;
    }

    /**
     * Get DR0's DR field.
     */
    uint32_t get_DR0_DR()
    {
        return (DR0 >> 0u) & 0b11111111111111111111111111111111u;
    }

    /**
     * Set DR0's DR field.
     */
    inline void set_DR0_DR(uint32_t value)
    {
        uint32_t curr = DR0;

        curr &= ~(0b11111111111111111111111111111111u << 0u);
        curr |= (value & 0b11111111111111111111111111111111u) << 0u;

        DR0 = curr;
    }

    /**
     * Get RX_SAMPLE_DLY's RSD field.
     */
    uint8_t get_RX_SAMPLE_DLY_RSD()
    {
        return (RX_SAMPLE_DLY >> 0u) & 0b11111111u;
    }

    /**
     * Set RX_SAMPLE_DLY's RSD field.
     */
    inline void set_RX_SAMPLE_DLY_RSD(uint8_t value)
    {
        uint32_t curr = RX_SAMPLE_DLY;

        curr &= ~(0b11111111u << 0u);
        curr |= (value & 0b11111111u) << 0u;

        RX_SAMPLE_DLY = curr;
    }

    /**
     * Get SPI_CTRLR0's TRANS_TYPE field.
     */
    XIP_SSI_SPI_CTRLR0_TRANS_TYPE get_SPI_CTRLR0_TRANS_TYPE()
    {
        return XIP_SSI_SPI_CTRLR0_TRANS_TYPE((SPI_CTRLR0 >> 0u) & 0b11u);
    }

    /**
     * Set SPI_CTRLR0's TRANS_TYPE field.
     */
    inline void set_SPI_CTRLR0_TRANS_TYPE(XIP_SSI_SPI_CTRLR0_TRANS_TYPE value)
    {
        uint32_t curr = SPI_CTRLR0;

        curr &= ~(0b11u << 0u);
        curr |= (std::to_underlying(value) & 0b11u) << 0u;

        SPI_CTRLR0 = curr;
    }

    /**
     * Get SPI_CTRLR0's ADDR_L field.
     */
    uint8_t get_SPI_CTRLR0_ADDR_L()
    {
        return (SPI_CTRLR0 >> 2u) & 0b1111u;
    }

    /**
     * Set SPI_CTRLR0's ADDR_L field.
     */
    inline void set_SPI_CTRLR0_ADDR_L(uint8_t value)
    {
        uint32_t curr = SPI_CTRLR0;

        curr &= ~(0b1111u << 2u);
        curr |= (value & 0b1111u) << 2u;

        SPI_CTRLR0 = curr;
    }

    /**
     * Get SPI_CTRLR0's INST_L field.
     */
    XIP_SSI_SPI_CTRLR0_INST_L get_SPI_CTRLR0_INST_L()
    {
        return XIP_SSI_SPI_CTRLR0_INST_L((SPI_CTRLR0 >> 8u) & 0b11u);
    }

    /**
     * Set SPI_CTRLR0's INST_L field.
     */
    inline void set_SPI_CTRLR0_INST_L(XIP_SSI_SPI_CTRLR0_INST_L value)
    {
        uint32_t curr = SPI_CTRLR0;

        curr &= ~(0b11u << 8u);
        curr |= (std::to_underlying(value) & 0b11u) << 8u;

        SPI_CTRLR0 = curr;
    }

    /**
     * Get SPI_CTRLR0's WAIT_CYCLES field.
     */
    uint8_t get_SPI_CTRLR0_WAIT_CYCLES()
    {
        return (SPI_CTRLR0 >> 11u) & 0b11111u;
    }

    /**
     * Set SPI_CTRLR0's WAIT_CYCLES field.
     */
    inline void set_SPI_CTRLR0_WAIT_CYCLES(uint8_t value)
    {
        uint32_t curr = SPI_CTRLR0;

        curr &= ~(0b11111u << 11u);
        curr |= (value & 0b11111u) << 11u;

        SPI_CTRLR0 = curr;
    }

    /**
     * Get SPI_CTRLR0's SPI_DDR_EN bit.
     */
    bool get_SPI_CTRLR0_SPI_DDR_EN()
    {
        return SPI_CTRLR0 & (1u << 16u);
    }

    /**
     * Set SPI_CTRLR0's SPI_DDR_EN bit.
     */
    inline void set_SPI_CTRLR0_SPI_DDR_EN()
    {
        SPI_CTRLR0 |= 1u << 16u;
    }

    /**
     * Clear SPI_CTRLR0's SPI_DDR_EN bit.
     */
    inline void clear_SPI_CTRLR0_SPI_DDR_EN()
    {
        SPI_CTRLR0 &= ~(1u << 16u);
    }

    /**
     * Toggle SPI_CTRLR0's SPI_DDR_EN bit.
     */
    inline void toggle_SPI_CTRLR0_SPI_DDR_EN()
    {
        SPI_CTRLR0 ^= 1u << 16u;
    }

    /**
     * Get SPI_CTRLR0's INST_DDR_EN bit.
     */
    bool get_SPI_CTRLR0_INST_DDR_EN()
    {
        return SPI_CTRLR0 & (1u << 17u);
    }

    /**
     * Set SPI_CTRLR0's INST_DDR_EN bit.
     */
    inline void set_SPI_CTRLR0_INST_DDR_EN()
    {
        SPI_CTRLR0 |= 1u << 17u;
    }

    /**
     * Clear SPI_CTRLR0's INST_DDR_EN bit.
     */
    inline void clear_SPI_CTRLR0_INST_DDR_EN()
    {
        SPI_CTRLR0 &= ~(1u << 17u);
    }

    /**
     * Toggle SPI_CTRLR0's INST_DDR_EN bit.
     */
    inline void toggle_SPI_CTRLR0_INST_DDR_EN()
    {
        SPI_CTRLR0 ^= 1u << 17u;
    }

    /**
     * Get SPI_CTRLR0's SPI_RXDS_EN bit.
     */
    bool get_SPI_CTRLR0_SPI_RXDS_EN()
    {
        return SPI_CTRLR0 & (1u << 18u);
    }

    /**
     * Set SPI_CTRLR0's SPI_RXDS_EN bit.
     */
    inline void set_SPI_CTRLR0_SPI_RXDS_EN()
    {
        SPI_CTRLR0 |= 1u << 18u;
    }

    /**
     * Clear SPI_CTRLR0's SPI_RXDS_EN bit.
     */
    inline void clear_SPI_CTRLR0_SPI_RXDS_EN()
    {
        SPI_CTRLR0 &= ~(1u << 18u);
    }

    /**
     * Toggle SPI_CTRLR0's SPI_RXDS_EN bit.
     */
    inline void toggle_SPI_CTRLR0_SPI_RXDS_EN()
    {
        SPI_CTRLR0 ^= 1u << 18u;
    }

    /**
     * Get SPI_CTRLR0's XIP_CMD field.
     */
    uint8_t get_SPI_CTRLR0_XIP_CMD()
    {
        return (SPI_CTRLR0 >> 24u) & 0b11111111u;
    }

    /**
     * Set SPI_CTRLR0's XIP_CMD field.
     */
    inline void set_SPI_CTRLR0_XIP_CMD(uint8_t value)
    {
        uint32_t curr = SPI_CTRLR0;

        curr &= ~(0b11111111u << 24u);
        curr |= (value & 0b11111111u) << 24u;

        SPI_CTRLR0 = curr;
    }

    /**
     * Get TXD_DRIVE_EDGE's TDE field.
     */
    uint8_t get_TXD_DRIVE_EDGE_TDE()
    {
        return (TXD_DRIVE_EDGE >> 0u) & 0b11111111u;
    }

    /**
     * Set TXD_DRIVE_EDGE's TDE field.
     */
    inline void set_TXD_DRIVE_EDGE_TDE(uint8_t value)
    {
        uint32_t curr = TXD_DRIVE_EDGE;

        curr &= ~(0b11111111u << 0u);
        curr |= (value & 0b11111111u) << 0u;

        TXD_DRIVE_EDGE = curr;
    }
};

static_assert(sizeof(xip_ssi) == xip_ssi::size);

static volatile xip_ssi *const XIP_SSI =
    reinterpret_cast<xip_ssi *>(0x18000000);

}; // namespace RP2040

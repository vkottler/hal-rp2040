/**
 * \file
 * \brief Generated by ifgen (3.1.2).
 */
#pragma once

#include "../ifgen/common.h"

namespace RP2040
{

struct [[gnu::packed]] spi0
{
    /* Constant attributes. */
    static constexpr std::size_t size = 4096; /*!< spi0's size in bytes. */

    /* Fields. */
    uint32_t
        SSPCR0; /*!< (read-write) Control register 0, SSPCR0 on page 3-4 */
    uint32_t
        SSPCR1;     /*!< (read-write) Control register 1, SSPCR1 on page 3-5 */
    uint32_t SSPDR; /*!< (read-write) Data register, SSPDR on page 3-6 */
    const uint32_t SSPSR =
        {};           /*!< (read-only) Status register, SSPSR on page 3-7 */
    uint32_t SSPCPSR; /*!< (read-write) Clock prescale register, SSPCPSR on
                         page 3-8 */
    uint32_t SSPIMSC; /*!< (read-write) Interrupt mask set or clear register,
                         SSPIMSC on page 3-9 */
    const uint32_t SSPRIS = {}; /*!< (read-only) Raw interrupt status register,
                                   SSPRIS on page 3-10 */
    const uint32_t SSPMIS = {}; /*!< (read-only) Masked interrupt status
                                   register, SSPMIS on page 3-11 */
    uint32_t SSPICR; /*!< (read-write) Interrupt clear register, SSPICR on page
                        3-11 */
    uint32_t SSPDMACR; /*!< (read-write) DMA control register, SSPDMACR on page
                          3-12 */
    static constexpr std::size_t reserved_padding0_length = 1006;
    const uint32_t reserved_padding0[reserved_padding0_length] = {};
    const uint32_t SSPPERIPHID0 =
        {}; /*!< (read-only) Peripheral identification registers,
               SSPPeriphID0-3 on page 3-13 */
    const uint32_t SSPPERIPHID1 =
        {}; /*!< (read-only) Peripheral identification registers,
               SSPPeriphID0-3 on page 3-13 */
    const uint32_t SSPPERIPHID2 =
        {}; /*!< (read-only) Peripheral identification registers,
               SSPPeriphID0-3 on page 3-13 */
    const uint32_t SSPPERIPHID3 =
        {}; /*!< (read-only) Peripheral identification registers,
               SSPPeriphID0-3 on page 3-13 */
    const uint32_t SSPPCELLID0 =
        {}; /*!< (read-only) PrimeCell identification registers, SSPPCellID0-3
               on page 3-16 */
    const uint32_t SSPPCELLID1 =
        {}; /*!< (read-only) PrimeCell identification registers, SSPPCellID0-3
               on page 3-16 */
    const uint32_t SSPPCELLID2 =
        {}; /*!< (read-only) PrimeCell identification registers, SSPPCellID0-3
               on page 3-16 */
    const uint32_t SSPPCELLID3 =
        {}; /*!< (read-only) PrimeCell identification registers, SSPPCellID0-3
               on page 3-16 */

    /* Methods. */

    /**
     * Get SSPCR0's DSS field.
     */
    inline uint8_t get_SSPCR0_DSS() volatile
    {
        return (SSPCR0 >> 0u) & 0b1111u;
    }

    /**
     * Set SSPCR0's DSS field.
     */
    inline void set_SSPCR0_DSS(uint8_t value) volatile
    {
        uint32_t curr = SSPCR0;

        curr &= ~(0b1111u << 0u);
        curr |= (value & 0b1111u) << 0u;

        SSPCR0 = curr;
    }

    /**
     * Get SSPCR0's FRF field.
     */
    inline uint8_t get_SSPCR0_FRF() volatile
    {
        return (SSPCR0 >> 4u) & 0b11u;
    }

    /**
     * Set SSPCR0's FRF field.
     */
    inline void set_SSPCR0_FRF(uint8_t value) volatile
    {
        uint32_t curr = SSPCR0;

        curr &= ~(0b11u << 4u);
        curr |= (value & 0b11u) << 4u;

        SSPCR0 = curr;
    }

    /**
     * Get SSPCR0's SPO bit.
     */
    inline bool get_SSPCR0_SPO() volatile
    {
        return SSPCR0 & (1u << 6u);
    }

    /**
     * Set SSPCR0's SPO bit.
     */
    inline void set_SSPCR0_SPO() volatile
    {
        SSPCR0 |= 1u << 6u;
    }

    /**
     * Clear SSPCR0's SPO bit.
     */
    inline void clear_SSPCR0_SPO() volatile
    {
        SSPCR0 &= ~(1u << 6u);
    }

    /**
     * Toggle SSPCR0's SPO bit.
     */
    inline void toggle_SSPCR0_SPO() volatile
    {
        SSPCR0 ^= 1u << 6u;
    }

    /**
     * Get SSPCR0's SPH bit.
     */
    inline bool get_SSPCR0_SPH() volatile
    {
        return SSPCR0 & (1u << 7u);
    }

    /**
     * Set SSPCR0's SPH bit.
     */
    inline void set_SSPCR0_SPH() volatile
    {
        SSPCR0 |= 1u << 7u;
    }

    /**
     * Clear SSPCR0's SPH bit.
     */
    inline void clear_SSPCR0_SPH() volatile
    {
        SSPCR0 &= ~(1u << 7u);
    }

    /**
     * Toggle SSPCR0's SPH bit.
     */
    inline void toggle_SSPCR0_SPH() volatile
    {
        SSPCR0 ^= 1u << 7u;
    }

    /**
     * Get SSPCR0's SCR field.
     */
    inline uint8_t get_SSPCR0_SCR() volatile
    {
        return (SSPCR0 >> 8u) & 0b11111111u;
    }

    /**
     * Set SSPCR0's SCR field.
     */
    inline void set_SSPCR0_SCR(uint8_t value) volatile
    {
        uint32_t curr = SSPCR0;

        curr &= ~(0b11111111u << 8u);
        curr |= (value & 0b11111111u) << 8u;

        SSPCR0 = curr;
    }

    /**
     * Get all of SSPCR0's bit fields.
     */
    inline void get_SSPCR0(uint8_t &DSS, uint8_t &FRF, bool &SPO, bool &SPH,
                           uint8_t &SCR) volatile
    {
        uint32_t curr = SSPCR0;

        DSS = (curr >> 0u) & 0b1111u;
        FRF = (curr >> 4u) & 0b11u;
        SPO = curr & (1u << 6u);
        SPH = curr & (1u << 7u);
        SCR = (curr >> 8u) & 0b11111111u;
    }

    /**
     * Set all of SSPCR0's bit fields.
     */
    inline void set_SSPCR0(uint8_t DSS, uint8_t FRF, bool SPO, bool SPH,
                           uint8_t SCR) volatile
    {
        uint32_t curr = SSPCR0;

        curr &= ~(0b1111u << 0u);
        curr |= (DSS & 0b1111u) << 0u;
        curr &= ~(0b11u << 4u);
        curr |= (FRF & 0b11u) << 4u;
        curr &= ~(0b1u << 6u);
        curr |= (SPO & 0b1u) << 6u;
        curr &= ~(0b1u << 7u);
        curr |= (SPH & 0b1u) << 7u;
        curr &= ~(0b11111111u << 8u);
        curr |= (SCR & 0b11111111u) << 8u;

        SSPCR0 = curr;
    }

    /**
     * Get SSPCR1's LBM bit.
     */
    inline bool get_SSPCR1_LBM() volatile
    {
        return SSPCR1 & (1u << 0u);
    }

    /**
     * Set SSPCR1's LBM bit.
     */
    inline void set_SSPCR1_LBM() volatile
    {
        SSPCR1 |= 1u << 0u;
    }

    /**
     * Clear SSPCR1's LBM bit.
     */
    inline void clear_SSPCR1_LBM() volatile
    {
        SSPCR1 &= ~(1u << 0u);
    }

    /**
     * Toggle SSPCR1's LBM bit.
     */
    inline void toggle_SSPCR1_LBM() volatile
    {
        SSPCR1 ^= 1u << 0u;
    }

    /**
     * Get SSPCR1's SSE bit.
     */
    inline bool get_SSPCR1_SSE() volatile
    {
        return SSPCR1 & (1u << 1u);
    }

    /**
     * Set SSPCR1's SSE bit.
     */
    inline void set_SSPCR1_SSE() volatile
    {
        SSPCR1 |= 1u << 1u;
    }

    /**
     * Clear SSPCR1's SSE bit.
     */
    inline void clear_SSPCR1_SSE() volatile
    {
        SSPCR1 &= ~(1u << 1u);
    }

    /**
     * Toggle SSPCR1's SSE bit.
     */
    inline void toggle_SSPCR1_SSE() volatile
    {
        SSPCR1 ^= 1u << 1u;
    }

    /**
     * Get SSPCR1's MS bit.
     */
    inline bool get_SSPCR1_MS() volatile
    {
        return SSPCR1 & (1u << 2u);
    }

    /**
     * Set SSPCR1's MS bit.
     */
    inline void set_SSPCR1_MS() volatile
    {
        SSPCR1 |= 1u << 2u;
    }

    /**
     * Clear SSPCR1's MS bit.
     */
    inline void clear_SSPCR1_MS() volatile
    {
        SSPCR1 &= ~(1u << 2u);
    }

    /**
     * Toggle SSPCR1's MS bit.
     */
    inline void toggle_SSPCR1_MS() volatile
    {
        SSPCR1 ^= 1u << 2u;
    }

    /**
     * Get SSPCR1's SOD bit.
     */
    inline bool get_SSPCR1_SOD() volatile
    {
        return SSPCR1 & (1u << 3u);
    }

    /**
     * Set SSPCR1's SOD bit.
     */
    inline void set_SSPCR1_SOD() volatile
    {
        SSPCR1 |= 1u << 3u;
    }

    /**
     * Clear SSPCR1's SOD bit.
     */
    inline void clear_SSPCR1_SOD() volatile
    {
        SSPCR1 &= ~(1u << 3u);
    }

    /**
     * Toggle SSPCR1's SOD bit.
     */
    inline void toggle_SSPCR1_SOD() volatile
    {
        SSPCR1 ^= 1u << 3u;
    }

    /**
     * Get all of SSPCR1's bit fields.
     */
    inline void get_SSPCR1(bool &LBM, bool &SSE, bool &MS, bool &SOD) volatile
    {
        uint32_t curr = SSPCR1;

        LBM = curr & (1u << 0u);
        SSE = curr & (1u << 1u);
        MS = curr & (1u << 2u);
        SOD = curr & (1u << 3u);
    }

    /**
     * Set all of SSPCR1's bit fields.
     */
    inline void set_SSPCR1(bool LBM, bool SSE, bool MS, bool SOD) volatile
    {
        uint32_t curr = SSPCR1;

        curr &= ~(0b1u << 0u);
        curr |= (LBM & 0b1u) << 0u;
        curr &= ~(0b1u << 1u);
        curr |= (SSE & 0b1u) << 1u;
        curr &= ~(0b1u << 2u);
        curr |= (MS & 0b1u) << 2u;
        curr &= ~(0b1u << 3u);
        curr |= (SOD & 0b1u) << 3u;

        SSPCR1 = curr;
    }

    /**
     * Get SSPDR's DATA field.
     */
    inline uint16_t get_SSPDR_DATA() volatile
    {
        return (SSPDR >> 0u) & 0b1111111111111111u;
    }

    /**
     * Set SSPDR's DATA field.
     */
    inline void set_SSPDR_DATA(uint16_t value) volatile
    {
        uint32_t curr = SSPDR;

        curr &= ~(0b1111111111111111u << 0u);
        curr |= (value & 0b1111111111111111u) << 0u;

        SSPDR = curr;
    }

    /**
     * Get SSPSR's TFE bit.
     */
    inline bool get_SSPSR_TFE() volatile
    {
        return SSPSR & (1u << 0u);
    }

    /**
     * Get SSPSR's TNF bit.
     */
    inline bool get_SSPSR_TNF() volatile
    {
        return SSPSR & (1u << 1u);
    }

    /**
     * Get SSPSR's RNE bit.
     */
    inline bool get_SSPSR_RNE() volatile
    {
        return SSPSR & (1u << 2u);
    }

    /**
     * Get SSPSR's RFF bit.
     */
    inline bool get_SSPSR_RFF() volatile
    {
        return SSPSR & (1u << 3u);
    }

    /**
     * Get SSPSR's BSY bit.
     */
    inline bool get_SSPSR_BSY() volatile
    {
        return SSPSR & (1u << 4u);
    }

    /**
     * Get all of SSPSR's bit fields.
     */
    inline void get_SSPSR(bool &TFE, bool &TNF, bool &RNE, bool &RFF,
                          bool &BSY) volatile
    {
        uint32_t curr = SSPSR;

        TFE = curr & (1u << 0u);
        TNF = curr & (1u << 1u);
        RNE = curr & (1u << 2u);
        RFF = curr & (1u << 3u);
        BSY = curr & (1u << 4u);
    }

    /**
     * Get SSPCPSR's CPSDVSR field.
     */
    inline uint8_t get_SSPCPSR_CPSDVSR() volatile
    {
        return (SSPCPSR >> 0u) & 0b11111111u;
    }

    /**
     * Set SSPCPSR's CPSDVSR field.
     */
    inline void set_SSPCPSR_CPSDVSR(uint8_t value) volatile
    {
        uint32_t curr = SSPCPSR;

        curr &= ~(0b11111111u << 0u);
        curr |= (value & 0b11111111u) << 0u;

        SSPCPSR = curr;
    }

    /**
     * Get SSPIMSC's RORIM bit.
     */
    inline bool get_SSPIMSC_RORIM() volatile
    {
        return SSPIMSC & (1u << 0u);
    }

    /**
     * Set SSPIMSC's RORIM bit.
     */
    inline void set_SSPIMSC_RORIM() volatile
    {
        SSPIMSC |= 1u << 0u;
    }

    /**
     * Clear SSPIMSC's RORIM bit.
     */
    inline void clear_SSPIMSC_RORIM() volatile
    {
        SSPIMSC &= ~(1u << 0u);
    }

    /**
     * Toggle SSPIMSC's RORIM bit.
     */
    inline void toggle_SSPIMSC_RORIM() volatile
    {
        SSPIMSC ^= 1u << 0u;
    }

    /**
     * Get SSPIMSC's RTIM bit.
     */
    inline bool get_SSPIMSC_RTIM() volatile
    {
        return SSPIMSC & (1u << 1u);
    }

    /**
     * Set SSPIMSC's RTIM bit.
     */
    inline void set_SSPIMSC_RTIM() volatile
    {
        SSPIMSC |= 1u << 1u;
    }

    /**
     * Clear SSPIMSC's RTIM bit.
     */
    inline void clear_SSPIMSC_RTIM() volatile
    {
        SSPIMSC &= ~(1u << 1u);
    }

    /**
     * Toggle SSPIMSC's RTIM bit.
     */
    inline void toggle_SSPIMSC_RTIM() volatile
    {
        SSPIMSC ^= 1u << 1u;
    }

    /**
     * Get SSPIMSC's RXIM bit.
     */
    inline bool get_SSPIMSC_RXIM() volatile
    {
        return SSPIMSC & (1u << 2u);
    }

    /**
     * Set SSPIMSC's RXIM bit.
     */
    inline void set_SSPIMSC_RXIM() volatile
    {
        SSPIMSC |= 1u << 2u;
    }

    /**
     * Clear SSPIMSC's RXIM bit.
     */
    inline void clear_SSPIMSC_RXIM() volatile
    {
        SSPIMSC &= ~(1u << 2u);
    }

    /**
     * Toggle SSPIMSC's RXIM bit.
     */
    inline void toggle_SSPIMSC_RXIM() volatile
    {
        SSPIMSC ^= 1u << 2u;
    }

    /**
     * Get SSPIMSC's TXIM bit.
     */
    inline bool get_SSPIMSC_TXIM() volatile
    {
        return SSPIMSC & (1u << 3u);
    }

    /**
     * Set SSPIMSC's TXIM bit.
     */
    inline void set_SSPIMSC_TXIM() volatile
    {
        SSPIMSC |= 1u << 3u;
    }

    /**
     * Clear SSPIMSC's TXIM bit.
     */
    inline void clear_SSPIMSC_TXIM() volatile
    {
        SSPIMSC &= ~(1u << 3u);
    }

    /**
     * Toggle SSPIMSC's TXIM bit.
     */
    inline void toggle_SSPIMSC_TXIM() volatile
    {
        SSPIMSC ^= 1u << 3u;
    }

    /**
     * Get all of SSPIMSC's bit fields.
     */
    inline void get_SSPIMSC(bool &RORIM, bool &RTIM, bool &RXIM,
                            bool &TXIM) volatile
    {
        uint32_t curr = SSPIMSC;

        RORIM = curr & (1u << 0u);
        RTIM = curr & (1u << 1u);
        RXIM = curr & (1u << 2u);
        TXIM = curr & (1u << 3u);
    }

    /**
     * Set all of SSPIMSC's bit fields.
     */
    inline void set_SSPIMSC(bool RORIM, bool RTIM, bool RXIM,
                            bool TXIM) volatile
    {
        uint32_t curr = SSPIMSC;

        curr &= ~(0b1u << 0u);
        curr |= (RORIM & 0b1u) << 0u;
        curr &= ~(0b1u << 1u);
        curr |= (RTIM & 0b1u) << 1u;
        curr &= ~(0b1u << 2u);
        curr |= (RXIM & 0b1u) << 2u;
        curr &= ~(0b1u << 3u);
        curr |= (TXIM & 0b1u) << 3u;

        SSPIMSC = curr;
    }

    /**
     * Get SSPRIS's RORRIS bit.
     */
    inline bool get_SSPRIS_RORRIS() volatile
    {
        return SSPRIS & (1u << 0u);
    }

    /**
     * Get SSPRIS's RTRIS bit.
     */
    inline bool get_SSPRIS_RTRIS() volatile
    {
        return SSPRIS & (1u << 1u);
    }

    /**
     * Get SSPRIS's RXRIS bit.
     */
    inline bool get_SSPRIS_RXRIS() volatile
    {
        return SSPRIS & (1u << 2u);
    }

    /**
     * Get SSPRIS's TXRIS bit.
     */
    inline bool get_SSPRIS_TXRIS() volatile
    {
        return SSPRIS & (1u << 3u);
    }

    /**
     * Get all of SSPRIS's bit fields.
     */
    inline void get_SSPRIS(bool &RORRIS, bool &RTRIS, bool &RXRIS,
                           bool &TXRIS) volatile
    {
        uint32_t curr = SSPRIS;

        RORRIS = curr & (1u << 0u);
        RTRIS = curr & (1u << 1u);
        RXRIS = curr & (1u << 2u);
        TXRIS = curr & (1u << 3u);
    }

    /**
     * Get SSPMIS's RORMIS bit.
     */
    inline bool get_SSPMIS_RORMIS() volatile
    {
        return SSPMIS & (1u << 0u);
    }

    /**
     * Get SSPMIS's RTMIS bit.
     */
    inline bool get_SSPMIS_RTMIS() volatile
    {
        return SSPMIS & (1u << 1u);
    }

    /**
     * Get SSPMIS's RXMIS bit.
     */
    inline bool get_SSPMIS_RXMIS() volatile
    {
        return SSPMIS & (1u << 2u);
    }

    /**
     * Get SSPMIS's TXMIS bit.
     */
    inline bool get_SSPMIS_TXMIS() volatile
    {
        return SSPMIS & (1u << 3u);
    }

    /**
     * Get all of SSPMIS's bit fields.
     */
    inline void get_SSPMIS(bool &RORMIS, bool &RTMIS, bool &RXMIS,
                           bool &TXMIS) volatile
    {
        uint32_t curr = SSPMIS;

        RORMIS = curr & (1u << 0u);
        RTMIS = curr & (1u << 1u);
        RXMIS = curr & (1u << 2u);
        TXMIS = curr & (1u << 3u);
    }

    /**
     * Get SSPICR's RORIC bit.
     */
    inline bool get_SSPICR_RORIC() volatile
    {
        return SSPICR & (1u << 0u);
    }

    /**
     * Set SSPICR's RORIC bit.
     */
    inline void set_SSPICR_RORIC() volatile
    {
        SSPICR |= 1u << 0u;
    }

    /**
     * Clear SSPICR's RORIC bit.
     */
    inline void clear_SSPICR_RORIC() volatile
    {
        SSPICR &= ~(1u << 0u);
    }

    /**
     * Toggle SSPICR's RORIC bit.
     */
    inline void toggle_SSPICR_RORIC() volatile
    {
        SSPICR ^= 1u << 0u;
    }

    /**
     * Get SSPICR's RTIC bit.
     */
    inline bool get_SSPICR_RTIC() volatile
    {
        return SSPICR & (1u << 1u);
    }

    /**
     * Set SSPICR's RTIC bit.
     */
    inline void set_SSPICR_RTIC() volatile
    {
        SSPICR |= 1u << 1u;
    }

    /**
     * Clear SSPICR's RTIC bit.
     */
    inline void clear_SSPICR_RTIC() volatile
    {
        SSPICR &= ~(1u << 1u);
    }

    /**
     * Toggle SSPICR's RTIC bit.
     */
    inline void toggle_SSPICR_RTIC() volatile
    {
        SSPICR ^= 1u << 1u;
    }

    /**
     * Get all of SSPICR's bit fields.
     */
    inline void get_SSPICR(bool &RORIC, bool &RTIC) volatile
    {
        uint32_t curr = SSPICR;

        RORIC = curr & (1u << 0u);
        RTIC = curr & (1u << 1u);
    }

    /**
     * Set all of SSPICR's bit fields.
     */
    inline void set_SSPICR(bool RORIC, bool RTIC) volatile
    {
        uint32_t curr = SSPICR;

        curr &= ~(0b1u << 0u);
        curr |= (RORIC & 0b1u) << 0u;
        curr &= ~(0b1u << 1u);
        curr |= (RTIC & 0b1u) << 1u;

        SSPICR = curr;
    }

    /**
     * Get SSPDMACR's RXDMAE bit.
     */
    inline bool get_SSPDMACR_RXDMAE() volatile
    {
        return SSPDMACR & (1u << 0u);
    }

    /**
     * Set SSPDMACR's RXDMAE bit.
     */
    inline void set_SSPDMACR_RXDMAE() volatile
    {
        SSPDMACR |= 1u << 0u;
    }

    /**
     * Clear SSPDMACR's RXDMAE bit.
     */
    inline void clear_SSPDMACR_RXDMAE() volatile
    {
        SSPDMACR &= ~(1u << 0u);
    }

    /**
     * Toggle SSPDMACR's RXDMAE bit.
     */
    inline void toggle_SSPDMACR_RXDMAE() volatile
    {
        SSPDMACR ^= 1u << 0u;
    }

    /**
     * Get SSPDMACR's TXDMAE bit.
     */
    inline bool get_SSPDMACR_TXDMAE() volatile
    {
        return SSPDMACR & (1u << 1u);
    }

    /**
     * Set SSPDMACR's TXDMAE bit.
     */
    inline void set_SSPDMACR_TXDMAE() volatile
    {
        SSPDMACR |= 1u << 1u;
    }

    /**
     * Clear SSPDMACR's TXDMAE bit.
     */
    inline void clear_SSPDMACR_TXDMAE() volatile
    {
        SSPDMACR &= ~(1u << 1u);
    }

    /**
     * Toggle SSPDMACR's TXDMAE bit.
     */
    inline void toggle_SSPDMACR_TXDMAE() volatile
    {
        SSPDMACR ^= 1u << 1u;
    }

    /**
     * Get all of SSPDMACR's bit fields.
     */
    inline void get_SSPDMACR(bool &RXDMAE, bool &TXDMAE) volatile
    {
        uint32_t curr = SSPDMACR;

        RXDMAE = curr & (1u << 0u);
        TXDMAE = curr & (1u << 1u);
    }

    /**
     * Set all of SSPDMACR's bit fields.
     */
    inline void set_SSPDMACR(bool RXDMAE, bool TXDMAE) volatile
    {
        uint32_t curr = SSPDMACR;

        curr &= ~(0b1u << 0u);
        curr |= (RXDMAE & 0b1u) << 0u;
        curr &= ~(0b1u << 1u);
        curr |= (TXDMAE & 0b1u) << 1u;

        SSPDMACR = curr;
    }

    /**
     * Get SSPPERIPHID0's PARTNUMBER0 field.
     */
    inline uint8_t get_SSPPERIPHID0_PARTNUMBER0() volatile
    {
        return (SSPPERIPHID0 >> 0u) & 0b11111111u;
    }

    /**
     * Get SSPPERIPHID1's PARTNUMBER1 field.
     */
    inline uint8_t get_SSPPERIPHID1_PARTNUMBER1() volatile
    {
        return (SSPPERIPHID1 >> 0u) & 0b1111u;
    }

    /**
     * Get SSPPERIPHID1's DESIGNER0 field.
     */
    inline uint8_t get_SSPPERIPHID1_DESIGNER0() volatile
    {
        return (SSPPERIPHID1 >> 4u) & 0b1111u;
    }

    /**
     * Get all of SSPPERIPHID1's bit fields.
     */
    inline void get_SSPPERIPHID1(uint8_t &PARTNUMBER1,
                                 uint8_t &DESIGNER0) volatile
    {
        uint32_t curr = SSPPERIPHID1;

        PARTNUMBER1 = (curr >> 0u) & 0b1111u;
        DESIGNER0 = (curr >> 4u) & 0b1111u;
    }

    /**
     * Get SSPPERIPHID2's DESIGNER1 field.
     */
    inline uint8_t get_SSPPERIPHID2_DESIGNER1() volatile
    {
        return (SSPPERIPHID2 >> 0u) & 0b1111u;
    }

    /**
     * Get SSPPERIPHID2's REVISION field.
     */
    inline uint8_t get_SSPPERIPHID2_REVISION() volatile
    {
        return (SSPPERIPHID2 >> 4u) & 0b1111u;
    }

    /**
     * Get all of SSPPERIPHID2's bit fields.
     */
    inline void get_SSPPERIPHID2(uint8_t &DESIGNER1,
                                 uint8_t &REVISION) volatile
    {
        uint32_t curr = SSPPERIPHID2;

        DESIGNER1 = (curr >> 0u) & 0b1111u;
        REVISION = (curr >> 4u) & 0b1111u;
    }

    /**
     * Get SSPPERIPHID3's CONFIGURATION field.
     */
    inline uint8_t get_SSPPERIPHID3_CONFIGURATION() volatile
    {
        return (SSPPERIPHID3 >> 0u) & 0b11111111u;
    }

    /**
     * Get SSPPCELLID0's SSPPCELLID0 field.
     */
    inline uint8_t get_SSPPCELLID0_SSPPCELLID0() volatile
    {
        return (SSPPCELLID0 >> 0u) & 0b11111111u;
    }

    /**
     * Get SSPPCELLID1's SSPPCELLID1 field.
     */
    inline uint8_t get_SSPPCELLID1_SSPPCELLID1() volatile
    {
        return (SSPPCELLID1 >> 0u) & 0b11111111u;
    }

    /**
     * Get SSPPCELLID2's SSPPCELLID2 field.
     */
    inline uint8_t get_SSPPCELLID2_SSPPCELLID2() volatile
    {
        return (SSPPCELLID2 >> 0u) & 0b11111111u;
    }

    /**
     * Get SSPPCELLID3's SSPPCELLID3 field.
     */
    inline uint8_t get_SSPPCELLID3_SSPPCELLID3() volatile
    {
        return (SSPPCELLID3 >> 0u) & 0b11111111u;
    }
};

static_assert(sizeof(spi0) == spi0::size);

static volatile spi0 *const SPI0 = reinterpret_cast<spi0 *>(0x4003c000);

static volatile spi0 *const SPI1 = reinterpret_cast<spi0 *>(0x40040000);

}; // namespace RP2040

/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include "../ifgen/common.h"

namespace RP2040
{

struct [[gnu::packed]] resets
{
    /* Constant attributes. */
    static constexpr uint16_t id = 1;       /*!< resets's identifier. */
    static constexpr std::size_t size = 12; /*!< resets's size in bytes. */

    /* Fields. */
    uint32_t RESET; /*!< (read-write) Reset control. If a bit is set it means
                       the peripheral is in reset. 0 means the peripheral's
                       reset is deasserted. */
    uint32_t WDSEL; /*!< (read-write) Watchdog select. If a bit is set then the
                       watchdog will reset this peripheral when the watchdog
                       fires. */
    const uint32_t RESET_DONE =
        {}; /*!< (read-only) Reset done. If a bit is set then a reset done
               signal has been returned by the peripheral. This indicates that
               the peripheral's registers are ready to be accessed. */

    /* Methods. */

    /**
     * Get RESET's adc bit.
     */
    bool get_RESET_adc()
    {
        return RESET & (1u << 0u);
    }

    /**
     * Set RESET's adc bit.
     */
    inline void set_RESET_adc()
    {
        RESET |= 1u << 0u;
    }

    /**
     * Clear RESET's adc bit.
     */
    inline void clear_RESET_adc()
    {
        RESET &= ~(1u << 0u);
    }

    /**
     * Toggle RESET's adc bit.
     */
    inline void toggle_RESET_adc()
    {
        RESET ^= 1u << 0u;
    }

    /**
     * Get RESET's busctrl bit.
     */
    bool get_RESET_busctrl()
    {
        return RESET & (1u << 1u);
    }

    /**
     * Set RESET's busctrl bit.
     */
    inline void set_RESET_busctrl()
    {
        RESET |= 1u << 1u;
    }

    /**
     * Clear RESET's busctrl bit.
     */
    inline void clear_RESET_busctrl()
    {
        RESET &= ~(1u << 1u);
    }

    /**
     * Toggle RESET's busctrl bit.
     */
    inline void toggle_RESET_busctrl()
    {
        RESET ^= 1u << 1u;
    }

    /**
     * Get RESET's dma bit.
     */
    bool get_RESET_dma()
    {
        return RESET & (1u << 2u);
    }

    /**
     * Set RESET's dma bit.
     */
    inline void set_RESET_dma()
    {
        RESET |= 1u << 2u;
    }

    /**
     * Clear RESET's dma bit.
     */
    inline void clear_RESET_dma()
    {
        RESET &= ~(1u << 2u);
    }

    /**
     * Toggle RESET's dma bit.
     */
    inline void toggle_RESET_dma()
    {
        RESET ^= 1u << 2u;
    }

    /**
     * Get RESET's i2c0 bit.
     */
    bool get_RESET_i2c0()
    {
        return RESET & (1u << 3u);
    }

    /**
     * Set RESET's i2c0 bit.
     */
    inline void set_RESET_i2c0()
    {
        RESET |= 1u << 3u;
    }

    /**
     * Clear RESET's i2c0 bit.
     */
    inline void clear_RESET_i2c0()
    {
        RESET &= ~(1u << 3u);
    }

    /**
     * Toggle RESET's i2c0 bit.
     */
    inline void toggle_RESET_i2c0()
    {
        RESET ^= 1u << 3u;
    }

    /**
     * Get RESET's i2c1 bit.
     */
    bool get_RESET_i2c1()
    {
        return RESET & (1u << 4u);
    }

    /**
     * Set RESET's i2c1 bit.
     */
    inline void set_RESET_i2c1()
    {
        RESET |= 1u << 4u;
    }

    /**
     * Clear RESET's i2c1 bit.
     */
    inline void clear_RESET_i2c1()
    {
        RESET &= ~(1u << 4u);
    }

    /**
     * Toggle RESET's i2c1 bit.
     */
    inline void toggle_RESET_i2c1()
    {
        RESET ^= 1u << 4u;
    }

    /**
     * Get RESET's io_bank0 bit.
     */
    bool get_RESET_io_bank0()
    {
        return RESET & (1u << 5u);
    }

    /**
     * Set RESET's io_bank0 bit.
     */
    inline void set_RESET_io_bank0()
    {
        RESET |= 1u << 5u;
    }

    /**
     * Clear RESET's io_bank0 bit.
     */
    inline void clear_RESET_io_bank0()
    {
        RESET &= ~(1u << 5u);
    }

    /**
     * Toggle RESET's io_bank0 bit.
     */
    inline void toggle_RESET_io_bank0()
    {
        RESET ^= 1u << 5u;
    }

    /**
     * Get RESET's io_qspi bit.
     */
    bool get_RESET_io_qspi()
    {
        return RESET & (1u << 6u);
    }

    /**
     * Set RESET's io_qspi bit.
     */
    inline void set_RESET_io_qspi()
    {
        RESET |= 1u << 6u;
    }

    /**
     * Clear RESET's io_qspi bit.
     */
    inline void clear_RESET_io_qspi()
    {
        RESET &= ~(1u << 6u);
    }

    /**
     * Toggle RESET's io_qspi bit.
     */
    inline void toggle_RESET_io_qspi()
    {
        RESET ^= 1u << 6u;
    }

    /**
     * Get RESET's jtag bit.
     */
    bool get_RESET_jtag()
    {
        return RESET & (1u << 7u);
    }

    /**
     * Set RESET's jtag bit.
     */
    inline void set_RESET_jtag()
    {
        RESET |= 1u << 7u;
    }

    /**
     * Clear RESET's jtag bit.
     */
    inline void clear_RESET_jtag()
    {
        RESET &= ~(1u << 7u);
    }

    /**
     * Toggle RESET's jtag bit.
     */
    inline void toggle_RESET_jtag()
    {
        RESET ^= 1u << 7u;
    }

    /**
     * Get RESET's pads_bank0 bit.
     */
    bool get_RESET_pads_bank0()
    {
        return RESET & (1u << 8u);
    }

    /**
     * Set RESET's pads_bank0 bit.
     */
    inline void set_RESET_pads_bank0()
    {
        RESET |= 1u << 8u;
    }

    /**
     * Clear RESET's pads_bank0 bit.
     */
    inline void clear_RESET_pads_bank0()
    {
        RESET &= ~(1u << 8u);
    }

    /**
     * Toggle RESET's pads_bank0 bit.
     */
    inline void toggle_RESET_pads_bank0()
    {
        RESET ^= 1u << 8u;
    }

    /**
     * Get RESET's pads_qspi bit.
     */
    bool get_RESET_pads_qspi()
    {
        return RESET & (1u << 9u);
    }

    /**
     * Set RESET's pads_qspi bit.
     */
    inline void set_RESET_pads_qspi()
    {
        RESET |= 1u << 9u;
    }

    /**
     * Clear RESET's pads_qspi bit.
     */
    inline void clear_RESET_pads_qspi()
    {
        RESET &= ~(1u << 9u);
    }

    /**
     * Toggle RESET's pads_qspi bit.
     */
    inline void toggle_RESET_pads_qspi()
    {
        RESET ^= 1u << 9u;
    }

    /**
     * Get RESET's pio0 bit.
     */
    bool get_RESET_pio0()
    {
        return RESET & (1u << 10u);
    }

    /**
     * Set RESET's pio0 bit.
     */
    inline void set_RESET_pio0()
    {
        RESET |= 1u << 10u;
    }

    /**
     * Clear RESET's pio0 bit.
     */
    inline void clear_RESET_pio0()
    {
        RESET &= ~(1u << 10u);
    }

    /**
     * Toggle RESET's pio0 bit.
     */
    inline void toggle_RESET_pio0()
    {
        RESET ^= 1u << 10u;
    }

    /**
     * Get RESET's pio1 bit.
     */
    bool get_RESET_pio1()
    {
        return RESET & (1u << 11u);
    }

    /**
     * Set RESET's pio1 bit.
     */
    inline void set_RESET_pio1()
    {
        RESET |= 1u << 11u;
    }

    /**
     * Clear RESET's pio1 bit.
     */
    inline void clear_RESET_pio1()
    {
        RESET &= ~(1u << 11u);
    }

    /**
     * Toggle RESET's pio1 bit.
     */
    inline void toggle_RESET_pio1()
    {
        RESET ^= 1u << 11u;
    }

    /**
     * Get RESET's pll_sys bit.
     */
    bool get_RESET_pll_sys()
    {
        return RESET & (1u << 12u);
    }

    /**
     * Set RESET's pll_sys bit.
     */
    inline void set_RESET_pll_sys()
    {
        RESET |= 1u << 12u;
    }

    /**
     * Clear RESET's pll_sys bit.
     */
    inline void clear_RESET_pll_sys()
    {
        RESET &= ~(1u << 12u);
    }

    /**
     * Toggle RESET's pll_sys bit.
     */
    inline void toggle_RESET_pll_sys()
    {
        RESET ^= 1u << 12u;
    }

    /**
     * Get RESET's pll_usb bit.
     */
    bool get_RESET_pll_usb()
    {
        return RESET & (1u << 13u);
    }

    /**
     * Set RESET's pll_usb bit.
     */
    inline void set_RESET_pll_usb()
    {
        RESET |= 1u << 13u;
    }

    /**
     * Clear RESET's pll_usb bit.
     */
    inline void clear_RESET_pll_usb()
    {
        RESET &= ~(1u << 13u);
    }

    /**
     * Toggle RESET's pll_usb bit.
     */
    inline void toggle_RESET_pll_usb()
    {
        RESET ^= 1u << 13u;
    }

    /**
     * Get RESET's pwm bit.
     */
    bool get_RESET_pwm()
    {
        return RESET & (1u << 14u);
    }

    /**
     * Set RESET's pwm bit.
     */
    inline void set_RESET_pwm()
    {
        RESET |= 1u << 14u;
    }

    /**
     * Clear RESET's pwm bit.
     */
    inline void clear_RESET_pwm()
    {
        RESET &= ~(1u << 14u);
    }

    /**
     * Toggle RESET's pwm bit.
     */
    inline void toggle_RESET_pwm()
    {
        RESET ^= 1u << 14u;
    }

    /**
     * Get RESET's rtc bit.
     */
    bool get_RESET_rtc()
    {
        return RESET & (1u << 15u);
    }

    /**
     * Set RESET's rtc bit.
     */
    inline void set_RESET_rtc()
    {
        RESET |= 1u << 15u;
    }

    /**
     * Clear RESET's rtc bit.
     */
    inline void clear_RESET_rtc()
    {
        RESET &= ~(1u << 15u);
    }

    /**
     * Toggle RESET's rtc bit.
     */
    inline void toggle_RESET_rtc()
    {
        RESET ^= 1u << 15u;
    }

    /**
     * Get RESET's spi0 bit.
     */
    bool get_RESET_spi0()
    {
        return RESET & (1u << 16u);
    }

    /**
     * Set RESET's spi0 bit.
     */
    inline void set_RESET_spi0()
    {
        RESET |= 1u << 16u;
    }

    /**
     * Clear RESET's spi0 bit.
     */
    inline void clear_RESET_spi0()
    {
        RESET &= ~(1u << 16u);
    }

    /**
     * Toggle RESET's spi0 bit.
     */
    inline void toggle_RESET_spi0()
    {
        RESET ^= 1u << 16u;
    }

    /**
     * Get RESET's spi1 bit.
     */
    bool get_RESET_spi1()
    {
        return RESET & (1u << 17u);
    }

    /**
     * Set RESET's spi1 bit.
     */
    inline void set_RESET_spi1()
    {
        RESET |= 1u << 17u;
    }

    /**
     * Clear RESET's spi1 bit.
     */
    inline void clear_RESET_spi1()
    {
        RESET &= ~(1u << 17u);
    }

    /**
     * Toggle RESET's spi1 bit.
     */
    inline void toggle_RESET_spi1()
    {
        RESET ^= 1u << 17u;
    }

    /**
     * Get RESET's syscfg bit.
     */
    bool get_RESET_syscfg()
    {
        return RESET & (1u << 18u);
    }

    /**
     * Set RESET's syscfg bit.
     */
    inline void set_RESET_syscfg()
    {
        RESET |= 1u << 18u;
    }

    /**
     * Clear RESET's syscfg bit.
     */
    inline void clear_RESET_syscfg()
    {
        RESET &= ~(1u << 18u);
    }

    /**
     * Toggle RESET's syscfg bit.
     */
    inline void toggle_RESET_syscfg()
    {
        RESET ^= 1u << 18u;
    }

    /**
     * Get RESET's sysinfo bit.
     */
    bool get_RESET_sysinfo()
    {
        return RESET & (1u << 19u);
    }

    /**
     * Set RESET's sysinfo bit.
     */
    inline void set_RESET_sysinfo()
    {
        RESET |= 1u << 19u;
    }

    /**
     * Clear RESET's sysinfo bit.
     */
    inline void clear_RESET_sysinfo()
    {
        RESET &= ~(1u << 19u);
    }

    /**
     * Toggle RESET's sysinfo bit.
     */
    inline void toggle_RESET_sysinfo()
    {
        RESET ^= 1u << 19u;
    }

    /**
     * Get RESET's tbman bit.
     */
    bool get_RESET_tbman()
    {
        return RESET & (1u << 20u);
    }

    /**
     * Set RESET's tbman bit.
     */
    inline void set_RESET_tbman()
    {
        RESET |= 1u << 20u;
    }

    /**
     * Clear RESET's tbman bit.
     */
    inline void clear_RESET_tbman()
    {
        RESET &= ~(1u << 20u);
    }

    /**
     * Toggle RESET's tbman bit.
     */
    inline void toggle_RESET_tbman()
    {
        RESET ^= 1u << 20u;
    }

    /**
     * Get RESET's timer bit.
     */
    bool get_RESET_timer()
    {
        return RESET & (1u << 21u);
    }

    /**
     * Set RESET's timer bit.
     */
    inline void set_RESET_timer()
    {
        RESET |= 1u << 21u;
    }

    /**
     * Clear RESET's timer bit.
     */
    inline void clear_RESET_timer()
    {
        RESET &= ~(1u << 21u);
    }

    /**
     * Toggle RESET's timer bit.
     */
    inline void toggle_RESET_timer()
    {
        RESET ^= 1u << 21u;
    }

    /**
     * Get RESET's uart0 bit.
     */
    bool get_RESET_uart0()
    {
        return RESET & (1u << 22u);
    }

    /**
     * Set RESET's uart0 bit.
     */
    inline void set_RESET_uart0()
    {
        RESET |= 1u << 22u;
    }

    /**
     * Clear RESET's uart0 bit.
     */
    inline void clear_RESET_uart0()
    {
        RESET &= ~(1u << 22u);
    }

    /**
     * Toggle RESET's uart0 bit.
     */
    inline void toggle_RESET_uart0()
    {
        RESET ^= 1u << 22u;
    }

    /**
     * Get RESET's uart1 bit.
     */
    bool get_RESET_uart1()
    {
        return RESET & (1u << 23u);
    }

    /**
     * Set RESET's uart1 bit.
     */
    inline void set_RESET_uart1()
    {
        RESET |= 1u << 23u;
    }

    /**
     * Clear RESET's uart1 bit.
     */
    inline void clear_RESET_uart1()
    {
        RESET &= ~(1u << 23u);
    }

    /**
     * Toggle RESET's uart1 bit.
     */
    inline void toggle_RESET_uart1()
    {
        RESET ^= 1u << 23u;
    }

    /**
     * Get RESET's usbctrl bit.
     */
    bool get_RESET_usbctrl()
    {
        return RESET & (1u << 24u);
    }

    /**
     * Set RESET's usbctrl bit.
     */
    inline void set_RESET_usbctrl()
    {
        RESET |= 1u << 24u;
    }

    /**
     * Clear RESET's usbctrl bit.
     */
    inline void clear_RESET_usbctrl()
    {
        RESET &= ~(1u << 24u);
    }

    /**
     * Toggle RESET's usbctrl bit.
     */
    inline void toggle_RESET_usbctrl()
    {
        RESET ^= 1u << 24u;
    }

    /**
     * Get WDSEL's adc bit.
     */
    bool get_WDSEL_adc()
    {
        return WDSEL & (1u << 0u);
    }

    /**
     * Set WDSEL's adc bit.
     */
    inline void set_WDSEL_adc()
    {
        WDSEL |= 1u << 0u;
    }

    /**
     * Clear WDSEL's adc bit.
     */
    inline void clear_WDSEL_adc()
    {
        WDSEL &= ~(1u << 0u);
    }

    /**
     * Toggle WDSEL's adc bit.
     */
    inline void toggle_WDSEL_adc()
    {
        WDSEL ^= 1u << 0u;
    }

    /**
     * Get WDSEL's busctrl bit.
     */
    bool get_WDSEL_busctrl()
    {
        return WDSEL & (1u << 1u);
    }

    /**
     * Set WDSEL's busctrl bit.
     */
    inline void set_WDSEL_busctrl()
    {
        WDSEL |= 1u << 1u;
    }

    /**
     * Clear WDSEL's busctrl bit.
     */
    inline void clear_WDSEL_busctrl()
    {
        WDSEL &= ~(1u << 1u);
    }

    /**
     * Toggle WDSEL's busctrl bit.
     */
    inline void toggle_WDSEL_busctrl()
    {
        WDSEL ^= 1u << 1u;
    }

    /**
     * Get WDSEL's dma bit.
     */
    bool get_WDSEL_dma()
    {
        return WDSEL & (1u << 2u);
    }

    /**
     * Set WDSEL's dma bit.
     */
    inline void set_WDSEL_dma()
    {
        WDSEL |= 1u << 2u;
    }

    /**
     * Clear WDSEL's dma bit.
     */
    inline void clear_WDSEL_dma()
    {
        WDSEL &= ~(1u << 2u);
    }

    /**
     * Toggle WDSEL's dma bit.
     */
    inline void toggle_WDSEL_dma()
    {
        WDSEL ^= 1u << 2u;
    }

    /**
     * Get WDSEL's i2c0 bit.
     */
    bool get_WDSEL_i2c0()
    {
        return WDSEL & (1u << 3u);
    }

    /**
     * Set WDSEL's i2c0 bit.
     */
    inline void set_WDSEL_i2c0()
    {
        WDSEL |= 1u << 3u;
    }

    /**
     * Clear WDSEL's i2c0 bit.
     */
    inline void clear_WDSEL_i2c0()
    {
        WDSEL &= ~(1u << 3u);
    }

    /**
     * Toggle WDSEL's i2c0 bit.
     */
    inline void toggle_WDSEL_i2c0()
    {
        WDSEL ^= 1u << 3u;
    }

    /**
     * Get WDSEL's i2c1 bit.
     */
    bool get_WDSEL_i2c1()
    {
        return WDSEL & (1u << 4u);
    }

    /**
     * Set WDSEL's i2c1 bit.
     */
    inline void set_WDSEL_i2c1()
    {
        WDSEL |= 1u << 4u;
    }

    /**
     * Clear WDSEL's i2c1 bit.
     */
    inline void clear_WDSEL_i2c1()
    {
        WDSEL &= ~(1u << 4u);
    }

    /**
     * Toggle WDSEL's i2c1 bit.
     */
    inline void toggle_WDSEL_i2c1()
    {
        WDSEL ^= 1u << 4u;
    }

    /**
     * Get WDSEL's io_bank0 bit.
     */
    bool get_WDSEL_io_bank0()
    {
        return WDSEL & (1u << 5u);
    }

    /**
     * Set WDSEL's io_bank0 bit.
     */
    inline void set_WDSEL_io_bank0()
    {
        WDSEL |= 1u << 5u;
    }

    /**
     * Clear WDSEL's io_bank0 bit.
     */
    inline void clear_WDSEL_io_bank0()
    {
        WDSEL &= ~(1u << 5u);
    }

    /**
     * Toggle WDSEL's io_bank0 bit.
     */
    inline void toggle_WDSEL_io_bank0()
    {
        WDSEL ^= 1u << 5u;
    }

    /**
     * Get WDSEL's io_qspi bit.
     */
    bool get_WDSEL_io_qspi()
    {
        return WDSEL & (1u << 6u);
    }

    /**
     * Set WDSEL's io_qspi bit.
     */
    inline void set_WDSEL_io_qspi()
    {
        WDSEL |= 1u << 6u;
    }

    /**
     * Clear WDSEL's io_qspi bit.
     */
    inline void clear_WDSEL_io_qspi()
    {
        WDSEL &= ~(1u << 6u);
    }

    /**
     * Toggle WDSEL's io_qspi bit.
     */
    inline void toggle_WDSEL_io_qspi()
    {
        WDSEL ^= 1u << 6u;
    }

    /**
     * Get WDSEL's jtag bit.
     */
    bool get_WDSEL_jtag()
    {
        return WDSEL & (1u << 7u);
    }

    /**
     * Set WDSEL's jtag bit.
     */
    inline void set_WDSEL_jtag()
    {
        WDSEL |= 1u << 7u;
    }

    /**
     * Clear WDSEL's jtag bit.
     */
    inline void clear_WDSEL_jtag()
    {
        WDSEL &= ~(1u << 7u);
    }

    /**
     * Toggle WDSEL's jtag bit.
     */
    inline void toggle_WDSEL_jtag()
    {
        WDSEL ^= 1u << 7u;
    }

    /**
     * Get WDSEL's pads_bank0 bit.
     */
    bool get_WDSEL_pads_bank0()
    {
        return WDSEL & (1u << 8u);
    }

    /**
     * Set WDSEL's pads_bank0 bit.
     */
    inline void set_WDSEL_pads_bank0()
    {
        WDSEL |= 1u << 8u;
    }

    /**
     * Clear WDSEL's pads_bank0 bit.
     */
    inline void clear_WDSEL_pads_bank0()
    {
        WDSEL &= ~(1u << 8u);
    }

    /**
     * Toggle WDSEL's pads_bank0 bit.
     */
    inline void toggle_WDSEL_pads_bank0()
    {
        WDSEL ^= 1u << 8u;
    }

    /**
     * Get WDSEL's pads_qspi bit.
     */
    bool get_WDSEL_pads_qspi()
    {
        return WDSEL & (1u << 9u);
    }

    /**
     * Set WDSEL's pads_qspi bit.
     */
    inline void set_WDSEL_pads_qspi()
    {
        WDSEL |= 1u << 9u;
    }

    /**
     * Clear WDSEL's pads_qspi bit.
     */
    inline void clear_WDSEL_pads_qspi()
    {
        WDSEL &= ~(1u << 9u);
    }

    /**
     * Toggle WDSEL's pads_qspi bit.
     */
    inline void toggle_WDSEL_pads_qspi()
    {
        WDSEL ^= 1u << 9u;
    }

    /**
     * Get WDSEL's pio0 bit.
     */
    bool get_WDSEL_pio0()
    {
        return WDSEL & (1u << 10u);
    }

    /**
     * Set WDSEL's pio0 bit.
     */
    inline void set_WDSEL_pio0()
    {
        WDSEL |= 1u << 10u;
    }

    /**
     * Clear WDSEL's pio0 bit.
     */
    inline void clear_WDSEL_pio0()
    {
        WDSEL &= ~(1u << 10u);
    }

    /**
     * Toggle WDSEL's pio0 bit.
     */
    inline void toggle_WDSEL_pio0()
    {
        WDSEL ^= 1u << 10u;
    }

    /**
     * Get WDSEL's pio1 bit.
     */
    bool get_WDSEL_pio1()
    {
        return WDSEL & (1u << 11u);
    }

    /**
     * Set WDSEL's pio1 bit.
     */
    inline void set_WDSEL_pio1()
    {
        WDSEL |= 1u << 11u;
    }

    /**
     * Clear WDSEL's pio1 bit.
     */
    inline void clear_WDSEL_pio1()
    {
        WDSEL &= ~(1u << 11u);
    }

    /**
     * Toggle WDSEL's pio1 bit.
     */
    inline void toggle_WDSEL_pio1()
    {
        WDSEL ^= 1u << 11u;
    }

    /**
     * Get WDSEL's pll_sys bit.
     */
    bool get_WDSEL_pll_sys()
    {
        return WDSEL & (1u << 12u);
    }

    /**
     * Set WDSEL's pll_sys bit.
     */
    inline void set_WDSEL_pll_sys()
    {
        WDSEL |= 1u << 12u;
    }

    /**
     * Clear WDSEL's pll_sys bit.
     */
    inline void clear_WDSEL_pll_sys()
    {
        WDSEL &= ~(1u << 12u);
    }

    /**
     * Toggle WDSEL's pll_sys bit.
     */
    inline void toggle_WDSEL_pll_sys()
    {
        WDSEL ^= 1u << 12u;
    }

    /**
     * Get WDSEL's pll_usb bit.
     */
    bool get_WDSEL_pll_usb()
    {
        return WDSEL & (1u << 13u);
    }

    /**
     * Set WDSEL's pll_usb bit.
     */
    inline void set_WDSEL_pll_usb()
    {
        WDSEL |= 1u << 13u;
    }

    /**
     * Clear WDSEL's pll_usb bit.
     */
    inline void clear_WDSEL_pll_usb()
    {
        WDSEL &= ~(1u << 13u);
    }

    /**
     * Toggle WDSEL's pll_usb bit.
     */
    inline void toggle_WDSEL_pll_usb()
    {
        WDSEL ^= 1u << 13u;
    }

    /**
     * Get WDSEL's pwm bit.
     */
    bool get_WDSEL_pwm()
    {
        return WDSEL & (1u << 14u);
    }

    /**
     * Set WDSEL's pwm bit.
     */
    inline void set_WDSEL_pwm()
    {
        WDSEL |= 1u << 14u;
    }

    /**
     * Clear WDSEL's pwm bit.
     */
    inline void clear_WDSEL_pwm()
    {
        WDSEL &= ~(1u << 14u);
    }

    /**
     * Toggle WDSEL's pwm bit.
     */
    inline void toggle_WDSEL_pwm()
    {
        WDSEL ^= 1u << 14u;
    }

    /**
     * Get WDSEL's rtc bit.
     */
    bool get_WDSEL_rtc()
    {
        return WDSEL & (1u << 15u);
    }

    /**
     * Set WDSEL's rtc bit.
     */
    inline void set_WDSEL_rtc()
    {
        WDSEL |= 1u << 15u;
    }

    /**
     * Clear WDSEL's rtc bit.
     */
    inline void clear_WDSEL_rtc()
    {
        WDSEL &= ~(1u << 15u);
    }

    /**
     * Toggle WDSEL's rtc bit.
     */
    inline void toggle_WDSEL_rtc()
    {
        WDSEL ^= 1u << 15u;
    }

    /**
     * Get WDSEL's spi0 bit.
     */
    bool get_WDSEL_spi0()
    {
        return WDSEL & (1u << 16u);
    }

    /**
     * Set WDSEL's spi0 bit.
     */
    inline void set_WDSEL_spi0()
    {
        WDSEL |= 1u << 16u;
    }

    /**
     * Clear WDSEL's spi0 bit.
     */
    inline void clear_WDSEL_spi0()
    {
        WDSEL &= ~(1u << 16u);
    }

    /**
     * Toggle WDSEL's spi0 bit.
     */
    inline void toggle_WDSEL_spi0()
    {
        WDSEL ^= 1u << 16u;
    }

    /**
     * Get WDSEL's spi1 bit.
     */
    bool get_WDSEL_spi1()
    {
        return WDSEL & (1u << 17u);
    }

    /**
     * Set WDSEL's spi1 bit.
     */
    inline void set_WDSEL_spi1()
    {
        WDSEL |= 1u << 17u;
    }

    /**
     * Clear WDSEL's spi1 bit.
     */
    inline void clear_WDSEL_spi1()
    {
        WDSEL &= ~(1u << 17u);
    }

    /**
     * Toggle WDSEL's spi1 bit.
     */
    inline void toggle_WDSEL_spi1()
    {
        WDSEL ^= 1u << 17u;
    }

    /**
     * Get WDSEL's syscfg bit.
     */
    bool get_WDSEL_syscfg()
    {
        return WDSEL & (1u << 18u);
    }

    /**
     * Set WDSEL's syscfg bit.
     */
    inline void set_WDSEL_syscfg()
    {
        WDSEL |= 1u << 18u;
    }

    /**
     * Clear WDSEL's syscfg bit.
     */
    inline void clear_WDSEL_syscfg()
    {
        WDSEL &= ~(1u << 18u);
    }

    /**
     * Toggle WDSEL's syscfg bit.
     */
    inline void toggle_WDSEL_syscfg()
    {
        WDSEL ^= 1u << 18u;
    }

    /**
     * Get WDSEL's sysinfo bit.
     */
    bool get_WDSEL_sysinfo()
    {
        return WDSEL & (1u << 19u);
    }

    /**
     * Set WDSEL's sysinfo bit.
     */
    inline void set_WDSEL_sysinfo()
    {
        WDSEL |= 1u << 19u;
    }

    /**
     * Clear WDSEL's sysinfo bit.
     */
    inline void clear_WDSEL_sysinfo()
    {
        WDSEL &= ~(1u << 19u);
    }

    /**
     * Toggle WDSEL's sysinfo bit.
     */
    inline void toggle_WDSEL_sysinfo()
    {
        WDSEL ^= 1u << 19u;
    }

    /**
     * Get WDSEL's tbman bit.
     */
    bool get_WDSEL_tbman()
    {
        return WDSEL & (1u << 20u);
    }

    /**
     * Set WDSEL's tbman bit.
     */
    inline void set_WDSEL_tbman()
    {
        WDSEL |= 1u << 20u;
    }

    /**
     * Clear WDSEL's tbman bit.
     */
    inline void clear_WDSEL_tbman()
    {
        WDSEL &= ~(1u << 20u);
    }

    /**
     * Toggle WDSEL's tbman bit.
     */
    inline void toggle_WDSEL_tbman()
    {
        WDSEL ^= 1u << 20u;
    }

    /**
     * Get WDSEL's timer bit.
     */
    bool get_WDSEL_timer()
    {
        return WDSEL & (1u << 21u);
    }

    /**
     * Set WDSEL's timer bit.
     */
    inline void set_WDSEL_timer()
    {
        WDSEL |= 1u << 21u;
    }

    /**
     * Clear WDSEL's timer bit.
     */
    inline void clear_WDSEL_timer()
    {
        WDSEL &= ~(1u << 21u);
    }

    /**
     * Toggle WDSEL's timer bit.
     */
    inline void toggle_WDSEL_timer()
    {
        WDSEL ^= 1u << 21u;
    }

    /**
     * Get WDSEL's uart0 bit.
     */
    bool get_WDSEL_uart0()
    {
        return WDSEL & (1u << 22u);
    }

    /**
     * Set WDSEL's uart0 bit.
     */
    inline void set_WDSEL_uart0()
    {
        WDSEL |= 1u << 22u;
    }

    /**
     * Clear WDSEL's uart0 bit.
     */
    inline void clear_WDSEL_uart0()
    {
        WDSEL &= ~(1u << 22u);
    }

    /**
     * Toggle WDSEL's uart0 bit.
     */
    inline void toggle_WDSEL_uart0()
    {
        WDSEL ^= 1u << 22u;
    }

    /**
     * Get WDSEL's uart1 bit.
     */
    bool get_WDSEL_uart1()
    {
        return WDSEL & (1u << 23u);
    }

    /**
     * Set WDSEL's uart1 bit.
     */
    inline void set_WDSEL_uart1()
    {
        WDSEL |= 1u << 23u;
    }

    /**
     * Clear WDSEL's uart1 bit.
     */
    inline void clear_WDSEL_uart1()
    {
        WDSEL &= ~(1u << 23u);
    }

    /**
     * Toggle WDSEL's uart1 bit.
     */
    inline void toggle_WDSEL_uart1()
    {
        WDSEL ^= 1u << 23u;
    }

    /**
     * Get WDSEL's usbctrl bit.
     */
    bool get_WDSEL_usbctrl()
    {
        return WDSEL & (1u << 24u);
    }

    /**
     * Set WDSEL's usbctrl bit.
     */
    inline void set_WDSEL_usbctrl()
    {
        WDSEL |= 1u << 24u;
    }

    /**
     * Clear WDSEL's usbctrl bit.
     */
    inline void clear_WDSEL_usbctrl()
    {
        WDSEL &= ~(1u << 24u);
    }

    /**
     * Toggle WDSEL's usbctrl bit.
     */
    inline void toggle_WDSEL_usbctrl()
    {
        WDSEL ^= 1u << 24u;
    }

    /**
     * Get RESET_DONE's adc bit.
     */
    bool get_RESET_DONE_adc()
    {
        return RESET_DONE & (1u << 0u);
    }

    /**
     * Get RESET_DONE's busctrl bit.
     */
    bool get_RESET_DONE_busctrl()
    {
        return RESET_DONE & (1u << 1u);
    }

    /**
     * Get RESET_DONE's dma bit.
     */
    bool get_RESET_DONE_dma()
    {
        return RESET_DONE & (1u << 2u);
    }

    /**
     * Get RESET_DONE's i2c0 bit.
     */
    bool get_RESET_DONE_i2c0()
    {
        return RESET_DONE & (1u << 3u);
    }

    /**
     * Get RESET_DONE's i2c1 bit.
     */
    bool get_RESET_DONE_i2c1()
    {
        return RESET_DONE & (1u << 4u);
    }

    /**
     * Get RESET_DONE's io_bank0 bit.
     */
    bool get_RESET_DONE_io_bank0()
    {
        return RESET_DONE & (1u << 5u);
    }

    /**
     * Get RESET_DONE's io_qspi bit.
     */
    bool get_RESET_DONE_io_qspi()
    {
        return RESET_DONE & (1u << 6u);
    }

    /**
     * Get RESET_DONE's jtag bit.
     */
    bool get_RESET_DONE_jtag()
    {
        return RESET_DONE & (1u << 7u);
    }

    /**
     * Get RESET_DONE's pads_bank0 bit.
     */
    bool get_RESET_DONE_pads_bank0()
    {
        return RESET_DONE & (1u << 8u);
    }

    /**
     * Get RESET_DONE's pads_qspi bit.
     */
    bool get_RESET_DONE_pads_qspi()
    {
        return RESET_DONE & (1u << 9u);
    }

    /**
     * Get RESET_DONE's pio0 bit.
     */
    bool get_RESET_DONE_pio0()
    {
        return RESET_DONE & (1u << 10u);
    }

    /**
     * Get RESET_DONE's pio1 bit.
     */
    bool get_RESET_DONE_pio1()
    {
        return RESET_DONE & (1u << 11u);
    }

    /**
     * Get RESET_DONE's pll_sys bit.
     */
    bool get_RESET_DONE_pll_sys()
    {
        return RESET_DONE & (1u << 12u);
    }

    /**
     * Get RESET_DONE's pll_usb bit.
     */
    bool get_RESET_DONE_pll_usb()
    {
        return RESET_DONE & (1u << 13u);
    }

    /**
     * Get RESET_DONE's pwm bit.
     */
    bool get_RESET_DONE_pwm()
    {
        return RESET_DONE & (1u << 14u);
    }

    /**
     * Get RESET_DONE's rtc bit.
     */
    bool get_RESET_DONE_rtc()
    {
        return RESET_DONE & (1u << 15u);
    }

    /**
     * Get RESET_DONE's spi0 bit.
     */
    bool get_RESET_DONE_spi0()
    {
        return RESET_DONE & (1u << 16u);
    }

    /**
     * Get RESET_DONE's spi1 bit.
     */
    bool get_RESET_DONE_spi1()
    {
        return RESET_DONE & (1u << 17u);
    }

    /**
     * Get RESET_DONE's syscfg bit.
     */
    bool get_RESET_DONE_syscfg()
    {
        return RESET_DONE & (1u << 18u);
    }

    /**
     * Get RESET_DONE's sysinfo bit.
     */
    bool get_RESET_DONE_sysinfo()
    {
        return RESET_DONE & (1u << 19u);
    }

    /**
     * Get RESET_DONE's tbman bit.
     */
    bool get_RESET_DONE_tbman()
    {
        return RESET_DONE & (1u << 20u);
    }

    /**
     * Get RESET_DONE's timer bit.
     */
    bool get_RESET_DONE_timer()
    {
        return RESET_DONE & (1u << 21u);
    }

    /**
     * Get RESET_DONE's uart0 bit.
     */
    bool get_RESET_DONE_uart0()
    {
        return RESET_DONE & (1u << 22u);
    }

    /**
     * Get RESET_DONE's uart1 bit.
     */
    bool get_RESET_DONE_uart1()
    {
        return RESET_DONE & (1u << 23u);
    }

    /**
     * Get RESET_DONE's usbctrl bit.
     */
    bool get_RESET_DONE_usbctrl()
    {
        return RESET_DONE & (1u << 24u);
    }
};

static_assert(sizeof(resets) == resets::size);

static volatile resets *const RESETS = reinterpret_cast<resets *>(0x4000c000);

}; // namespace RP2040

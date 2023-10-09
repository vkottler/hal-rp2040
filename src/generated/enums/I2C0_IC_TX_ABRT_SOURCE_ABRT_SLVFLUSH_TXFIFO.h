/**
 * \file
 * \brief Generated by ifgen (2.6.3).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace RP2040
{

enum class I2C0_IC_TX_ABRT_SOURCE_ABRT_SLVFLUSH_TXFIFO : uint8_t
{
    ABRT_SLVFLUSH_TXFIFO_VOID /*!< Slave flushes existing data in TX-FIFO upon
                                 getting read command- scenario not present */
        ,
    ABRT_SLVFLUSH_TXFIFO_GENERATED = 1 /*!< Slave flushes existing data in
                                          TX-FIFO upon getting read command */
};
static_assert(sizeof(I2C0_IC_TX_ABRT_SOURCE_ABRT_SLVFLUSH_TXFIFO) == 1);

static constexpr uint16_t I2C0_IC_TX_ABRT_SOURCE_ABRT_SLVFLUSH_TXFIFO_id = 399;

/**
 * Converts I2C0_IC_TX_ABRT_SOURCE_ABRT_SLVFLUSH_TXFIFO to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(
    I2C0_IC_TX_ABRT_SOURCE_ABRT_SLVFLUSH_TXFIFO instance)
{
    const char *result = "UNKNOWN I2C0_IC_TX_ABRT_SOURCE_ABRT_SLVFLUSH_TXFIFO";

    switch (instance)
    {
    case I2C0_IC_TX_ABRT_SOURCE_ABRT_SLVFLUSH_TXFIFO::
        ABRT_SLVFLUSH_TXFIFO_VOID:
        result = "ABRT_SLVFLUSH_TXFIFO_VOID";
        break;
    case I2C0_IC_TX_ABRT_SOURCE_ABRT_SLVFLUSH_TXFIFO::
        ABRT_SLVFLUSH_TXFIFO_GENERATED:
        result = "ABRT_SLVFLUSH_TXFIFO_GENERATED";
        break;
    }

    return result;
}

/**
 * Converts a C string to I2C0_IC_TX_ABRT_SOURCE_ABRT_SLVFLUSH_TXFIFO.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        I2C0_IC_TX_ABRT_SOURCE_ABRT_SLVFLUSH_TXFIFO &output)
{
    bool result = false;

    if ((result = !strncmp(data, "ABRT_SLVFLUSH_TXFIFO_VOID", 25)))
    {
        output = I2C0_IC_TX_ABRT_SOURCE_ABRT_SLVFLUSH_TXFIFO::
            ABRT_SLVFLUSH_TXFIFO_VOID;
    }
    else if ((result = !strncmp(data, "ABRT_SLVFLUSH_TXFIFO_GENERATED", 30)))
    {
        output = I2C0_IC_TX_ABRT_SOURCE_ABRT_SLVFLUSH_TXFIFO::
            ABRT_SLVFLUSH_TXFIFO_GENERATED;
    }

    return result;
}

}; // namespace RP2040

/**
 * \file
 * \brief Generated by ifgen (3.1.7).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace RP2040
{

enum class I2C0_IC_TX_ABRT_SOURCE_ABRT_SLVFLUSH_TXFIFO : uint8_t
{
    VOID /*!< Slave flushes existing data in TX-FIFO upon getting read command-
            scenario not present */
        ,
    GENERATED = 1 /*!< Slave flushes existing data in TX-FIFO upon getting read
                     command */
};
static_assert(sizeof(I2C0_IC_TX_ABRT_SOURCE_ABRT_SLVFLUSH_TXFIFO) == 1);

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
    case I2C0_IC_TX_ABRT_SOURCE_ABRT_SLVFLUSH_TXFIFO::VOID:
        result = "VOID";
        break;
    case I2C0_IC_TX_ABRT_SOURCE_ABRT_SLVFLUSH_TXFIFO::GENERATED:
        result = "GENERATED";
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

    if ((result = !strncmp(data, "VOID", 4)))
    {
        output = I2C0_IC_TX_ABRT_SOURCE_ABRT_SLVFLUSH_TXFIFO::VOID;
    }
    else if ((result = !strncmp(data, "GENERATED", 9)))
    {
        output = I2C0_IC_TX_ABRT_SOURCE_ABRT_SLVFLUSH_TXFIFO::GENERATED;
    }

    return result;
}

}; // namespace RP2040

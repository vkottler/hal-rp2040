/**
 * \file
 * \brief Generated by ifgen (3.1.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace RP2040
{

enum class I2C0_IC_ENABLE_TX_CMD_BLOCK : uint8_t
{
    NOT_BLOCKED /*!< Tx Command execution not blocked */,
    BLOCKED = 1 /*!< Tx Command execution blocked */
};
static_assert(sizeof(I2C0_IC_ENABLE_TX_CMD_BLOCK) == 1);

static constexpr uint16_t I2C0_IC_ENABLE_TX_CMD_BLOCK_id = 112;

/**
 * Converts I2C0_IC_ENABLE_TX_CMD_BLOCK to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(I2C0_IC_ENABLE_TX_CMD_BLOCK instance)
{
    const char *result = "UNKNOWN I2C0_IC_ENABLE_TX_CMD_BLOCK";

    switch (instance)
    {
    case I2C0_IC_ENABLE_TX_CMD_BLOCK::NOT_BLOCKED:
        result = "NOT_BLOCKED";
        break;
    case I2C0_IC_ENABLE_TX_CMD_BLOCK::BLOCKED:
        result = "BLOCKED";
        break;
    }

    return result;
}

/**
 * Converts a C string to I2C0_IC_ENABLE_TX_CMD_BLOCK.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, I2C0_IC_ENABLE_TX_CMD_BLOCK &output)
{
    bool result = false;

    if ((result = !strncmp(data, "NOT_BLOCKED", 11)))
    {
        output = I2C0_IC_ENABLE_TX_CMD_BLOCK::NOT_BLOCKED;
    }
    else if ((result = !strncmp(data, "BLOCKED", 7)))
    {
        output = I2C0_IC_ENABLE_TX_CMD_BLOCK::BLOCKED;
    }

    return result;
}

}; // namespace RP2040

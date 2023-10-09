/**
 * \file
 * \brief Generated by ifgen (2.6.3).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace RP2040
{

enum class I2C0_IC_DATA_CMD_CMD : uint8_t
{
    WRITE /*!< Master Write Command */,
    READ = 1 /*!< Master Read Command */
};
static_assert(sizeof(I2C0_IC_DATA_CMD_CMD) == 1);

static constexpr uint16_t I2C0_IC_DATA_CMD_CMD_id = 333;

/**
 * Converts I2C0_IC_DATA_CMD_CMD to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(I2C0_IC_DATA_CMD_CMD instance)
{
    const char *result = "UNKNOWN I2C0_IC_DATA_CMD_CMD";

    switch (instance)
    {
    case I2C0_IC_DATA_CMD_CMD::WRITE:
        result = "WRITE";
        break;
    case I2C0_IC_DATA_CMD_CMD::READ:
        result = "READ";
        break;
    }

    return result;
}

/**
 * Converts a C string to I2C0_IC_DATA_CMD_CMD.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, I2C0_IC_DATA_CMD_CMD &output)
{
    bool result = false;

    if ((result = !strncmp(data, "WRITE", 5)))
    {
        output = I2C0_IC_DATA_CMD_CMD::WRITE;
    }
    else if ((result = !strncmp(data, "READ", 4)))
    {
        output = I2C0_IC_DATA_CMD_CMD::READ;
    }

    return result;
}

}; // namespace RP2040

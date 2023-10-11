/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace RP2040
{

enum class XIP_SSI_CTRLR0_TMOD : uint8_t
{
    TX_AND_RX /*!< Both transmit and receive */,
    TX_ONLY = 1 /*!< Transmit only (not for FRF == 0, standard SPI mode) */,
    RX_ONLY = 2 /*!< Receive only (not for FRF == 0, standard SPI mode) */,
    EEPROM_READ = 3 /*!< EEPROM read mode (TX then RX; RX starts after control
                       data TX'd) */
};
static_assert(sizeof(XIP_SSI_CTRLR0_TMOD) == 1);

static constexpr uint16_t XIP_SSI_CTRLR0_TMOD_id = 443;

/**
 * Converts XIP_SSI_CTRLR0_TMOD to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(XIP_SSI_CTRLR0_TMOD instance)
{
    const char *result = "UNKNOWN XIP_SSI_CTRLR0_TMOD";

    switch (instance)
    {
    case XIP_SSI_CTRLR0_TMOD::TX_AND_RX:
        result = "TX_AND_RX";
        break;
    case XIP_SSI_CTRLR0_TMOD::TX_ONLY:
        result = "TX_ONLY";
        break;
    case XIP_SSI_CTRLR0_TMOD::RX_ONLY:
        result = "RX_ONLY";
        break;
    case XIP_SSI_CTRLR0_TMOD::EEPROM_READ:
        result = "EEPROM_READ";
        break;
    }

    return result;
}

/**
 * Converts a C string to XIP_SSI_CTRLR0_TMOD.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, XIP_SSI_CTRLR0_TMOD &output)
{
    bool result = false;

    if ((result = !strncmp(data, "TX_AND_RX", 9)))
    {
        output = XIP_SSI_CTRLR0_TMOD::TX_AND_RX;
    }
    else if ((result = !strncmp(data, "TX_ONLY", 7)))
    {
        output = XIP_SSI_CTRLR0_TMOD::TX_ONLY;
    }
    else if ((result = !strncmp(data, "RX_ONLY", 7)))
    {
        output = XIP_SSI_CTRLR0_TMOD::RX_ONLY;
    }
    else if ((result = !strncmp(data, "EEPROM_READ", 11)))
    {
        output = XIP_SSI_CTRLR0_TMOD::EEPROM_READ;
    }

    return result;
}

}; // namespace RP2040

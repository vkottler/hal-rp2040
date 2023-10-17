/**
 * \file
 * \brief Generated by ifgen (3.1.4).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace RP2040
{

enum class XIP_SSI_CTRLR0_SPI_FRF : uint8_t
{
    STD /*!< Standard 1-bit SPI frame format; 1 bit per SCK, full-duplex */,
    DUAL = 1 /*!< Dual-SPI frame format; two bits per SCK, half-duplex */,
    QUAD = 2 /*!< Quad-SPI frame format; four bits per SCK, half-duplex */
};
static_assert(sizeof(XIP_SSI_CTRLR0_SPI_FRF) == 1);

/**
 * Converts XIP_SSI_CTRLR0_SPI_FRF to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(XIP_SSI_CTRLR0_SPI_FRF instance)
{
    const char *result = "UNKNOWN XIP_SSI_CTRLR0_SPI_FRF";

    switch (instance)
    {
    case XIP_SSI_CTRLR0_SPI_FRF::STD:
        result = "STD";
        break;
    case XIP_SSI_CTRLR0_SPI_FRF::DUAL:
        result = "DUAL";
        break;
    case XIP_SSI_CTRLR0_SPI_FRF::QUAD:
        result = "QUAD";
        break;
    }

    return result;
}

/**
 * Converts a C string to XIP_SSI_CTRLR0_SPI_FRF.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, XIP_SSI_CTRLR0_SPI_FRF &output)
{
    bool result = false;

    if ((result = !strncmp(data, "STD", 3)))
    {
        output = XIP_SSI_CTRLR0_SPI_FRF::STD;
    }
    else if ((result = !strncmp(data, "DUAL", 4)))
    {
        output = XIP_SSI_CTRLR0_SPI_FRF::DUAL;
    }
    else if ((result = !strncmp(data, "QUAD", 4)))
    {
        output = XIP_SSI_CTRLR0_SPI_FRF::QUAD;
    }

    return result;
}

}; // namespace RP2040

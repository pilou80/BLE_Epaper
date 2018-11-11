/*
 * ePaper.c
 *
 *  Created on: 10 nov. 2018
 *      Author: pilou
 */
#ifndef EPD_WIDTH
    #error "EPD_WIDTH undefined"
#endif

#ifndef EPD_HEIGHT
    #error "EPD_WIDTH undefined"
#endif

#include "ePaper.h"
#include "Board"
#include "pin.h"
#include "SPI.h"

SPI_Handle      handle;

const PIN_Config ePaperInitTable[] = {
    ePaper_CS     | PIN_GPIO_OUTPUT_EN | PIN_GPIO_HIGH,
    ePaper_DC     | PIN_GPIO_OUTPUT_EN | PIN_GPIO_HIGH,
    ePaper_RST    | PIN_GPIO_OUTPUT_EN | PIN_GPIO_HIGH,
    ePaper_BUSY   | PIN_INPUT_EN | PIN_PULLDOWN,

    PIN_TERMINATE
};

void ePaperCommand(unsigned char command);
void ePaperData(unsigned char data);

void ePaper_Init()
{
    SPI_Params      params;
    SPI_Params_init(&params);

    params.bitRate  = someNewBitRate;
    handle = SPI_open(CC2650_LAUNCHXL_SPI0, &params);
    if (!handle)
    {
     System_printf("SPI did not open");
    }
}

void ePaperCommand(unsigned char command)
{

}
void ePaperData(unsigned char data)
{


}
void ePaper_ClearFrameMemory()
{

}

void ePaper_DisplayFrame()
{

}

void ePaper_SetFrameMemory()
{

}

void ePaper_Sleep()
{

}

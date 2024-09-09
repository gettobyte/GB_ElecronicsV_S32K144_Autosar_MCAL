/*
 * bno055.c
 *
 *  Created on: 01-Sep-2024
 *      Author: Rohan
 */

/*---------------------------------------------------------------------------*
*  Includes
*---------------------------------------------------------------------------*/
#include "bno055.h"


/*! file <BNO055 >
 * brief <Sensor driver for BNO055> */

/*  STRUCTURE DEFINITIONS   */
static struct bno055_t *p_bno055;

/*   LOCAL FUNCTIONS    */

/*!
 *  @brief
 *  This API is used for initialize
 *  bus read, bus write function pointers,device
 *  address,accel revision id, gyro revision id
 *  mag revision id, software revision id, boot loader
 *  revision id and page id
 *
 *  @param  bno055 - structure pointer
 *
 *
 *  @return results of bus communication function
 *  @retval 0 -> BNO055_SUCCESS
 *  @retval 1 -> BNO055_ERROR
 *
 *  @note While changing the parameter of the bno055_t
 *  consider the following point:
 *  Changing the reference value of the parameter
 *  will changes the local copy or local reference
 *  make sure your changes will not
 *  affect the reference value of the parameter
 *  (Better case don't change the reference value of the parameter)
 */
BNO055_RETURN_FUNCTION_TYPE bno055_init(struct bno055_t *bno055)
{
    /* Variable used to return value of
     * communication routine*/
    BNO055_RETURN_FUNCTION_TYPE com_rslt = BNO055_ERROR;
    u8 data_u8 = BNO055_INIT_VALUE;
    u8 bno055_page_zero_u8 = BNO055_PAGE_ZERO;

    /* Array holding the Software revision id
     */
    u8 a_SW_ID_u8[BNO055_REV_ID_SIZE] = { BNO055_INIT_VALUE, BNO055_INIT_VALUE };

    /* stuct parameters are assign to bno055*/
    p_bno055 = bno055;

    /* Write the default page as zero*/
    com_rslt = p_bno055->BNO055_BUS_WRITE_FUNC(p_bno055->dev_addr,
                                               BNO055_PAGE_ID_REG,
                                               &bno055_page_zero_u8,
                                               BNO055_GEN_READ_WRITE_LENGTH);

    /* Read the chip id of the sensor from page
     * zero 0x00 register*/
    com_rslt += p_bno055->BNO055_BUS_READ_FUNC(p_bno055->dev_addr,
                                               BNO055_CHIP_ID_REG,
                                               &data_u8,
                                               BNO055_GEN_READ_WRITE_LENGTH);
    p_bno055->chip_id = data_u8;

    /* Read the accel revision id from page
     * zero 0x01 register*/
    com_rslt += p_bno055->BNO055_BUS_READ_FUNC(p_bno055->dev_addr,
                                               BNO055_ACCEL_REV_ID_REG,
                                               &data_u8,
                                               BNO055_GEN_READ_WRITE_LENGTH);
    p_bno055->accel_rev_id = data_u8;

    /* Read the mag revision id from page
     * zero 0x02 register*/
    com_rslt += p_bno055->BNO055_BUS_READ_FUNC(p_bno055->dev_addr,
                                               BNO055_MAG_REV_ID_REG,
                                               &data_u8,
                                               BNO055_GEN_READ_WRITE_LENGTH);
    p_bno055->mag_rev_id = data_u8;

    /* Read the gyro revision id from page
     * zero 0x02 register*/
    com_rslt += p_bno055->BNO055_BUS_READ_FUNC(p_bno055->dev_addr,
                                               BNO055_GYRO_REV_ID_REG,
                                               &data_u8,
                                               BNO055_GEN_READ_WRITE_LENGTH);
    p_bno055->gyro_rev_id = data_u8;

    /* Read the boot loader revision from page
     * zero 0x06 register*/
    com_rslt += p_bno055->BNO055_BUS_READ_FUNC(p_bno055->dev_addr,
                                               BNO055_BL_REV_ID_REG,
                                               &data_u8,
                                               BNO055_GEN_READ_WRITE_LENGTH);
    p_bno055->bl_rev_id = data_u8;

    /* Read the software revision id from page
     * zero 0x04 and 0x05 register( 2 bytes of data)*/
    com_rslt += p_bno055->BNO055_BUS_READ_FUNC(p_bno055->dev_addr,
                                               BNO055_SW_REV_ID_LSB_REG,
                                               a_SW_ID_u8,
                                               BNO055_LSB_MSB_READ_LENGTH);
    a_SW_ID_u8[BNO055_SW_ID_LSB] = BNO055_GET_BITSLICE(a_SW_ID_u8[BNO055_SW_ID_LSB], BNO055_SW_REV_ID_LSB);
    p_bno055->sw_rev_id =
        (u16)((((u32)((u8)a_SW_ID_u8[BNO055_SW_ID_MSB])) << BNO055_SHIFT_EIGHT_BITS) | (a_SW_ID_u8[BNO055_SW_ID_LSB]));

    /* Read the page id from the register 0x07*/
    com_rslt += p_bno055->BNO055_BUS_READ_FUNC(p_bno055->dev_addr,
                                               BNO055_PAGE_ID_REG,
                                               &data_u8,
                                               BNO055_GEN_READ_WRITE_LENGTH);
    p_bno055->page_id = data_u8;

    return com_rslt;
}



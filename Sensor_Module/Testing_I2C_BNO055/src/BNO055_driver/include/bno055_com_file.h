/*
 * bno055_mem_file.h
 *
 *  Created on: 02-Sep-2024
 *      Author: Rohan
 */

#ifndef BNO055_DRIVER_INCLUDE_BNO055_COM_FILE_H_
#define BNO055_DRIVER_INCLUDE_BNO055_COM_FILE_H_

#include "bno055.h"

/*****************************************************************************
 * Description: *//**\brief
 *        This function initialises the structure pointer, receives
 *        and assigns the I2C address.
 *
 *
 *
 *
 *
 *  \param  bno055_t *bno055 structure pointer.
 *
 *
 *
 *  \return communication results.
 *
 *
 ****************************************************************************/
/* Scheduling:
 *
 *
 *
 * Usage guide:
 *
 *
 * Remarks:
 *
 ****************************************************************************/
BNO055_RETURN_FUNCTION_TYPE bno055_com_Init(struct bno055_t *);





/*****************************************************************************
 * Description: *//**\brief
 *        This function is called when data has to be read over the I2C bus
 *
 *
 *
 *
 *
 *  \param  unsigned char dev_addr holds the device address
 *			unsigned char reg_addr holds the register address
 *			unsigned char *reg_data holds the pointer for the start of the
 *				data structure
 *			unsigned char cnt holds the count of the number of bytes to be
 *				read
 *
 *
 *  \return communication results.
 *
 *
 ****************************************************************************/
/* Scheduling:
 *
 *
 *
 * Usage guide:
 *
 *
 * Remarks:
 *
 ****************************************************************************/
BNO055_RETURN_FUNCTION_TYPE bus_read(unsigned char,unsigned char, unsigned char*, unsigned char);






/*****************************************************************************
 * Description: *//**\brief
 *        This function is called when data has to be written over
 *			I2C bus
 *
 *
 *
 *
 *
 *  \param  unsigned char dev_addr holds the device address
 *			unsigned char reg_addr holds the register address
 *			unsigned char *reg_data holds the pointer for the start of the
 *				data structure
 *			unsigned char cnt holds the count of the number of bytes to be
 *				written
 *
 *
 *  \return communication results.
 *
 *
 ****************************************************************************/
/* Scheduling:
 *
 *
 *
 * Usage guide:
 *
 *
 * Remarks:
 *
 ****************************************************************************/
BNO055_RETURN_FUNCTION_TYPE bus_write(unsigned char ,unsigned char , unsigned char* , unsigned char );

/*****************************************************************************
 * Description: *//**\brief
 *        This function is a mirror for the delay function for type casting
 *
 *
 *
 *
 *
 *  \param  unsigned int
 *
 *
 *  \return none
 *
 *
 ****************************************************************************/
/* Scheduling:
 *
 *
 *
 * Usage guide:
 *
 *
 * Remarks:
 *
 ****************************************************************************/
void _delay(unsigned int);

#endif /* BNO055_DRIVER_INCLUDE_BNO055_COM_FILE_H_ */

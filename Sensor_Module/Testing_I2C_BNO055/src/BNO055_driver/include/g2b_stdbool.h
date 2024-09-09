/*
 * g2b_stdbool.h
 *
 *  Created on: 01-Sep-2024
 *      Author: Rohan
 */

#ifndef BNO055_DRIVER_INCLUDE_G2B_STDBOOL_H_
#define BNO055_DRIVER_INCLUDE_G2B_STDBOOL_H_

#ifndef __cplusplus

#define bool	_Bool
#define g2b_true	1
#define g2b_false	0

#else /* __cplusplus */

/* Supporting _Bool in C++ is a GCC extension.  */
#define _Bool	bool

#if __cplusplus < 201103L
/* Defining these macros in C++98 is a GCC extension.  */
#define bool	bool
#define false	false
#define true	true
#endif

#endif /* __cplusplus */

/* Signal that all the definitions are present.  */
#define __bool_true_false_are_defined	1

#endif /* BNO055_DRIVER_INCLUDE_G2B_STDBOOL_H_ */

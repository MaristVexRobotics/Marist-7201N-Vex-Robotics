#pragma config(Motor,  port1,           backLeft,      tmotorVex393, openLoop)
#pragma config(Motor,  port2,           frontLeft,     tmotorVex393, openLoop)
#pragma config(Motor,  port9,           frontRight,    tmotorVex393, openLoop, reversed)
#pragma config(Motor,  port10,          backRight,     tmotorVex393, openLoop, reversed)

/*
Each important motor and sensor is defined here as a constant.
To change the definition of these constants, use this file to change
the coorisponding values.  This is implemented so that code from previous
years can be reused, but still remain flexible.  Also, please put any other necessary
constants inside this file and make sure it is included in each file where you use them. All config() code
should be placed inside of this file to prevent unecessary work and mistakes.

Thanks,

Matt Haidet
*/



#define LEFT_FRONT motor[frontLeft]
#define LEFT_BACK motor[backLeft]
#define RIGHT_FRONT motor[frontRight]
#define RIGHT_BACK motor[backRight]

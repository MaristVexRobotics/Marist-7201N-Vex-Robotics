#pragma config(Motor,  port1,           backLeft,      tmotorVex393, openLoop)
#pragma config(Motor,  port2,           frontLeft,     tmotorVex393, openLoop)
#pragma config(Motor,  port9,           frontRight,    tmotorVex393, openLoop, reversed)
#pragma config(Motor,  port10,          backRight,     tmotorVex393, openLoop, reversed)

#define LEFT_FRONT motor[frontLeft]
#define LEFT_BACK motor[backLeft]
#define RIGHT_FRONT motor[frontRight]
#define RIGHT_BACK motor[backRight]

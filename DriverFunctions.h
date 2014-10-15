#pragma config(Motor,  port1,           backLeft,      tmotorVex393, openLoop)
#pragma config(Motor,  port2,           frontLeft,     tmotorVex393, openLoop)
#pragma config(Motor,  port9,           frontRight,    tmotorVex393, openLoop, reversed)
#pragma config(Motor,  port10,          backRight,     tmotorVex393, openLoop, reversed)
#pragma config(Motor,  port7,           leftLift2,     tmotorVex393, openLoop, reversed)
#pragma config(Motor,  port8,           leftLift1,     tmotorVex393, openLoop, reversed)
#pragma config(Motor,  port9,           frontRight,    tmotorVex393, openLoop, reversed)
#pragma config(Motor,  port10,          backRight,     tmotorVex393, openLoop, reversed)
#include "constants.h"


void drive(){
LEFT_BACK = leftYStick - leftUpBumper*127 + rightUpBumper*127;
LEFT_FRONT = leftYStick + leftUpBumper*127 - rightUpBumper*127;
RIGHT_BACK = rightYStick - rightUpBumper*127 + leftUpBumper*127;
RIGHT_FRONT = rightYStick + rightUpBumper*127 - leftUpBumper*127;
RIGHT_LIFT_MOTOR1 = rightUBtn*127 - rightDBtn*127;
RIGHT_LIFT_MOTOR2 = rightUBtn*127 - rightDBtn*127;
LEFT_LIFT_MOTOR1 = rightUBtn*127 - rightDBtn*127;
LEFT_LIFT_MOTOR2 = rightUBtn*127 - rightDBtn*127;
PlayTone(70*leftDBtn, leftDBtn); //Horn
//PlayTone(80, partnerLeftDBtn); //Horn
}

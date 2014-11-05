#pragma config(Sensor, in1,    selector,       sensorAnalog)
#pragma config(Sensor, dgtl1,  rightEncoder,   sensorQuadEncoder)
#pragma config(Sensor, dgtl3,  leftEncoder,    sensorQuadEncoder)
#pragma config(Motor,  port1,           backLeft,      tmotorVex393, openLoop)
#pragma config(Motor,  port2,           frontLeft,     tmotorVex393, openLoop)
#pragma config(Motor,  port3,           rightLift1,    tmotorVex393, openLoop)
#pragma config(Motor,  port4,           rightLift2,    tmotorVex393, openLoop)
#pragma config(Motor,  port5,           liftClaw2,     tmotorVex393, openLoop, reversed)
#pragma config(Motor,  port6,           liftClaw1,     tmotorVex393, openLoop)
#pragma config(Motor,  port7,           leftLift2,     tmotorVex393, openLoop)
#pragma config(Motor,  port8,           leftLift1,     tmotorVex393, openLoop)
#pragma config(Motor,  port9,           frontRight,    tmotorVex393, openLoop, reversed)
#pragma config(Motor,  port10,          backRight,     tmotorVex393, openLoop, reversed)


/*
Each important motor and sensor is defined here as a constant.
To change the definition of these constants, use this file to change
the coorisponding values.  This is implemented so that code from previous
years can be reused, but still remain flexible.  Also, please put any other necessary
constants inside this file and make sure it is included in each file where you use them.

Thanks,

Matt Haidet
*/

//motors: (These go in all caps)
#define LEFT_FRONT motor[frontLeft]
#define LEFT_BACK motor[backLeft]
#define RIGHT_FRONT motor[frontRight]
#define RIGHT_BACK motor[backRight]
#define RIGHT_LIFT_MOTOR1 motor[rightLift1]
#define RIGHT_LIFT_MOTOR2 motor[rightLift2]
#define LEFT_LIFT_MOTOR1 motor[leftLift1]
#define LEFT_LIFT_MOTOR2 motor[leftLift2]
#define LIFT_CLAW_MOTOR1 motor[liftClaw1]
#define LIFT_CLAW_MOTOR2 motor[liftClaw2]


//Sensors: (UnderScore to seperate, camel cased)
#define Selector SensorValue(selector)
#define right_Encoder SensorValue[rightEncoder]
#define left_Encoder SensorValue[leftEncoder]

//Main Controller:
#define rightXStick vexRT[Ch1]
#define rightYStick vexRT[Ch2]
#define leftXStick vexRT[Ch4]
#define leftYStick vexRT[Ch3]
#define rightUpBumper vexRT[Btn6U]
#define rightDownBumper vexRT[Btn6D]
#define leftUpBumper vexRT[Btn5U]
#define leftDownBumper vexRT[Btn5D]
#define rightRBtn vexRT[Btn8R]
#define rightLBtn vexRT[Btn8L]
#define rightUBtn vexRT[Btn8U]
#define rightDBtn vexRT[Btn8D]
#define leftRBtn vexRT[Btn7R]
#define leftLBtn vexRT[Btn7L]
#define leftUBtn vexRT[Btn7U]
#define leftDBtn vexRT[Btn7D]
#define accelerometerX vexRT[AccelX]
#define accelerometerY vexRT[AccelY]
#define accelerometerZ vexRT[AccelZ]

//Secondary Controller:
#define partnerRightXStick vexRT[Ch1Xmtr2]
#define partnerRightYStick vexRT[Ch2Xmtr2]
#define partnerLeftXStick vexRT[Ch4Xmtr2]
#define partnerLeftYStick vexRT[Ch3Xmtr2]
#define partnerRightUpBumper vexRT[Btn6UXmtr2]
#define partnerRightDownBumper vexRT[Btn6DXmtr2]
#define partnerLeftUpBumper vexRT[Btn5UXmtr2]
#define partnerLeftDownBumper vexRT[Btn5DXmtr2]
#define partnerRightRBtn vexRT[Btn8RXmtr2]
#define partnerRightLBtn vexRT[Btn8LXmtr2]
#define partnerRightUBtn vexRT[Btn8UXmtr2]
#define partnerRightDBtn vexRT[Btn8DXmtr2]
#define partnerLeftRBtn vexRT[Btn7RXmtr2]
#define partnerLeftLBtn vexRT[Btn7LXmtr2]
#define partnerLeftUBtn vexRT[Btn7UXmtr2]
#define partnerLeftDBtn vexRT[Btn7DXmtr2]
#define partnerAccelerometerX vexRT[AccelXXmtr2]
#define partnerAccelerometerY vexRT[AccelYXmtr2]
#define partnerAccelerometerZ vexRT[AccelZXmtr2]


//Other
#define batteryLevel nImmediateBatteryLevel

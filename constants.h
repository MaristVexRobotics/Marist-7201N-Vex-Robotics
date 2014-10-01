#pragma config(Sensor, in1,    selector,       sensorAnalog)
#pragma config(Motor,  port1,           backLeft,      tmotorVex393, openLoop)
#pragma config(Motor,  port2,           frontLeft,     tmotorVex393, openLoop)
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
#define RIGHT_LIFT_MOTOR1
#define RIGHT_LIFT_MOTOR2
#define LEFT_LIFT_MOTOR1
#define LEFT_LIFT_MOTOR2
#define RIGHT_CLAW_MOTOR1
#define LEFT_CLAW_MOTOR2
//Sensors:
#define Selector SensorValue(selector)

//Sound



//Controller:
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
#define AccelerometerX vexRT[AccelX]
#define AccelerometerY vexRT[AccelY]
#define AccelerometerZ vexRT[AccelZ]

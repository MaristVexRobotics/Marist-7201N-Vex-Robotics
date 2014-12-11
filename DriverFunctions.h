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
#include "constants.h"

int leftEncoderMarker;
int rightEncoderMarker;

//New RTPS - (Real-Time Proportional Stabilization)
int getLeftStabilizedValue(){
	return leftEncoderMarker-rightEncoderMarker;
}

int getRightStabilizedValue(){
	return rightEncoderMarker-leftEncoderMarker;
}

void updateMarkers(){
	leftEncoderMarker = -left_Encoder;
	rightEncoderMarker = -right_Encoder;

	if(right_Encoder >= 127 || right_Encoder <= -127 || left_Encoder >=127 || left_Encoder <= -127){
		left_Encoder = 0;
		right_Encoder = 0;
	}
}



void drive(){
	updateMarkers();
	LEFT_BACK = (leftYStick) + (leftUpBumper*127) - (rightUpBumper*127) + (leftUBtn*(127-getLeftStabilizedValue())) - (leftDBtn*(127+getLeftStabilizedValue()));
	LEFT_FRONT = (leftYStick) - (leftUpBumper*127) + (rightUpBumper*127) + (leftUBtn*(127-getLeftStabilizedValue())) - (leftDBtn*(127+getLeftStabilizedValue()));
	RIGHT_BACK = (rightYStick) + (rightUpBumper*127) - (leftUpBumper*127) + (leftUBtn*(127-getRightStabilizedValue())) - (leftDBtn*(127+getRightStabilizedValue()));
	RIGHT_FRONT = (rightYStick) - (rightUpBumper*127) + (leftUpBumper*127) + (leftUBtn*(127-getRightStabilizedValue())) - (leftDBtn*(127+getRightStabilizedValue()));

	RIGHT_LIFT_MOTOR1 = (rightDBtn*127) - (rightUBtn*127) - (partnerRightYStick);
	RIGHT_LIFT_MOTOR2 = (rightDBtn*127) - (rightUBtn*127) - (partnerRightYStick);
	LEFT_LIFT_MOTOR1 = (rightDBtn*127) - (rightUBtn*127) + (partnerLeftYStick);
	LEFT_LIFT_MOTOR2 = (rightDBtn*127) - (rightUBtn*127) + (partnerLeftYStick);
	LIFT_CLAW_MOTOR1 = -(partnerRightUpBumper*100) + (partnerRightDownBumper*100);
	LIFT_CLAW_MOTOR2 = -(partnerRightUpBumper*100) + (partnerRightDownBumper*100);
	PlayTone(70*leftRBtn, leftRBtn); //Horn
}

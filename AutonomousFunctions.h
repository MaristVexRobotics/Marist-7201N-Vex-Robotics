#pragma config(Motor,  port1,           backLeft,      tmotorVex393, openLoop)
#pragma config(Motor,  port2,           frontLeft,     tmotorVex393, openLoop)
#pragma config(Motor,  port9,           frontRight,    tmotorVex393, openLoop, reversed)
#pragma config(Motor,  port10,          backRight,     tmotorVex393, openLoop, reversed)
#include "constants.h"

void linearMove(int power){
	LEFT_BACK =	power;
	RIGHT_BACK = power;
	LEFT_FRONT = power;
	RIGHT_FRONT = power;
}

void turnInPlace(const string direction, int power){
	if(direction == "clockWise"){
		power = -power;
	}
	LEFT_BACK =	-power;
	RIGHT_BACK = -power;
	LEFT_FRONT = power;
	RIGHT_FRONT = power;
}

void turnForSeconds(const string direction, float seconds, int power){

}

void turnDegrees(const string direction, float degrees, int power){

}

void moveInLineForSeconds(const string direction, int power){

}



void waitForTruth(bool truth){
	while(!truth){
		wait1Msec(1);
	}
}

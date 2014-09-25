#pragma config(Sensor, in1,    selector,       sensorAnalog)
#pragma config(Motor,  port1,           backLeft,      tmotorVex393, openLoop)
#pragma config(Motor,  port2,           frontLeft,     tmotorVex393, openLoop)
#pragma config(Motor,  port9,           frontRight,    tmotorVex393, openLoop, reversed)
#pragma config(Motor,  port10,          backRight,     tmotorVex393, openLoop, reversed)
#include "constants.h"

//linear:  straight  forward, backward in any direction
void linearMove(int power){
	LEFT_BACK =	power;
	RIGHT_BACK = power;
	LEFT_FRONT = power;
	RIGHT_FRONT = power;
}

void turnInPlace(const string direction, int power){
	if(direction == "right"){
		LEFT_FRONT = -power;
		LEFT_BACK = power;
		RIGHT_FRONT = power;
		RIGHT_BACK = -power;
	}

	if (direction ==  "left") {
	LEFT_BACK =	-power;
	RIGHT_BACK = power;
	LEFT_FRONT = power;
	RIGHT_FRONT = -power;
}

}

//forwardTime
void forwardTime(int power, int mSecs) {

linearMove(power);
wait1Msec(mSecs);
linearMove(0);

}
//backwardTime
void backwardTime(int power, int mSecs) {
linearMove(power);
wait1Msec(mSecs);
linearMove(0);

}
//leftMoveTime: robot goes horizontally left
void leftMoveTime(int power, int mSecs) {
	linearMove(power);
	wait1Msec(mSecs);
	linearMove(0);

}

//rightMoveTime
void rightMoveTime(int power, int mSecs) {
  linearMove(power);
  wait1Msec(mSecs);
  linearMove(0);
}

void turnForSeconds(const string direction, float seconds, int power){

	if(direction == "right") {
		LEFT_BACK = -power;
		LEFT_FRONT = -power;
		RIGHT_FRONT = power;
		RIGHT_BACK = power;


  }




  if(direction == "left") {

  	LEFT_BACK = power;
		LEFT_FRONT = power;
		RIGHT_FRONT = -power;
		RIGHT_BACK = -power;
}
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

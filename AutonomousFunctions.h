#pragma config(Sensor, in1,    selector,       sensorAnalog)
#pragma config(Motor,  port1,           backLeft,      tmotorVex393, openLoop)
#pragma config(Motor,  port2,           frontLeft,     tmotorVex393, openLoop)
#pragma config(Motor,  port9,           frontRight,    tmotorVex393, openLoop, reversed)
#pragma config(Motor,  port10,          backRight,     tmotorVex393, openLoop, reversed)

/*TODO:

1. Replace repeated code with functions if possible
2. Write encoder functions
3. make sure functions are consitent
4. Add lateral move for time and distance
5. Move actual automonous to a seperate file
6. Make time functions actual go for Seconds rather than milis (multiple 1msec by 1000)

*/

//linear:  straight  forward, backward in any direction
void linearMove(int power){
	LEFT_BACK =	power;
	RIGHT_BACK = power;
	LEFT_FRONT = power;
	RIGHT_FRONT = power;
	wait1Msec(1000);
}

//lateral move will decide in which direction the robot will go(left and right)
void lateralMove(const string direction, int power) {
	if(direction == "left") {
		LEFT_FRONT = power;
		LEFT_BACK = -power;
		RIGHT_FRONT = -power;
		RIGHT_BACK = power;
	}
	if(direction == "right") {
		LEFT_FRONT = -power;
		LEFT_BACK = power;
		RIGHT_FRONT = power;
		RIGHT_BACK = -power;
	}
	linearMove(0);
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

void forwardTime(int power, int mSecs) {
	linearMove(power);
	wait1Msec(mSecs);
	linearMove(0);
}

void backwardTime(int power, int mSecs) {
	linearMove(-power);
	wait1Msec(mSecs);
	linearMove(0);
}

void leftMoveTime(int power, int mSecs) {
	lateralMove("left", power);
	wait1Msec(mSecs);
	linearMove(0);
}

void rightMoveTime(int power, int mSecs) {
	lateralMove("right", power);
	wait1Msec(mSecs);
	linearMove(0);
}

void turnRightTime(int power, int mSecs) {
	//	turnInPlace(right, 70);
}


void turnForSeconds(const string direction, float seconds, int power){

	if(direction == "right") {
		LEFT_BACK = -power;
		LEFT_FRONT = -power;
		RIGHT_FRONT = power;
		RIGHT_BACK = power;
		}else if(direction == "left") {
		LEFT_BACK = power;
		LEFT_FRONT = power;
		RIGHT_FRONT = -power;
		RIGHT_BACK = -power;
	}
}

void moveInLineForSeconds(const string direction, int power){

}



void turnDegrees(const string direction, float degrees, int power){

	turnInPlace(direction, power);
	//while(SensorValue[

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


//Autonomous Programs

void blueRight(){
leftMoveTime(100,10);
}

void blueLeft(){

}

void redRight(){


}

void redLeft(){

}

void challenge(){

}

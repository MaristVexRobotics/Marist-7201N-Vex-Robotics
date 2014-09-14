#pragma config(Motor,  port1,           backLeft,      tmotorVex393, openLoop)
#pragma config(Motor,  port2,           frontLeft,     tmotorVex393, openLoop)
#pragma config(Motor,  port9,           frontRight,    tmotorVex393, openLoop, reversed)
#pragma config(Motor,  port10,          backRight,     tmotorVex393, openLoop, reversed)

void linearMove(int power){
motor[backLeft] =	power;
motor[backRight] = power;
motor[frontLeft] = power;
motor[frontRight] = power;
}

void turnInPlace(const string direction, int power){
if(direction == "clockWise"){
power = -power;
}
motor[backLeft] =	-power;
motor[backRight] = -power;
motor[frontLeft] = power;
motor[frontRight] = power;
}

void waitForTruth(bool truth){
while(!truth){
wait1Msec(1);
}
}

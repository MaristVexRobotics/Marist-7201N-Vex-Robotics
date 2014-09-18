#pragma config(Motor,  port1,           backLeft,      tmotorVex393, openLoop)
#pragma config(Motor,  port2,           frontLeft,     tmotorVex393, openLoop)
#pragma config(Motor,  port9,           frontRight,    tmotorVex393, openLoop, reversed)
#pragma config(Motor,  port10,          backRight,     tmotorVex393, openLoop, reversed)


//Custom Driver Code

void drive(){
LEFT_BACK = vexRT[Ch2];
LEFT_FRONT = vexRT[Ch2];
RIGHT_BACK = vexRT[Ch3];
RIGHT_FRONT = vexRT[Ch3];
}

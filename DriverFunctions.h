#pragma config(Motor,  port1,           backLeft,      tmotorVex393, openLoop)
#pragma config(Motor,  port2,           frontLeft,     tmotorVex393, openLoop)
#pragma config(Motor,  port9,           frontRight,    tmotorVex393, openLoop, reversed)
#pragma config(Motor,  port10,          backRight,     tmotorVex393, openLoop, reversed)


//Custom Driver Code

void drive(){
LEFT_BACK = leftYStick + leftUpBumper*127;
LEFT_FRONT = leftYStick - leftUpBumper*127;
RIGHT_BACK = rightYStick + rightUpBumper*127;
RIGHT_FRONT = rightYStick - rightUpBumper*127;
}

void partner(){




}

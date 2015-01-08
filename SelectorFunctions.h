#pragma config(Sensor, in1,    selector,       sensorAnalog)
#pragma config(Sensor, in2,    selection5,     sensorAnalog)
#pragma config(Sensor, in3,    selection4,     sensorAnalog)
#pragma config(Sensor, in4,    selection2,     sensorAnalog)
#pragma config(Sensor, in5,    selection3,     sensorAnalog)
#pragma config(Sensor, in6,    selection1,     sensorAnalog)
#pragma config(UART_Usage, UART2, uartVEXLCD, baudRate19200, IOPins, None, None)
#include "AutonomousFunctions.h"

int currentSelection;
string text;

string programNames[6] = {
	"0. None",
	"1. Blue-Left",
	"2. Blue-Right",
	"3. Red-Left",
	"4. Red-Right",
	"5. Challenge"
};


void init(){
	clearLCDLine(0);
	clearLCDLine(1);
	bLCDBacklight = true;
}

int getSelectionNumber(){
	if(selection1 < 10){
		return 1;
		}
		if(selection2 < 10){
		return 2;
		}
		if(selection3 < 10){
		return 3;
		}
		if(selection4 < 10){
		return 4;
		}
		if(selection5<10) {
		return 5;
	}
}

bool hasSelectionChanged(){
	if(getSelectionNumber() != currentSelection){
		currentSelection = getSelectionNumber();
		return true;
	}
	return false;
}

void testSelector(){
	if(hasSelectionChanged()){
		clearLCDLine(0);
		clearLCDLine(1);
		text = programNames[getSelectionNumber()];
		displayLCDString(0, 0, text);
	}
}

void runAutonomous(){
	switch(getSelectionNumber()){

	case 1:
		blueLeft();
		break;

	case 2:
		blueRight();
		break;

	case 3:
		redLeft();
		break;

	case 4:
		redRight();
		break;

	case 5:
		challenge();
		break;

	}
}

void auton(){
	testSelector();

	runAutonomous();
	//return true;


}

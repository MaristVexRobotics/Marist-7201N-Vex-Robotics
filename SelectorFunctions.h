#pragma config(Sensor, in1,    selector,       sensorAnalog)
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
	if(Selector > 3915){
		return 1;
		} else if(Selector <= 3915 && Selector > 3340){
		return 2;
		} else if(Selector <= 3340 && Selector > 2605){
		return 3;
		} else if(Selector <= 2605 && Selector > 2291){
		return 4;
		} else {
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

bool autonomous(){
	testSelector();
	if(nLCDButtons == 2){
		runAutonomous();
		return true;
	}
	return false;
}

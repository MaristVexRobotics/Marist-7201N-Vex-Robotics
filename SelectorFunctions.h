#pragma config(Sensor, in1,    selector,       sensorAnalog)
#pragma config(UART_Usage, UART2, uartVEXLCD, baudRate19200, IOPins, None, None)
#include "AutonomousFunctions.h"

int currentSelection;
string text;

void troublshoot(){
	clearLCDLine(0);
	clearLCDLine(1);
}

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
		text = getSelectionNumber()+1;
		displayLCDString(0, 0, text);
	}
}

void runAutonomous(){
	switch(getSelectionNumber()){

	case 0:
		blueLeft();
		break;


	case 1:
		blueRight();
		break;


	case 2:
		redLeft();
		break;

	case 3:
		redRight();
		break;

	}
}

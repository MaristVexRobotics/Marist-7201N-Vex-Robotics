#pragma config(Sensor, in1,    selector,       sensorAnalog)
#include "AutonomousFunctions.h"

int currentSelection;
string text;

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
	}
return 3;
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

void SelectAutonomous(){
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

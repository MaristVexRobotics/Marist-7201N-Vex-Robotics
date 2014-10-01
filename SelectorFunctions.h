#pragma config(Sensor, in1,    selector,       sensorAnalog)
#include "AutonomousFunctions.h"

string currentSelection;

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


void AutonomouseSelector(){
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

#pragma config(Sensor, in1,    selector,       sensorAnalog)
#include "AutonomousFunctions.h"

int getSelectionNumber(){
if(Selector >= 0 && Selector <= 10){
return 0;
} else{
return 0;
}

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

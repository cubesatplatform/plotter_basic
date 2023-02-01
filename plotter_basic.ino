#include <boards.h>
#include "plotter.h"

#include <messages.h>


#define SYSNAME "PLOTTER"           //Remember there is a class name  And a Instance name given by the database  They may or may not be the same.


CStateObj bs;


void setup() {   
  bs.name(SYSNAME); 
  bs.setIAM(bs.name());
  Serial.begin(115200); 
  while(!Serial){};  
  delay(500);
  
  //Wire.begin(); 
  
   //initBoard();
  
  

  // echoOff();  
}

void loop(){  
  
  
  bs.loop();
}

#include <boards.h>
#include "plotter.h"

#include <messages.h>


#define SYSNAME "PLOTTER"           //Remember there is a class name  And a Instance name given by the database  They may or may not be the same.

#ifdef TTGO
#undef TTGO
#endif

#define TTGO1


CStateObj bs;


void setup() {   
  bs.name(SYSNAME); 
  bs.setIAM(bs.name());
  Serial.begin(115200); 
  while(!Serial){};  
  delay(500);
  
  //Wire.begin(); 
  #ifdef TTGO1 
   //initBoard();
  #endif
  

  // echoOff();  
}

void loop(){  
  
  
  bs.loop();
}

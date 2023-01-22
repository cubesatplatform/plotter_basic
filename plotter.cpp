#include "plotter.h"

CBaseStation::CBaseStation(){

  addSystem(&_keyboard);
  addSystem(&_messages);
  addSystem(&_radio);  
  
  _radio.setACK(false);

  _radio.name("RADIO");        
  _radio.setTransmitter(true);  

  }

void CBaseStation::callCustomFunctions(CMsg &msg){
  //writeconsoleln("void CBaseStation::callCustomFunctions(CMsg &msg)");
  CMsg m;
  
  float p=msg.get("P",0.0);
  float i=msg.get("I",0.0);
  float d=msg.get("D",0.0);
  float x=msg.get("X",0.0);
  float y=msg.get("Y",0.0);
  float z=msg.get("Z",0.0);
  long t=msg.get(_TIME,0L);
  float input=msg.get("INPUT",0.0);
  float output=msg.get("OUTPUT",0.0);
  int outputpwm=msg.get("PWM",0);

//  m.set("X",x);
//  m.set("Y",y);
  m.set("Z",z);
  m.set("Output",output);
  m.set("PWM",outputpwm/10);
 // m.set(TIME,t);

   m.set("P",p);
  m.set("I",i);
  m.set("D",d);




  m.set("Input",input);
  m.set("Output",output);
  m.set("PWM",outputpwm);

 // echoOn();
  //msg.writetoconsoleln();
 // m.writetoconsoleln();
 // echoOff();
  
//  CStateObj::callCustomFunctions(msg);

}

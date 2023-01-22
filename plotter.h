#pragma once
#include <stateobj.h>
#include <radio.h>

#include <kb.h>
#include <systemmessages.h>


#define CUBESAT "ADR1"

class CBaseStation:public CStateObj {
private:
  
public:
  CKeyboard _keyboard;
  CRadio _radio;  
  CMessagesObj _messages;
  
  
  CBaseStation();

  void callCustomFunctions(CMsg &msg);
};

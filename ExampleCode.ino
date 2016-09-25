
#include "Keyboard.h"
#include <RCSwitch.h>

int code1 = 1361;    //change to your remotes value
int code2 = 4433;    //change to your remotes value


void attack1(){                
  //place arduino code for one attack here
  delay(500);            
  Keyboard.print("Attack 1 launched.");
  delay(500);                 
  Keyboard.print("\nZou have been quacked\n");     
  delay(1000);
}
  
void attack2(){                
  //place arduino code for one attack here
  delay(500);
  Keyboard.print("Atcdcbgvc tack 2 launched.");
  delay(500);                 
  Keyboard.print("\nZou have been quacked\n"); 
  delay(1000);
}


RCSwitch mySwitch = RCSwitch();


void setup() {
  Keyboard.begin();
  digitalPinToInterrupt(3);
  mySwitch.enableReceive(0);  
  Serial.begin(9600);      //just for configuring the arduino
}

void loop() {
  

  if (mySwitch.available()) {
    
    int value = mySwitch.getReceivedValue();
    Serial.println(value);    //check your remotes value to change the code-variables
    
    if (value == code1) {     
      attack1();                 
    }
    
    if (value == code2) {     
      attack2();
    }
  }
  
  mySwitch.resetAvailable();
  
}


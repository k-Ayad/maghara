



#include "maghara_headers.h";
#include "magharaTime.h";




//--- Function for flashing
int now_flasher(){
    unsigned long t=micros();
    return t/100000 ; 
}


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
      digitalWrite(LED_BUILTIN,HIGH);    

  // define and init value for all outputs
  for(int i =2 ; i<=9 ; i++)
  {
      pinMode(i,OUTPUT);
      digitalWrite(i,HIGH);    
  }

  for(int i =30 ; i<=62 ; i++)
  {
      pinMode(i,OUTPUT);
      digitalWrite(i,HIGH);    
  }
}

void loop() {
  // start motor 
  action(LED_BUILTIN , "00:5" , LOW); 
}

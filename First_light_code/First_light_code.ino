#include <SendOnlySoftwareSerial.h>
#include <ArduinoInit.h>
void setup()
{
  configArduino ();
  motors('1','o',100); //set motor 1 torun at 100% of max
  motors('2','o',90); //set motor 2 to at 90% of max
  //Initialize the Arduino board to baseline configuration
}
void loop ()    //start continuous program looping
{
  outputHigh (12);    //Turn Green LED on at Pin 12
  pause(1000);      //Delay 1 second
  outputLow(12);    //Turn Green LED off at Pin 12
  pause(1000);      //Delay 1 second
  //=================================================
  outputHigh (11);    //Turn Yellow LED on at Pin 11
  pause(1000);      //Delay 1 second
  outputLow(11);    //Turn Yellow LED off at Pin 11
  pause(1000);      //Delay 1 second
  //=================================================
  outputHigh (10);    //Turn Red LED on at Pin 10
  pause(1000);      //Delay 1 second
  outputLow(10);    //Turn Red LED off at Pin 10
  pause(1000);      //Delay 1 second
  //=================================================
  motors('b','a',0);  //turn both motors on to run forward
  pause(1000);
  motors('b','o',0);  //turn motors off
} //close block for loop

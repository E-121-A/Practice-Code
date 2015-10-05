#include <SendOnlySoftwareSerial.h>
#include <ArduinoInit.h>

void setup() {
  // put your setup code here, to run once:
configArduino();
}

void loop() 
{
motors('1','A',50); //makes right wheel go forward 
motors('2','A',50); //makes left wheel go forward
outputHigh (12);
pause(3000); //moves forward for 3 seconds
outputLow (12);
motors('B','O',0); //stops motors
pause(2000); //stops for 2 seconds
//==================================================
motors('1','B',50); //makes right wheel go backward
motors('2','B',50); //makes left wheel go backward
outputHigh (11);
pause(3000); //moves backward for 3 seconds
outputLow (11);
motors('B','O',0); //stops motors
pause(2000); //stops for 2 secons
//==================================================
motors('1','A',50); //right wheel spins forward
motors('2','B',50); //left wheel spins backward
outputHigh (10);
pause(3000); //spins for 3 seconds
outputLow (10);
motors('B','O',0); //stops motors
pause(2000); //stops for 2 seconds

}

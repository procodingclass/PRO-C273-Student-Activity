#include <SD.h>

File file;

void setup(){

  Serial.begin(9600);

  if (!SD.begin())Serial.println("SD card not detected");
  else Serial.println("Sd card detected");
}


void loop(){

  //  for better working of simulator
  delay(10);
}
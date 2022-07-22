#include <Arduino.h>
#include <HardwareSerial.h>

HardwareSerial SerialPort(2);

void setup() {
  // put your setup code here, to run once:
  SerialPort.begin(115200,SERIAL_8N1,16,17);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  char number[100]={0};
  if (SerialPort.available()){
    SerialPort.readBytesUntil('\n',number,100);
    Serial.print("I received: ");
    Serial.println(number);
  }
  
}
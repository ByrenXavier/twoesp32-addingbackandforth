#include <Arduino.h>
#include <HardwareSerial.h>

HardwareSerial SerialPort(2);

int number;


void setup() {
  // put your setup code here, to run once:
  SerialPort.begin(115200,SERIAL_8N1,16,17);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  SerialPort.print(number);
  Serial.println(number);
  number++;
  delay(1000);
}
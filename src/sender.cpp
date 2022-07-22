#include <Arduino.h>
#include <HardwareSerial.h>

HardwareSerial SerialPort(2);

int send = 1;
int receive;

void setup() {
  // put your setup code here, to run once:
  SerialPort.begin(115200,SERIAL_8N1,16,17);
  Serial.begin(9600);
  SerialPort.print(send);
  Serial.print("I'm sending: ");
  Serial.println(send);

}

void loop() {
  // put your main code here, to run repeatedly
  if (SerialPort.available()){
    receive = SerialPort.parseInt();
    Serial.print("I received: ");
    Serial.println(receive);
    receive++;
    SerialPort.print(receive);
    Serial.print("I'm sending: ");
    Serial.println(receive);
  }
}
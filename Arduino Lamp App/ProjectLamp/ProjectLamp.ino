#include <SoftwareSerial.h>
SoftwareSerial BT(10,11);
// creates a "virtual" serial port/UART
// connect BT module TX to D10
// connect BT module RX to D11
// connect BT Vcc to 5V, GND to GND
void setup() {
  pinMode(13,OUTPUT);
  BT.begin(9600);
}
char onOff;
String stringFromDevice;
void loop() {
  if(BT.available())
  {
    onOff = ((byte)BT.read());
    stringFromDevice += onOff;
    if(onOff == '1'){
     digitalWrite(13, HIGH);
     BT.println("Light ON");
}
    if(onOff == '2'){
      digitalWrite(13,LOW);
      BT.println("Light OFF");
      
  }
}
}

/*
    IBRAHIM BAYMAZ - 20200808006
*/
const int analogInPin = A0;
const int outPin = 9;
int sensorValue =0;
int outputValue =0;

void setup() {
 Serial.begin(9600);
}

void loop() {
sensorValue=analogRead(analogInPin); //Read the value of LDR from sensor which is connected to A0 port.

if(sensorValue < 823){
  outputValue=HIGH; 
  analogWrite(outPin,HIGH);
  digitalWrite(outPin,HIGH);
  // it will set 9 port to high, so we see the LED light.
}else{
  outputValue=LOW;
  analogWrite(outPin,LOW);
  digitalWrite(outPin,LOW); 
  // it will set 9 port to low, so we can't see the LED light.
}


Serial.print("LDR value:");
Serial.print(sensorValue);

Serial.print(" ,LED Status:");
Serial.print(outputValue);
Serial.println(" ");
delay(100);

}

int ledArray[]={4,5,6,7,8,9,10,11};
int delayTime = 50;

void setup() {
  // put your setup code here, to run once:
  for(int i =0; i<8;i++){
    pinMode(ledArray[i],OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:


  for(int i =4; i<12;i++){
    digitalWrite(i,HIGH);
    delay(delayTime);
    digitalWrite(i,LOW);
    delay(delayTime);
    
    if(i==11){
      for(int j =4; j<12;j++){
    digitalWrite(15-j,HIGH);
    delay(delayTime);
    digitalWrite(15-j,LOW);
    delay(delayTime);
      }
    }
  }
}

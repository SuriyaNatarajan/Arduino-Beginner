int ledpin=11;            
int buttonpin=2;            
 
volatile int state = LOW; 
void setup()
{
  pinMode(ledpin,OUTPUT);   //Set digital 11 port mode, the OUTPUT for the output
  pinMode(buttonpin,INPUT); //Set digital 2 port mode, the INPUT for the input
}


void loop() {
  if(digitalRead(buttonpin)==LOW){
    delay(20);
    if (digitalRead(buttonpin)){
      while(digitalRead(buttonpin)==LOW);
      delay(20);
      while(digitalRead(buttonpin)==LOW);
      state!=state;
      digitalWrite(ledpin,state);
      }
  }

}

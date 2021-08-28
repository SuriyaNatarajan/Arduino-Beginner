int LED_PIN = LED_BUILTIN;
char command;
int time_idle =1;

void setup() {
    pinMode(LED_PIN,OUTPUT);
    Serial.begin(9600);
}

void loop() {
    if (Serial.available()>0){
        command = Serial.read();
        time_idle=0;
        if (command=='1'){
            digitalWrite(LED_PIN,HIGH);
            Serial.println("LED ON");
        } else if (command=='0'){
            digitalWrite(LED_PIN,LOW);
            Serial.println("LED OFF");
        }
    } else{
        delay(1000);
        Serial.print("I am idle for ");
        Serial.print(time_idle);
        Serial.println(" s");
        time_idle+=1;
    }
  
}

#include<Servo.h>
Servo myservo;
int i = 1;
void setup() {
    myservo.attach(9);
    myservo.write(0);
}

void loop() {
        for(; i <= 6; i++){
    myservo.write(i*15);
    delay(1000);
        }
    for(; i >= 0; i--){
    myservo.write(i*15);
    delay(1000);
    }
    for(int num = 180; num >= 0; num--){
     myservo.write(num);
     delay(10); 
    } 
}

int PHOTO_R_PIN = 7;
int BUZZ_PIN = 9;
void setup(){
    pinMode(PHOTO_R_PIN, INPUT);
    pinMode(BUZZ_PIN, OUTPUT);
    digitalWrite(BUZZ_PIN, LOW);
}

void loop() {
    if (digitalRead(PHOTO_R_PIN) == LOW)
        digitalWrite(BUZZ_PIN, HIGH);
    else
        digitalWrite(BUZZ_PIN, LOW);
}

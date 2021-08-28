char brightness;
int DELAY = 1000;
int LED_PIN = 5;

void setup() {
    pinMode(LED_PIN, OUTPUT);
}


void loop() {
    for (brightness = 10; brightness < 250; brightness += 10) {
        analogWrite(LED_PIN, brightness);
        delay(60);
    } 
    for (brightness = 250; brightness<=0; brightness -= 10) {
        analogWrite(LED_PIN, brightness);
        delay(60);
    }
}

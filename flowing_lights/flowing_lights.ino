int DELAY = 1000;
int led_pin = 9;

void setup() {
    for(; led_pin > 1; led_pin --)
        pinMode(led_pin, OUTPUT);
}


void loop() {
    for (; led_pin < 10; led_pin ++) {
        digitalWrite(led_pin, HIGH);
        delay(DELAY);
    } 
    for (; led_pin > 1; led_pin --) {
        digitalWrite(led_pin, LOW);
        delay(DELAY);
    }
}

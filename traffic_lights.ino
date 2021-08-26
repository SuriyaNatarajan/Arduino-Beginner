const int LED_RED=8;
const int LED_YELLOW=9;
const int LED_GREEN=10;

const int RED_MULTIPLIER = 4;
const int YELLOW_MULTIPLIER = 2; 
const int GREEN_MULTIPLIER = 1;

const int DELAY= 1000;

void setup() {
  pinMode(LED_RED, OUTPUT);
  pinMode(LED_YELLOW, OUTPUT);
  pinMode(LED_GREEN, OUTPUT);
}

void relay(int led_color, int multiplier){
  digitalWrite(led_color, HIGH);
  delay(DELAY*multiplier);
  digitalWrite(led_color, LOW);
  }
  
void loop() {
  relay(LED_RED,RED_MULTIPLIER);
  relay(LED_YELLOW,YELLOW_MULTIPLIER);
  relay(LED_GREEN,GREEN_MULTIPLIER);
}

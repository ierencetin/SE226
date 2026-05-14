int LED1pin = 44;
int LED0pin = 43;
int LED3pin = 46;
int LED2pin = 45;

int SW1pin = 39;
int SW0pin = 38;
int SW3pin = 41;
int SW2pin = 40;

bool LED0state = true;
bool LED1state = true;
bool LED2state = true;
bool LED3state = true;

bool lastSW0 = HIGH;
bool lastSW1 = HIGH;
bool lastSW2 = HIGH;
bool lastSW3 = HIGH;

void setup() {

  /*
digitalWrite(LED1pin,HIGH);
delay(1000);
digitalWrite(LED1pin, LOW);

digitalWrite(LED2pin,HIGH);
delay(1000);
digitalWrite(LED2pin, LOW);

digitalWrite(LED3pin,HIGH);
delay(1000);
digitalWrite(LED3pin, LOW);

digitalWrite(LED0pin,HIGH);
delay(1000);
digitalWrite(LED0pin, LOW); 
*/
  pinMode(LED0pin, OUTPUT);
  pinMode(LED1pin, OUTPUT);
  pinMode(LED2pin, OUTPUT);
  pinMode(LED3pin, OUTPUT);

  pinMode(SW0pin, INPUT_PULLUP);
  pinMode(SW1pin, INPUT_PULLUP);
  pinMode(SW2pin, INPUT_PULLUP);
  pinMode(SW3pin, INPUT_PULLUP);

  digitalWrite(LED0pin, HIGH);
  digitalWrite(LED1pin, HIGH);
  digitalWrite(LED2pin, HIGH);
  digitalWrite(LED3pin, HIGH);
}

void loop() {
  bool currentSW0 = digitalRead(SW0pin);
  bool currentSW1 = digitalRead(SW1pin);
  bool currentSW2 = digitalRead(SW2pin);
  bool currentSW3 = digitalRead(SW3pin);

  if (lastSW0 == HIGH && currentSW0 == LOW) {
    LED0state = !LED0state;
    digitalWrite(LED0pin, LED0state);
    delay(200);
  }

  if (lastSW1 == HIGH && currentSW1 == LOW) {
    LED1state = !LED1state;
    digitalWrite(LED1pin, LED1state);
    delay(200);
  }

  if (lastSW2 == HIGH && currentSW2 == LOW) {
    LED2state = !LED2state;
    digitalWrite(LED2pin, LED2state);
    delay(200);
  }

  if (lastSW3 == HIGH && currentSW3 == LOW) {
    LED3state = !LED3state;
    digitalWrite(LED3pin, LED3state);
    delay(200);
  }

  lastSW0 = currentSW0;
  lastSW1 = currentSW1;
  lastSW2 = currentSW2;
  lastSW3 = currentSW3;
}
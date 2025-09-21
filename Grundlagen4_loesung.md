## Lösungsvorschlag

```cpp
#define buttonPin D1
#define ledPin D7

void setup() {
  Serial.begin(9600);
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int buttonStatus = digitalRead(buttonPin);

  if (buttonStatus == LOW) {
    digitalWrite(ledPin, HIGH);
  }
  else {
    digitalWrite(ledPin, LOW);
  }
}
```

## Lösungsvorschlag für die Bonusaufgabe

```cpp
#define buttonPin D1
#define ledPin D7

bool ledState = false;
bool lastButtonState = HIGH;

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  bool currentButtonState = digitalRead(buttonPin);

  // Prüfen, ob der Button gerade gedrückt wurde
  if (lastButtonState == HIGH && currentButtonState == LOW) {
    // LED-Zustand umschalten
    ledState = !ledState;
  }

  // LED schalten
  digitalWrite(ledPin, ledState ? HIGH : LOW);

  // Aktuellen Zustand merken
  lastButtonState = currentButtonState;

  delay(50);
}
```

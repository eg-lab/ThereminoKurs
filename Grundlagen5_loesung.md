## Lösungsvorschläge für die beiden Aufgaben
```cpp

#define tonePin 3

int periodenDauer = 2273; // in µs, für 440 Hz

void setup() {
  pinMode(tonePin,OUTPUT);

}

void loop() {

  // digitalWrite(tonePin,HIGH);
  // delayMicroseconds(periodenDauer/2);
  // digitalWrite(tonePin,LOW);
  // delayMicroseconds(periodenDauer/2);

  // oder

  tone(tonePin,440);

}
```

## Lösungsvorschlag für die Bonusaufgabe
```cpp

#define buttonPin 1
#define tonePin 3

void setup() {
  pinMode(tonePin,OUTPUT);
  pinMode(buttonPin,INPUT_PULLUP);

}

void loop() {
  int buttonstatus = digitalRead(buttonPin);
  if (buttonStatus == LOW) {
    tone(tonePin,440);
  }
  else {
    digitalWrite(tonePin,LOW);
  }
    
}
```
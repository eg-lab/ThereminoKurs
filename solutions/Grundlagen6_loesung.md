## Lösungsvorschlag für die Aufgabe

```cpp

#define tonePin 3
    
void setup() {
  pinMode(tone_PIN, OUTPUT);
}

void loop () {    
  float melodie[] = {261.63, 293.66, 349.23, 293.66, 392.00, 392.00, 349.23};
  
  for (int i = 0; i < 6; i++) {
          tone(tone_PIN, melodie[i]);
          delay(1000);
  }
}

```

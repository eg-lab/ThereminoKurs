## Lösungsvorschlag für die Aufgabe

```cpp
#define photoPin A0
#define tonePin 3

//globales Array, das alle Noten einer Oktave über 6 Oktaven enthält

void setup() {

  Serial.begin(9600);
  pinMode(photoPin, INPUT);
  pinMode(tonePin, OUTPUT);

}

void loop() {
  int oktave = 0;
  int lichteinfall = analogRead(photoPin);

  //Beispiel für Aufteilung der Oktaven basierend auf Lichtstärke
  if (lichteinfall < 100) {
    oktave = 0;
  } else if (lichteinfall < 200) {
    oktave = 1;
  } else if (lichteinfall < 300) {
    oktave = 2;
  } else if (lichteinfall < 400) {
    oktave = 3;
  } else if (lichteinfall < 500) {
    oktave = 4; 
  } else {
    oktave = 5;
  }

  delay(1000);
  //mit Oktave Ton beeinflussen
  //Nutzen der tonMatrix, erste [] beziehen sich auf Oktave, wird hier vom Phototransistor festgelegt
  //zweite [] beziehen sich auf gewünschten Ton c ist 0, cis ist 1, d ist 2 etc... (hier einfach 0, sonst von Ultraschalltransistor festgelegt)
  float frequenz_note = tonMatrix[oktave][0];

  tone(tonePin, frequenz_note);

}

```

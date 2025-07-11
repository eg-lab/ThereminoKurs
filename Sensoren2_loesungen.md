```cpp
#define photoPin A0
#define tonePin 3

//globales Array, das alle Noten einer Oktave über 6 Oktaven enthält
float tonMatrix[6][12] = {{16.35, 17.32, 18.35, 19.45, 20.06, 21.83, 23.12, 24.50, 25.96, 27.50, 29.14, 30.87},
                          {32.70, 34.65, 36.71, 38.89, 41.20, 43.65, 46.25, 49.00, 51.91, 55.00, 58.27,61.74},
                          {65.41, 69.30, 73.42, 77.78, 82.41, 87.31, 92.50, 98.00, 103.83, 110.00, 116.54, 123.47},
                          {130.81, 138.59, 146.83, 155.56, 164.81, 174.61, 185.00, 196.00, 207.65, 220.00, 233.08, 246.94},
                          {261.63, 277.18, 293.66, 311.13, 329.63, 349.23, 369.99, 392.00, 415.30, 440.00, 466.16, 493.88},
                          {523.25, 554.37, 587.33, 622.25, 659.26, 698.46, 739.99, 783.99, 830.61, 880.00, 932.33, 987.77}};

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

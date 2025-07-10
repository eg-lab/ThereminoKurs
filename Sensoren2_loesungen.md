```cpp


#define photoPin 3

void setup() {
  Serial.begin(9600);
  
  pinMode(tonePin, INPUT);
  

}

void loop() {
  int oktave = 0;
  int lichteinfall = analogRead(photoPin);

  if (lichteinfall < 100) {
    okatve = 0;
  } else if (lichteinfall < 200) {
    oktave = 1;
  } else if (lichteinfall < 300) {
    oktave = 2;
  } else if (lichteinfall < 400) {
    oktave = 3;
  } else if (lichteinfall < 500) {
    oktave = 4; {
  } else {
    oktave = 5;
  }

  delay(1000);
  //mit Oktave Ton beeinflussen
}
```

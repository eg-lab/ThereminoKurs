```cpp


#define triggerPin 3
#define echoPin 4

#define schall 0.0343

float duration;
float distance;


void setup() {
  Serial.begin(9600);
  
  pinMode(triggerPin, OUTPUT);
  pinMode(echoPin,INPUT);
  

}

void loop() {
  digitalWrite(triggerPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin,LOW);

  duration = pulseIn(echoPin,HIGH);

  distance = (duration/2)*schall;
  Serial.println(distance);

  delay(1000);
}
```
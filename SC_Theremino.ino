#define triggerPin 3
#define echoPin 4

#define piezoPin 7

#define ledGreen 11
#define ledBlue 12
#define ledRed 13

#define schall 0.0343

float duration;
float distance;


void setup() {
  Serial.begin(9600);

  pinMode(triggerPin, OUTPUT);
  pinMode(echoPin,INPUT);

  pinMode(piezoPin,OUTPUT);
  
  pinMode(ledGreen,OUTPUT);
  pinMode(ledBlue,OUTPUT);
  pinMode(ledRed,OUTPUT);

}

void loop() {
  digitalWrite(triggerPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin,LOW);

  duration = pulseIn(echoPin,HIGH);
  distance = (duration/2)*schall;
  Serial.println(distance);
  if (distance <= 150) {
    tone(piezoPin,10*distance);
    if (distance < 10) {
      digitalWrite(ledGreen,HIGH);
      digitalWrite(ledBlue,LOW);
      digitalWrite(ledRed,LOW);
    }
    else if (distance < 30) {
      digitalWrite(ledGreen,LOW);
      digitalWrite(ledBlue,HIGH);
      digitalWrite(ledRed,LOW);
    }
    else {
      digitalWrite(ledGreen,LOW);
      digitalWrite(ledBlue,LOW);
      digitalWrite(ledRed,HIGH);
    }
  }
  delay(500);
}

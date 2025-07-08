## Sensoren 1 - Ultraschallsensor anschließen 🔊

[Zurück zur Kapitelübersicht](Kapiteluebersicht)

Nun wollen wir uns dem Thema Sensoren widmen. Sensoren sind ganz allgemein elektronische Bauteile, die auf irgendeine Art Ihre Umgebung und Änderungen in der Umgebung wahrnehmen und die gewonnen Informationen an den Microcontroller weitergeben können. Ihr habt bereits einen Sensor kennegelernt: den Button. Auch sammelt eine Information über seine Umgebung (*wurde er gerdückt/ nicht gedrückt*) und gibt sie an den Arduino weiter.

Da Auslesen von Sensor-Daten funktionert häufig über einen ``read``-Befehl. Es gibt zwei verschiedenen Versionen:

```cpp
analogRead(Pin); // Auslesen von Daten an einem analogen Pin, die gemessenen Werte können ganze Zahlen zwischen 0 und 1023 sein
digitalRead(Pin); // Auslesen von Daten an einem digitalen Pin, die gemessenen Daten sind entweder 0 oder 1
```
**Wir wollen uns nun den Ultraschallsensor genauer anschauen.**

Ein Ultarschallsensor ist ein Sensor, mit dem sich Abstände bestimmen lassen. Das Prinzip, auf dem er beruht, ist das selbe mit dem Fledermäuse ihre Umgebung wahrnehmen.

<p align="left"><img src="img/Fledermaus.png" width="200" alt="Fledermaus bemerkt Beute"></p>

Sowohl die Fledermaus als auch ein Ultraschallsensor senden eine Schallwelle aus, die im Ultrachschall-Bereich liegt. Ein Mensch kann solche Schallwellen nicht mehr wahrnehmen, weil die Frequenz zu hoch für unsere Ohren ist. Trifft die Ultraschallwelle auf ein Hindernis (z.B. einen Käfer oder eine Wand), so wird sie reflektiert. Ein Teil der Welle wird so reflektiert, dass er wieder beim Sender - der Fledermaus oder dem Sensor - ankommt. Zwischen dem los Schicken und wieder Ankommen vergeht etwas Zeit. Je weiter das Objekt, an dem die Welle reflektiert wurde, entfernt ist, desto mehr Zeit vergeht, bis die Welle wieder beim Sender ankommt.

<p align="left"><img src="img/UltraschallSensor.jpg" width="300" alt="Funktionsprinzip des Ultraschallsensors"></p>

Die Ultraschallwelle breitet sich wie alle Schallwellen mit Schallgeschwindigkeit $c_{S}$ aus. Kennen wir die Zeit $t$, die für eine Strecke benötigt wird, und die Geschwindigkeit mit der sich fortbewegt wird, so können wir daraus die Länge $l$ der Strecke selbst berechnen: 

<p align="center"> $$l = c_S \cdot t$$ </p>

Sowohl die Fledermaus, als auch wir, wenn wir den Ultraschallsensor benutzen, müssen beachten, dass die Zeit $t_{mess}$, die wir zwischen Absenden und Empfangen der Ultraschallwelle, die Zeit für Hin- **und** Rückweg ist. Die Formel, die wir nutzen, muss also lauten:

<p align="center"> $$l = c_S \cdot \frac{t_{mess}}{2}$$ </p>

Jetzt wissen wir ungefähr, wie ein Ultraschallsensor funktioniert. Der Ultraschallsensor hat 4 Pins:
* **VCC-Pin** Dieser Pin wird an den _5-Volt-Pin_ des Arduinos angeschlossen und dient zur Stromversorgung.
* **Gnd-Pin** Dieser Pin wird an den _Gnd-Pin_ des Arduinos angeschossen und dient der Erdung.
* **Trig-Pin** Dieser Pin wird an einen _digitalen Pin_ des Arduinos angeschlossen. Am Trigger-Pin wird festgelegt, wann das Ultraschall-Signal losgesandt wird.
* **Echo-Pin** Dieser Pin wird auch an einen _digitalen Pin_ des Arduinos angeschlossen. An diesem Pin wird das zurück reflektierte Ultraschall-Signal empfangen.

<p align="center"><img src="img/UltraschallSensorBild.png" width="300" alt="Ultraschallsensor HC-SR04"></p>

## 🛠️ Aufgabe: Ultraschall-Sensor anschließen

1. Schließe den Ultraschall nach folgendem Schaltplan an deinen Arduino an.

Um den Ultraschall-Sensor anzusteuern brauchen wir eine neue Funktion: die Funktion ``pulseIn(pin, value)``. Dieser Funktion übergibt man einen ``pin``, an dem der Arduino Werte einlesen soll. Außerdem erhält die Funktion den ``value`` HIGH oder LOW. Wir werden der Funktion den **Echo-Pin** und den Wert **HIGH** übergeben. Die Funktion wartet dann darauf, dass der Echo-pin auf HIGH geschaltet wird - das entspricht dem Absenden des Ultraschall-Signals - und misst die Zeit, die vergeht, bis der Echo-Pin wieder auf LOW geschaltet wird - also dem Moment, in dem das Ultraschall-Signal wieder beim Sensor ankommt. Die Rückgabe-Wert der Funktion ist dann die gemessene Zeit in Mikrosekunden. 

2. Kopiere den folgenden **Code** in einen neuen Sketch in der Arduino IDE
```cpp
// Festlegung der digitalen Pins für Trig & Echo
#define triggerPin 3
#define echoPin 4

// Speichern der Schallgeschwindigtkeit in Konstante in der Einheit Meter pro Micorsekunde
#define schall 0.0343

// Deklaration von Variablen zum Speichern ...
float duration; // ... der Zeit die bis zum wieder Ankommen des Signals vergangen ist und ...
float distance; // ... der Länge, die wir berechnen wollen.


void setup() {
  // Starten des seriellen Monitors
  Serial.begin(9600);

  // Festlegen der Pin-Modi
  pinMode(triggerPin, OUTPUT);
  pinMode(echoPin,INPUT);
  
}

void loop() {
  // Aussenden des Ultraschall-Signals über den Trigger-Pin
  digitalWrite(triggerPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin,LOW);

  // Messung der Zeit zwischen Absenden und Empfangen des Signals
  duration = pulseIn(echoPin,HIGH);
  
  // Hier kommt Dein Code hin
  
  delay(1000); // Kurzes Warten, damit der Sensor nicht überfordert wird
}
```
> 💡 _Wie Dir vielleicht aufgefallen ist, steht in diesem Code gar keine der am Anfang erwähnten ``read()``-Funktionen. Das hängt damit zusammen, dass bereits in der ``pulseIn()``-Funktion ein ``read()``-Befehl verbaut ist._

3. Schreibe an die in ``void loop()`` markierte Stelle ein paar Zeilen Code, mit denen Du
  * die **Distanz** aus der gemessenen Zeit **berechnest** und 
  * die Distanz im **seriellen Monitor** ausgibst.

---

Nun hast Du alle Grundlagen, die Du brauchst um ein Theremin zu bauen. Wenn Du Lust hast kannst Du gleich damit starten. Falls Du Dir noch einen weiteren Sensor anschauen möchtest, kannst Du das jedoch auch gerne tun. Im optionalen Kapitel Sensoren 2 kannst Du lernen, wie man einen Phototransistor anschließt, und diesen anschließend auch in Dein Theremin einbauen.

[Zurück zur Kapitelübersicht](Kapiteluebersicht)
[Theremin bauen](Theremin)
[Sensoren 2](Sensoren2)












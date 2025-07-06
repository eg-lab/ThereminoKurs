[Zurück zur Kapitelübersicht](Kapiteluebersicht)
---
# Grundlagen 2 - LED anschließen 💡

**In diesem Kapitel lernst du, wie du eine LED richtig anschließt und sie mit dem Arduino blinken lässt.**

**LED** bedeutet *Light Emitting Diode*. LEDs können Licht produzieren, wenn man einen Strom an sie anlegt. Dabei ist es jedoch wichtig in welche Richtung man sie anschließt. Den Pluspol schließt man bei einer LED immer an das lange Beinchen, den Minuspol immer an das kürzere.
<p align="center"><img src="img/LED_plus_minus.jpg" width="300" alt="LED."></p>

> ➕ Langes Bein = Pluspol <br>
> ➖ Kurzes Bein = Minuspol

Damit die LED nicht kaputtgeht, brauchst du einen **Widerstand**. Ein Widerstand ist ein elektrisches Bauteil, an dem Spannung abfällt. Er sorgt dafür, dass nicht zu viel Strom durch die LED fließt.

<p align="center"><img src="img/widerstand.jpg" width="300" alt="LED."></p>

Wir bauen die Schaltung auf dem **Breadboard** auf. Das Breadboard ist der Ort, an dem Ihr Eure Schaltung aufbauen könnt. Normalerweise werden Schaltungen verlötet, damit sie lange halten. Mit einem Breadboard kann man jedoch sehr schnell Schaltungen stecken und sie auch wieder abbauen.

<p align="center"><img src="img/breadboard.jpg" width="300" alt="LED."></p>

Mit den Kabel verbinden wir unsere Bauteile. Eine Konvention, an die wir uns halten wollen, ist: Alle Kabel, die zum Pluspol (*5V* / *D1* / etc.) führen, sind rot, alle Kabel, die zum Minuspol (*G* / *Gnd*) führen, sind schwarz.

> 🔴 Rote Kabel verbinden den Pluspol<br>
> ⚫ Schwarze Kabel verbinden den Minuspol

<p align="center"><img src="img/kabel_plus_minus.jpg" width="300" alt="LED."></p>

Um zu wissen, wie man Bauteile verbinden soll, kann man in den Schaltplan schauen. Dieser sieht wie folgt aus:
<p align="center"><img src="img/Schaltung_g2.jpg" width="500" alt="Schaltplan LED."></p>

## 🛠️ Aufgabe

1. Baue die Schaltung aus dem Schaltplan nach.

2. Lade folgenden Code auf den Arduino hoch:

    ```cpp
    #define ledPin D1

    void setup() {
    pinMode(ledPin, OUTPUT);
    }

    void loop() {

    digitalWrite(ledPin,HIGH);
    delay(500);
    digitalWrite(ledPin,LOW);
    delay(500);
    }
    ```

3. Beobachte, was passiert. Was macht der Code?

> *💡 Tipp: Wenn du nichts beobachten kannst, überprüfe bitte deine Schaltung.*

---
[Weiter zu Grundlagen 3](Grundlagen3) \| [Zurück zur Kapitelübersicht](Kapiteluebersicht)

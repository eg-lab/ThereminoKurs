<link rel="stylesheet" href="assets/css/custom.css?v=2">

<div class="nav-container">
  <a href="Grundlagen3" class="button">Zurück</a>
  <a href="Grundlagen5" class="button">Weiter</a>
</div>

## Grundlagen 4 – Button und LED verbinden ▶️ ➕ 💡

**In diesem Kapitel lernst du, wie du den Button mit einer LED verbindest.**

Die LED soll leuchten, solange du den Button gedrückt hältst. Damit das funktioniert, müssen wir zunächst ein neues Konzept verstehen: **Bedingungen**. Mit `if` kannst du dem Arduino sagen:

> *__Wenn__ eine Bedingung stimmt, mache etwas.*  
> *__Ansonsten__ mache etwas anderes.*

**Beispiel:**

```cpp
if (hier die Bedingung) {
  // Das passiert, wenn die Bedingung stimmt
}
else {
  // Das passiert, wenn sie nicht stimmt
}
```

<div class="merkbox">
💡 Mit <code>if</code> kannst du Bedingungen abfragen und dein Programm intelligent reagieren lassen. Egal ob du ein Licht einschaltest, einen Ton abspielst oder ein Display steuerst, <code>if</code> steckt in so gut wie jedem Programm.
</div>

In unserem Fall ist die Bedingung, ob der Button gedrückt ist. Damit du verstehst, wie `if` funktioniert, üben wir zuerst, den Status des Buttons im Serial Monitor auszugeben. Das hilft dir, sicherzustellen, dass der Button korrekt angeschlossen ist und der Arduino den Zustand richtig erkennt.

<div class="aufgabe">
<h3>🛠️ Aufgabe: Status ausgeben</h3>
<ol>
  <li>Verwende den Aufbau aus <strong>Grundlagen 3</strong>.</li>
  <li>Lade den bereitgestellten Code auf den Arduino hoch.
  </li>
  <li>Öffne den Serial Monitor. Drücke den Button und schaue, ob sich der Text ändert.</li>
</ol>
</div>

### Code
  
```cpp
#define BUTTON_PIN D1

void setup()
{
  Serial.begin(9600);
  pinMode(BUTTON_PIN, INPUT_PULLUP);
}

void loop()
{
  byte buttonState = digitalRead(BUTTON_PIN);
  
  if (buttonState == LOW) {
      Serial.println("Button is pressed");
  }
  else {
      Serial.println("Button is not pressed");
  }
  delay(100);
}
```

Jetzt weißt du, wie du den Zustand eines Buttons prüfst und anzeigen lässt. Im nächsten Schritt wollen wir das Ergebnis nicht nur im Serial Monitor ausgeben, sondern mit der LED sichtbar machen.

<div class="merkbox">
💡 Wenn du <code>INPUT_PULLUP</code> nutzt, bedeutet das:<br>
Nicht gedrückt = <code>HIGH</code> (1)<br>
Gedrückt = <code>LOW</code> (0)
</div>

Damit kannst du den Arduino so programmieren, dass er je nach Zustand des Buttons entscheidet, ob die LED leuchtet oder nicht. Genau dafür brauchen wir die `if`-Abfrage.

<div class="aufgabe">
<h3>🛠️ Aufgabe: LED mit dem Button steuern</h3>
<ol>
  <li>Baue die Schaltung aus dem Schaltplan nach.
    <ul>
      <li>Ein Pin des Buttons wird mit GND verbunden.</li>
      <li>Der andere Pin geht an D1.</li>
      <li>Die LED wird mit einem Vorwiderstand an D7 angeschlossen.</li>
      <li>Achte darauf, dass das lange Bein der LED an D7 angeschlossen ist.</li>
    </ul>
  </li>
  <li>Schreibe deinen eigenen Code, der folgendes tut:
    <ul>
      <li>Den Status des Buttons lesen.</li>
      <li>Mit <code>if</code> prüfen, ob der Button gedrückt ist.</li>
      <li>Die LED einschalten, solange der Button gedrückt ist.</li>
      <li>Die LED ausschalten, wenn der Button nicht gedrückt ist.</li>
    </ul>
  </li>
  <li>Teste deine Schaltung. Drücke den Button – die LED sollte leuchten, solange du ihn gedrückt hältst.</li>
</ol>
</div>

<details>
<summary>💡 Tipp anzeigen</summary>
<p><em>Falls du nicht weiterweißt, schaue dir den Code aus <strong>Grundlagen 3</strong> (Button lesen) und den Code aus <strong>Grundlagen 2</strong> (LED blinken) an und kombiniere beide Ideen.</em></p>
</details>

### Schaltplan

<div class="schaltplan-box">
  <img src="img/Schaltung_g4_UNO.png" alt="Schaltplan Button und LED">
</div>

<!-- 
<div class="aufgabe">
<h3>✨ Bonusaufgabe für ganz Schnelle</h3>
<p>Kannst du den Button so programmieren, dass die LED bei jedem Drücken umschaltet?</p>
<ul>
  <li>Beim ersten Druck geht die LED an.</li>
  <li>Beim zweiten Druck geht sie aus.</li>
  <li>Beim dritten Druck wieder an.</li>
  <li>Und so weiter.</li>
</ul>
</div>

<details>
<summary>💡 Tipp anzeigen</summary>
<p><em>Du brauchst folgende Komponenten:</em></p>
<ul>
  <li>Eine Variable, die speichert, ob die LED gerade an oder aus ist.</li>
  <li>Eine Abfrage, ob der Button <strong>neu gedrückt wurde</strong> (also vom Zustand HIGH auf LOW gewechselt ist).</li>
  <li>Ein Umschalten mit <code>digitalWrite</code> und <code>!</code> (Ausrufezeichen).</li>
</ul>
</details> -->

<p class="spacing-1">&nbsp;</p>

---

<div class="nav-container">
  <a href="Grundlagen3" class="button">Zurück</a>
  <a href="Grundlagen5" class="button">Weiter</a>
</div>

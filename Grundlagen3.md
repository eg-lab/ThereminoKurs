<link rel="stylesheet" href="assets/css/custom.css?v=2">

<div class="nav-container">
  <a href="Grundlagen2" class="button">Zurück</a>
  <a href="Grundlagen4" class="button">Weiter</a>
</div>

## Grundlagen 3 – Button anschließen ▶️

**In diesem Kapitel lernst Du, wie Du einen Button anschließt und erkennst, ob er gedrückt ist.**

**Button** bedeutet Schalter. Mit einem Button kannst Du den Stromkreis schließen oder öffnen.
Wenn Du den Button drückst, wird ein Signal an den Arduino geschickt. So kannst Du später z. B. Töne erzeugen oder eine LED steuern.

<p align="center">
  <img src="img/button.jpg" width="300" class="rounded" alt="Button">
</p>

Wir verbinden den Button so, dass der Arduino erkennen kann, ob er gedrückt wird oder nicht. Dabei ist wichtig, dass Du den Button mit **GND** (*Minus*) verbindest, damit der Pin auf `LOW` gezogen wird, wenn der Button nicht gedrückt ist.

<div class="merkbox">
💡 Der Button schließt den Stromkreis nur, wenn Du ihn drückst. Lässt Du ihn los, ist der Stromkreis wieder offen.
</div>

Damit wir sehen können, ob der Button gedrückt ist, geben wir den Status im Serial Monitor aus. Der Serial Monitor ist ein Fenster, in dem der Arduino Zahlen und Texte anzeigt. So kannst Du genau sehen, was dein Programm gerade macht.

<p align="center">
  <img src="img/serial_monitor.png" width="300" class="rounded" alt="Serial Monitor">
</p>

---

<div class="aufgabe">
<h3>🛠️ Aufgabe</h3>
<ol>
  <li>Baue die Schaltung aus dem Schaltplan nach. Achte darauf, dass ein Pin an GND angeschlossen ist. Schließe den Arduino an deinen Computer an.</li>
  <li>Lade den bereitgestellten Code auf den Arduino hoch.
  </li>
  <li>Öffne den Serial Monitor in der Arduino IDE. Dafür musst Du oben rechts auf das Lupensymbol klicken.</li>
  <li>Drücke den Button und beobachte, welche Zahl angezeigt wird.</li>
</ol>
</div>

<details>
<summary>💡 Hinweis anzeigen</summary>
<p><em>Wenn Du den Button nicht drückst, sollte 1 angezeigt werden. Wenn Du ihn drückst, sollte 0 angezeigt werden.  
Warum? Wir nutzen <code>INPUT_PULLUP</code>. Das bedeutet: Der Pin wird vom Arduino intern auf <code>HIGH</code> gezogen. Wenn Du den Button drückst, wird der Pin auf GND gezogen – dann ist er <code>LOW</code>.</em></p>
</details>

### Schaltplan

<div class="schaltplan-box">
  <img src="img/Schaltung_g3_UNO.png" alt="Schaltplan Button">
</div>

### Code

```cpp
#define buttonPin D1

void setup() {
  Serial.begin(9600);
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
  int buttonStatus = digitalRead(buttonPin);
  Serial.println(buttonStatus);
}
```

<p class="spacing-1">&nbsp;</p>

---

<div class="nav-container">
  <a href="Grundlagen2" class="button">Zurück</a>
  <a href="Grundlagen4" class="button">Weiter</a>
</div>

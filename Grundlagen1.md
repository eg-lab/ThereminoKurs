<link rel="stylesheet" href="assets/css/custom.css?v=2">

<div class="nav-container">
  <a href="Sicherheit" class="button">Zurück</a>
  <a href="Grundlagen2" class="button">Weiter</a>
</div>

## Grundlagen 1 – Den Arduino kennenlernen

Wie Ihr wisst, wollen wir heute mit Arduinos arbeiten. Aber was ist das überhaupt?  
Ein **Arduino** ist ein Mikrocontroller – also ein kleiner Computer, der für bestimmte Aufgaben programmiert werden kann. Du kannst ihn so einstellen, dass er genau das macht, was Du möchtest.

<div class="schaltplan-box">
  <img src="img/Arduinos.png" width="300" class="rounded" alt="Arduino Uno">
</div>

---

### Aufbau des Arduinos

#### Pins

Am wichtigsten für die Arbeit mit dem Arduino sind die **Pins** – die Anschlüsse, über die Bauteile verbunden oder Signale gemessen werden.  

- **Stromversorgung**:  
  + 5V / 3.3V → Pluspole  
  + GND → Minuspole  
- **Digitale Pins**: können ein- oder ausgeschaltet sein (**HIGH/LOW**).  
- **Analoge Pins**: messen Werte in einem Bereich von 0 bis 1023.


Man kann Pins als **Input** (Eingang) oder **Output** (Ausgang) verwenden.  

**Beispiele:**  
- Ein Temperatursensor gibt Daten an einen Input-Pin.  
- Über einen Output-Pin kann der Arduino z. B. eine LED ansteuern.  

Der Unterschied zwischen digitalen und analogen Signalen:  
- **Digital**: nur „an“ (HIGH) oder „aus“ (LOW).  
- **Analog**: kontinuierliche Werte (z. B. 357).

<div class="aufgabe">
<h3>🛠️ Aufgabe</h3>
<ol>
  <li>Schau dir deinen Arduino an und finde die 5V-, GND-, digitalen und analogen Pins.</li>
</ol>
</div>

---

### Die Arduino IDE

Damit wir den Arduino programmieren können, nutzen wir die **Arduino IDE**. Das ist ein Programm, in dem Du deinen Code schreibst und anschließend auf den Arduino hochlädst.  

Wenn Du die IDE öffnest, siehst Du sofort einen neuen **Sketch**. Er enthält schon die Grundstruktur:

```cpp
void setup() {
  // läuft einmal beim Start
}

void loop() {
  // läuft danach endlos oft
}
```

- **setup()**: einmal zu Beginn → z. B. Pin-Modi festlegen  
- **loop()**: Hauptprogramm, das endlos wiederholt wird  

<div class="aufgabe">
<h3>🛠️ Aufgabe</h3>
<ol>
  <li>Öffne die Arduino IDE.</li>
  <li>Finde im Sketch die Funktionen <code>setup()</code> und <code>loop()</code>.</li>
</ol>
</div>

---

#### Verbindung mit dem Arduino

Bevor Du Code hochladen kannst, musst Du dein Board auswählen:  
Klicke in der grünen Leiste auf das Auswahlfeld neben dem USB-Symbol → **Board auswählen → Arduino Uno**.  

<div class="aufgabe">
<h3>🛠️ Aufgabe</h3>
<ol>
  <li>Verbinde deinen Arduino Uno mit der Arduino IDE.</li>
</ol>
</div>

In derselben Leiste gibt es drei wichtige Knöpfe:  
- ✅ → kompiliert den Code (prüft auf Fehler und übersetzt ihn für den Arduino)  
- ➡️ → lädt den Code auf den Arduino  
- 🐞 → Debugging (brauchen wir im Kurs nicht)

---

### Grundlegende Funktionen & Programmiersyntax

Damit wir Bauteile steuern können, brauchen wir ein paar Grundkonzepte.  

#### Variablen

**Variablen** sind Platzhalter für Werte.  
Beispiel:  

```cpp
int ganze_Zahl = 8;
float kommazahl = 2.7;
```

- <code>int</code> → ganze Zahl  
- <code>float</code> → Kommazahl  

💡 Wichtig: Jede Zeile endet mit einem <code>;</code>  

#### Funktionen

Funktionen sind Code-Blöcke, die aufgerufen werden können.  
Beispiel:  

```cpp
int variable = beispiel(a, b);
```

Sie nehmen Werte (Parameter) entgegen und geben oft einen Wert zurück.  

---

### Wichtige Arduino-Befehle

- `pinMode(Pin, INPUT/OUTPUT)` → legt fest, ob ein Pin Eingang oder Ausgang ist  
- `digitalWrite(Pin, HIGH/LOW)` → schaltet einen Pin an oder aus  
- `digitalRead(Pin)` → liest, ob ein digitaler Eingang HIGH oder LOW ist  
- `analogRead(Pin)` → liest einen Wert (0–1023) von einem analogen Eingang  
- `analogWrite(Pin, Wert)` → gibt einen Wert (0–255) an einem Pin aus  
- `delay(ms)` → pausiert das Programm für x Millisekunden  

#### Kommentare

Mit <code>//</code> kannst Du eine Zeile als Kommentar kennzeichnen.  
Beispiel:  

```cpp
// Diese Zeile wird vom Computer ignoriert
```

---

<p class="spacing-1">&nbsp;</p>

<div class="nav-container">
  <a href="Sicherheit" class="button">Zurück</a>
  <a href="Grundlagen2" class="button">Weiter</a>
</div>

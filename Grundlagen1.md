<link rel="stylesheet" href="assets/css/custom.css?v=2">

<div class="nav-container">
  <a href="Sicherheit" class="button">Zurück</a>
  <a href="Grundlagen2" class="button">Weiter</a>
</div>

## Grundlagen 1 – Den Arduino kennenlernen

Wie Ihr wisst, wollen wir heute mit Arduinos arbeiten. Aber was ist das überhaupt? Ein **Arduino** ist ein Mikrocontroller – also ein kleiner Computer, der für bestimmte Aufgaben programmiert werden kann. Du kannst ihn so einstellen, dass er genau das macht, was Du möchtest.

<div class="schaltplan-box">
  <img src="img/Arduinos.png" width="300" class="rounded" alt="Arduino Uno">
</div>

---

### Aufbau des Arduinos und *Pins*

Nun wollen wir uns anschauen, wie man mit einem Arduino arbeitet. Am wichtigsten für die Kommunikation mit dem Arduino sind die verschiedenen Anschlüsse oder **Pins**.
Dabei gibt es verschiedene Arten. Für uns wichtig sind erstmal nur drei Typen:

- Pins für die **Stromversorgung**:  
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
<p>Schau dir deinen Arduino an und finde die 5V-, GND-, digitalen und analogen Pins.</p>
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
<p>Verbinde deinen Arduino Uno mit der Arduino IDE.</p>
</div>

In derselben Leiste gibt es drei wichtige Knöpfe:  
- ✅ → kompiliert den Code (prüft auf Fehler und übersetzt ihn für den Arduino)  
- ➡️ → lädt den Code auf den Arduino  
- 🐞 → Debugging (brauchen wir im Kurs nicht)

---

### Grundlegende Funktionen & Programmiersyntax

Damit wir Bauteile steuern können, brauchen wir ein paar Grundlagen der Programmierung.

---

**Variablen** sind benannte Speicherplätze im Arbeitsspeicher des Mikrocontrollers. Sie halten Werte, die während des Programmlaufs gelesen, verändert und überschrieben werden können.  
Jede Variable hat einen **Datentyp**, der bestimmt, welche Art von Wert darin gespeichert werden kann (z. B. ganze Zahl, Kommazahl, Zeichen).

Beispiele in C++ (der Programmiersprache, die auch auf Arduino verwendet wird):

```cpp
int ganze_Zahl;      // Variable für eine ganze Zahl (Integer)
float kommazahl;     // Variable für eine Kommazahl (Float)
```

Beim **Anlegen** einer Variablen wird der Datentyp vor den Namen geschrieben. Einen Wert weist man mit `=` zu:

```cpp
ganze_Zahl = 3;
kommazahl = 1.7;
```

Oder direkt bei der Deklaration:

```cpp
int ganze_Zahl = 8;
float kommazahl = 2.7;
```

- `int` → ganze Zahl (Integer)  
- `float` → Kommazahl (Floating Point)

💡 **Wichtig:** Jede Codezeile endet mit einem `;`

---

**Funktionen** fassen wiederverwendbaren Code zusammen. Man ruft sie über ihren Namen auf, kann **Parameter** (Eingabewerte) übergeben und erhält oft einen **Rückgabewert**.

Beispiel eines Funktionsaufrufs:

```cpp
int variable = beispiel(parameter_a, parameter_b);
```

Hier wird die Funktion `beispiel()` mit zwei Parametern ausgeführt. Ihr Rückgabewert wird in `variable` gespeichert.

Eine mögliche Funktionsdefinition dazu:

```cpp
int beispiel(int a, int b) {
  int summe = a + b;
  return summe;  // gibt die Summe zurück
}
```

Auch `setup()` und `loop()`, die Du schon kennst, sind Funktionen:
- `setup()` läuft genau einmal beim Start.
- `loop()` wird danach endlos wiederholt.

---

**Kommentare** sind Notizen im Code, die vom Compiler ignoriert werden. Sie helfen, den Code verständlicher zu machen.

```cpp
// Diese Zeile wird nicht ausgeführt
```

Mehrzeilige Kommentare schreibt man mit `/* ... */`:

```cpp
/*
Dies ist ein
mehrzeiliger Kommentar
*/
```

---

### Wichtige Arduino-Befehle

- `pinMode(Pin, INPUT/OUTPUT)` → legt fest, ob ein Pin Eingang oder Ausgang ist  
- `digitalWrite(Pin, HIGH/LOW)` → schaltet einen Pin an oder aus  
- `digitalRead(Pin)` → liest, ob ein digitaler Eingang HIGH oder LOW ist  
- `analogRead(Pin)` → liest einen Wert (0–1023) von einem analogen Eingang  
- `analogWrite(Pin, Wert)` → gibt einen Wert (0–255) an einem Pin aus  
- `delay(ms)` → pausiert das Programm für x Millisekunden  

---

<p class="spacing-1">&nbsp;</p>

<div class="nav-container">
  <a href="Sicherheit" class="button">Zurück</a>
  <a href="Grundlagen2" class="button">Weiter</a>
</div>

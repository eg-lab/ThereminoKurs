<link rel="stylesheet" href="assets/css/custom.css?v=2">

<div class="nav-container">
  <a href="Grundlagen5" class="button">Zurück</a>
  <a href="Sensoren1" class="button">Weiter</a>
</div>

## Grundlagen 6 – Eine Melodie spielen 🎵

**In diesem Kapitel lernst Du, wie Du mit Arrays und Schleifen eine Melodie spielen kannst.**

Natürlich könnte man jeden Ton einzeln ansteuern: Ton spielen → Delay einfügen → nächsten Ton spielen usw.  
Aber das wäre sehr aufwendig. Stattdessen lernen wir zwei neue Konzepte kennen, die uns helfen, **Code zu vereinfachen**: **Arrays** und **Schleifen**.

---

### Arrays

**Arrays** könnt Ihr euch wie eine **Liste oder Tabelle** vorstellen – darin liegen mehrere Variablen **vom gleichen Datentyp** (z. B. `int` oder `float`).  
Beim Erstellen legt Ihr fest, **wie lang** das Array sein soll, und könnt es anschließend mit Werten füllen.

```cpp
int array[10]; // Ein Array mit 10 Integern erzeugen
```

Die einzelnen Werte im Array haben jeweils einen **Index**, also eine laufende Nummer:  
- Der erste Eintrag hat den Index **0**  
- Der zweite den Index **1** usw.  

Über den Index könnt Ihr direkt auf die Werte zugreifen:

```cpp
array[0] // erster Eintrag
array[9] // letzter Eintrag (bei Länge 10)

array[0] = 3; // ersten Eintrag auf 3 setzen
```

Man kann die Werte auch **direkt beim Erstellen zuweisen**:

```cpp
int array[] = {1, 2, 3, 4, 5};
```

<div class="aufgabe">
<h3>🛠️ Aufgabe</h3>
<ol>
  <li>Überlege: Wie könnten Arrays beim Spielen einer Melodie hilfreich sein?</li>
  <li>Welche Informationen könnte man darin speichern?</li>
</ol>
</div>

---

### Schleifen

**Schleifen** sind ein grundlegendes Konzept beim Programmieren. Sie wiederholen einen Code-Abschnitt automatisch – solange eine Bedingung erfüllt ist oder eine bestimmte Anzahl an Durchläufen erreicht wurde. So spart man sich das ständige Kopieren von Code.  

Die **While-Schleife** wiederholt Code so lange, wie die Bedingung wahr ist:

```cpp
while (Bedingung) {
  // Code, der wiederholt wird
}
```

Beispiel: `while (Variable1 > Variable2)` läuft so lange, bis die Bedingung falsch wird.  

Die **For-Schleife** ist besonders praktisch, wenn man schon weiß, wie oft etwas wiederholt werden soll.  

```cpp
for (Schleifenvariable deklarieren; Abbruchbedingung; Schleifenvariable anpassen) {
  // wiederholter Code
}
```

Standardmäßig sieht das so aus:  

```cpp
for (int i = 0; i < 5; i++) {
  Serial.println(i);
}
```

- `i` ist die **Zählvariable** (beginnt hier bei 0)  
- `i < 5` ist die Bedingung (läuft, solange i kleiner 5 ist)  
- `i++` bedeutet: i wird nach jedem Durchlauf um 1 erhöht  

👉 Sehr praktisch, um ein Array Element für Element durchzugehen.  

### Beispiel: Array mit For-Schleife

```cpp
int array[] = {1, 2, 3, 4, 5};

for (int i = 0; i < 5; i++) {
  Serial.println(array[i]);
}
```

- Das Array hat 5 Werte (Index 0–4).  
- Die Schleife läuft genau 5-mal.  
- In jedem Durchlauf gibt sie den Wert des Arrays an Stelle `i` aus.  

So könnt Ihr eine komplette Liste abarbeiten – etwa eine ganze Melodie!  

> 💡 **Hinweis:**  
> - `i++` ist nur eine Abkürzung für `i = i + 1`.

<div class="aufgabe">
<h3>🛠️ Aufgabe</h3>
<ol>
  <li>Überlege, wie man mit einer Schleife eine Melodie abspielen könnte.</li>
  <li>Erstelle ein Array mit Tönen und nutze eine For-Schleife, um sie nacheinander zu spielen.</li>
</ol>
</div>

---


<details>
  <summary>ℹ️ Töne</summary>
  <pre><code class="language-cpp">
/*************************************************
   Public Constants
 *************************************************/

#define NOTE_B0 31
#define NOTE_C1 33
#define NOTE_CS1 35
#define NOTE_D1 37
#define NOTE_DS1 39
#define NOTE_E1 41
#define NOTE_F1 44
#define NOTE_FS1 46
#define NOTE_G1 49
#define NOTE_GS1 52
#define NOTE_A1 55
#define NOTE_AS1 58
#define NOTE_B1 62
#define NOTE_C2 65
#define NOTE_CS2 69
#define NOTE_D2 73
#define NOTE_DS2 78
#define NOTE_E2 82
#define NOTE_F2 87
#define NOTE_FS2 93
#define NOTE_G2 98
#define NOTE_GS2 104
#define NOTE_A2 110
#define NOTE_AS2 117
#define NOTE_B2 123
#define NOTE_C3 131
#define NOTE_CS3 139
#define NOTE_D3 147
#define NOTE_DS3 156
#define NOTE_E3 165
#define NOTE_F3 175
#define NOTE_FS3 185
#define NOTE_G3 196
#define NOTE_GS3 208
#define NOTE_A3 220
#define NOTE_AS3 233
#define NOTE_B3 247
#define NOTE_C4 262
#define NOTE_CS4 277
#define NOTE_D4 294
#define NOTE_DS4 311
#define NOTE_E4 330
#define NOTE_F4 349
#define NOTE_FS4 370
#define NOTE_G4 392
#define NOTE_GS4 415
#define NOTE_A4 440
#define NOTE_AS4 466
#define NOTE_B4 494
#define NOTE_C5 523
#define NOTE_CS5 554
#define NOTE_D5 587
#define NOTE_DS5 622
#define NOTE_E5 659
#define NOTE_F5 698
#define NOTE_FS5 740
#define NOTE_G5 784
#define NOTE_GS5 831
#define NOTE_A5 880
#define NOTE_AS5 932
#define NOTE_B5 988
#define NOTE_C6 1047
#define NOTE_CS6 1109
#define NOTE_D6 1175
#define NOTE_DS6 1245
#define NOTE_E6 1319
#define NOTE_F6 1397
#define NOTE_FS6 1480
#define NOTE_G6 1568
#define NOTE_GS6 1661
#define NOTE_A6 1760
#define NOTE_AS6 1865
#define NOTE_B6 1976
#define NOTE_C7 2093
#define NOTE_CS7 2217
#define NOTE_D7 2349
#define NOTE_DS7 2489
#define NOTE_E7 2637
#define NOTE_F7 2794
#define NOTE_FS7 2960
#define NOTE_G7 3136
#define NOTE_GS7 3322
#define NOTE_A7 3520
#define NOTE_AS7 3729
#define NOTE_B7 3951
#define NOTE_C8 4186
#define NOTE_CS8 4435
#define NOTE_D8 4699
#define NOTE_DS8 4978
</code></pre></details>

<p class="spacing-1">&nbsp;</p> 

---

<div class="nav-container">
  <a href="Grundlagen5" class="button">Zurück</a>
  <a href="Sensoren1" class="button">Weiter</a>
</div>



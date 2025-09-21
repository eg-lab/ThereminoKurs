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

<p class="spacing-1">&nbsp;</p>

---

<div class="nav-container">
  <a href="Grundlagen5" class="button">Zurück</a>
  <a href="Sensoren1" class="button">Weiter</a>
</div>

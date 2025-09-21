<link rel="stylesheet" href="assets/css/custom.css?v=2">

<div class="nav-container">
  <a href="Sensoren1" class="button">Zurück</a>
  <a href="Theremin" class="button">Weiter</a>
</div>

## Sensoren 2 – Phototransistor anschließen (optional) 🌞

**In diesem Kapitel lernst Du, wie ein Phototransistor funktioniert und wie Du ihn in dein Theremin einbauen kannst.**

Ein Transistor kann wie ein **Schalter oder Verstärker für Strom** wirken. Er hat in der Regel drei Anschlüsse: **Emitter**, **Basis** und **Kollektor**. Zwischen Emitter und Kollektor fließt nur dann Strom, wenn an der Basis ein gewisser Strom anliegt. Mit mehr Strom an der Basis verstärkt sich auch der Stromfluss zwischen Emitter und Kollektor.

Ein **Phototransistor** unterscheidet sich darin, dass er keinen klassischen Basisanschluss hat, sondern durch **Lichteinfall** gesteuert wird.  
- Ohne Licht fließt kaum Strom.  
- Bei Beleuchtung entstehen im Inneren Ladungsträger, die den Stromfluss ermöglichen.  
- Je stärker die Beleuchtung, desto mehr Strom fließt und desto höher ist die Spannung am Ausgang.  

Diese Spannung kannst Du am Arduino über einen analogen Pin messen.  
Damit lässt sich also eine **Lichtintensität erfassen** – genau das nutzen wir, um unser Theremin zu erweitern.

---

<div class="aufgabe">
<h3>🛠️ Aufgabe</h3>
<ol>
  <li>Baue die Schaltung zum Anschließen des Phototransistors entsprechend der Abbildung nach.</li>
  <li>Lass dir die gemessenen Werte wie beim Ultraschallsensor im seriellen Monitor ausgeben.</li>
</ol>
</div>

### Schaltplan

<div class="schaltplan-box">
  <img src="img/photransistor_aufbau.jpg" alt="Schaltplan Phototransistor">
</div>

---

Bei unserem Theremin kannst Du bisher abhängig vom Abstand zum Ultraschallsensor unterschiedliche Töne spielen.  
Den Phototransistor wollen wir nun verwenden, um **abhängig von der Lichtintensität die Oktave zu bestimmen**.

<div class="aufgabe">
<h3>🛠️ Aufgabe</h3>
<ol>
  <li>In welchem Bereich liegen die gemessenen Werte?</li>
  <li>Finde eine passende Zuweisung von Oktaven basierend auf dem Lichteinfall.</li>
  <li>Erweitere deinen Theremin-Code um eine Bestimmung der Oktave.</li>
</ol>
</div>

---

### Hilfestellung

Als kleine Hilfe kannst Du dieses **zweidimensionale Array** nutzen. Es enthält die Frequenzen aller Töne (inklusive Halbtöne) über 6 Oktaven:

```cpp
tonMatrix[2][0];
```

- Die erste eckige Klammer `[ ]` gibt die Oktave von 0 bis 5 an.  
- Die zweite `[ ]` steht für den Ton innerhalb der Oktave:  
  - 0 = C, 1 = C#, 2 = D, … bis 11 = H.  

Im Beispiel würdest Du also das **C der zweiten Oktave** erhalten.

<div class="merkbox">
💡 Hinweis: Binde dieses Array am besten direkt unter deinen Pin-Definitionen ein – also außerhalb von <code>setup()</code> und <code>loop()</code>.
</div>

<p class="spacing-1">&nbsp;</p>

---

<div class="nav-container">
  <a href="Sensoren1" class="button">Zurück</a>
  <a href="Theremin" class="button">Weiter</a>
</div>

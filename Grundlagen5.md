<link rel="stylesheet" href="assets/css/custom.css?v=2">

<div class="nav-container">
  <a href="Grundlagen4" class="button">Zurück</a>
  <a href="Grundlagen6" class="button">Weiter</a>
</div>

## Grundlagen 5 – Ton erzeugen 🎶

**In diesem Kapitel lernst Du, wie Du mit einem Piezo-Summer einen Ton spielen kannst.**

Wir hören einen Ton, wenn eine Schallwelle auf das Trommelfell in unseren Ohren trifft. Diese Schallwelle hat eine bestimmte *Amplitude*. Die Amplitude gibt die Höhe bzw. Tiefe der Wellenberge und Wellentäler an und hängt mit der Lautstärke des Tons zusammen.

Ton-Wellenfunktionen sind außerdem periodische Funktionen. Das heißt, dass ein bestimmter Funktionswert in gleichbleibenden Abständen wieder auftaucht. Die *Sinus*-Funktion hat zum Beispiel die Periode *2·π*, weil *sin(0) = sin(0 + 2π) = sin(0 + 4π)* ist. Die *Periodendauer T* gibt an, wie viel Zeit das Durchlaufen einer Periode in Anspruch nimmt.

Einer Schallwelle kann man außerdem eine *Frequenz f* zuordnen. Diese gibt an, wie viele Perioden pro Sekunde durchlaufen werden und lässt sich wie folgt berechnen: *f = 1/T*. Die Frequenz hängt mit der Tonhöhe zusammen, also zum Beispiel damit, ob wir ein **C** oder ein **D** hören. Die Einheit der Frequenz ist Hertz (Hz) und bedeutet *pro Sekunde*.

Um Töne abzuspielen, nutzen wir einen **Piezo-Summer**. In diesem ist ein Piezo-Kristall verbaut. Der Kristall dehnt sich aus, wenn wir eine Spannung anlegen, und kehrt in seinen ursprünglichen Zustand zurück, wenn wir die Spannung wegnehmen. Um einen Ton einer bestimmten Frequenz zu erzeugen, schalten wir die Spannung in einem bestimmten Takt ein und wieder aus. Das darfst Du nun einmal selbst ausprobieren.

<p align="center">
  <img src="img/SinusHighLow.jpg" width="300" class="rounded" alt="Sinus und Rechteck-Funktion">
</p>

---

<div class="aufgabe">
<h3>🛠️ Aufgabe: Kammerton A erzeugen</h3>

<p><em>Der Kammerton A ist der Ton, den ein Orchester zu Beginn eines Konzertes zum Einstimmen spielt. Er liegt bei ungefähr 440 Hz.</em></p>

<ol>
  <li><strong>Schaltung:</strong><br>
  Beim Piezo-Summer handelt es sich um ein ungerichtetes elektrisches Bauelement, das heißt, es ist egal, wie herum man ihn anschließt. Ein Anschluss wird mit einem digitalen Pin verbunden, der andere mit dem GND-Pin. Baue die Schaltung auf.</li>
  
  <li><strong>Vorüberlegung:</strong><br>
  Wir wollen einen Ton mit der Frequenz <em>f = 440 Hz</em> abspielen. Dazu müssen wir an den Piezo für eine bestimmte Zeit <em>t</em> eine Spannung anlegen und sie anschließend für die Zeit <em>t</em> wieder ausschalten. Wie groß ist <em>t</em>?</li>
</ol>

<div class="merkbox">
💡 Hinweise:<br>
– Welcher Teil der Schallwelle entsteht, wenn die Spannung angelegt wird? Welcher Teil entsteht, wenn die Spannung abgeschaltet wird?<br>
– Welche Bedeutung hat die Zeit 2·t für die Welle? Welcher Größe entspricht sie?
</div>

<details>
<summary>💡 Lösung anzeigen</summary>
<p>
Die Phase, in der die Spannung angelegt wird, entspricht einem Wellenberg.  
Die Phase, in der die Spannung ausgeschaltet ist, entspricht einem Wellental.  
Die Zeit, die beim Durchlaufen genau eines Wellenbergs und eines Wellentals vergeht, ist die Periodendauer T.  
Die Zeit t ist somit die Hälfte der Periodendauer.  
Also gilt: f = 1/T ↔ T = 1/f → t = T/2 = 1/(2·f).
</p>
</details>
</div>

---

### Code

Jetzt wollen wir ein Programm schreiben, das den Kammerton A erzeugt.

1. Erstelle eine Variable vom Typ `int`, in der die berechnete Zeit *t* gespeichert ist.  
2. Steuere den Piezo-Pin an:
   - Muss der digitale Pin im INPUT- oder im OUTPUT-Modus betrieben werden?  
   - Mit welcher Funktion kannst Du digitale Pins ein- oder ausschalten?  
   - Bisher haben wir `delay()` genutzt. Die berechnete Zeit *t* liegt im Mikrosekunden-Bereich, dafür ist `delay()` zu ungenau. Verwende deshalb `delayMicroseconds()`.

<div class="merkbox">
💡 Falls Du unsicher bist, schau in die vorherigen Grundlagen-Kapitel zurück!
</div>

---

<div class="aufgabe">
<h3>🛠️ Aufgabe: Überprüfung des Klangs</h3>

<p>Tatsächlich gibt es in der Arduino IDE schon eine Funktion, die genau das macht: <code>tone()</code>.</p>

```cpp
// Spielt den Ton mit der Frequenz 440 Hz
// auf dem an digitalen Pin 3 angeschlossenen Piezo-Summer
tone(3, 440);
```

<p>Schreibe dein Programm aus der vorherigen Aufgabe so um, dass Du die <code>tone()</code>-Funktion nutzt.  
Hört sich beides gleich an oder hörst Du einen Unterschied?</p>
</div>

---

<div class="aufgabe">
<h3>✨ Bonusaufgabe für ganz Schnelle</h3>
<p>Baue einen Button ein, mit dem Du den Piezo-Summer einschalten kannst.</p>

<details>
<summary>💡 Tipp anzeigen</summary>
<p>Orientiere dich am Code aus <strong>Grundlagen 4</strong>.</p>
</details>
</div>

<p class="spacing-1">&nbsp;</p>

---

<div class="nav-container">
  <a href="Grundlagen4" class="button">Zurück</a>
  <a href="Grundlagen6" class="button">Weiter</a>
</div>

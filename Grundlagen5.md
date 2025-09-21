<link rel="stylesheet" href="assets/css/custom.css?v=2">

<div class="nav-container">
  <a href="Grundlagen4" class="button">Zurück</a>
  <a href="Grundlagen6" class="button">Weiter</a>
</div>

## Grundlagen 5 – Ton erzeugen 🎶

**In diesem Kapitel lernst Du, wie man mit einem Piezo-Summer einen Ton spielen kann.**

Wir hören einen Ton, wenn eine Schallwelle auf unser Trommelfell trifft.  
Diese Schallwelle hat zwei wichtige Eigenschaften:

- **Amplitude** → bestimmt die Lautstärke  
- **Frequenz** → bestimmt die Tonhöhe  

Die Frequenz *f* ist der Kehrwert der Periodendauer *T*:  
**f = 1 / T** (Einheit: Hertz, Hz).

Um Töne zu erzeugen, nutzen wir einen **Piezo-Summer**.  
Ein Piezo-Kristall dehnt sich aus, wenn Spannung anliegt, und zieht sich zurück, wenn die Spannung weggenommen wird.  
Schalten wir die Spannung im richtigen Takt ein und aus, entsteht ein Ton.

<p align="center">
  <img src="img/SinusHighLow.jpg" width="300" class="rounded" alt="Sinus- und Rechteck-Funktion">
</p>

---

<div class="aufgabe">
<h3>🛠️ Aufgabe: Kammerton A erzeugen</h3>
<p><em>Der Kammerton A ist der Ton, den ein Orchester zum Einstimmen spielt. Er liegt bei etwa 440 Hz.</em></p>

<ol>
  <li><strong>Schaltung:</strong><br>
  Schließe den Piezo-Summer an: ein Pin an einen digitalen Pin, der andere an GND. Die Polung ist egal.</li>

  <li><strong>Vorüberlegung:</strong><br>
  Wir wollen einen Ton mit <em>f = 440 Hz</em> abspielen.  
  Dazu muss der Piezo für eine bestimmte Zeit <em>t</em> Spannung bekommen, dann für <em>t</em> ausgeschaltet werden.  
  Wie groß ist <em>t</em>?</li>
</ol>

<details>
<summary>💡 Lösung anzeigen</summary>
<p>
Die „an“-Phase entspricht einem Wellenberg, die „aus“-Phase einem Wellental.  
Eine volle Periode besteht also aus zwei dieser Zeiten: 2·t = T.  
Da gilt f = 1/T, folgt: t = 1 / (2·f).  
Für f = 440 Hz ergibt sich t ≈ 1136 µs.
</p>
</details>
</div>

---

### Code

Nun schreiben wir ein Programm, das den Kammerton A erzeugt:

1. Lege eine Variable für die Zeit <em>t</em> an.  
2. Setze den Piezo-Pin auf <code>OUTPUT</code>.  
3. Schalte den Pin abwechselnd HIGH und LOW.  
4. Verwende <code>delayMicroseconds()</code> statt <code>delay()</code>, da wir im Mikrosekunden-Bereich arbeiten.

---

<div class="aufgabe">
<h3>🛠️ Aufgabe: Überprüfung des Klangs</h3>

<p>In der Arduino IDE gibt es bereits eine Funktion, die genau das übernimmt: <code>tone()</code>.</p>

```cpp
// Spielt 440 Hz auf dem an Pin 3 angeschlossenen Piezo-Summer
tone(3, 440);

<link rel="stylesheet" href="assets/css/custom.css?v=2">

<div class="nav-container">
  <a href="Grundlagen4" class="button">Zurück</a>
  <a href="Grundlagen6" class="button">Weiter</a>
</div>

## Grundlagen 5 – Ton erzeugen 🎶

**In diesem Kapitel lernst Du, wie man mit einem Piezo-Summer einen Ton spielen kann.**

Wir hören einen Ton, wenn eine **Schallwelle** auf unser Trommelfell trifft. Wichtige Begriffe:
- **Amplitude**: gibt an, wie hoch die Wellenberge bzw. wie tief die Täler sind → hängt mit der **Lautstärke** zusammen.
- **Periodendauer T**: Zeit, nach der sich der Verlauf wiederholt.
- **Frequenz f**: wie viele Perioden pro Sekunde durchlaufen werden (**f = 1/T**). Sie bestimmt die **Tonhöhe** (z. B. C oder D). Einheit: **Hertz (Hz)**.

Um Töne zu erzeugen, nutzen wir einen **Piezo-Summer**. Darin dehnt sich ein Piezo-Kristall bei Spannung minimal aus und zieht sich ohne Spannung wieder zusammen. Schalten wir die Spannung im passenden Takt **ein** und **aus**, entsteht ein Ton.

<p align="center">
  <img src="img/SinusHighLow.jpg" width="300" class="rounded" alt="Sinus und Rechteck-Funktion">
</p>

---

<div class="aufgabe">
<h3>🛠️ Aufgabe: Kammerton A erzeugen</h3>

<p><em>Der Kammerton <strong>A</strong> ist der Ton, den ein Orchester zum Einstimmen spielt. Er liegt bei ungefähr 440 Hz.</em></p>

<ol>
  <li><strong>Schaltung:</strong><br>
    Der Piezo-Summer ist <em>ungerichtet</em> — es ist egal, wie herum Du ihn anschließt. Ein Anschluss geht an einen digitalen Pin, der andere an <code>GND</code>. Baue die Schaltung auf.
  </li>

  <li><strong>Vorüberlegung:</strong><br>
    Wir wollen <em>f = 440 Hz</em> abspielen. Dazu legst Du für eine Zeit <em>t</em> Spannung an (HIGH) und anschließend für die Zeit <em>t</em> keine Spannung (LOW) — wiederholt. Wie groß ist <em>t</em>?
  </li>
</ol>

<div class="merkbox">
💡 Hinweise:<br>
– Was entspricht dem Wellenbeg / Wellental?<br>
– Welche Bedeutung hat die Zeit <code>2·t</code>? Mit welcher Größe hängt sie zusammen?
</div>

<details>
<summary>💡 Lösung anzeigen</summary>
<p>
Spannung an → Wellenberg, Spannung aus → Wellental. Ein Berg + ein Tal ergeben eine Periode <em>T</em>.<br>
Es gilt <em>f = 1/T</em> → <em>T = 1/f</em> → <em>t = T/2 = 1/(2·f)</em>.<br>
Für 440 Hz: <em>t ≈ 1 / (2·440) s ≈ 1136 µs</em>.
</p>
</details>
</div>

---

### Code

Jetzt schreibst Du ein kurzes Programm, das A (440 Hz) erzeugt:

1. Lege eine Variable (z. B. <code>int</code> oder <code>unsigned int</code>) für <em>t</em> in Mikrosekunden an.  
2. Setze den Piezo-Pin als <code>OUTPUT</code>.  
3. Schalte den Pin im Wechsel <code>HIGH</code> → <code>delayMicroseconds(t)</code> → <code>LOW</code> → <code>delayMicroseconds(t)</code>.

<div class="merkbox">
💡 Hinweis: <code>delay()</code> arbeitet in Millisekunden und ist hier zu grob. Nutze <code>delayMicroseconds()</code>.
</div>

---

### Aufgabe: Überprüfung des Klangs

In der Arduino IDE gibt es eine eingebaute Funktion, die das Umschalten für Dich übernimmt: <code>tone()</code>.

```cpp
// Spielt 440 Hz (Kammerton A) auf dem an Pin 3 angeschlossenen Piezo-Summer
tone(3, 440);
```

Schreibe Dein Programm aus der vorherigen Aufgabe so um, dass Du <code>tone()</code> verwendest.
Klingen beide Varianten gleich, oder hörst Du einen Unterschied?

---

## ✨ Bonusaufgabe für ganz Schnelle

**Baue einen Button ein, der den Piezo-Summer einschalten kann.**

<details>
<summary>💡 Tipp anzeigen</summary>
<p>Orientiere Dich am Code aus <strong>Grundlagen 4</strong> (Button + <code>if</code>).</p>
</details>

<p class="spacing-1">&nbsp;</p>

---

<div class="nav-container">
  <a href="Grundlagen4" class="button">Zurück</a>
  <a href="Grundlagen6" class="button">Weiter</a>
</div>

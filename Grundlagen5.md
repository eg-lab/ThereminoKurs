<link rel="stylesheet" href="assets/css/custom.css?v=2">
<script id="MathJax-script" async
 src="https://cdn.jsdelivr.net/npm/mathjax@3/es5/tex-mml-chtml.js"></script>

<div class="nav-container">
  <a href="Grundlagen4" class="button">Zurück</a>
  <a href="Grundlagen6" class="button">Weiter</a>
</div>

## Grundlagen 5 - Ton erzeugen 🎶

**In diesem Kapitel lernst Du, wie man mit einem Piezo-Summer einen Ton spielen kann.**

Wir hören einen Ton, wenn eine Schallwelle auf das Trommelfell in unseren Ohren trifft. Diese Schallwelle hat eine bestimmte *Amplitude*. Die Amplitude gibt die Höhe bzw. Tiefe der Wellenberge bzw. Wellentäler an und hängt mit der Lautsärke des Tons zusammen.

Ton-Wellenfunktionen sind außerdem periodische Funktionen. Das heißt, dass ein bestimmter Funktionswert in gleichbleibenden Abständen wieder auftaucht. Die *sinus*-Funktion hat zum Beispiel die Periode *2·π*, weil *sin(0) = sin(0 + 2π) = sin(0 + 4π)* ist. Die *Periodendauer T* gibt an, wie viel Zeit das Durchlaufen einer Periode in Anspruch nimmt.

Einer Schallwelle kann man außerdem eine *Frequenz f* zuordnen. Diese gibt an, wie viele Perioden pro Sekunde durchlaufen werden und lässt sich wie folgt berechnen: *f = 1/T*. Die Frequenz hängt mit der Tonhöhe zusammen, also zum Beispiel damit, ob wir ein **C** oder ein **D** hören. Die Einheit der Frequenz ist Hertz, was mit Hz abgekürzt wird, und so viel wie *pro Sekunde* bedeutet.

Um Töne abzuspielen, nutzen wir einen **Piezo-Summer**. In diesem ist ein Piezo-Kristall verbaut. Der Piezo-Kristall dehnt sich aus, wenn wir eine Spannung anlegen, und kehrt in seinen ursprünglichen Zustand zurück, wenn wir die Spannung wieder wegnehmen. Um nun einen Ton einer bestimmten Frequenz zu erzeugen, schalten wir die Spannung in einem bestimmten Takt ein und wieder aus. Das darfst Du nun einmal selbst ausprobieren.

<p align="center"><img src="img/SinusHighLow.jpg" width="300" alt="Sinus und Rechteck-Funktion"></p>

---

<div class="aufgabe">
  <h3>🛠️ Aufgabe: Kammerton A erzeugen</h3>

  <p>Wir wollen zunächst den Kammerton <strong>A</strong> erzeugen.</p>

  <blockquote>
    <em>Der Kammerton <strong>A</strong> ist der Ton, der von einem Orchester zu Beginn eines Konzerts von allen Instrumenten zum Einstimmen gespielt wird. Er liegt ungefähr bei 440&nbsp;Hz.</em>
  </blockquote>

  <ol>
    <li><strong>Schaltung:</strong> Beim Piezo-Summer handelt es sich um ein ungerichtetes Bauteil, d.&nbsp;h. es ist egal, wie <em>herum</em> Du ihn anschließt. Ein Anschluss an einen digitalen Pin, der andere an <code>GND</code>. Baue die Schaltung auf.</li>

    <li><strong>Vorüberlegung:</strong> Wir wollen einen Ton mit der Frequenz <em>f = 440&nbsp;Hz</em> abspielen. Dazu legst Du für eine Zeit <em>t</em> eine Spannung an und schaltest sie anschließend für die Zeit <em>t</em> wieder aus. Wie groß ist <em>t</em>?
      <details>
        <summary>💡 Hinweise anzeigen</summary>
        <p>• Welche Phase entsteht, wenn die Spannung anliegt (Wellenberg)?<br>
           • Welche Phase entsteht, wenn die Spannung aus ist (Wellental)?<br>
           • Welche Bedeutung hat die Zeit <code>2·t</code> – welcher Größe entspricht sie?</p>
      </details>
      <details>
        <summary>✅ Lösung anzeigen</summary>
        <p>„An“ entspricht dem Wellenberg, „Aus“ dem Wellental. Ein Wellenberg plus Wellental ergeben eine Periode <em>T</em>. Da <em>f = 1/T</em>, gilt <em>T = 1/f</em> und damit <em>t = T/2 = 1/(2·f)</em>. Für 440&nbsp;Hz: <em>t ≈ 1136&nbsp;µs</em>.</p>
      </details>
    </li>

    <li><strong>Code schreiben:</strong> Erstelle ein Programm, das den Kammerton A erzeugt.
      <ul>
        <li>Lege eine Variable (z.&nbsp;B. <code>unsigned int</code>) für <em>t</em> in Mikrosekunden an.</li>
        <li>Setze den Piezo-Pin auf <code>OUTPUT</code>.</li>
        <li>Schalte den Pin abwechselnd <code>HIGH</code> und <code>LOW</code>.</li>
        <li>Nutze <code>delayMicroseconds(t)</code> (nicht <code>delay()</code>), da wir im µs-Bereich sind.</li>
      </ul>
    </li>
  </ol>
</div>

---

<div class="aufgabe">
<h3>🛠️ Aufgabe: Überprüfung des Klangs</h3>

Tatsächlich ist in der Arduino IDE bereits eine Funktion hinterlegt, die genau das macht, was Du gerade selbst geschrieben hast. Das ist die sogenannte <code>tone()</code>-Funktion.

```cpp
// Spielt den Ton mit der Frequenz 440 auf dem am digtalen Pin 3 angeschlossenen Piezo-Summer
tone(3,440);
```

Schreibe nun Dein Programm aus der vorherigen Aufgabe so um, dass Du anstelle des An- und Ausmachens des digitalen Pins die <code>tone()</code>-Funktion nutzt, um den Kammerton a zu erzeugen. Hört sich beides gleich an oder hörst Du einen Unterschied?

</div>

<!-- ## ✨ Bonusaufgabe für ganz Schnelle

**Baue einen Button ein, der den Piezo-Summer anschalten kann.**

Das Geräusch, das der Piezo-Summer macht, ist nicht unbedingt besonders schön. Daher ist es praktisch, den Piezo nur dann spielen zu lassen, wenn ein Button gedrückt wird, um Euch und Eure Mitmenschen zu schonen.

<details>
<summary>💡 Tipp anzeigen</summary>
<p>Orientiere Dich an dem Code, den Du in Grundlagen 4 geschrieben hast!</p>
</details> -->

<p class="spacing-1">&nbsp;</p>

---

<div class="nav-container">
  <a href="Grundlagen4" class="button">Zurück</a>
  <a href="Grundlagen6" class="button">Weiter</a>
</div>

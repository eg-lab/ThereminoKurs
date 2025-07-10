<link rel="stylesheet" href="assets/css/custom.css?v=2">

<div class="nav-container">
  <a href="Sensoren1" class="button">Zurück</a>
  <a href="Theremin" class="button">Weiter</a>
</div>

## Sensoren 2 - Phototransistor anschließen (OPTIONAL)

Und für die ganz Schnellen, wenn ihr Lust habt euch noch mit einem weiteren Bauteil auseinanderzusetzen, schauen wir uns jetzt noch einen Phototransistor an.

Es gibt verschiedene Arten von Transistoren, wie zum Beispiel Bipolartransistoren oder MOSFETs. Wir werden hier nicht weiter darauf eingehen was das genau ist, aber wir werden einen Bipolartransistor verwenden.
Einen Transistor könnt ihr euch allgemein wie eine Art Schalter oder Verstärker für Strom vorstellen. Er hat normalerweise 3 Anschlüsse. Beim Bipolartransistor den Emitter, die Basis und den Kollektor. Die Idee ist, dass zwischen Emitter und Kollektor nur dann ein Strom fließt, wenn auch in die Basis ein gewisser Strom fließt, ansonsten nicht, weiterhin wird mit steigendem Strom an der Basis auch der Strom zwischen Emitter und Kollektor verstärkt.

In unserem Fall wollen wir uns speziell mit Phototransistoren auseinandersetzen. Diese haben keinen klassischen Basisanschluss sondern funktionieren durch Lichteinfall. Zwischen Emitter und Kollektor liegt eine Spannung an. Diese reicht zunächst nicht aus um einen Strom durch das Transistormaterial zu erzeugen. Das Material ist aber so beschaffen, dass bei Beleuchtung Ladungsträger im Inneren erzeugt werden, die dafür sorgen, dass ein Stromfluss möglich ist. Stärkere Beleuchtung bedeutet mehr Stromfluss und eine höhere Spannung am Ausgang. Diese kann man über einen analogen Arduino Pin messen.


Ein Phototransistor ermöglich uns also ein Spannung abhängig von der Lichtintensität zu messen. Dies wollen wir nun nutzen, um unser Theremin noch ein wenig zu erweitern. Ihr habt ja bereits einen Sensor über einen analogen Pin angeschlossen. Der Phototransitor funktioniert ähnlich.


Unten in der ansicht seht ihr wie ihr den Phototransistor anschließen könnt.

Nun könnt ihr euch ähnlich wie beim Ultraschallsensor den gemessenen Wert auf eurem seriellen Monitor ausgeben lassen.

Bei unserem Theremin haben wir es bisher geschafft abhängig von dem abstand von unserer hand zum Ulraschallsensor unterschiedliche Töne zu spielen. Den Phottransistor wollen wir jetzt nutzen, um abhängig von der Lichtintensität festzulegen, in welcher Oktave wir uns befinden. 

Hierfür teilen wir unseren Wertebreich den wir messen können in Unterberiche die wir für bestimmte Oktaven festlegen. Beispielsweise können wir tiefe Töne auf niedrige Spannungen festlegen etc 

Wenn ihr euch einmal die Unterschiede zwischen den gleichen Tönen verschiedener Frequenzen anschaut dann könnt ihr sehen, dass sich die Frequenzen immer verdoppeln, wenn man eine Okatve höher geht. 

<p class="spacing-1">&nbsp;</p>

---


<div class="nav-container">
  <a href="Sensoren1" class="button">Zurück</a>
  <a href="Theremin" class="button">Weiter</a>
</div>

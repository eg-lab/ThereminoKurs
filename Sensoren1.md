## Sensoren 1 - Ultraschallsensor anschließen 🔊

[Zurück zur Kapitelübersicht](Kapiteluebersicht)

Nun wollen wir uns dem Thema Sensoren widmen. Sensoren sind ganz allgemein elektronische Bauteile, die auf irgendeine Art Ihre Umgebung und Änderungen in der Umgebung wahrnehmen und die gewonnen Informationen an den Microcontroller weitergeben können. Ihr habt bereits einen Sensor kennegelernt: den Button. Auch sammelt eine Information über seine Umgebung (*wurde er gerdückt/ nicht gedrückt*) und gibt sie an den Arduino weiter.

Da Auslesen von Sensor-Daten funktionert immer über einen ``read``-Befehl. Dabei gibt es zwei verschiedenen Versionen:

```cpp
analogRead(Pin); // Auslesen von Daten an einem analogen Pin, die gemessenen Werte können ganze Zahlen zwischen 0 und 1023 sein
digitalRead(Pin); // Auslesen von Daten an einem digitalen Pin, die gemessenen Daten sind entweder 0 oder 1
```

**Wir wollen uns nun den Ultraschallsensor genauer anschauen.**

Ein Ultarschallsensor ist ein Sensor, mit dem sich Abstände bestimmen lassen. Er funktioniert wie folgt:



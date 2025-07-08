<link rel="stylesheet" href="assets/css/custom.css?v=2">

<div class="nav-container">
  <a href="Grundlagen5" class="button">Zurück</a>
  <a href="Sensoren1" class="button">Weiter</a>
</div>

## Grundlagen 6 - Eine Melodie spielen

Nun wisst ihr wie man einen Ton spielt und wie man dessen Höhe anpassen kann. Jetzt wollen wir uns kurz anschauen, wie man eine ganze Melodie spielt.

Natürlich könnte man einen Ton spielen, ein Delay einfügen, um festzulegen wie lange dieser gespielt wird und das für jeden Ton den man spielen möchte wiederholen.
Aber hier wollen wir euch ein paar neue Grundkonzepte des Programmierens näherbringen und zwar **Arrays und Schleifen**.

### Arrays

**Arrays** könnt ihr euch vorstellen wie eine **Liste oder Tabelle** an einzelnen **Variablen vom gleichen Datentyp**. Also zum Beispiel einem Integer (ganzer Zahl) oder einem double (Kommazahl). Ihr könnt beim Erstellen dieser Liste **festlegen wie lang** sie sein soll und sie anschließend **mit verschiedenen Werten füllen**.

Aber wie erstellt man ein solches Array. Hier einmal die Syntax:

    int array[10]; // Ein Array mit dem Namen "array" erzeugen, das aus 10 Integern besteht

Anschließend kann man auf die **einzelnen Variablen im Array** mit einem **Index** zugreifen, den man in die **eckigen Klammern [ ]** schreibt. Dabei wird im Prinzip jeder Integer im Array nummeriert, wobei mit 0 für das erste Element begonnen wird.

    array[0] // erster eintrag des arrays
    array[9] // letztes Eintrag des Arrays

Man kann auch die **Werte der Variablen direkt zuweisen**, wenn man das Array erstellt. Die **Länge wird dabei automatisch festgelegt** und die Werte werden in **geschweiften Klammern { }** getrennt mit Kommas angegeben

    int array[] = {1, 2, 3, 4, 5};

Aufgabe: Wie kann man Arrays nutzen, um bei unserer Melodie zu helfen.

### Schleifen

**Schleifen** sind ein grundlegendes Konzept beim Programmieren. Man nutzt sie, wenn man den **gleichen oder einen ähnlichen Code Abschnitt mehrere Male durchführen** möchte. Allgemein gibt es eine Bedingung, die gegeben sein muss damit die Schleife sich weiter wiederholt und ein Codeabschmitt der wiederholt werden soll. Dabei gibt es einige verschiedene Varianten an Schleifen, die sich leicht unterscheiden.

#### While Schleife

Die **While** (= englisch für "während") Schleife führt einen Code Abschnitt **während eine bestimmte Bedingung wahr ist**.

    while (bedingung) {
          //Code
    }

Die **Bedingung** kann dabei zum Beispiel ein **Vergleich von zwei Werten** sein wie zwei Variablen Variable1 > Variable2 oder auch ein booolean. In diesem Fall läuft die Schleife solange der boolean den Wert true hat.


#### For-Schleife

Die **For-Schleife** ist besonders **praktisch wenn man genau weiß wie oft ein Code Abschnitt wiederholt werden muss**. Diese arbeitet auch mit einer Bedingung, der sogenannte **Schleifenkopf**, in dem zuvor nur die Bedingung stand ist aber etwas komplizierter aufgebaut.

    for (Schleifenvariable deklarieren ; Abbruchbedingung ; Anpassen der Schleifenvariable) {
          //Code
    }

Im ersten teil des Schleifenkopfes erstellt man die sogenannte **Schleifenvariable**. Diese könnt ihr euch als **Zähler** vorstellen, der zählt bei dem **wievielten Schleifendurchlauf** wir uns zur Zeit befinden und ist standardmäßig ein Integer mit dem Namen **"i"**, der als 0 festgelegt wird. Als nächstes legt man die **Abbruchbedingung** fest. Diese könnt ihr euch vorstellen wie die Bedingung bei der **While-Schleife**. Sobald die Bedingung nicht mehr wahr ist hört die Schleife auf. Die Bedingung enthält normalerweise die Schleifenvariable und wie oft die Schleife wiederholt werden soll. Man würde also sagen, solange die Schleifenvariable kleiner als ein bestimmter Wert ist, soll die Schleife laufen. Und zuletzt das anpassen der Schleifenvariable. Wenn wie oft unsre Schleife durchläuft davon abängt welchen Wert die Schleifenvariable hat, dann muss sich diese mit der zeit ändern. Also wird hier die Variable standardmäßig immer um eins erhöht. 

Man könnte die for scheife also fantastisch benutzen, um ein Array zu durchlaufen, weil wir die Länge kennen.

Wir haben ein Array mit 5 Werten

int array[] = {1, 2, 3, 4, 5};

Hierbei ist die Abbruchbedingung "i < 5" , sie wiederholt sich also so lange wie i kleiner als 5 ist. Dabei beginnt i bei dem Wert 0, und jedes Mal nachdem der Code in der Schleife einmal durchgelaufen ist, wird i um 1 erhöht. Ihr könnt euch vorstellen, dass jedes mal, wenn die Schleife einmal durchläuft zurück in den Schleifenkopfe gesprungen wird, hier wird dann erneut überprüft, ob die Bedingung noch wahr ist und wenn ja, wird die Schleife wieder ausgeführt. i ist also zu beginn 0, nach dem nächsten durchlauf 1, nach dem nächsten 2 etc.

for (int i = 0; i < 5; i++) {
      printf("array[i])
}

praktischerweise ist i auch eine reguläre Variable und kann innerhalb der Schleife als solche benutzt werden. Da i die werte von 0 bis 4 durchläuft, und ein arry der Länge 5 mit den Zahlen 0 bis 4 nummeriert ist, kann man i perfekt nutzen um auf arrayvariablen zuzugreifen.

diese Schleife würde also alle werte im array durchegehen und ausgeben

fun fact i++ ist die kurzschreibweise für i = i + 1 (yay yay)





Nun könnt ihr vielleicht sehen wie man dieses array und die Schleifen nutzen kann, um eine melodie zu spielen.

man kann ein array mit den Frequenzen der einzelnen Töne, die man spielen möchte in der Reihenfolge, die man möchte erstellen, und es dann mit ener Schleife durchgehen.

und viel praktischer als zehn identische zeilen um verschiedene Noten zu spielen hehe

float melodie[] = {261.63, 293.66, 349.23, 293.66, 392.00, 392.00, 349.23};

for (int i = 0; i < 6; i++) {
        tone(OUTPUT_PIN, melodie[i]);
        delay(1000);
}

<p class="spacing-1">&nbsp;</p>

---

<div class="nav-container">
  <a href="Grundlagen5" class="button">Zurück</a>
  <a href="Sensoren1" class="button">Weiter</a>
</div>

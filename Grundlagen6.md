<link rel="stylesheet" href="assets/css/custom.css?v=2">

<div class="nav-container">
  <a href="Grundlagen5" class="button">Zurück</a>
  <a href="Sensoren1" class="button">Weiter</a>
</div>

## Grundlagen 6 - Eine Melodie spielen

Nun wisst Ihr wie man einen Ton spielt und wie man dessen Höhe anpassen kann. Jetzt wollen wir uns kurz anschauen, wie man mit wenig Code eine ganze Melodie spielt.

Natürlich könnte man einen Ton spielen, ein Delay einfügen, um festzulegen wie lange dieser gespielt wird und das für jeden Ton den man spielen möchte wiederholen.
Aber hier wollen wir Euch ein paar neue Grundkonzepte des Programmierens näherbringen um so etwas einfacher zu machen und zwar **Arrays und Schleifen**.

### Arrays

**Arrays** könnt Ihr euch vorstellen wie eine **Liste oder Tabelle** an einzelnen **Variablen vom gleichen Datentyp**. Also zum Beispiel einem Integer oder einem float. Ihr könnt beim Erstellen dieser Liste **festlegen wie lang** sie sein soll und sie anschließend **mit verschiedenen Werten füllen**.

Aber wie erstellt man ein solches Array. Hier einmal die Syntax:

```cpp
int array[10]; // Ein Array mit dem Namen "array" erzeugen, das aus 10 Integern besteht
```

Anschließend kann man auf die **einzelnen Variablen im Array** mit einem **Index** zugreifen, den man in die **eckigen Klammern [ ]** schreibt. Dabei wird im Prinzip jeder Integer im Array nummeriert, wobei mit 0 für das erste Element begonnen wird. Diesen Kann man nutzen, um einem Integer im Array einen bestimmten Wert zuzuweisen.

```cpp
array[0] // erster Eintrag des Arrays
array[9] // letztes Eintrag eines Arrays der Länge 10

array[0] = 3; //ersten Eintrag als 3 festlegen
```

Man kann auch die **Werte der Variablen direkt zuweisen, wenn man das Array erstellt**. Die **Länge wird dabei automatisch festgelegt** und die Werte werden in **geschweiften Klammern { }** getrennt mit Kommas angegeben

```cpp
int array[] = {1, 2, 3, 4, 5};
```

<div class="aufgabe">
<h3>🛠️ Aufgabe</h3>
<ol>
  <li>Denke darüber nach wie dir Arrays beim Spielen einer Melodie helfen können.</li>
  <li>Was könnte man in dem Array speichern?</li>
</ol>
</div>

### Schleifen

**Schleifen** sind ein grundlegendes Konzept beim Programmieren. Man nutzt sie, wenn man den **gleichen oder einen ähnlichen Code Abschnitt mehrere Male durchführen** möchte. Allgemein gibt es eine Bedingung, die gegeben sein muss damit die Schleife sich weiter wiederholt und ein Codeabschnitt der wiederholt werden soll. Dabei gibt es einige verschiedene Varianten an Schleifen, die sich leicht unterscheiden. Die Bedingung steht in den regulären Klammern ( ). Die man zusammen mit der Angabe um welche Schleifenart es sich handelt den **Schleifenkopf**.



#### While Schleife

Die **While** (= englisch für "während") Schleife führt einen Code Abschnitt solange aus **während eine bestimmte Bedingung wahr ist**.

```cpp
while (Bedingung) {
      //Code der wiederholt wird
}
```

Die **Bedingung** kann dabei zum Beispiel ein **Vergleich von zwei Werten** sein. Beispielsweise die Aussage: Variable1 > Variable2. In diesem Fall läuft die Schleife solange diese Aussage stimmt.

Wichtig ist dabei, dass die Schleife erst abbricht sobald der Code im Schleifenkörper einmal zuende durchgelaufen ist. Ob die Bedingung wahr ist wird nämlich nur geprüft, wenn dieser wieder neu anfangen würde.


#### For-Schleife

Die **For-Schleife** ist besonders **praktisch wenn man genau weiß wie oft ein Code Abschnitt wiederholt werden muss**. Und ist für uns auch hier am hilfreichsten. Sie arbeitet wie die While-Schleife auch mit einer Bedingung. Der **Schleifenkopf**, in dem zuvor nur die Bedingung stand ist aber etwas komplizierter aufgebaut.

```cpp
for (Schleifenvariable deklarieren ; Abbruchbedingung ; Anpassen der Schleifenvariable) {
      //Code der wiederholt wird
}
```

Im ersten Teil des Schleifenkopfes erstellt man die sogenannte **Schleifenvariable**. Diese könnt Ihr euch als **Zähler** vorstellen, der zählt bei dem **wievielten Schleifendurchlauf** wir uns zur Zeit befinden und ist standardmäßig ein Integer mit dem Namen **"i"**, dem zu beginn der Wert 0 zugewiesen wird. 
Als nächstes legt man die **Abbruchbedingung** fest. Diese könnt Ihr euch vorstellen wie die Bedingung bei der **While-Schleife**. Sobald die Bedingung nicht mehr wahr ist und der Schleifenkörper zuende durchlaufen wurde bricht die Schleife ab. Die Bedingung enthält standardmäßig die **Schleifenvariable** und **wie oft die Schleife wiederholt werden soll**. Man würde also zum Beispiel sagen, solange die Schleifenvariable kleiner als ein bestimmter Wert ist, soll die Schleife laufen.
Zuletzt wird im Schleifenkopf auch das Anpassen der Schleifenvariable festgelegt. Wenn wie oft die Schleife durchläuft davon abängt welchen Wert die Schleifenvariable hat, dann muss sich diese mit der Zeit ändern. Hierbei wird die Variable standardmäßig immer um eins erhöht. 

Man kann **For-Schleifen** sehr gut nutzen, um Arrays zu durchlaufen.

Beispiel:
Wir haben ein Array mit 5 Werten

```cpp
int array[] = {1, 2, 3, 4, 5};
```

Hierbei ist die Abbruchbedingung "i < 5" , sie wiederholt sich also so lange wie i kleiner als 5 ist. Dabei beginnt i bei dem Wert 0, und jedes Mal nachdem der Code in der Schleife einmal durchgelaufen ist, wird i um 1 erhöht. Ihr könnt euch vorstellen, dass jedes mal, wenn die Schleife einmal durchläuft zurück in den Schleifenkopfe gesprungen wird, hier wird dann erneut überprüft, ob die Bedingung noch wahr ist und wenn ja, wird die Schleife wieder ausgeführt. i ist also zu Beginn 0, nach dem nächsten Durchlauf 1, nach dem nächsten 2 etc.

```cpp
for (int i = 0; i < 5; i++) {
      Serial.println("%d", array[i]);
}
```

Praktischerweise ist i auch eine reguläre Variable und kann innerhalb der Schleife als solche benutzt werden. Da i die Werte von 0 bis 4 durchläuft, und ein Array der Länge 5 mit den Zahlen 0 bis 4 nummeriert ist, kann man i perfekt nutzen um auf die Variablen im Array zuzugreifen.

Diese Schleife würde also alle Werte im Array durchgehen und ausgeben.


> 💡 **Hinweis:**
> - *Hier seht Ihr im Schleifenkopf dort, wo die Schleifenvariable erhöht werden soll den Ausdruck "i++". Dies ist lediglich eine verkürzte Schreibweise für "i = i  + 1" und erhöht i um 1.*


<div class="aufgabe">
<h3>🛠️ Aufgabe</h3>
<ol>
  <li>Denke darüber nach, wie man eine Schleife jetzt nutzen könnte, um eine zusammenhängende Melodie zu spielen.</li>
  <li>Bereite eine Melodie mithilfe eines Arrays vor und nutze eine Schleife, um sie zu spielen</li>
</ol>
</div>

<p class="spacing-1">&nbsp;</p>

---

<div class="nav-container">
  <a href="Grundlagen5" class="button">Zurück</a>
  <a href="Sensoren1" class="button">Weiter</a>
</div>

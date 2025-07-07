<link rel="stylesheet" href="assets/css/custom.css?v=2">

<div class="nav-container">
  <a href="index" class="button">Zurück</a>
  <a href="Grundlagen2" class="button">Weiter</a>
</div>

<p class="spacing-1">&nbsp;</p>

# Grundlagen 1 - Den Arduino kennenlernen

Wie ihr wisst, wollen wir heute mit Arduinos arbeiten. Aber was ist das überhaupt? Ein Arduino ist ein Mikrocontroller, also im Prinzip ein kleiner Computer, der auf ein bestimmte Aufgabe spezialisiert ist. Man kann sie selber programmieren, damit sie genau das machen was Du möchtest.

Aber wie arbeitet man mit einem Arduino. Am wichtigsten für die Kommunikation mit dem Arduino sind die verschiedenen Anschlüsse oder Pins.
Dabei gibt es verschiedene Arten. Für uns wichtig sind erstmal nur die Pins für die Stromversorgung, sowie digitale und analoge Pins.

Bei den Pins für die Stromversorgung handelt es sich im Prinzip um Plus und Minuspole an denen der Arduino eine Betriebsspannung erzeugen kann, wenn er an einen Computer oder Laptop angeschlossen ist. Dadurch brauchen wir also keine äußere Spannungsquelle wenn wir beispielsweise eine LED anschließen wollen. Ihr könnt einfach den + und --Pol des Arduinos dafür benutzen. 

Weiterhin gibt es die digitalen und analogen Pins. Das sind im Prinzip alles Pins die wir benutzen können um Signale von außen an den Arduino weiterzuleiten oder Signale vom Arduino selbst an andere Bauteile auszusenden. Beim Arduino sind diese Signale einfach verschieden hohe Spannungen, die vom Arduino und anderen Beispielen entsprechend interpretiert werden.


Man kann die Pins also als Input für den Arduino oder Output aus dem Arduino heraus benutzen. Ein Beispiel wäre ein Temperatursensor. Dieser misst die Temperatur und gibt ein Signal zurück, das die Informationen für die Temperatur enthält. Dieses Signal kann dan an einen Input Pin des Arduinos weitergeleitet werden. Dieser erhält dann die Infos von dem Temperatursensor und kann damit arbeiten. Von den Output Pins aus kann der Arduino dann selbst Signale an ein anderes Bauteil weiterleiten. Zum Beispiel kann er einem Display signalisieren, was dieser anzeigen soll.

Aber was ist nun der Unterschied zwischen analogen und digitalen Pins? Der liegt einfach darin, was für Signale die Pins empfangen und weiterleiten können. Digitale Pins senden nur digitale Signale. Das heißt, dass diese Signale eigentlich nur zwei Zustände haben können: AN und AUS. Dabei entspricht AN einer hohen Spannung an diesem Pin und AUS einer niedrigen Spannung.

Analoge Pins können nur analoge Signale empfangen oder weiterleiten. Analoge Signale sind nicht an oder aus (bzw eine hohe oder eine niedrige spannnug) sondern können aus einer ganzen Spanne zwischen zwei Werten Signale senden....
(ANALOG BESSER ERKLÄREN)

Wie schon erwähnt können wir digitale und analoge Pins sowohl als Input oder als Output benutzen. Wofür ein Pin genau benutzt wird ist erstmal nicht klar festgelegt, das können wir aber durch Programmieren der Arduinos festlegen.

Dafür schauen wir uns jetzt mal an wie wir das machen. Genauer schauen wir uns jetzt die Arduino IDE an. IDE ist kurz für Integrated Development Enviroment und ist einfach nur ein Programm in dem wir unseren Code schreiben können und das uns hilft diesen dann auf die Arduinos hochzuladen. 

Wenn ihr die Arduino IDE öffnet seht ihr direkt einen sogenannten neuen Sketch. Das ist einfach eine vorbereitete fast leere Datei in den ihr euren Code schreiben werdet

Wenn du einen neuen Sketch öffnest siehst du direkt einige Zeilen Code. Dies ist die allgemeine Struktur für einen Arduino Sketch. Man schriebt den Code zwar in der Programmiersprache C++, aber für Arduinos und so zimelich jeden Mikrocontroller kann man sich an diese Struktur halten. 

  int setup() {
    //smthg
  }

  int loop() {
    //smthg else
  }

Was du hier siehst sind zwei Funktionen, Codeblöcke die einen Namen haben und von einem Programm aufgerufen werden können. In den geschweifeten Klammern {} steht was diese Funktionen tun, also der Code der abgearbeitet wird, wenn sie aufgerufen werden. 


Die setup Funktion wird automatisch einmal zu Beginn aufgerufen, also direkt sobald du deinen Code auf den Arduino geladen hast. Hier kannst du also einmalig bestimte werte im Vornherein festlegen. Festlegen ob deine Pins als in oder output funktineieren etc. Diese Funktion wird nur einmal aufgerufen.

die loop Funktion ist, so wie es der name sagt eine Schleife, der Code den man in diese Funktion schreibt wird also immer wieder (endlos tatsächlich. bis es keinen strom mehr gibt) ausgeführt. Sie stellt den Ahuptteil deines Programms dar. Hier drin kannst du zum Beispiel wenn du einen Temperatursensor an deinen Arduino anschließen willst, bei jeder der Widerholungen dre Schleife einmal den Wert lesen, den der Sensor dir gibt und ihn dir anzeigen lassen.

Für unser Projekt wirst du dich eigentlich nur in diesen beiden Funktionen wiederfinden. man kann weitere Schrieben, das ist aber für unsere Zwecke nicht notwendig.


Bevor wir irgendetwas auf dn arduino hochladen können müssen wir diesen aber zuerst einmal mit der IDE verbinden, damit sie weiß um was für einen Mikrocontroller es sich handelt etc. Dafür könnt ihr oben auf der dunkelgrünen Leiste einmal auf das Auswahlfeld neben dem USB Zeichen (dieser blöde kleine Baum) klicken und dann bei Boards auf nach Arduino Uno suchen und diesen auswählen. (Ja wir arbeiten heut emit einem Arduino Uno).

Neben dieser Auswahlleiste sind auch drei andere Knöpfe. Der Haken kompiliert euren Code einmal. Das heißt, dass er ihn für den Computer und den Arduino verständlich machen. Und checkt außerdem, ob ihr irgendwelche syntaktischen Fehler in eurem Code gemacht habt. Etwa ein semikolon vergessen oder sowas. Das passiert sehr häufig. Ob der Code auch so funktioniert wie ihr möchtet kann dabei nur begrenzt getestet werden.
Der Pfeil nach rechts läd euer programm auf den Arduino (hierbei wird auch nochmal automatisch kompiliert. Das ist also der für unsere Zwecke wichtigste Knopf) dieser führt dann einmal den setup code durch und danach immer wieder die loop Funktion.

Der Letzte Knopf mit dem Dreieck und dem kleinen Käfer ist für Debugging. Also um deinen Code auf Fehler zu testen. Damit werden wir uns hier aber noch nicht auseiandersetzen weil wir nicht so komplizierte Dinge machen 

Und das sollte uns fürs erste einmal reichen. Ihr könnt euren Code über File oben links natürlich auch speichern etc.

Aber wie genau kann man jetzt mit dem Arduino arbeiten. Im allgemeinen kann man Dinge an den Arduino an seinen Pins anschließen. Die Pins vom arduino sind im Prinzip kleine Stecker. 

DAvon sind manche INPUT Pins, über diese kannst du dem Arduino also Informationen geben. Wie zum Beispiel die Informationen die ein Temperatursensor aufnimmt.

Andere sind die OUTPUT Pins diese sind da, um vom Arduino signale an andere Komponenten zu senden. also beispielsweis eine Lampe, die wir anmachen




Nun zu ein paar ganz grudlegenden Funktionen in für Arduino

Wir haben ja schon Pins besprochen und dass man diese als Input oder Output festlegen muss. Das kann man jetzt in der IDE machen! Nämlich kennt ihr jetzt ja schon setup und loop. Ob ein Pin Input oder Output ist legt man nur einmal fest. Das kommt also in die setupt Funktion. Zum Festlegen von Input und output gitb es bereits eine vorgefertigte Funktion. Dieser gibt man als Argumente einfach die Nummer von dem Pin den man benutzen möchte un ob es INPUT der OUTPUT ist. Argumente sind einfach kleine variaben mit informationen , die die Funktion beutzen soll

Also Beispielsweise so:

pinMode(10, INPUT);

Und wie kann man über diesen Pin jetzt Signale empfangen oder senden? Dafür gibt es weitere Vorgefertigte Funktionen. Nämlich die Read und Write Funktionen. Dafbei gibt es eine für jeweiks digitale Pins und analoge Pins.

DigitalRead kann für einen digitalen Input Pin aufgerufen werden und erkennt ob das signal, das dieser sendet gerade An oder AUS ist. und speichert es für dich in einer variablen mit der du dann arbeiten kannst.

DigitalWrite kann für einendigitalen  OUTPUT Pin aufgerufen werden und legt fest, ob an diesem Pin jetzt das Signal AUS oder AN gesendet werden soll

Code beispiele


AnalogRead ist das äquivalent von DigitalRead aber für analoge INPUT Pins, mit Analog Read kann gelesen werden was gerade für eine Spannung an dem analogen INPUT Pin anliegt und speichert sie wieder in einer Variablen. Dabei ist wichtig, dass Analog Read einen Wert zwischen 0 und 1023 ausgibt. Das ist von einem Spannungswert zwischen 0v und Betriebsspanung auf diesen Bereich von 1024 werten hochskaliert (das irgendwie simpel erklärt bekommen) 

AnalogWrite ist das analoge Äquivalent für digitalWrite und hier kannst du sow wie du einen Wert zwischen 0 und 1023 von AnalogRead erhältst auch einen Wert zwischen 0 und 1023 auf eine analogen Output Pin anlegen. Dies legt dnn fest was für eine Spanung zwischen 0 und Betriebsspannung an diesem anliegen soll.



Wie schon erwähnt macht man aber den Hauotteil im Loop
Hier ist aber manchmal das Problem, dass dieser immer wieder aber auch sehr schnell läuft. Manchmal kann man also gar nicht sehen wenn man etwas über z.B digitalRead erst An und dann wieder ausmachen möchte. Dafür kann man das Programm auch zwingen kurz zu warten

Dafür gibt es die delay Funktion. Hier kann man in den Klamern einfach angeben wie lange das Programm warten soll, bis es weiterläuft. Die zeit gibt man dabei in Millisiekunf´den an. eine sekunde wäre also 1000 Milliskenun´den


Kommentare macht man mit //





Das müsste alles sein für das Thema, fas muss aber noch alles angepasst werden.

<p class="spacing-1">&nbsp;</p>

---

<div class="nav-container">
  <a href="index" class="button">Zurück</a>
  <a href="Grundlagen2" class="button">Weiter</a>
</div>

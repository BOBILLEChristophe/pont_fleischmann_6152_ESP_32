# Automatisation d'un pont tournant FLEISCHMANN 6152 (HO) en WiFi avec un ESP32

<img src="https://github.com/BOBILLEChristophe/pont_fleischmann_6152_ESP_32/blob/master/pont_tournant_fleischmann_v_5_bb.jpg">

Le pont se pilote à partir d'un navigateur. L'application web est une simple page HTML qui communique en websockets et qui est copiée dans la SPIFFS de l'ESP32.

J'ai placé sous le pont un module de prototypage ESP32 et une carte moteur Pololu A4990.

Le programme sur l'ESP32 est écrit en C/C++ au travers de l'IDE Arduino.

Le programme cherche à chaque fois le chemin le plus court pour se rendre d'une porte à une autre. Il gère le retournement, c'est à dire qu'une locomotive entrée en avant sur une voie peut sortir en arrière sur une autre. Dans ce cas, la polarité des rails est automatiquement inversée.

Regarder sur Youtube : https://youtu.be/Rx7vND9eew4

<iframe width="560" height="315" src="https://www.youtube.com/embed/Rx7vND9eew4?si=6eOO1mFoVu0btc43" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share" referrerpolicy="strict-origin-when-cross-origin" allowfullscreen></iframe>

# Mon Projet

Voici une démonstration vidéo de l'application :

[![Voir la démonstration](https://img.youtube.com/vi/dQw4w9WgXcQ/maxresdefault.jpg)]([https://www.youtube.com/embed/Rx7vND9eew4?si=6eOO1mFoVu0btc43](https://youtu.be/Rx7vND9eew4?si=pZObWtT9347Y4y9e))

Cliquez sur l'image pour voir la vidéo ou [regardez-la directement sur YouTube](https://www.youtube.com/watch?v=dQw4w9WgXcQ).


<img src="_dsc8407-0eacd.jpg" alt="Pont">


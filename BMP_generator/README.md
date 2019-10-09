
Piccolo progetto:



creare un programma 
che chiede in input un numero n  (tra 0 e 64) 


che genera file BMP ( versione 3 ) monocromatica
di 64x64 pixel 

con le prime n righe (superiori ) di pixel neri 
le rimanenti bianche ......



SOLUZIONE:
uso della libreria magick++ https://imagemagick.org/Magick++/
che permette di risolvere il problema senza tanto struggersi con lo studio dei formati...
(se tanto bisogna far contento il prof o il boss o la committenza..)

vedere il sorgente soluzione.cpp


Installazione delle librerie:
sotto linux:
 - debian non sembra funzionante apt .... 
  seguire qui :https://imagemagick.org/Magick++/Install.html
  ms in più lanciare il comando 

ldconfig /usr/local/lib


Windows:
TO DO:

ISTRUZIONI PER COMPILARE IL PROGRAMMA:

usare come comandi per la compilazione:
g++ -Wall -std=c++11 `Magick++-config --cppflags --cxxflags --ldflags --libs` -o "%e" "%f" 

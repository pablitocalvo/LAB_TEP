
#### KEZIONE 7 novembre 2019

java da linea di comando in ambiente linux... 

differenza tra linguaggi interpretati e compilati e il caso java 

https://it.wikipedia.org/wiki/Java_(linguaggio_di_programmazione)

demo : hello world in c/c++ eseguibile e sorgente, helo world in python , hello world in java...

compiti per casa: 

portare una pen drive con tini-x e/o altro sitema linux live con java installato ed un ambiente di sviluppo (alle brutte la  linea di comando !)

--------------------------
#### lezione 1)

esempio di un tcp client ed un tcp server.

Serve per analizzare  lo stabilire della connessione TCP con wireshark e relativa chiusura da parte del client

[TCPClient.java](TCPClient.java)

[TCPServer.java](TCPServer.java)

esercizio: lanciare il server e il client .. analizzare con wireshark

esercizio: inserire una pausa all'interno del client ( tipo "premi invio per continuare..") prima di chiudere la connessione
e lanciare più istanze dal client, analizzare con wireshark;

esercizio: nel server trovare il modo di stampare l'IP del client e la sua porta .....
(sol.  getInetaddress(), getPort()

--------------------------------
#### lezione 2)

ECHO CLIENT-SERVER ...

Costruzione di un server che reinvia la stringa ricevuta dal client al client stesso..

Gli esempi della lezione precedente sono serviti per didattica ...
Il client manda dei _"raw byte"_  
stavolta conviene _"wrappare"_ outputStream con un printWriter e l'inputStream con un BufferedReader ..( o con la classe scanner se preferite)

studiare :

[TCP_ECHO_Client.java](TCP_ECHO_Client.java)

[TCP_ECHO_Server.java](TCP_ECHO_Server.java)


esercizio: lanciare i programmi , analisi wireshark
esercizio: lanciare un server e più client .... che succede?  analisi wireshark 
esercizio: proporre soluzione ai problemi rilevati ....


#### lezione 3)

esmpio di server modificato per gestire più client contemporaneamente ..

[TCP_ECHO_Server_T.java](TCP_ECHO_Server_T.java)



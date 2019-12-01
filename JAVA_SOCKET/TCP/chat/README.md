#### progetto : piccola chat in java ...


creare una chat centralizzata per lo scambnio di messaggi tra utenti che si connettono ad un server.

FASE 1)

Un utente da line di comando lancia il comando :

```
user@tinix:~$  java CHAT_client <indirizzo del server>  
```

il server accettata la connessione invia al client l'elenco dei nickname connessi e invita a partecipare scegliendo un nickname.
Tale nickname (di max 10 caratteri) non deve iniziare con il carattere "@".

```
server says : Ciao dal server!!!
server says : Sono presenti in chat :
server says : giggio
server says : pino
server says : pluto

server says : scegli un Nick-Name: 
giggio
server says : giggio è già in chat, scegli un nome diverso ..
@pablito
server says : il nick name non può iniziare con @ , scegli un nome diverso 
pablito
server says : ok pablito ! benvebnuto in chat

pablito> @bye
server says : ciao 


user@tinix:~$  
```







FASE 2)

prevedere l'invio dei messaggi da parte di un utente ad un altro mediante l'invio della stringa:


https://stackoverflow.com/questions/3605476/sharing-an-object-between-two-threads-and-main-program

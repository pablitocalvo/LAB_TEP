import java.io.*;
import java.net.*;


class TCP_ECHO_Client 
{

 public static void main(String argv[]) throws Exception
 {
 
  System.out.println("Hello I'm Client");
  
  Socket clientSocket = new Socket("localhost",6789);
  // con la creazione del socket vengono creati due flussi "stream"
  // uno in output verso il server
  // uno in input dal server 
  
  
  //il flusso in output lo wrappiamo in un printWriter 
  //cosi' scrivere al server diventa facile come stampare a video !!
  PrintWriter out =
        new PrintWriter(clientSocket.getOutputStream(), true);
  
  
  //il flusso in input lo wrappiamo in un bufferedReader
  // cosi' leggere dal server diventa facile come leggere dallo standard 
  // input ....
  BufferedReader in =
        new BufferedReader(
            new InputStreamReader(clientSocket.getInputStream()));
  
  BufferedReader stdIn =
        new BufferedReader(
            new InputStreamReader(System.in)) ;
      
   
   // ciclo finchè l'utente non inserisce una riga vuota ..
   String userInput,messaggioDalServer;
   
   while ((userInput = stdIn.readLine()).length()>0 ) //??? 
   {  // la invio al sever .. facile come una stampa...
      out.println(userInput);
      
      messaggioDalServer=in.readLine();
      System.out.println("echo: " + messaggioDalServer);
   }     
   
   // chiusura socket 
   clientSocket.close();

 }
}

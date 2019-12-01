
import java.io.*;
import java.net.*;

class CHAT_Client 
{
	
	

 public static void main(String argv[]) throws Exception
 {
 
 
   if ( argv.length == 0 ) 
    { System.out.println("inserire indirizzo del server");
       return;
    }
    
//TO DO : inserire controlli sull'argomento ..
 
   String indirizzo_server= argv[0];
 
//System.out.println("Hello I'm Client");
  
  Socket mio_socket = new Socket(indirizzo_server, 6789);
  // con la creazione del socket vengono creati due flussi "stream"
  // uno in output verso il server
  // uno in input dal server 
  
  
  //il flusso in output lo wrappiamo in un printWriter 
  //cosi' scrivere al server diventa facile come stampare a video !!
  PrintWriter out_to_the_server =
        new PrintWriter(mio_socket.getOutputStream(), true);
  
  
  //il flusso in input lo wrappiamo in un bufferedReader
  // cosi' leggere dal server diventa facile come leggere dallo standard 
  // input ....
  BufferedReader in_from_server =
        new BufferedReader(
            new InputStreamReader(mio_socket.getInputStream()));
  
  BufferedReader std_In =
        new BufferedReader(
            new InputStreamReader(System.in)) ;
      

   String messaggio_dal_server;

   while ( ! (messaggio_dal_server=in_from_server.readLine()).equals("EOT")) //legge tutte le linee di benvenuto
   {  
	   System.out.println("server says : " + messaggio_dal_server);
   }     

  
    String user_input;
	do {
		
		System.out.println("client > ");
		user_input = std_In.readLine();
		//TODO : inserire controlli sulla "qualità del nick name..."
		System.out.println(user_input);
		out_to_the_server.println(user_input);
		messaggio_dal_server=in_from_server.readLine();

		}
	while ( ! messaggio_dal_server.equals("OK") );

   // TO DO COPNtinuare ......
   mio_socket.close();

 }
}

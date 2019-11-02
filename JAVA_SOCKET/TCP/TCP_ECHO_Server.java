import java.io.*;
import java.net.*;

class TCP_ECHO_Server 
{
 public static void main(String argv[]) throws Exception 
 {
   System.out.println("Hello I'm SERVER");

   ServerSocket myServerSocket = new ServerSocket(6789);

   while (true)  // un server che si rispetti sta sempre in piedi!!
   {
    
     Socket clientSocket = myServerSocket.accept();     
     System.out.println("I have a connection !!");
  
     PrintWriter out =
         new PrintWriter(clientSocket.getOutputStream(), true);                   
  
     BufferedReader in = new BufferedReader(
                new InputStreamReader(clientSocket.getInputStream()));
  
     String inputLine;
     while ((inputLine = in.readLine()) != null) 
     {    
         System.out.println(" ho ricevuto dal client "+ inputLine);
         // la reinvio al client
         out.println(inputLine);
     }
   }
 }
}

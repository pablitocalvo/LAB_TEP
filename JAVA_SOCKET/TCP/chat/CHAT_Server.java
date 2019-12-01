
import java.io.*;
import java.net.*;
import mio_package.*;


public class CHAT_Server 
{
 
  
 public static void main(String argv[]) throws Exception 
 {
   System.out.println("Hello I'm SERVER");

   ServerSocket myServerSocket = new ServerSocket(6789);

   while (true)  // un server che si rispetti sta sempre in piedi!!
   {
    
     Socket clientSocket = myServerSocket.accept();     
     System.out.println("I have a connection !!");
     
     new Chat_Thread(clientSocket).start(); 
  
   }
 }
}

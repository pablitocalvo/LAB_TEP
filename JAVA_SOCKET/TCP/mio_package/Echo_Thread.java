package mio_package;

import java.net.Socket;
import java.io.*;

public class Echo_Thread  extends Thread  
{
	private Socket clientSocket ;
	
	

	public Echo_Thread(Socket s) 
	{
		this.clientSocket = s;
		
	}

	public void run() 
	{
	 try {
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
	
		clientSocket.close();
		
		 } catch (IOException ex) {
            System.out.println("Server exception: " + ex.getMessage());
            ex.printStackTrace();
        }
	
	}
}

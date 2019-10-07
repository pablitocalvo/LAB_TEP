/*
 apre un file e scrive dentro alcuni byte ....
 
 */

#include <iostream>
#include <fstream>
using namespace std;


int main()
{
	
	// usa una variabnile che rappresenta il file ...
	ofstream mio_file("example.bin" );

  if (mio_file.is_open())
  {
    
    char solo_un_byte=255;  // valore esadecimale 0xFF
	
    mio_file.write( & solo_un_byte , 1 );
        
    cout << "ho scritto un byte sul file"<<endl;
    system("PAUSE");
    
    return 0; 
    
    
    mio_file.write(  & solo_un_byte , 1 );
    
    cout << "ne ho scritto un altro "<<endl;
    system("PAUSE");
  
  
	char  pezzo_di_memoria [] = { 0,1,2,3,4,5,6,7,8,9,0x0A, 0x0B, 0x0C,0x0D,0x0E,0x0F};
	
	mio_file.write(  pezzo_di_memoria , sizeof(pezzo_di_memoria));
    
    cout << "ho scritto un intero array di byte"<<endl;
    system("PAUSE");
  
  
  
  
	unsigned int due_byte = 0xAABB ; 
	mio_file.write( (char*) &due_byte , 2 );
    
    cout << "ho scritto sul file un intero (lungo due byte) "<<endl;
	
  
  

  }
  else 
	{ 	cout << "Unable to open file";
		return 1;
	}
		
  return 0;
}

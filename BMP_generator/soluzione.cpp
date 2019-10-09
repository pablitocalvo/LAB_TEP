#include <Magick++.h> 
#include <iostream> 
using namespace std; 
using namespace Magick; 
int main(int argc,char **argv) 
{ 
  InitializeMagick(*argv);
  
  Image immagine("64x64", "white");
  immagine.depth(1);
  
  for (int r=0; r<32; r++)
  {
	  //colora la riga t-esima  di nero
		for (int c=0; c<64; c++)
		{	
			immagine.pixelColor(c,r,Color("black"));
			
		}
  }
  ;
  
  immagine.magick("bmp");
  immagine.write("output");
}

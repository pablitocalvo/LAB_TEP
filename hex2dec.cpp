// Example program
#include <iostream>
using namespace std;
#include <string>

int main()
{
 
  
  int num_in_dec ;
  
  string num_in_hex ;
  cout << "Hex = ";
  cin >> num_in_hex;
 
  
  
  num_in_dec = 0;
  
  int potenza_di_16 = 1 ;
  
  for ( int i = num_in_hex.length() -1 ;   i >=0 ;  i-- )
  {
      int cifra ;
      .........
//	      metti la parte mancante
	      
	      
      
      num_in_dec = num_in_dec + potenza_di_16 * cifra;
      
      potenza_di_16 = potenza_di_16 * 16 ;
      
   }   
      cout << "Dec = "<< num_in_dec << endl;
 
      return 0;
      
   
   
}

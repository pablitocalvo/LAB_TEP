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
      switch(num_in_hex.at(i)) {
       case '0' :
           cifra =0;
           break;
       case '1' :
           cifra =1;
           break;
       case '2' :
           cifra =2;
           break;
       case '3' :
           cifra =3;
           break;
       case '4' :
           cifra =4;
           break;
       case '5' :
           cifra =5;
           break;
       case '6' :
           cifra =6;
           break;
       case '7' :
           cifra =7;
           break;
       case '8' :
           cifra =8;
           break;
       case '9' :
           cifra =9;
           break;
       case 'A' :
       case 'a' :
           cifra =10;
           break;
       case 'B' :
       case 'b' :
           cifra =11;
           break;
       case 'C' :
       case 'c' :
           cifra =12;
           break;
       case 'D' :
       case 'd' :
           cifra =13;
           break;
       case 'E' :
       case 'e' :
           cifra =14;
           break;
       case 'F' :
       case 'f' :
           cifra =15;
           break;
       default :
        cout << "Inserito caratter non valido " << endl;
        return 1;
        
   }
	 
      
      num_in_dec = num_in_dec + potenza_di_16 * cifra;
      
      potenza_di_16 = potenza_di_16 * 16 ;
      
   }   
      cout << "Dec = "<< num_in_dec << endl;
 
      return 0;
      
   
   
}

#include <iostream>

using namespace std ;

int main ()
{
	string  numeroBinario ;

	cout << "inserisci un numero in binario" << endl;
	cin >> numeroBinario ;
	
	int nCifreBinarie = numeroBinario.length();
	int pot=1;
	int numeroInDecimale = 0;
	
	for ( 	int i = (nCifreBinarie -1 ) ; 
			i>=0 ; 
			i-- 
		)
	{	
		int c;
		if (numeroBinario.at(i)=='0')
			  c = 0;
		else  if (numeroBinario.at(i)=='1')
				c = 1;
			  else 	{	cout << "machestai a fa !"<<endl;
			  			return 1;
			  		}			
		
		numeroInDecimale = numeroInDecimale + c * pot ;
		
		pot=pot*2;
	}

	cout <<numeroInDecimale;
	return 0;

}

#include <iostream>
using namespace std;

int main() {


	while ( true )
	{	
		cout << "ora alloco 1 MB di ram" << endl;
		
		//TODO: allocare un array di un megabyte preciso;
		
		cout << "verifica con il gestore processi quanta memoria occupa questo programma" << endl;
		system("PAUSE"); 

	};

	return 0;
}


/* COMMENTI:
 * 
 *  system("PAUSE") cui siete abituati fa schifo !!
 *  un errata e insana abitudine derivante da metodologie didattiche frettolose:
 * 
 *  basta googlare "why system("pause") is wrong?" per il perchè.
 * 
 * 
 *  meglio sostituirlo con ?????
 * 	
 */ 

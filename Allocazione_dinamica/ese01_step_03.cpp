#include <iostream>
using namespace std;

char * vett ;

int main() {


	while ( true )
	{	
		cout << "ora alloco 1 MB di ram" << endl;
		
		vett = new char[1024*1024]; //alloco
		
		for (int i=0 ; i<1024*1024 ;i++) vett[i]=0; //uso la memoria 
		
		cout << "verifica con il gestore processi quanta memoria occupa questo programma" << endl;
		
		cout << "premi enter per continuare"<<endl<<endl;
		cin.get();
		
		 

	};

	return 0;
}


/* COMMENTI:
 * 
 * non era sufficiente allocare la mememoria con new ...
 * ma ho dovuta usarla effettivamente perchè?
 * 
 *COME SI CHIAMA L'ERRORE DI PROGETTAZIONE CHE AFFLIGGE 
 * QUESTO PROGRAMMA ?
 * 
 * NON VEDI ERRORI ? 
 * prova a tener pigiato enter a lungo poi prova a usare windows...
 */ 

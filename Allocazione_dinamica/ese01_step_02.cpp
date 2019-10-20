#include <iostream>
using namespace std;

int main() {


	while ( true )
	{	
		cout << "ora alloco 1 MB di ram" << endl;
		
		//TODO: allocare un array di un megabyte preciso;
		
		cout << "verifica con il gestore processi quanta memoria occupa questo programma" << endl;
		//system("PAUSE");
		cout << "premi enter per continuare"<<endl<<endl;
		cin.get();
		
		 

	};

	return 0;
}


/* COMMENTI:
 * 
 *		system("PAUSE") 
 * 
 *  vs 
 *		cout << "premi un tasto per continuare"<<endl<<endl;
		cin.get();
 * 
 * certo con la prima si scrive di meno .... mahh
 * 
 * andiamo avanti e sviluppiamo la parte per 
 * allocare 1 MByte 
 * mai visto  char * vett = new char[1024*1024] ??
 */ 

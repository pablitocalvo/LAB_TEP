

#include <iostream>
using namespace std;

// prima di mandare in esecuzione il programma 
// pronosticare il risultato (cosa stampa?)


int main(int argc, char **argv)
{
	int a [3];
	int i;
	
//parte 1
	a[0]=2 ; a[1]=4 ; a[2]=6;
	cout << a[0]<< " , " << a[1] << " , " << a[2] << endl ;

	i=1;
	a[i++]=7;
	
	cout << a[0]<< " , " << a[1] << " , " << a[2] << endl ;
	cout <<"i =" << i <<endl;
	
//parte 2	
	
	a[0]=2 ; a[1]=4 ; a[2]=6;
	cout << a[0]<< " , " << a[1] << " , " << a[2] << endl ;
	
	
	i=1;
	
	a[i]=7;
	i=i+1;
	
	cout << a[0]<< " , " << a[1] << " , " << a[2] << endl ;
	cout <<"i =" << i <<endl;
	
	return 0;
}

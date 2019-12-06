#include <unistd.h>
#include <iostream>
using namespace std;
int main()
{
int pid;
cout<<"ciao "<<endl;
pid=fork();
cout<<"dopo la fork"<<endl;
pid=fork();
cout<<"dopo la fork"<<endl;



}

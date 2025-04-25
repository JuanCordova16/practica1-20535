#include <iostream>

using namespace std;
void restar ();
void restar (){
int n1, n2,n3;
cout<< "Ingrese el numero 1 que va a restar"<<endl;
cin>>n1;
cout<< "Ingrese el numero 2 que va a restar"<<endl;
cin>>n2;
n3=n1-n2;
cout<<"El resultado es: "<< n3;
}
int main()
{
    restar();
    return 0;
}

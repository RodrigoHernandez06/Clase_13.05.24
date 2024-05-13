//factorial

#include <iostream>
using namespace std;

int main(){

    int n=0, i=0, fact=1;
    cout<<"Ingrese un numero entero: ";
    cin>>n;

    for (i=1; i<=n; i++){
    fact = fact*i;
    }
    cout<<"El factorial de su numero es: "<<fact;
    return 0;
}
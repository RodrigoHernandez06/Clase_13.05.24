//Salario
#include <iostream>
using namespace std;

int main(){
    int h=0, he=0, phe=0; //horas, horas extras y pago horas extra
    float neto=0, imp=0, final=0; //salario neto, impuestos y salario final
    string nombre; //nombre del empleado
    
    cout<<"Ingrese el nombre del trabajador: ";
    cin>>nombre;
    
    cout<<"Ingrese las horas trabajadas: ";
    cin>>h;
    
    //Salario neto
     if(h<=160){
         neto=h*10;
         cout<<"El salario neto de "<<nombre<<" es: "<<neto<<"\n";
     }
     else if(h>160){
         he=h-160;
         phe=he*15;
         neto=(160*10)+phe;
         cout<<"El salario neto de "<<nombre<<" es: "<<neto<<" y el total de horas extras fueron: "<<he<<"\n";
     }
    
    //Descuento de impuestos
    if(neto<=2000){
        cout<<"El salario de "<<nombre<<" esta libre de impuestos.";
    }
    
    else if(neto>2000 && neto<=2200){
        final=neto-(neto*0.20);
        cout<<"El salario de "<<nombre<<" despues de impuestos es: "<<final;
    }
    
    else if(neto>2201){
        final=neto-(neto*0.30);
        cout<<"El salario de "<<nombre<<" despues de impuestos es: "<<final;
    }
    return 0;
}
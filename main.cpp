//P9 Escriba un programa que pida un número entero N e imprima el resultado de la suma de todos sus dígitos elevados a sí mismos.
//Ej: si se ingresa 1223 el resultado sería 1^1 + 2^2 + 2^2 + 3^3 = 36 hasta el numero 999998 por que solo trabajo con variables enteros
// y te dice cual es el mayor y cuantas veces aparece
#include <iostream>

using namespace std;

int main()
{
    int x=0,c=0,r=1,suma=0,mayor=0,contador=0,auxx=1;
    cout << "ingrese numero" << endl;
    cin>>x;
    auxx=x;
    while (x!=0){

        c=x%10;

        for (int i=0;i<c;i++){
            r=r*c;
        }
        if(c>=mayor){
            mayor=c;
        }
        x=x/10;
        suma=suma+r;
        r=1;

    }
    while(auxx!=0){
        c=auxx%10;
         auxx=auxx/10;

         if (c==mayor){
             contador++;
         }
    }

    cout<<"la suma da: "<<suma<<endl;
    cout<<"el mayor es "<<mayor<<endl;
    cout<<"y aparece : "<<contador<<" veces"<<endl;
    return 0;
}

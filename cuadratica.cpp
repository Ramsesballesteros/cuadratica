#include <bits/stdc++.h>
using namespace std;
int main {
    // este programa te pide insertar 3 datos para luego procesarlos con la formula para calcular 
    // distancia entre estos mismos tres datos, al final muestra el resultado con decimales
    double x1, y2, x2, y1,d;
    cout<<"programa para calcular la distancia"<<endl;
    cout<<"Autor: Ramses Ballesteros Diaz"<<endl;
    cout<<"x1: ";
    cin>> x1;
    cout<<"y1: ";
    cin>>y1;
    cout<<endl;
    cout<<"x2: ";
    cin>>x2;
    cout<<"y2: ";
    cin>>y2;
    cout<<endl;

    d=sqrt( (x2-x1)*(x2-x1)+(y2-y1)*(y2-y1))
 
    cout<<"la distancia entre los dos puntos es: "<<d<<endl;


return 0;
}


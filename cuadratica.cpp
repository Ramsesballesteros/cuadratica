#include <bits/stdc++.h>
using namespace std;
int main {
    // aqui se muestran las variables a utilizar para calcular la distancia
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

    // formula general para calcular la distancia con los datos ya incertados 
    d=sqrt( (x2-x1)*(x2-x1)+(y2-y1)*(y2-y1))

    // resultado despues de seguir todo el proceso  
    cout<<"la distancia entre los dos puntos es: "<<d<<endl;


return 0;
}


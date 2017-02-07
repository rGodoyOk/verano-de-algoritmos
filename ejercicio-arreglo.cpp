/*crea un programa que reciba 5 numeros enteros positivos
 y de la suma total de tales numeros haciendo uso de arreglos*/
#include<iostream>
using namespace std;

int Sumar(int v[]){
  int acum=0;
  for (int i=0; i<5; i++)
    acum += v[i];
  return acum;
}

void CargarVector(int v[]){
  cout << "Ingresar cinco valores enteros positivos" << endl;
  for (int i=0; i<5; i++){
    cin >> v[i];
    while (v[i]<1){
      cout << "El numero ingresado no es valido, ingrese nuevamente" << endl;
      cin >> v[i];
    }
  }
}

main(){
 int vect[5], b;
 CargarVector(vect);
 cout << "La suma de los valores ingresados es: " << Sumar(vect) << endl;
 return 0;
}

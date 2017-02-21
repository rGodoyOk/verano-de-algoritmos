#include <iostream>
using namespace std;
#define N 20000	//cantidad articulos
#define M 10000 //idArticulo minimo

struct rArticulos {
	unsigned short idArt;
	char descripcion[20];
	float precio;
	unsigned short stock,
				   idProveedor;
};

int main (){
	unsigned short Indices[N], i=0;
	rArticulos aux;
	
	FILE *precios = fopen ("Precios.dat", "rb");
	
	while (fread (&aux, sizeof aux, 1, precios)){
		Indices[aux.idArt-M] = ftell (precios) - sizeof aux;		
	}
	
	for (short i=0; i<N; i++){
		fseek (precios, Indices[i], SEEK_SET);
		fread (&aux, sizeof aux, 1, precios);
		cout << "Id.Articulo"
	}
	
	
	
	return 0;
}

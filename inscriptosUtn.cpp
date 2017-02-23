#include <iostream>
using namespace std;
typedef unsigned short ushort;
typedef unsigned uint;

struct rArchivo {  //rInscriptos
	ushort nroReg,
		   nroEsp;
	uint dni;
};

struct rMaterias { //Materia
	ushort idMateria,
	       nroEsp;
	char nombre [30];
	ushort nota;
};

struct rAlumnos {  //Alumno
	uint idAlumno,
		 dni;
	ushort nroEspecialidad;
	char nYA[31];
	rMaterias materia[45];
};

struct NodoLA {  //Nodo
	rAlumnos info;
	Nodo *sgte;
};

struct NodoLDnis {
	uint info;
	Nodo *sgte;
};

int main (){
	NodoLDnis *MatrizRE[23][15];
	FILE *f = fopen ("Archivo.dat", "rb");
	rArchivo auxArch;
		
	for (ushort i=0; i<23; i++)
		for (ushort j=0; j<15; j++)
			MatrizRE[i][j] = NULL;
	
	while (fread (&auxArch, sizeof auxArch, 1, f))
		InsertaOrdenado (MatrizRE[auxArch.nroReg-1][auxArch.nroEsp-1], auxArch.dni);
	for (ushort i=0; i<23; i++)
		for (ushort j=0; j<15; j++){
			NodoLDnis *aux = MatrizRE[i][j];
			while (aux != NULL){
				int dni = aux -> info;
				Nodo *alu = buscar (ListaAlumnos, dni);
				cout << i+1 << j+1 << << alu->info.nYA;
				for (ushort k=0; k<45; k++)
					if (alu->info.materias[k].nota >=4)
						cout <<....
				
			
	
	
	
	return 0;
}



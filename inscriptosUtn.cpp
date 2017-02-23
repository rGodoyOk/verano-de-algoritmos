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
	uint dni;
	Nodo *sgte;
};

int main (){
	NodoLDnis *MatrizRE[23][15];
	FILE *f = fopen ("Archivo.dat", "rb");
	rArchivo auxArch;
		
	for (ushort i=0; i<23; i++)
		for (ushort j=0; j<15; j++)
			MatrizRE[i][j] = NULL;
	
	while (fread (&auxArch, sizeof auxArch, 1, f)){
		InsertaOrdenado (MatrizRE[auxArch.nroReg][auxArch.nroEsp], auxArch.dni);
	
	
	
	
	
	return 0;
}



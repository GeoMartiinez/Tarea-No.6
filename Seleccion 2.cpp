#include<iostream>
using namespace std;
/*  struct Estudiante{
	int codigo[4];
	string nombre[4];
	int nota[4];
*/
struct Estudiante{
	int *codigo;
	string *nombre;
	int **nota;
	
};
main(){
	/* Estudiante estudiante;
	for (int i=0;i<4;i++){
		cout<<"Ingrese Codigo: ";
		cin>>estudiante.codigo[i];
		cin.ignore();
		cout<<"Ingrese Nombre Completo: ";\
		getline(cin,estudiante.nombre[i]);
		cout<<"Ingrese Nota: ";
		cin>>estudiante.nota[i];
		
	}
	
	for (int i=0;i<4;i++){
		cout<<"----------------"<<endl;
		cout<<"Codigo: "<<estudiante.codigo[i]<<endl;
		cout<<"Nombre Completo: "<<estudiante.nombre[i]<<endl;
		cout<<"Nota: "<<estudiante.nota[i]<<endl;
	}
*/	

	Estudiante estudiante;
	
	int fila = 0, columnas=0;
	cout<<"Cuantos Estudiantes desea Agregar: ";
	cin>>fila;
	
	cout<<"Cuantas Notas por Estudiante desea Agregar: ";
	cin>>columnas;
	
	
	estudiante.codigo = new int[fila];
	estudiante.nombre = new string[fila];
	estudiante.nota = new int *[fila];
	for(int i=0;i<fila;i++){
		estudiante.nota[i] = new int[columnas];
		
	}
	cout<<"***Ingreso de Notas:***"<<endl;
	for(int i=0;i<fila;i++){
		cout<<"Codigo ["<<i<<"]: ";
		cin>>estudiante.codigo[i];
		cin.ignore();
		cout<<"Nombre Completo ["<<i<<"]: ";
		getline(cin,estudiante.nombre[i]);
		for(int ii=0;ii<columnas;ii++){
			cout<<"Ingrese Nota ["<<ii<<"]: ";
			cin>>*(*(estudiante.nota+i)+ii);
	}
	cout<<"-------------"<<endl;
}
	cout<<"***Mostrar Datos:***"<<endl;
		for(int i=0;i<fila;i++){
		cout<<"Codigo ["<<i<<"]: "<<estudiante.codigo[i]<<endl;
		cout<<"Nombre Completo ["<<i<<"]: "<<estudiante.nombre[i]<<endl;
		for(int ii=0;ii<columnas;ii++){
			cout<<"Ingrese Nota ["<<ii<<"]: "<<*(*(estudiante.nota+i)+ii)<<endl;
	}
	cout<<"-------------"<<endl;
}
 for(int i=0;i<fila;i++){
	delete[] estudiante.nota[i];
 }
	delete[] estudiante.codigo;
	delete[] estudiante.nombre;
	delete[] estudiante.nota;
	

	system("pause");
}

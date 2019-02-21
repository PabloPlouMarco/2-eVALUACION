/*Esto es mi primer programa en C */
#include<iostream>//es una instruccion el preprocesador
int main(){
    //Definicion de las variables
    char salir;
	//print "Hola Mundo"
	std::cout<< "Hola Mundo";//Es obligatorio el ;
	/*Ponemos una istruccion para que el progrma espere a que toquemos cualquier tecla*/
	std::cout<<"Toca cualquier tecla para salir";//instruccion de salida
	std::cin>>salir;//instruccion de entrada
	return 0;
}

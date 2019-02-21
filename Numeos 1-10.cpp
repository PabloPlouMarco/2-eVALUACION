#include<iostream>
int main(){
    int i;
    char salir;
    for(i=10;i>0;i--){
        std::cout<<i;
        std::cout<<"n";
        
    }
   	std::cout<<"Toca cualquier tecla";//instruccion de salida
	std::cin>>salir;//instruccion de entrada
	return 0;
}

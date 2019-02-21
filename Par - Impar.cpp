#include<iostream>
main(){
    int n_maximo=100;
    int i;
    char salir;
    for(i=1;i<=n_maximo;i++){
        if(i%2==0){
          std::cout<<i;
          std::cout<<"es par";
        }else{
          std::cout<<i;
          std::cout<<" es impar";
          }
          std::cout<<"\n";
    }
    std::cout<<"SE ACABO";
    std::cout<<"Toca cualquier tecla para salir";
	std::cin>>salir;
	return 0;
}

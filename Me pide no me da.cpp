#include<iostream>
main(){
      int num[10];
      int i;
      char salir;
      for(i=0;i>10;i++){
          std::cout<<"Dime un numero: ";
          std::cin>>num[i];
      }
      std::cout<<"\nToca cualquier tecla para salir";
      std::cin>>salir;
      return 0;
}

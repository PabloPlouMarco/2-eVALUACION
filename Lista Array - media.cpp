#include<iostream>
main(){
      float num[10];
      int i;
      char salir;
      float suma=0;
      float n_numeros;
      float media;
      std::cout<<"Cuantos numeros quieres introducir";
      std::cin>>n_numeros;
      for(i=0;i<n_numeros;i++){
          std::cout<<"Dime un numero";
          std::cin>>num[i];
      }
      std::cout<<"LISTA DE LOS NUMEROS:\n";
      for(i=0;i<n_numeros;i++){
          std::cout<<num[i];                                    
      }
      
      for(i=0;i<n_numeros;i++){
         suma=suma+num[i];                
      }                   
      std::cout<<"\nMEDIA" 
      std::cout<<"Toca cualquier tecla para salir";
      std::cin>>salir;               
      return 0;
}

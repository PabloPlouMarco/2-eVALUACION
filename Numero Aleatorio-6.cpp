#include<iostream>
#include<cstdlib>
#include<ctime>
int main(){
    float matriz[10][10];
    int fil,col;
    char salir;
    char palabra[10];
    int posx,posy;
    double semillita;
    semillita=time(0);
    srand(semillita);
    for(fil=0;fil<10;fil++){
      for(col=0;col<10;col++){
          matriz[fil][col]=rand()%25+65;
          std::cout<<matriz[fil][col];
      }
      std::cout<<"\n";
    }
    posx=rand()%10;
    posy=rand()%10;
    matriz[posx][posy]="*";
    std::cout<<"\nNUEVA MATRIZ\n\n";
    
    for(fil=0;fil<10;fil++){
      for(col=0;col<10;col++){
          std::cout<<matriz[fil][col];
      }
      std::cout<<"\n";
    }
    
    std::cout<<"Introduce una palabra";
    std::cin>>palabra;
    
    std::cout<<"\nToca cualquier tecla para salir";
    std::cin>>salir;               
    return 0;
}

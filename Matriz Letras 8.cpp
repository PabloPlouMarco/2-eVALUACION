#include<iostream>
#include<cstdlib>
#include<ctime>
int main(){
    char matriz[10][10];
    int fil,col;
    int longitud;
    char salir;
    char palabra[10];
    int posx,posy;
    int semillita;
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
    matriz[posx][posy]='*';
    std::cout<<"\nNUEVA MATRIZ\n\n";
    
    for(fil=0;fil<10;fil++){
      for(col=0;col<10;col++){
          std::cout<<matriz[fil][col];
      }
      std::cout<<"\n";
    }
    
    std::cout<<"Introduce una palabra";
    std::cin>>palabra;
    longitud=strlen(palabra);
    
    for(col=posy;col<posy+longitud;col++){
        matriz[posx][col]=palabra[col-posy];
    }
    std::cout<<"\n\nDEFINITIVA\n\n";
    for(fil=0;fil<10;fil++){
      for(col=0;col<10;col++){
          std::cout<<matriz[fil][col];
      }
      std::cout<<"\n";
    }
    
    
    std::cout<<"La palabra mide: "<<longitud;
    std::cout<<"\nToca cualquier tecla para salir";
    std::cin>>salir;               
    return 0;
}

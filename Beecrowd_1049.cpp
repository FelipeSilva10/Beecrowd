#include <iostream>
#include <cstring>

using namespace std;

int main(){
    char categoria[13], subgrupo[9], categoria_alimentar[11]; //Alocação de memória baseada no tamanho da maior palavra + 1.
    cin.getline(categoria,13);//(vertebrado,...)
    cin.getline(subgrupo,9);//(ave,...)
    cin.getline(categoria_alimentar,11);//(onívero,...)
    if(strcmp(categoria, "vertebrado") == 0){
        if(strcmp(subgrupo, "ave") == 0){
            if(strcmp(categoria_alimentar, "carnivoro") == 0){
                cout<<"aguia" << endl;
            }
            if(strcmp(categoria_alimentar, "onivoro") == 0){
                cout<<"pomba" << endl;
            }
        }
        if(strcmp(subgrupo, "mamifero") == 0){
            if(strcmp(categoria_alimentar, "onivoro") == 0){
                cout<<"homem" << endl;
            }
            if(strcmp(categoria_alimentar, "herbivoro") == 0){
                cout<<"vaca" << endl;
            }           
        }
    }
    else if(strcmp(categoria, "invertebrado") == 0){
        if(strcmp(subgrupo, "inseto") == 0){
            if(strcmp(categoria_alimentar, "hematofago") == 0){
                cout<<"pulga" << endl;
            }
            if(strcmp(categoria_alimentar, "herbivoro") == 0){
                cout<<"lagarta" << endl;
            }
        }
        if(strcmp(subgrupo, "anelideo") == 0){
            if(strcmp(categoria_alimentar, "hematofago") == 0){
                cout<<"sanguessuga" << endl;
            }
            if(strcmp(categoria_alimentar, "onivoro") == 0){
                cout<<"minhoca" << endl;
            }           
        }
    }
    return 0;
}
#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<fstream>

using namespace std;

void lectura();

int main(){
        lectura();
        
        system("pause");
        return 0;
}

void lectura(){
        ifstream archivo;
        string direcciones,texto;
        
        cout<<"Digite el nombre o la ubicacion del archivo o fichero: ";
        getline(cin,direcciones);
        
        archivo.open(direcciones,ios::in);
        
        if(archivo.fail()){
                cout<<"No se pudo abrir el archivo";
                exit(1);

  }
        
        while(!direcciones.txt()){
                getline(direcciones,texto);
                cout<<texto<<endl;
        }
         
        archivo.close(); 





}
 


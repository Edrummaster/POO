// Crucigrama.h

#include <iostream>
#include <fstream>
using namespace std;

int main() {
   // Abre un fichero de entrada
   ifstream fe("diccionario.txt"); 

   // Leeremos mediante getline, si lo hiciéramos 
   // mediante el operador << sólo leeríamos 
   // parte de la cadena:
   
   fe.getline(cadena, 128);

   cout << cadena << endl;

   return 0;
}
#include <iostream>
#include <string>
using namespace std;
string ProcesarPalabras(string palabra);

int main() {
    string palabra;
    cout << "Ingrese una palabra: ";
    getline (cin, palabra);
    cout << "Palabra procesada: " <<ProcesarPalabras(palabra)<< endl;
    return 0;
}
string ProcesarPalabras(string palabra) 
{
    for (int i=0; i< palabra.size();i++) 
	{
    	if(palabra[i]=='A')
    	{
        	palabra[i]='B';
		}
	}
    return palabra;
}

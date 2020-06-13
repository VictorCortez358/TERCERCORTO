#include "iostream"
#include "cmath"
void mifuncion(int*,int*);//defino las dos funciones que usare
using namespace std;
int main(void)
{
    int numero,n;
    mifuncion(&numero,&n);
    return 0;
}
void mifuncion(int*numero,int*n)
{ 
        cout<<"ADIVINE EL NUMERO MAGICO Y GANE!"<<endl<<endl;
        cout<<"Ingrese un numero entre 1 y 100:  ";
        int cont=5;//Numero de intentos que tendra el jugador
        *numero=17;//numero previamente guardado
    
    while(cin>>*n){
        if(*numero==*n){
        cout<<"Felicidades el numero es el correcto";//si el numero ingresado por el usuario es igual al previamente guardado
        }
        else if(*numero<*n){
            cout<<"El numero ingresado es mayor al correcto le quedan "<<cont--<<" intentos restantes"<<endl<<endl;//si no es correcto
            cout<<"Ingrese un numero entre 1 y 100, o presione Control-z si ya no desea seguir jugando:";
         }
        else if(*numero>*n){ 
            cout<<"El numero ingresado es menor al correcto le quedan "<<cont--<<" intentos restantes"<<endl<<endl; // si no es correcto
            cout<<"Ingrese un numero entre 1 y 100, o presione Control-z si ya no desea seguir jugando: "; 
         }    
     }
}

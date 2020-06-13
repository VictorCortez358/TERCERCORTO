#include "iostream"
void funcion(int*);//declaro una variable la cual es el año
using namespace std;

int main(void)
{
    int a;
    cout<<"VERIFICAR SI ES BISIESTO O NO"<<endl<<endl;
    cout<<"Introduce un a"<<(char)164<<"o: "; //164 ascii de ñ
    cin >> a; 

    funcion(&a);
    return 0;
}
void funcion(int*a)
{
  if(*a%4==0 &&*a%100!=0 ||*a%400==0) //Condicion si un año es bisiesto
      cout << "El a"<<(char)164<<"o es Bisiesto" << endl;
   else
      cout << "El a"<<(char)164<<"o no es bisiesto" << endl;
}
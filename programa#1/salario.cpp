#include "iostream"
void mifuncion(float*,float*);//defino variables tipo float ya que utilizaremos decimales
using namespace std;

int main(void)
{
    float total,real;
    cout<<"CALCULA EL SALARIO TOTAL Y REAL CADA EMPLEADO"<<endl<<endl;
    mifuncion(&total,&real);
    cout<<"El salario mensual total es el siguiente: $"<<total<<endl;
    cout<<"El salario mensual real es el siguiente: $"<<real;
    return 0;
}
void mifuncion(float*total,float*real)
{
    float horastr,horasex,seg,afp,imp;
    cout<<"Ingrese las horas trabajadas del empleado: ";
    cin>>horastr;
    cout<<"Ingrese las horas extra del empleado: ";
    cin>>horasex;

    *total= 30*(horastr*1.75+horasex*2.50);//Con esa formula se calcula el salario total
    seg=*total*0.04;// Con esa formula se calcula el seguro social
    afp=*total*0.0625;//Con esa formula se calcula el AFP
    *real=*total-seg-afp;//Con esa formula calculamos el salario real ya con descuentos
    if(*total>500)// Si el salario total supera los 500 dolares se le cobran impuesto
    {
        imp=*total*0.1;
        *real=*real-imp;
    }
    cout<<endl;
}
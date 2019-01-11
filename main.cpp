#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <time.h>
using namespace std;
bool multiplo(int a,int b){
    if(!(a%b))
        return true;
    return false;
}
void dibuja(int a){
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++)
            cout<<"*";
        cout<<"\n";
    }
}
int funcion1(int a, int b){
    return a/b;
}
int funcion2(int a,int b){
    return a%b;
}
void funcion3(){
    int numero;
    int d=10000;
    cout<<"ingrese un numero de 1-32767 "<<endl;
    cin>>numero;
    while(numero!=0){
        if(funcion1(numero,d)!=0){
            cout<<funcion1(numero,d)<<"  ";
            numero=funcion2(numero,d);
        }
        d=d/10;
    }
    cout<<endl;

}
float celsius(float f){
    float c;
    c=(f-32)/1.8;
    return c;
}
float fahrenheit(float c){
    float f;
    f=(c*1.8)+32;
    return f;
}
void temperatura(){
    cout<<"de celsius a fahrenheit\t"<<endl;
    for(int i=0;i<100;i++){
        cout<<i<<"\t"<<celsius(i)<<endl;
    }
    cout<<"de fahrenheit a celsius \t"<<endl;
    for(int j=32;j<=212;j++){
        cout<<j<<"\t"<<fahrenheit(j)<<endl;
    }
}
void esPerfecto(){
    int nume=1,x=1,s=0;
    while(nume<=10000)
    {
        while(x<=(nume/2))
        {
            if(nume%x==0)
                s=s+x;
                x=x+1;
        }
        if(nume==s)
            cout<<nume<<", Es perfecto"<<endl;
        nume=nume+1; x=1;s=0;
    }
}
void voltear(int num){
    while(num>=10){
        cout<<num%10;
        num=num/10;
    }
    cout<<num;
}
int promedio(float a, float b,float c,float d){
    int suma,p;
    suma=(a+b+c+d);
    p=suma/4;
    if(p>100)
        return 0;
    if((p<=100)&& (p>=90))
        return 4;
    else if((p<=89) && (p>=80))
        return 3;
    else if((p<=79) && (p>=70))
        return 2;
    else if((p<=69) && (p>=60))
        return 1;
    else
        return 0;
}
void alAzar(int x){
    srand(time(NULL));
    int p=1+rand()%(101-1);
    if(x==p)
        cout<<"adinaste mi numero  "<<endl;
    else
    cout<<"no adivinaste mi numero es: "<<p<<endl;
}
int recuPotencia(int base,int exp){
    if(exp==0)
        return 1;
    if(exp==1)
        return base;
    else
        return base*(recuPotencia(base,exp-1));
}
void torres(int n,char a,char b,char c){
    if(n==1)
       {
           cout<<"mueve el disco al disco "<<a<<endl;
           return ;
       }
    torres(n-1,a,c,b);
    torres(n-1,c,b,a);
}
unsigned long factorial(unsigned long n){
    if(n<=1)
        return 1;
    else
        return n*factorial(n-1);
}
void factorialR(){
    int w;
    cout<<"dime un numero para hallar su factorial"<<endl;
    cin>>w;
    for(int i=1;i<=w;i++){
        int a=0;
        for(int j=1;j<=i;j++){
            if(a<j-1){
                cout<<"*";
                a++;}
                cout<<j<<" ";
            }

        cout<<" = "<<factorial(i)<<endl;}
}
int main()
{
    cout << "ejercicio 6.20" << endl;
    cout<<multiplo(8,2);
    cout<<"ejercicio 6.22"<<endl;
    dibuja(4);
    cout<<"ejercicio 6.24"<<endl;
    funcion3();
    cout<<"ejercicio 6.26"<<endl;
    cout<<"en grados es: "<<celsius(25)<<endl;
    cout<<"en fahrenheit es: "<<fahrenheit(34)<<endl;
    temperatura();
    cout<<"ejercicio 6.28"<<endl;
    esPerfecto();
    cout<<"ejercicio 6.30"<<endl;
    voltear(78964);
    cout<<endl<<"ejercicio 6.32"<<endl;
    cout<<"ingrese las notas de un alumno calificaciones es hasta 100"<<endl;
    cout<<promedio(90,80,90,78)<<endl;
    cout<<"ejercicio 6.34 "<<endl;
    int numero;
    cout<<" i have a number between 1 and 100\n can you guess my number"<<endl;
    cin>>numero;
    alAzar(numero);
    cout<<"ejercicio 6.36 "<<endl;
    int b,e;
    cout<<"ingresa una base y el esponente "<<endl;
    cin>>b>>e;
    cout<<recuPotencia(b,e)<<endl;
    torres(4,'a','b','c');
    cout<<endl;
    factorialR();

    return 0;
}

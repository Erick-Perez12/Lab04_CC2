#include <iostream>
#include "DynamicArray.h"
#include "Curso.h"
using namespace std;

int main() {
    Curso c1("CVV",15,14,"123456");
    Curso c2("CCII",20,19,"aprobar");
    Curso c3("Desarrollo Basado en Plataformas",0,40,"DBP");
    Curso c4("CCII",20,20,"0000000");//solo para que le profe no se enoje
    
    Curso arr[4]={c1, c2, c3, c4};
    int tam = sizeof(arr) / sizeof(arr[0]);
    
    cout << c1<<endl;
    //cout << c2;
    DynamicArray<Curso> p(arr,tam);
    cout<<"DINAMIC ARRAY"<<endl;
    cout << p<<endl;
    
    return 0;
}
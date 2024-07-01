#include<iostream>
#include<cmath>

using namespace std;



int main(){
    double a,b,c, raiz1,raiz2;
    bool Reales;

    cout<<"Ingrese a:"; cin>>a;
    cout<<"Ingrese b:"; cin>>b;
    cout<<"Ingrese c:"; cin>>c;

   

    if(Reales){
        if(raiz1==raiz2){
            cout<<"La unica raiz real es:"<<raiz1<<endl;
        }else{
            cout<<"Las raices reales son:"<<endl;
            cout<<"Raiz 1:"<<raiz1<<endl;
            cout<<"Raiz 2:"<<raiz2<<endl;
        }
    }else{
        cout<<"Las raices complejas son:"<<endl;
        cout<<"Raiz 1:"<<raiz1<<"+"<<raiz2<<"i"<<endl;
        cout<<"Raiz 2:"<<raiz1<<"-"<<raiz2<<"i"<<endl;
    }

    return 0;
}


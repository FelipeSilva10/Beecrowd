#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double salario;
    cin>>salario;
    if(salario>0&&salario<=400.00){
        cout<<"Novo salario: "<<fixed<<setprecision(2)<<salario+(salario*0.15)<<"\n";
        cout<<"Reajuste ganho: "<<(salario*0.15)<<"\n";
        cout<<"Em percentual: "<<fixed<<setprecision(0)<<((salario*0.15)/salario)*100<<" %\n";
    }
    if(salario>=400.01&&salario<=800.00){
        cout<<"Novo salario: "<<fixed<<setprecision(2)<<salario+(salario*0.12)<<"\n";
        cout<<"Reajuste ganho: "<<(salario*0.12)<<"\n";
        cout<<"Em percentual: "<<fixed<<setprecision(0)<<((salario*0.12)/salario)*100<<" %\n";
    }
    if(salario>=800.01&&salario<=1200.00){
        cout<<"Novo salario: "<<fixed<<setprecision(2)<<salario+(salario*0.10)<<"\n";
        cout<<"Reajuste ganho: "<<(salario*0.10)<<"\n";
        cout<<"Em percentual: "<<fixed<<setprecision(0)<<((salario*0.10)/salario)*100<<" %\n";
    }
        if(salario>=1200.01&&salario<=2000.00){
        cout<<"Novo salario: "<<fixed<<setprecision(2)<<salario+(salario*0.07)<<"\n";
        cout<<"Reajuste ganho: "<<(salario*0.07)<<"\n";
        cout<<"Em percentual: "<<fixed<<setprecision(0)<<((salario*0.07)/salario)*100<<" %\n";
    }
        if(salario>2000.00){
        cout<<"Novo salario: "<<fixed<<setprecision(2)<<salario+(salario*0.04)<<"\n";
        cout<<"Reajuste ganho: "<<(salario*0.04)<<"\n";
        cout<<"Em percentual: "<<fixed<<setprecision(0)<<((salario*0.04)/salario)*100<<" %\n";
    }
    return 0;
}
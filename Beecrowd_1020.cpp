#include <iostream>

using namespace std;

int main() {
    int a=0,m=0,d=0,e;
    cin>>e;
    while(e>=365)
    {
        e=e-365;
        a++;
    }
    while(e>=30)
    {
        e=e-30;
        m++;
    }
    while(e>0)
    {
        e=e-1;
        d++;
    }
    cout<<a<<" ano(s)\n"<<m<<" mes(es)\n"<<d<<" dia(s)\n";
    return 0;
}

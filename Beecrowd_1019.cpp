#include <iostream>

using namespace std;

int main() {
    int h=0,m=0,s=0,e;
    cin>>e;
    while(e>=3600)
    {
        e=e-3600;
        h++;
    }
    while(e>=60)
    {
        e=e-60;
        m++;
    }
    while(e>0)
    {
        e=e-1;
        s++;
    }
    cout<<h<<":"<<m<<":"<<s<<"\n";
    return 0;
}

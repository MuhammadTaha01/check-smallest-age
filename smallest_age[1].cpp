#include<iostream>
using namespace std;
int main()
{
    int w,x,y,z;
    cout<<"Age of Taha: ";
    cin>>w;

    cout<<"Age of Jawad: ";
    cin>>x;

    cout<<"Age of Ahmed: ";
    cin>>y;

    cout<<"Age of Ammar: ";
    cin>>z;

    if(w<x)
    {
        if(w<y)
            cout<<"Taha is youngest";
        else
            cout<<"Ahmed is youngest";
    }

    else if(x<y)
    {
        if(x<z)
            cout<<"Jawad is youngest";
        else
            cout<<"Ammar is youngest";
    }

    else
    {
        if(y<z)
            cout<<"Ahmed is youngest";
        else
            cout<<"Ammar is youngest";
    }
    return 0;
}


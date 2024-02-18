#include<iostream>
using namespace std;
int main()
{
    int *p=new int[10];
    cin>>p[0];
    cin>>p[1];
    cin>>p[2];
    cout<<p[0];
    cout<<p[1];
    cout<<p[2];
    delete[] p;
    cout<<p[0];
    cout<<p[1];
    cout<<p[2];

}
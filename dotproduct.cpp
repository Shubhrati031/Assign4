#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter the i and j components for 1st vector:"<<endl;
    cin>>a>>b;

    int c,d;
    cout<<"Enter the i and j components for 2nd vector:"<<endl;
    cin>>c>>d;

    cout<<"Dot product of ("<<a<<" + i"<<b<<") + ("<<c<<" + i"<<d<<") = "<<(a*c + b*d)<<endl;
}
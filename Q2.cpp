#include<iostream>
using namespace std;


void MA(double *ptra ){
    *ptra = 0.433*(*ptra * *ptra);
}
int main (){
double a,b;
cout<<"enter a"<<endl;
cin>>a;
MA(&a);
cout<<"masahat = "<<a;
}

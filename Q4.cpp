#include<iostream>
#include<iomanip>

using namespace std;
int doSomething (int *x, int *y)
{
int temp = *x;
*x = *y * 10;
*y = temp * 10;
return *x + *y;
}
int main()
{
int x;
int y;
cout<<"Enter x & y"<<endl;
cin>>x;
cin>>y;

cout<<doSomething(&x,&y);

}


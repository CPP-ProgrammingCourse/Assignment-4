#include <iostream>
using namespace std;
int main()
{
const int SIZE = 8;
int set[SIZE]={52 ,100 ,115 ,204 ,28 ,130 ,43 ,7};
int *numptr = nullptr;
int count;

numptr = set;

cout<<"The numbers in set are:\n";

for(count = 0 ; count<SIZE ;count++)
{
cout<<*numptr<<endl;
numptr++;
}
}

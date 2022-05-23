#include <iostream>
using namespace std;
void disp(int *,int);
int main()
{
int size = 3;
int nums[size]={123,456,789};

disp(nums,size);
}

void disp(int *numbers, int size)
{

    double copyofnums[size];
for(int count =0; count<size; count++)
{
    int reverse=0, rem;
while(*(numbers+count)!=0)
  {
     rem=*(numbers+count)%10;
     reverse=reverse*10+rem;
     *(numbers+count)/=10;
  }
    copyofnums[count]=reverse;
}
cout<<endl;
for(int count =0; count<size; count++)
{
    cout<<*(copyofnums+count)<<" ";
}
cout<<endl;
}

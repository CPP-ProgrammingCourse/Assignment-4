#include<iostream>
#include<iomanip>

using namespace std;
void disp(double *,int);
void srt(double *,int);
void avedisp(double *,int);

int main()
{
double *scores = nullptr;

int scorenums;
int count;

cout<<"How many scores do you want to enter??"<<endl;

cin>>scorenums;


scores = new double[scorenums];

cout<<"Enter scores figures below.\n";
for(count=0; count<scorenums;count++)
{
cout<<"score number "<<(count+1)<<": ";
cin>>scores[count];
}

srt(scores,scorenums);
disp(scores,scorenums);
avedisp(scores,scorenums);



}

void disp(double *numbers, int size)
{
    cout<<"scores in ascending order : ";
for(int count =0; count<size; count++)
{
    cout<<*(numbers+count)<<" ";
}
cout<<endl;
}


void srt(double *numbers, int size)
{
    double a;
    double b;
for(int counta =0; counta<size-1; counta++){
for(int count =0; count<size-1; count++)
{
    if(*(numbers+count)>*(numbers+count+1)){
        a = *(numbers+count);
        b = *(numbers+count+1);
        *(numbers+count)= b;
        *(numbers+count+1)= a;
    }
}
}
}

void avedisp(double *numbers, int size)
{
double total = 0.0;
    cout<<"Average of scores is: ";
for(int count=0; count<size;count++)
{
total +=numbers[count];
}
cout<<total/size;
}

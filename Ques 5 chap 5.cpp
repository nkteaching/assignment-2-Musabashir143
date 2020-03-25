//Ques 5 chapter 5
#include<iostream>
using namespace std;
void odd(int n)
{
    if(n>1)
    {
    if(n==1)
    {
         cout<<1;
    }
    else
    {
        if(n%2==0)
        {
        cout<<n-1;
        odd(n-1);
    }
    if(n%2!=0 )
    {
        cout<<" "<<n-2;
        odd(n-2);
    }}}}
    int i=1;
    void odd2(int n)
{
    static int i=1;
   while(n>0 && i<n)
    {
        if(n%2==0)
        {
        cout<<" "<<i;
        i=i+2;
        odd2(n-1);
        }
     if(n%2!=0)
        {
        cout<<" "<<i;
        i=i+2;
        odd2(n-2);
}}}
    int main()
    {
        odd(17);
        cout<<"\n";
        odd2(17);
    }

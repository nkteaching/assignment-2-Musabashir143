#include<iostream>
using namespace std;
void putcommas(unsigned long long n)
{
    
    if(n<1000)
    {
        cout<<n;
    }
    else
    {
        int remainder;
        remainder = n%1000;
        putcommas(n/1000);
        cout<<","<<remainder;
    }}
    int main()
    {
        putcommas(123456);
    }

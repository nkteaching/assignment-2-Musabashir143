#include<iostream>
#include<cmath>
using namespace std;
float sum(double n)
{
if( n == 1 )
{
    return 1;
}
else if(fmod(n,2) == 0)
{
    return (sum(n-1) + 1/n);
}
else if(fmod(n,2) != 0)
{
     return (sum(n-1) - 1/n);
}
}
int main()
{
    cout<<sum(4);
}
    

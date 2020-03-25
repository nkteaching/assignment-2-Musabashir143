#include<iostream>
using namespace std;
int multiply(int i,int j)
{
    if(i==0 || j ==0)
    {
        return 0;
    }
    else if( j == 1)
    {
        return i;
    }
    else if(j > 1)
    {
        return i + multiply(i,j-1);
    }
}
int main()
{
    cout<<multiply(3,4);
}
        

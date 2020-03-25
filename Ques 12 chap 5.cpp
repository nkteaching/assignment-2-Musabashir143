#include<iostream>
using namespace std;
    static int i =1;
int cubes(int n)
{
 while(i <= n)
 {
     if(i == 1)
     {
         cout<<" "<<1;
         i++;
         (n-1);
     }
     else
     {
         cout<<" "<<(i*i*i);
         i++;
         cubes(n-1);
     }}}
     int main()
     {
         cout<<cubes(4);
     }

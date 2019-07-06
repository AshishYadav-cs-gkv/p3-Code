#include<iostream>
using namespace std;
int permutation(int n)
{
  if(n==1)
    return 0;
  if(n==2)
    return 1;  
  return (n-1)*(permutation(n-2)+permutation(n-1));
}
int main()
{
   int n;
   cin>>n;
   cout<<permutation(n);	
}

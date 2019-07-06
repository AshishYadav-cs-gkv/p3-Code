//abhi ye compelete nhi hai
#include<iostream>
using namespace std;
int W( int sum,int n)
{
    int k=0;
    if(sum==0)
	{
		return 0;
	} 
	if(n==0)
	{
		return 0;
    }
	if(sum>=a[n])
	    k = W(sum-a[n],n);
    return W(sum,n-1)+k;   
}
int main()
{
	int i,sum,n;
	cout<<"enter the sum: ";
	cin>>sum;
	cout<<"enter the number of element: ";
	cin>>n;
	int a[n];
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	cout<<"the sum of element is: "<<W(a,sum,n);
	
}

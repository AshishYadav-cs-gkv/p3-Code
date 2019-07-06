#include<iostream>
using namespace std;
int main()
{
	int n;
	int k;
	cout<<"Enter the number you want to check the set bit: ";
	cin>>n;
	cout<<"enter the set bit position: ";
	cin>>k;
	if(n&1<<k)
	{
		cout<<"Yes";
	}
	else
	{
		cout<<"NO";
	}
	
}

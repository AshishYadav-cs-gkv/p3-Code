#include<iostream>
using namespace std;
int odd_count=0,even_count=0;
int palindrome(int count[])
{
	int i;
	for(i=0;i<51;i++)
	{
		if(count[i])
		{
			if(count[i]%2==0)
			even_count++;
			else
			odd_count++;
		}
	}
	if(even_count>=0&&odd_count==1)
	return 1;
	else if(even_count>0&&odd_count==0)
	return 1;
	else
	return 0;
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	int i;
	int count[51]={0};
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		count[a[i]]++;
	}
	if(palindrome(count))
	{
		cout<<"Yes";
	}
	else
	{
		cout<<"No";
	}
	return 0;
}

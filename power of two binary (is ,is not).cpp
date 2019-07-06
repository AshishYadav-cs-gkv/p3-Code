#include<iostream>
using namespace std;
int main()
{
	int n;
	int k;
	cin>>n;
    int count = 0;
	int No_of_bits = sizeof(int)*8;
	for(k=0;k<=No_of_bits-1;k++)
	{
		if(n&1<<k)
		{
			count++;
		}
	}
	if(count==1)
	{
		cout<<"YES IT IS POWER OF TWO";
	}
	else
	{
		cout<<"NO";
	}
}

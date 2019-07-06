#include<iostream>
using namespace std;
int main()
{
	int n,a,b,i;
	cin>>n;
	cin>>a;
	cin>>b;
	int cost[i+1] = {0};
	cost[0] = 0;
	cost[1] = 0;
	cost[2] = a;
	cost[3] = a+a;
	for(i=4;i<=n;i++)
	{
		cost[i] = min(a+cost[i-1],b+cost[i-3]);
		
	}
	cout<<cost[i]<<endl;
	return 0;
	
}

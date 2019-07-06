#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
void addedge(vector<int>adj[],int v1,int v2)
{
	adj[v1].pushback[v2];
	adj[v2.pushback[v1]]; 
}
void printg(vector<int>adj[],int v)
{
	int i,n;
	int x;
	for(i=0;i<n;i++)
	{
		cout<<i<<" ";
		for(auto x:adj[i])
		     cout<<"->"<<x;
		cout<<endl;     
	}
}
int main()
{
	int v,E;
	cin>>v;
	cin>>E;
	vector<int>adj[v];
	int n;
	for(i=0;i<n;i++)
	{
		cin>>v1>>v2;
		addedge(adj,v1,v2);
	}
	printg(adj,v);
}

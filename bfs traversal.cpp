#include<iostream>
#include<queue>
using namespace std;
int main()
{
	int v;
	vector<int>adj[v];
	int level[v];
	int visited[v];
	void bfs(vector<int>adj[],int s)
	{
	
		queue<int>q;
		q.push[s];
		visited[s] = True;
		level[s] = 0;
		while(!q.empty())
		{
			int p = q.front();
			q.pop();
			for(auto i = adj[p].front;i<adj[p].end;i++)
			{
				if(!visited[*i])
				{
					level[*i] = level[p]+1;
					visited[*i] = True;
					q.push(*i);
				}
			}
		}
	}
	return 0;
}


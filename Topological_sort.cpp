#include <bits/stdc++.h>
using namespace std;
class Solution
{
	public:
	void topo(vector<bool>&vis,vector<int>adj[],int x,stack<int>&s)
	{
	    vis[x]=true;
	    for(auto i:adj[x])
	    {
	        if(vis[i]==false)
	        topo(vis,adj,i,s);
	    }
	    s.push(x);
	}
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    vector<bool>vis(V,false);
	    stack<int>s;
	    vector<int>res;
	    for(int i=0;i<V;i++)
	    {
	        if(vis[i]==false)
	        topo(vis,adj,i,s);
	    }
	   while(!s.empty())
	    {
	        res.push_back(s.top());
	        s.pop();
	    }
	   // for(int i=0;i<res.size();i++)
	    //cout<<res[i]<<" ";
	    return res;
	    
	}
};
int check(int V, vector <int> &res, vector<int> adj[]) {
    
    if(V!=res.size())
    return 0;
    
    vector<int> map(V, -1);
    for (int i = 0; i < V; i++) {
        map[res[i]] = i;
    }
    for (int i = 0; i < V; i++) {
        for (int v : adj[i]) {
            if (map[i] > map[v]) return 0;
        }
    }
    return 1;
}

int main() {
    
        int N, E;
        cin >> E >> N;
        int u, v;

        vector<int> adj[N];

        for (int i = 0; i < E; i++) {
            cin >> u >> v;
            adj[u].push_back(v);
        }
        
        Solution obj;
        vector <int> res = obj.topoSort(N, adj);

        cout << check(N, res, adj) << endl;
    
    
    return 0;
}  

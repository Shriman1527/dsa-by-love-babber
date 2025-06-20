#include<iostream>
#include<list>
#include<unordered_map>
#include<stack>
#include<vector>





using namespace std;

class Graph{
public:

 unordered_map<int,list<pair<int,int>>> adj;

 void addEdge(int u,int v,int weight)
 {
    pair<int,int>p=make_pair(v,weight);
    adj[u].push_back(p);

 }

 void printAdj(){
    for(auto i: adj){
        cout<<i.first<<"=>";
        for(auto j:i.second)
        {
            cout<<"("<<j.first<<","<<j.second<<"),";

        }
        cout<<endl;

    }
 }

 void dfs(int node, unordered_map<int,bool>&vis,stack<int>&topo)
 {
    vis[node]=true;
    for(auto neighbour:adj[node])
    {
        if(!vis[neighbour.first])
        {
            dfs(neighbour.first,vis,topo);

        }
    }
   topo.push(node);

 }

 void shortPath(int src,vector<int>&dist,stack<int>&topo)
 {
 
dist[src]=0;

 while(!topo.empty())
 {
    int top=topo.top();
    topo.pop();
    if(dist[top]!=INT16_MAX)
    {
     for(auto i:adj[top])
     {
        if(dist[top]+i.second<dist[i.first])
        {
            dist[i.first]= dist[top]+i.second;

        }
     }   
    }

 }
 }

};
int main(){

 Graph g;
 g.addEdge(0,1,5);
 g.addEdge(0,2,3);
 g.addEdge(1,2,2);
 g.addEdge(1,3,6);
 g.addEdge(2,3,7);
 g.addEdge(2,4,4);
 g.addEdge(2,5,2);
 g.addEdge(3,4,-1);
 g.addEdge(4,5,-2);

 g.printAdj();

 //topological sort
 int n=6;
unordered_map<int,bool>visited;
stack<int>s;

 for(int i=0;i<n;i++)
 {
    if(!visited[i])
    {
        g.dfs(i,visited,s);
    }
 }


  vector<int>dist(n);
 for(int i=0;i<n;i++)
 {
    dist[i]=INT16_MAX;


 }

 g.shortPath(1,dist,s);

 cout<<"answer is"<<endl;
 for(int i=0;i<dist.size();i++)
 {
    cout<<dist[i]<<" ";

 }

 //Correct answer 
 


 





return 0;



}
// Dijkstra,s Algo
#include<iostream>
#include<unordered_map>
#include<set>
#include<list>
#include<vector>


using namespace std;
class Graph{
public:
unordered_map<int,list<pair<int,int>>>adj;
void addEdge(int u,int v,int weight){

    adj[u].push_back(make_pair(v,weight));
    adj[v].push_back(make_pair(u,weight));



}
//create distance array

void shortPath(int src,set<pair<int,int>>&st,vector<int>&dist)
{
    dist[src]=0;
    st.insert(make_pair(0,src));


    while(!st.empty())
    {
        //fetch top recoed
        auto top =*(st.begin());

        int nodeDist=top.first;
        int topnode=top.second;
        st.erase(st.begin());
        for(auto neightbour:adj[topnode])
        {
            if(nodeDist+neightbour.second<dist[neightbour.first])
            {
              auto record=st.find(make_pair(dist[neightbour.first],neightbour.first));
             if(record!=st.end())
             {
                st.erase(record);

             }
             //dist update;

             dist[neightbour.first]=nodeDist+neightbour.second;
            st.insert(make_pair(dist[neightbour.first],neightbour.first));

            }
        }

    }

}




};
int main(){

 Graph g;
 g.addEdge(0,1,7);
 g.addEdge(0,2,1);
 g.addEdge(0,3,2);
 g.addEdge(1,0,7);
 g.addEdge(1,2,3);
 g.addEdge(1,3,5);
 g.addEdge(1,4,1);
 g.addEdge(2,0,1);
 g.addEdge(2,1,3);
 g.addEdge(3,0,2);
 g.addEdge(3,1,5);
 g.addEdge(3,4,7);
 g.addEdge(4,1,1);
 g.addEdge(4,3,7);


int n=5;

 vector<int>dist(5,1e9);

 int src=0;
set<pair<int,int>> st;

g.shortPath(src,st,dist);

cout<<"answer is"<<endl;
for(int i=0;i<dist.size();i++)
{
    cout<<dist[i]<<" ";

}

return 0;



}
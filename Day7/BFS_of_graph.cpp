class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        vector<int>bfs;
        queue<int>s;
        vector<int>vis(V,0);
        s.push(0);
        vis[0]=1;
        while(!s.empty()){
            int top=s.front();
            bfs.push_back(top);
            s.pop();
            for(int i: adj[top] ){
                if(vis[i]==0){
                    vis[i]=1;
                    s.push(i);
                }
            }
        }
        return bfs;
        
    }
};
class Solution {
public:
    
    bool hasCycle(vector<int> adj[],int root,vector<bool> &visited,vector<bool>&dfs){
        visited[root] = true;
        dfs[root] = true;
        for(auto a:adj[root]){
            if(!visited[a]){
                bool sol = hasCycle(adj,a,visited,dfs);
                if(sol) return true;
            }else if(dfs[a]) return true;
        }
        dfs[root] = false;
        return false;
    }
    
    bool canFinish(int n, vector<vector<int>>& prerequisites) {
        vector<int> adj[n];
        for(auto a:prerequisites){
            adj[a[0]].push_back(a[1]);
            
        }
        vector<bool> dfs(n,0),visited(n,0);
        for(int i=0;i<n;i++){
            if(!visited[i]){
                bool sol = hasCycle(adj,i,visited,dfs);
                if(sol) return false;
            }
        }
        return true;
    }
};

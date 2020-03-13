//https://practice.geeksforgeeks.org/problems/bfs-traversal-of-graph/1

void bfs(int s, vector<int> adj[], bool vis[], int N){
    
	queue<int> qlist;
    vis[s] = true;
    qlist.push(s);
    
    while(!qlist.empty()){
        s = qlist.front();
        printf("%d ",s);
        qlist.pop();
        
        for(int i = 0; i < adj[s].size(); i++){
            if(!vis[adj[s][i]]){
                vis[adj[s][i]] = true;
                qlist.push(adj[s][i]);
            }
        }
    }
}

// Detect Cycle in Directed Graph;

/*
DFSRec(adj,visited[],rectSt[]){
    visited[s] =true;
    rectSt[s]=true;
    for(every adjacent of u of s){
        if(visited[u]==false && DFSRec(adj,u,visited,recSt))
        return true;
        else if(rectSt[u]==true){
            return true;
        }
        rectSt[s] =false;
        return false;
    }
}
DFS(adj,v){
    visited[v] ={false.....false};
    rectSt[v]={false.....false};
    for(int i=0;i<v;i++){
        if(visited[i]==false){
            if(DFSRec(adj,i,visited,rectSt)==true);
            return true;
        }
    }
    return false;
}
*/
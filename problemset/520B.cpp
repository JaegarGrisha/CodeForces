#include <iostream>
#include <vector>
#include <queue>
 
using namespace std;
 
int bfs_shortest_path(vector< vector<int> > graph, int source, int dest) {
    int dist[graph.size()];
    for(int i=0; i<graph.size(); i++) {
        dist[i] = -1;
    }
    dist[source] = 0;
    queue<int> q;
    for(int x: graph[source]) {
        q.push(x);
        dist[x] = dist[source] + 1;
    }
    while(!q.empty()) {
        int cur = q.front();
        if(cur==dest) {
            return dist[cur];
        }
        q.pop();
        for(int x: graph[cur]) {
            if(dist[x]==-1) {
                q.push(x);
                dist[x] = dist[cur] + 1;
            }
        }
    }
    return dist[dest];
}
 
int main(void) {
    // this is our graph
    int N = 20000;
    vector< vector<int> > v;
    vector<int> x1;
    x1.push_back(1);
    v.push_back(x1);
    for(int i=1; i<N-1; i++) {
        vector<int> x;
        x.push_back(i-1); // (i+1) - 1 - 1
        if(2*(i+1) <= N) {
            x.push_back(2*i+1); // 2*(i+1) - 1
        }
        v.push_back(x);
    }
    vector<int> xN; 
    xN.push_back(N-2);
    v.push_back(xN);
 
    int n, m;
    cin >> n >> m;
    cout << bfs_shortest_path(v, n-1, m-1) << endl;
}
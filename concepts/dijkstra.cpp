#include <bits/stdc++.h>
using namespace std;

using pait = pair<int, int>;

void dijkstra(int V, vector<vector<pait>> &adj, int src)
{
    vector<int> dist(V, INT_MAX);

    priority_queue<pait, vector<pait>, greater<pait>> pq;

    dist[src] = 0;
    pq.push({0, src});

    while (!pq.empty())
    {
        pait cur = pq.top();
        pq.pop();

        int d = cur.first;
        int u = cur.second;

        if (d > dist[u])
            continue;

        for (auto it : adj[u])
        {
            int v = it.first;
            int wt = it.second;

            if (dist[u] + wt < dist[v])
            {
                dist[v] = dist[u] + wt;
                pq.push({dist[v], v});
            }
        }
    }

    cout << "Shortest distances from source " << src << ":\n";

    for (int i = 0; i < V; i++)
    {
        cout << "Node " << i << " : " << dist[i] << endl;
    }
}

int main()
{
    int V = 5;
    vector<vector<pait>> adj(V);

    adj[0].push_back({1, 10});
    adj[1].push_back({0, 10});

    adj[0].push_back({4, 5});
    adj[4].push_back({0, 5});

    adj[1].push_back({2, 1});
    adj[2].push_back({1, 1});

    adj[1].push_back({4, 2});
    adj[4].push_back({1, 2});

    adj[2].push_back({3, 4});
    adj[3].push_back({2, 4});

    adj[3].push_back({4, 2});
    adj[4].push_back({3, 2});

    int source = 0;

    dijkstra(V, adj, source);

    return 0;
}
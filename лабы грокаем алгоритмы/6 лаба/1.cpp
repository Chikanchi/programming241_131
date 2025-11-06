#include <iostream>
#include <vector>
#include <limits>

using namespace std;

int main() {
    int N, S, F;
    cin >> N >> S >> F;
    S--; F--;

    vector<vector<int>> adj(N, vector<int>(N));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> adj[i][j];
        }
    }

    const int INF = numeric_limits<int>::max();
    vector<int> dist(N, INF);
    vector<bool> used(N, false);
    dist[S] = 0;

    for (int i = 0; i < N; i++) {
        int v = -1;
        for (int j = 0; j < N; j++) {
            if (!used[j] && (v == -1 || dist[j] < dist[v]))
                v = j;
        }

        if (dist[v] == INF) break;
        used[v] = true;

        for (int to = 0; to < N; to++) {
            if (adj[v][to] != -1 && dist[v] + adj[v][to] < dist[to]) {
                dist[to] = dist[v] + adj[v][to];
            }
        }
    }

    cout << (dist[F] == INF ? -1 : dist[F]) << endl;
    return 0;
}

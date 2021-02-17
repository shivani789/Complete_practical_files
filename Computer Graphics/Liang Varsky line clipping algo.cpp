#include <bits/stdc++.h>

using namespace std;

int f;

void dfs(int v, vector<bool> &vis, vector<int> adj[], vector<bool> &wt)

{

    vis[v] = true;

    wt[v] = true;

    for (auto x : adj[v])

    {

        if (!vis[x])

        {

            dfs(x, vis, adj, wt);
        }

        else

        {

            if (wt[x] == true)

            {

                f = 1;

                return;
            }
        }
    }

    wt[v] = false;
}

int main()

{

    long long int t, n, m, u, v;

    cin >> t;

    while (t--)

    {

        cin >> n >> m;

        vector<int> adj[n + 1];

        vector<bool> vis(n + 1, false);

        vector<bool> wt(n + 1, false);

        for (int i = 0; i < m; i++)

        {

            cin >> u >> v;

            adj[u].push_back(v);

            //adj[v].push_back(u);
        }

        int z = 0;

        for (int i = 1; i <= n; i++)

        {

            if (!vis[i])

            {

                f = 0;

                dfs(i, vis, adj, wt);

                if (f == 1)

                {

                    z = 1;

                    break;
                }
            }
        }

        if (z == 1)

        {

            cout << "0" << endl;
        }

        else
        {

            cout << "1" << endl;
        }
    }
}
#include <bits/stdc++.h>
using namespace std;

int main()
{

    // search in a matrix
    int n, m, x;
    cin >> n >> m >> x;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == x)
            {
                cout << "element found\n";
                return 0;
            }
        }
    }
    cout << "Not found\n";

    return 0;
}
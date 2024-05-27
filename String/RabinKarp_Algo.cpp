#include <bits/stdc++.h>
using namespace std;

#define d 256
const int q = 101;

void RBSearch(string txt, string pat)
{
    int n = txt.length(), m = pat.length();
    int x = 0;

    // Computing d to the power(m-1)
    int h = 1;
    for (int i = 1; i <= m - 1; i++)
    {
        h = (h * d) % q;
    }

    // computing p and t_o
    int p = 0, t = 0;
    for (int i = 0; i < m; i++)
    {
        p = (p * d + pat[i]) % q;
        t = (t * d + txt[i]) % q;
    }

    // Checking spurious hit
    for (int i = 0; i <= n - m; i++)
    {
        if (p == t)
        {
            bool flag = true;
            for (int j = 0; j < m; j++)
            {
                if (txt[i + j] != pat[j])
                {
                    flag = false;
                    break;
                }
            }
            if (flag){
                cout << i << " ";
                x++;
            }
        }
        // computing t(i+1) using t(i)
        if (i < n - m)
        {
            t = ((d * (t - txt[i] * h) + txt[i + m]) % q);
            if (t < 0)
                t = t + q;
        }
    }
    if(x==0){
        cout<<"Not Found"<<"\n";
    }
}
int main()
{

    // Rabin Karp Algorithm
    string txt, pat;
    cin >> txt >> pat;
    RBSearch(txt, pat);
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{

    unordered_set<int> s;
    s.insert(20);
    s.insert(15);
    s.insert(45);
    s.insert(56);
    for (int x : s)
        cout << x << " ";
    cout << "\n";
    if (s.find(15) == s.end())
    {
        cout << "Not Found";
    }
    else
    {
        cout << "Found" << (*s.find(15));
    }
    cout<<endl;
    if (s.count(15))
        cout << "Found";
    else
        cout << "Not Found";
    cout << endl;

    cout << s.size() << endl;
    s.erase(15);
    cout << s.size() << endl;
    auto it = s.find(10);
    s.erase(it);
    cout << s.size() << endl;

    s.erase(s.begin(), s.end());

    return 0;
}
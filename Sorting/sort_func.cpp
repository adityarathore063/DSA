#include <bits/stdc++.h>
using namespace std;

struct point {
    int x, y;
};
bool myComp(point p1, point p2){
    return p1.x<p2.x;
}
int main()
{
    // For Array
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for (int x : arr)
    {
        cout << x << " ";
    }
    cout << "\n";
    sort(arr, arr + n, greater<int>());
    for (int x : arr)
    {
        cout << x << " ";
    }
    cout << "\n";
    // For vector
    vector<int> v = {10, 20, 5, 7};

    sort(v.begin(), v.end());

    for (int x : v)
        cout << x << " ";

    sort(v.begin(), v.end(), greater<int>());

    cout << endl;
    for (int x : v)
        cout << x << " ";
    // We can create own order of sorting
    point arrr[] = {{3,10},{2,8},{5,4}};
    int y=sizeof(arrr)/sizeof(arrr[0]);
	sort(arrr,arrr+y,myComp);
	
	for(auto i: arrr)
	    cout<<i.x<<" "<<i.y<<endl;
        
    return 0;
}
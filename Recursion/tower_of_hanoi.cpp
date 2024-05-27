#include<bits/stdc++.h>
using namespace std;

void tower_of_hanoi(int n, char a, char b, char c){
    if(n==1){
        cout<<"Move 1 from "<<a<<" to "<<c<<"\n";
        return;
    }
    tower_of_hanoi(n-1,a, c, b);
    cout<<"Move "<<n<<" from "<<a<<" to "<<c<<"\n";
    tower_of_hanoi(n-1, b, a, c);
}
int main(){

    // Tower of hanoi problem
    int n;
    cin>>n;
    tower_of_hanoi(n, 'A', 'B', 'C');
    return 0;
}
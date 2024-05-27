#include<bits/stdc++.h>
using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void processing(vector<int> *v){

}

void getaddmulti(int x, int y, int *ptr1, int *ptr2){
    *ptr1 = x+y;
    *ptr2 = x*y;
}

void func(int *ptr){ // or use ptr[] // in function never use array.size
    for(int i = 0; i<4; i++){
        cout<<*(ptr+i)<<" "; // or use ptr[i]
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Not a good idea of doing this
    // int x;
    // int *ptr = &x;
    // cout<<ptr<<"\n";
    // cout<<*ptr;

    // Size of a pointer
    int x = 10;
    float f = 4.6;
    string s = "aditya";
    int *ptr1 = &x;
    float *ptr2 = &f;
    string *ptr3 = &s;
    // All of below are give the same size
    cout<<sizeof(ptr1)<<"\n";
    cout<<sizeof(ptr2)<<"\n";
    cout<<sizeof(ptr3)<<"\n";

    // Application of pointer
    // 1. Swapping
    int a = 25, b = 20;
    swap(&a, &b);
    cout<<a<<" "<<b<<"\n";
    // 2.passing large objects (avoid copying)
    vector<int> v;
    for(int i = 0; i<1000; i++){
        v.push_back(i);
    }
    processing(&v);
    // 3. in dynamic memory allocation
    // 4. implementing data structures 
    // 5. to do system level programming
    // 6. to return multiple values (see below)
    int _a = 10;
    int _b = 5;
    int m, n;
    getaddmulti(_a, _b, &m, &n);
    cout<<m<<" "<<n<<"\n";
    // 7. used for accesing array member
    int arr[] = {10, 20, 30, 40};
    // int *ptr4 = arr; // this is also way of declaration
    int *ptr4;
    ptr4 = arr; // it means ptr4 stores the address of 1st element of arr
    cout<<*ptr4<<"\n"; // it gives the value of 1st element
    cout<<*(ptr4+2)<<"\n"; // it gives the value of 3rd element

    func(arr);

    return 0;
}
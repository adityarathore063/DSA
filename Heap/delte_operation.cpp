#include <bits/stdc++.h>
using namespace std;

class Minheap
{
    int *arr;
    int size, capacity;

public:
    Minheap(int c)
    {
        arr = new int[c];
        capacity = c;
        size = 0;
    }
    int left(int i)
    {
        return 2 * i + 1;
    }
    int right(int i)
    {
        return 2 * i + 2;
    }
    int parent(int i)
    {
        return (i - 1) / 2;
    }

    void insert(int x)
    {
        if (size == capacity)
            return;
        size++;
        arr[size - 1] = x;
        for (int i = size - 1; i != 0 and arr[parent(i)] > arr[i];)
        {
            swap(arr[i], arr[parent(i)]);
            i = parent(i);
        }
    }

    void minHeapify(int i){
        int lt = left(i), rt = right(i);
        int smallest = i;
        if(lt<size and arr[lt]<arr[i]){
            smallest = lt;
        }
        if(rt<size and arr[rt]<arr[smallest]){
            smallest = rt;
        }
        if(smallest!=i){
            swap(arr[i], arr[smallest]);
            minHeapify(smallest);
        }
    }

    int extraction(){
        if(size==0){
            return INT_MAX;
        }
        if(size==1){
            size--;
            return arr[0];
        }
        swap(arr[0],arr[size-1]);
        size--;
        minHeapify(0);
        return arr[size];
    }

    void decrease_key(int i, int x){
        arr[i] = x;
        while(i!=0 and arr[parent(i)]>arr[i]){
            swap(arr[i], arr[parent(i)]);
            i = parent(i);
        }
    }

    void delete_operation(int i){
        decrease_key(i,INT_MIN);
        extraction();
    }
    
};
int main()
{
    Minheap h(12);
    h.insert(10);
    h.insert(20);
    h.insert(40);
    h.insert(80);
    h.insert(100);
    h.insert(70);

    cout<<h.extraction()<<"\n";
    h.decrease_key(3,5);
    cout<<h.extraction()<<"\n";
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

struct MyHash
{
    int *arr;
    int cap, size;
    MyHash(int c)
    {
        cap = c;
        size = 0;
        arr = new int[cap];
        for (int i = 0; i < cap; i++)
            arr[i] = -1;
    }
    int hash(int key)
    {
        return key % cap;
    }

    // Search function
    bool search(int key)
    {
        int h = hash(key);
        int i = h;
        while (arr[i] != -1)
        {
            if (arr[i] == key)
            {
                return true;
            }
            i = (i + 1) % cap;
            if (i == h)
            {
                return false;
            }
        }
        return false;
    }

    // Insert Method
    bool insert(int key)
    {
        if (size == cap)
            return false;
        int i = hash(key);
        while (arr[i] != -1 && arr[i] != -2 && arr[i] != key)
            i = (i + 1) % cap;
        if (arr[i] == key)
            return false;
        else
        {
            arr[i] = key;
            size++;
            return true;
        }
    }
    //Erase Method
    bool erase(int key)
    {
        int h = hash(key);
        int i = h;
        while (arr[i] != -1)
        {
            if (arr[i] == key)
            {
                arr[i] = -2;
                return true;
            }
            i = (i + 1) % cap;
            if (i == h)
            {
                return false;
            }
        }
        return false;
    }
};
int main()
{
    MyHash mh(7);
    cout << mh.insert(49) << "\n";
    cout << mh.insert(63) << "\n";
    cout << mh.insert(57) << "\n";
    cout << mh.insert(78) << "\n";
    cout << mh.insert(45) << "\n";
    cout << mh.search(49) << "\n";
    cout << mh.search(7) << "\n";
    cout << mh.erase(49) << "\n";
    cout << mh.search(49) << "\n";
    return 0;
}
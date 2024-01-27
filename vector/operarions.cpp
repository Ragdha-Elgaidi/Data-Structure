#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <vector>
#include <string.h>
#include <cctype> // for tolower function
#include <cstring>//memset
#include <stack>
#include <queue>
#include <deque>
#include <tuple> 
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <fstream>
#include <sstream>
#include <cassert>


#define ll  long long
#define Ragdha ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

class Vector
{
private:
    int* arr = nullptr;
    int size = 0;
    int capacity;

    void expand_capcity()
    {
        capacity *= 2;
        int* arr2 = new int[capacity] {};

        for (int i = 0; i < size; i++)
            arr2[i] = arr[i];

        swap(arr, arr2);
        delete arr2;

    }
public:
    Vector(int size) :
        size(size)
    {
        if (size < 0)
            size = 1;
        capacity = size + 10;
        arr = new int [capacity] {};
    }
    ~Vector()
    {
        delete arr;
        arr = nullptr;
    }
    int get_size()
    {
        return size;
    }
    int get(int indx)
    {
        assert(0 <= indx && indx < size);
        return arr[indx];
    }
    void set(int indx, int val)
    {
        assert(0 <= indx && indx < size);
        arr[indx] = val;
    }
    void print()
    {
        for (int i = 0; i < size; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    int find(int val)
    {
        for (int i = 0; i < size; i++)
            if (arr[i] == val)
                return i;
        return -1;
    }
    void push_back(int value)
    {
        if (size == capacity)
            expand_capcity();
        arr[size++] = value;
    }
    void insert(int indx, int value)
    {
        assert(0 <= indx && indx < size);

        if (size == capacity)
            expand_capcity();

        for (int p = size - 1; p >= indx; --p)
            arr[p + 1] = arr[p];

        arr[indx] = value;
        ++size;

    }
    void rigth_rotation()
    {
        int last_element = arr[size - 1];
        for (int p = size - 2; p >= 0; p--)
            arr[p + 1] = arr[p];
        arr[0] = last_element;
    }
    void left_rotation()
    {
        int first_element = arr[0];
        for (int p = 1; p < size; p++)
            arr[p - 1] = arr[p];
        arr[size - 1] = first_element;
    }
    void right_rotate(int times) 
    {
        times %= size;
        while (times--)
            right_rotate(times);
    }

    int pop(int idx) 
    {
        assert(0 <= idx && idx < size);
        int val = arr[idx];
        for (int p = idx + 1; p < size; ++p)
            arr[p - 1] = arr[p];

        --size;
        return val;
    }

    int find_transposition(int value) 
    {
        for (int i = 0; i < size; ++i)
            if (arr[i] == value) 
            {
                if (i == 0)	
                    return 0;
                swap(arr[i], arr[i - 1]);
                return i - 1;	
            }
        return -1;	
};

int main()
{
  
}

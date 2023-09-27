#include<bits/stdc++.h>
using namespace std;

class heap {
public:
    int arr[100];
    int size = 0;
    
    heap(){
        arr[0] =-1;
        size= 0;
    }

    void insert(int val) {
        size = size+1;
        int index = size;
        arr[index] = val;

        while(index > 1) {
            int parent = index / 2;
            if(arr[parent] < arr[index]) {
                swap(arr[parent], arr[index]);
                index = parent;
            } else {
                return;
            }
        }
    }

    void print(){
        for (int i = 1; i <= size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    heap h;  // creating an object of class heap
    h.insert(45);
    h.insert(55);
    h.insert(76);
    h.insert(43);
    h.insert(89);
    h.print();  // using the object h to call the print function
    return 0;
}

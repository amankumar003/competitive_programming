#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        
        int arr[n];
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int count = 1; // The first car will always go at its maximum speed
        int minSpeed = arr[0]; // Set the speed of the first car as the minimum speed

        // Start from the second car
        for(int i = 1; i < n; i++) {
            if(arr[i] <= minSpeed) { // If the current car's max speed is less than or equal to the minimum so far
                count++; // It will go at its max speed
                minSpeed = arr[i]; // Update the minimum speed
            }
        }
        cout << count << endl;
    }

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 4, 1, 6, 8, 9, 0};

    int max = -999999;

    for (int i = 0; i < 7; i++) {
        if (arr[i] > max) max = arr[i];
    }

    cout << max << endl;

    return 0; 
}
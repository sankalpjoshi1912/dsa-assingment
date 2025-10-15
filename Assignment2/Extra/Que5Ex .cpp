#include <iostream>
using namespace std;

void duplicateTwos(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; ++i)
        if (arr[i] == 2)
            count++;
    
    int i = n - 1;
    int j = n + count - 1;

    while (i >= 0)
    {
        if (j < n)
            arr[j] = arr[i];
        if (arr[i] == 2)
        {
            j--;
            if (j < n) arr[j] = 2;
        }
        i--;
        j--;
    }
}

int main() {
    int arr[] = {1, 2, 3, 2, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    duplicateTwos(arr, n);
    
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << endl;
}

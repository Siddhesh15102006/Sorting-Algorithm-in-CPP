// Exp - 20
// Siddhesh
// 25070123505 (A3)

#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        swap(arr[i], arr[minIndex]);
    }
}

void display(int arr[], int n) {
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[5] = {64, 25, 12, 22, 11};

    cout << "Original array: ";
    display(arr, 5);

    selectionSort(arr, 5);

    cout << "Sorted array: ";
    display(arr, 5);

    return 0;
}

Output :-
Original array: 64 25 12 22 11 
Sorted array: 11 12 22 25 64 


=== Code Execution Successful ===

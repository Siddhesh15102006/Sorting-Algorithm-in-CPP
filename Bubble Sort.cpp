// Exp - 20
// Siddhesh
// 25070123505 (A3)

#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        bool swap = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swap = true;
            }
        }
        if (!swap) break;
    }
}

void display(int arr[], int n) {
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[5] = {64, 34, 25, 12, 22};

    cout << "Original array: ";
    display(arr, 5);

    bubbleSort(arr, 5);

    cout << "Sorted array: ";
    display(arr, 5);

    return 0;
}

Output :-
Original array: 64 34 25 12 22 
Sorted array: 12 22 25 34 64 


=== Code Execution Successful ===

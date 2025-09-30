---
# 🧪 Experiment 20 :- Implementing Sorting Algorithm in C++

---

## 📚 Theory

Sorting is the process of arranging data in a particular format or order — typically ascending or descending. Efficient sorting improves the performance of algorithms that require sorted data (e.g., search algorithms).

Different sorting algorithms use different techniques and have varying time complexities. Some are efficient for small datasets, while others are better suited for large datasets.

- **Quick Sort** is a divide-and-conquer algorithm that partitions the array around a pivot and recursively sorts the subarrays.
- **Selection Sort** repeatedly selects the smallest (or largest) element from the unsorted portion and places it in the correct position.
- **Bubble Sort** repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order.

Each of these algorithms provides a unique way to sort data and has its advantages and disadvantages depending on the situation.

---

## ✅ Q1. Quick Sort
---
### 📌 Syntax
void quickSort(int arr[], int low, int high);
int partition(int arr[], int low, int high);
🧠 Logic
Choose a pivot element.
Partition the array such that:
Elements < pivot go to the left
Elements > pivot go to the right
Recursively sort the subarrays.

### 💻 Code
```cpp
#include <iostream>
using namespace std;

int partition(int arr[], int low, int high) {
    int pivot = arr[high]; 
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int partIndex = partition(arr, low, high);
        quickSort(arr, low, partIndex - 1);
        quickSort(arr, partIndex + 1, high);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[] = {34, 7, 23, 32, 5, 62};
    int n = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, n - 1);

    cout << "Sorted Array (Quick Sort): ";
    printArray(arr, n);

    return 0;
}
```

---

## ✅ Q2. Selection Sort

### 📌 Syntax
void selectionSort(int arr[], int n);

🧠 Logic
Find the minimum element in the unsorted part.
Swap it with the first unsorted element.
Repeat for the rest of the array.

### 💻 Code
```cpp
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

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[] = {29, 10, 14, 37, 13};
    int n = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, n);

    cout << "Sorted Array (Selection Sort): ";
    printArray(arr, n);

    return 0;
}
```

---

## ✅ Q3. Bubble Sort

### 📌 Syntax
void bubbleSort(int arr[], int n);

🧠 Logic
Repeatedly compare adjacent elements.
Swap if they are in the wrong order.
Continue until the array is sorted.

### 💻 Code
```cpp
#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;

        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        // If no two elements were swapped in inner loop, array is sorted
        if (!swapped)
            break;
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[] = {5, 1, 4, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, n);

    cout << "Sorted Array (Bubble Sort): ";
    printArray(arr, n);

    return 0;
}
```

---

✅ Conclusion
In this experiment, we successfully :-
1. Understood and implemented three sorting algorithms: Quick Sort, Selection Sort, and Bubble Sort.
2. Compared their logic and efficiency.
3. Observed how algorithm choice impacts performance based on input size and type.
This foundational knowledge is essential for building efficient algorithms and understanding computational complexity in data structures and algorithms (DSA).
---

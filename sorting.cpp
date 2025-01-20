#include <iostream>
using namespace std;

// Function to swap two elements in the array
void swap(double &a, double &b) {
    double temp = a;
    a = b;
    b = temp;
}

// Function to restore heap property
void heapify(double arr[], int n, int i) {
    int largest = i; // Initialize largest as root
    int left = 2 * i + 1; // Left child index
    int right = 2 * i + 2; // Right child index

    // If left child is larger than root
    if (left < n && arr[left] > arr[largest])
        largest = left;

    // If right child is larger than largest so far
    if (right < n && arr[right] > arr[largest])
        largest = right;

    // If largest is not root
    if (largest != i) {
        swap(arr[i], arr[largest]); // Swap

        // Recursively heapify the affected sub-tree
        heapify(arr, n, largest);
    }
}

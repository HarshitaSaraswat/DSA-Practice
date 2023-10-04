#include <iostream>
using namespace std;


void reverse_Array(int arr[], int n) {
    int start = 0;
    int end = n - 1;

    while (start < end) {
        
       int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;


        start++;
        end--;
    }
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int* arr = new int[n]; 

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "The original array is: "<<endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    reverse_Array(arr, n);

    cout << "\nThe reversed array is: "<<endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    delete[] arr; 

    return 0;
}

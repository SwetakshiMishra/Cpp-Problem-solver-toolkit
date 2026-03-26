#include <iostream>
using namespace std;

// Function to calculate factorial
int factorial(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Function to check prime
bool isPrime(int n) {
    if(n <= 1) return false;
    for(int i = 2; i < n; i++) {
        if(n % i == 0) return false;
    }
    return true;
}

// Function for bubble sort
void sortArray(int arr[], int n) {
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }

    cout << "Sorted array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function for linear search
void searchElement(int arr[], int n, int key) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            cout << "Element found at index: " << i << endl;
            return;
        }
    }
    cout << "Element not found" << endl;
}

// Function for Fibonacci
void fibonacci(int n) {
    int a = 0, b = 1, c;
    cout << "Fibonacci series: ";
    for(int i = 0; i < n; i++) {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }
    cout << endl;
}

// MAIN FUNCTION
int main() {
    int choice;

    do {
        cout << "\n===== C++ Problem Solver Toolkit =====\n";
        cout << "1. Factorial\n";
        cout << "2. Prime Check\n";
        cout << "3. Sort Array\n";
        cout << "4. Search Element\n";
        cout << "5. Fibonacci Series\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if(choice == 1) {
            int n;
            cout << "Enter number: ";
            cin >> n;
            cout << "Factorial: " << factorial(n) << endl;
        }

        else if(choice == 2) {
            int n;
            cout << "Enter number: ";
            cin >> n;
            if(isPrime(n))
                cout << "It is Prime\n";
            else
                cout << "Not Prime\n";
        }

        else if(choice == 3) {
            int n;
            cout << "Enter size: ";
            cin >> n;
            int arr[n];
            cout << "Enter elements:\n";
            for(int i = 0; i < n; i++) cin >> arr[i];
            sortArray(arr, n);
        }

        else if(choice == 4) {
            int n, key;
            cout << "Enter size: ";
            cin >> n;
            int arr[n];
            cout << "Enter elements:\n";
            for(int i = 0; i < n; i++) cin >> arr[i];
            cout << "Enter element to search: ";
            cin >> key;
            searchElement(arr, n, key);
        }

        else if(choice == 5) {
            int n;
            cout << "Enter number of terms: ";
            cin >> n;
            fibonacci(n);
        }

        else if(choice == 6) {
            cout << "Exiting...\n";
        }

        else {
            cout << "Invalid choice!\n";
        }

    } while(choice != 6);

    return 0;
}
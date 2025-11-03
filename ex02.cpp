#include <iostream>

int sum_array(int* a, int size){
    int sum = 0;

    for (int* p = a; p < a + size; p++){
        sum += *p;
    }

    return sum;
}

int main() {
    // Test 1
    int arr1[] = {10, 20, 30, 40, 50};
    std::cout << "Suma arr1: " << sum_array(arr1, 5) << "\n";  // 150
    
    // Test 2
    int arr2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::cout << "Suma arr2: " << sum_array(arr2, 10) << "\n"; // 55
    
    // Test 3
    int arr3[] = {100};
    std::cout << "Suma arr3: " << sum_array(arr3, 1) << "\n";  // 100
    
    return 0;
}
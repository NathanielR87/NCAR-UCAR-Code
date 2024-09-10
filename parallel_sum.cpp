#include <iostream>
#include <omp.h>
#include <vector>

int main() {
    // Number of elements in the array
    int N = 1000000;
    std::vector<int> arr(N, 1); // Initialize array with 1s
    
    // Variable to store the total sum
    long long sum = 0;

    // Parallel region starts here, using OpenMP
    #pragma omp parallel for reduction(+:sum)
    for (int i = 0; i < N; ++i) {
        sum += arr[i];
    }

    // Print the result
    std::cout << "Sum: " << sum << std::endl;

    return 0;
}


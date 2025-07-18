#include <iostream>
#include <cmath>   // For sqrt() to verify results
#include <cstdlib> // For rand()
#include <ctime>   // For random seed
using namespace std;

// Function to check if a number is a perfect square using Binary Search
bool perfect_sq(int n)
{
    int low = 0, high = n;
    while (low <= high)
    {
        long long mid = low + (high - low) / 2, square = mid * mid;
        if (square == n)
            return true;
        else if (square < n)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return false;
}

int main()
{
    srand(time(0)); // Seed random number generator

    int total_tests = 1000;
    int passed = 0;

    cout << "Running 1000 test cases for Q5...\n\n";

    for (int i = 1; i <= total_tests; i++)
    {
        // Generate a random number (including large values)
        int n = rand() % 1000000; // Random number between 0 and 999999

        // Generate some perfect squares for testing
        if (i % 10 == 0)
        { // Every 10th test case will be a perfect square
            int x = rand() % 1000;
            n = x * x;
        }

        // Expected result using sqrt()
        bool expected = (sqrt(n) == floor(sqrt(n)));
        bool actual = perfect_sq(n);

        // Print each test case and result
        cout << "Test " << i << ": n = " << n;
        if (expected == actual)
        {
            cout << "  Passed\n";
            passed++;
        }
        else
        {
            cout << " Failed (Expected: " << expected << ", Got: " << actual << ")\n";
        }
    }

    // Summary of results
    cout << "\n Testing Complete! Passed: " << passed << "/" << total_tests << " test cases.\n";

    return 0;
}

// Recursive C++ program to find minimum
#include <iostream>
using namespace std;
 
// function to print Minimum element using recursion
int findMinRec(int A[], int n)
{
    // if size = 0 means whole array has been traversed
    if (n == 1)
        return A[0];
    return min(A[n-1], findMinRec(A, n-1));
}
 
// driver code to test above function
int main()
{
    int A[] = {1, 4, 45, 6, -50, 10, 2};
    int n = sizeof(A)/sizeof(A[0]);
    cout <<  findMinRec(A, n);
    return 0;
}
// Recursive C++ program to find maximum
#include <iostream>
using namespace std;
 
// function to return maximum element using recursion
int findMaxRec(int A[], int n)
{
    // if n = 0 means whole array has been traversed
    if (n == 1)
        return A[0];
    return max(A[n-1], findMaxRec(A, n-1));
}
 
// driver code to test above function
int main()
{
    int A[] = {1, 4, 45, 6, -50, 10, 2};
    int n = sizeof(A)/sizeof(A[0]);
    cout <<  findMinRec(A, n);
    return 0;
}

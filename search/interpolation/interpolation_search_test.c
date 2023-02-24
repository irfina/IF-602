// import interpolation_search.c
#include <stdio.h>
#include "interpolation_search.c"

void test_path1()
{
    // initialize empty array
    int arr[] = {};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 777;

    int result = interpolationSearch(arr, n, key);
    if (result == -1)
        printf("Path-1: Test passed\n");
    else
        printf("Path-1: Test failed\n");
}

void test_path2()
{
    // initialize array of 15 integers with random values
    int arr[] = {10, 12, 13, 16, 18, 19, 20, 21, 22, 23, 24, 33, 35, 42, 47};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 16;

    int result = interpolationSearch(arr, n, key);
    if (result != -1)
        printf("Path-2: Test passed. Element found at index %d. \n", result);
    else
        printf("Path-2: Test failed\n");
}

void test_path3()
{
    // initialize array of 30 integers with non-repeating values
    int arr[] = {10, 12, 13, 16, 18, 19, 20, 21, 22, 23, 
                24, 33, 35, 42, 47, 50, 51, 52, 53, 54, 
                55, 56, 57, 58, 59, 60, 61, 62, 63, 64};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int key = 50;
    int result = interpolationSearch(arr, n, key);

    if (result != -1)
        printf("Path-3: Test passed\n");
    else
        printf("Path-3: Test failed\n");
}

void test_path4()
{
    // initialize array of 30 integers with non-repeating values
    int arr[] = {10, 12, 13, 16, 18, 19, 20, 21, 22, 23, 
                24, 33, 35, 42, 47, 50, 51, 52, 53, 54, 
                55, 56, 57, 58, 59, 60, 61, 62, 63, 64};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 18;

    int result = interpolationSearch(arr, n, key);
    if (result != -1)
        printf("Path-4: Test passed\n");
    else
        printf("Path-4: Test failed\n");
}

int main()
{
    test_path1();
    test_path2();
    test_path3();
    test_path4();
}

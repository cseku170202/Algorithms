
// C++ program to sort an array using bucket sort
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// Function to sort arr[] of size n using bucket sort
void bucketSort(float arr[], int n)
{
    // 1) Create n empty buckets
    vector<float> b[n];

    //2) Put array elements in different buckets
    for (int i=0; i<n; i++)
    {
       int bi = n*arr[i]; /// Index in bucket
       b[bi].push_back(arr[i]);
    }

    // 3) Sort individual buckets
    for (int i=0; i<n; i++)
       sort(b[i].begin(), b[i].end());

    // 4) Concatenate all buckets into arr[]
    int index = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < b[i].size(); j++)
          arr[index++] = b[i][j];
}

/* Driver program to test above funtion */
int main()
{
  //  float i;
  //  float arr[99];
  //  float p=0.00;
    float arr[] = {0.10, 0.20, 0.30, 0.40, 0.50, 0.60, 0.70, 0.80, 0.90, 0.11, 0.12, 0.13, 0.14, 0.15, 0.16, 0.17, 0.18, 0.19, 0.21, 0.22, 0.23, 0.24, 0.25 ,0.26,0.27,0.28,0.29,0.3,0.31,0.32,0.33,0.34,0.35,0.36,0.37,0.38,0.39,0.41,0.42,0.43,0.44,0.45,0.46,0.47,0.48,0.49,0.51,0.52,0.53,0.54,0.55,0.56,0.57,0.58,0.59,0.61,0.62,0.63,0.64,0.65,0.66,0.67,0.68,0.69,0.71,0.72,0.73,0.74,0.75,0.76,0.77,0.78,0.79,0.81,0.82,0.82,0.84,0.85,0.86,0.87,0.88,0.89,0.91,0.92,0.93,0.94,0.95,0.96,0.97,0.98,0.99};
  //  for(i=0;i<99;i++)
  //  {
  //      p=p+0.1;
  //      arr[i]=p;
 //   }
    int n = sizeof(arr)/sizeof(arr[0]);
    bucketSort(arr, n);

   // cout << "Sorted array is \n";
    for (int i=0; i<n; i++)
       cout << arr[i] << "  ";
    return 0;
}

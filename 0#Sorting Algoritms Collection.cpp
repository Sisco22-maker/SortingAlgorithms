/*
(اللهم صلْ وسلم وزد وبارك على سيدنا محمد )

꧁IslaM_SobhY꧂

 */
#include <bits/stdc++.h>
using namespace std;
#define  el "\12"
void print(int arr[],int n)
{
     for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " \n"[i == n-1];
    }

}
//------------------------------------------------------------------//
//Selection sort algorithm it takes O(n^2) time and space O(1)
void SelectionSort(int arr[],int n)
{
   for(int i = 0; i < n-1; i++)
    {
        int ind = i;
        for(int j = i+1; j < n; j++)
        {
            // to sort them desc just make > to be <
           if(arr[ind] > arr[j])
           {
               ind = j;
           }
        }
        swap(arr[i],arr[ind]);
    }
    print(arr,n);
}
//----------------------------------------------------------------//
//bubble sort algorithm takes O(n^2) time complexity and O(1) space complexity

void BubbleSort(int arr[], int n)
{
    bool alreadySorted = true;
    for(int i = 0; i < n-1&&alreadySorted; i++)
    {
        //
        for(int j = i; j < n; j++)
        {
            // to make it desc just make > to be <
            if(arr[i] > arr[j])
            {
                swap(arr[i],arr[j]);
                alreadySorted = 0;
            }
        }

    }
    print(arr,n);
}
//----------------------------------------------------------------------//
//insertion sort algorithm takes O(n^2) time complexity and O(1) space complexity
void InsertionSort(int arr[],int n)
{
    for(int i = 1; i < n; i++)
    {
        int element = arr[i];
        int ind = i - 1;
        while(ind >=0 && arr[ind] > element)
        {
            arr[ind+1] = arr[ind];
            --ind;
        }
        arr[ind+1] = element;
    }
    print(arr,n);
}
//---------------------------------------------------------------------//

// merge sort algorithm
// Merge two subarrays L and M into arr
void Merge(int arr[], int p, int q, int r) {

  // Create boundries
  int n1 = q - p + 1;
  int n2 = r - q;

  int L[n1], M[n2];

  for (int i = 0; i < n1; i++)
    L[i] = arr[p + i];
  for (int j = 0; j < n2; j++)
    M[j] = arr[q + 1 + j];

  // make indecators to merge the arrays
  int i, j, k;
  i = 0;
  j = 0;
  k = p;

  while (i < n1 && j < n2) {
    if (L[i] <= M[j]) {
      arr[k] = L[i];
      i++;
    } else {
      arr[k] = M[j];
      j++;
    }
    k++;
  }


  while (i < n1) {
    arr[k] = L[i];
    i++;
    k++;
  }

  while (j < n2) {
    arr[k] = M[j];
    j++;
    k++;
  }
}

// Divide the array into two subarrays, sort them and merge them
void mergeSort(int arr[], int l, int r) {
  if (l < r) {
    // m is the point where the array is divided into two subarrays
    int m = l + (r - l) / 2;

    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);

    // Merge the sorted subarrays
    Merge(arr, l, m, r);
  }

}
//-----------------------------------------------------//

// function to swap elements
void Swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}


int MakingPartion(int arr[], int low, int high) {


  int pivot = arr[high];

  int i = (low - 1);


  for (int j = low; j < high; j++) {
    if (arr[j] <= pivot) {

      // if element smaller than pivot is found
      // swap it with the greater element pointed by i
      i++;

      // swap element at i with element at j
      Swap(&arr[i], &arr[j]);
    }
  }

  // swap pivot with the greater element at i
  Swap(&arr[i + 1], &arr[high]);

  // return the partition point
  return (i + 1);
}

void quickSort(int arr[], int low, int high) {
  if (low < high) {


    int pi = MakingPartion(arr, low, high);

    // recursive call on the left of pivot
    quickSort(arr, low, pi - 1);

    // recursive call on the right of pivot
    quickSort(arr, pi + 1, high);
  }
}

//------------------------------------------------------//
int main() {

int t = 1;
while(t--)
{
    int arr[5] = {7,4,3,9,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    //SelectionSort(arr,n);
    //BubbleSort(arr,n);
    //InsertionSort(arr,n);
    //mergeSort(arr,0,n-1);
   //quickSort(arr,0,n-1);
    //print(arr,n);



}
  return 0;
}






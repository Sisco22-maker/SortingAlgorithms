/*
(اللهم صلْ وسلم وزد وبارك على سيدنا محمد )

꧁IslaM_SobhY꧂

 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define  el "\12"
int partionning(int arr[],int l,int r)
{
    int location = l;
    while(true)
    {
        while(arr[location] <= arr[r] && location != r)r--;
        if(location == r)
        {
            break;
        }else if(arr[location] > arr[r])
        {
            swap(arr[location],arr[r]);
            location = r;
        }
        while(arr[location] > arr[l] && location != l)
        {
            l++;
        }
        if(location == l)
        {
            break;
        }else if(arr[location] < arr[l])
        {
            swap(arr[location],arr[l]);
            location = l;
        }
    }
    return location;
}
void quick_sort(int arr[],int l,int r)
{
    if(l < r)
    {
        int pivot = partionning(arr,l,r);
        quick_sort(arr,l,pivot-1);
        quick_sort(arr,pivot+1,r);
    }
}
int main() {
int arr[] = {1,2,7,5,4,7,5};
quick_sort(arr,0,6);
for(int i = 0; i < 7; i++)cout << arr[i] << " ";
cout << el;
  return 0;
}






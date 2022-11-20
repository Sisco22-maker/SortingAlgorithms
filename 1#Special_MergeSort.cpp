/*
(اللهم صلْ وسلم وزد وبارك على سيدنا محمد )

꧁IslaM_SobhY꧂

 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define  el "\12"
void merge_array(int arr[],int l,int r,int m)
{
    const int sl = m - l + 1;
    const int sr = r - m;
    int arr_l[sl];
    int arr_r[sr];
    int i,j,k;
    for(int i = 0; i < sl; i++)arr_l[i] = arr[i + l];
    for(int i = 0; i < sr; i++)arr_r[i] = arr[i + m + 1];
    i = 0,j = 0 ,k = l;
    while(i < sl && j < sr)
    {
        if(arr_l[i] <= arr_r[j])
        {
            arr[k++] = arr_l[i++];
        }else
        {
            arr[k++] = arr_r[j++];
        }
    }
    while(i < sl)
    {
        arr[k++] = arr_l[i++];
    }
    while(j < sr)
    {
        arr[k++] = arr_r[j++];
    }
}
void merge_sort(int arr[],int l,int r)
{
    if(l < r)
    {
        int m = l + (r-l)/2;
        merge_sort(arr,l,m);
        merge_sort(arr,m+1,r);
        merge_array(arr,l,r,m);
    }
}
int main() {
int arr[] = {4,7,5,4,8,2,1};
merge_sort(arr,0,6);
for(int i = 0; i < 7; i++)cout << arr[i] << " ";
  return 0;
}






#include<bits/stdc++.h>
using namespace std;

int partition(vector<int>& arr,int low,int high){
    int pivot = arr[high];
    int smallerIndex = low - 1;
    for(int j = low;j<high; j++){
        if(arr[j] < pivot){
            smallerIndex++;
            swap(arr[smallerIndex],arr[j]);
        }
    }
    swap(arr[smallerIndex+1],arr[high]);
    return smallerIndex + 1;
}

void quickSort(vector<int>& arr,int low,int high){
    if(low>=high) return;
    int pivotidx = partition(arr,low,high);
    quickSort(arr,low,pivotidx-1);
    quickSort(arr,pivotidx+1,high);
}
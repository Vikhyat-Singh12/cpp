#include<iostream>
using namespace std;


void merge(int *arr, int s, int e) {
    int mid = s + (e - s) / 2;
    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    // Copy values from arr to first and second arrays
    for (int i = 0; i < len1; i++) {
        first[i] = arr[s + i]; // Correct indexing
    }

    for (int i = 0; i < len2; i++) {
        second[i] = arr[mid + 1 + i]; // Correct indexing
    }

    // Merge two sorted arrays
    int index1 = 0;
    int index2 = 0;
    int mainArrayIndex = s;

    while (index1 < len1 && index2 < len2) {
        if (first[index1] < second[index2]) {
            arr[mainArrayIndex++] = first[index1++];
        } else {
            arr[mainArrayIndex++] = second[index2++];
        }
    }

    // Copy remaining elements of first array
    while (index1 < len1) {
        arr[mainArrayIndex++] = first[index1++];
    }

    // Copy remaining elements of second array
    while (index2 < len2) {
        arr[mainArrayIndex++] = second[index2++];
    }

    delete[] first;
    delete[] second;
}


void mergeSort(int arr[],int s,int e){
    // base case
    if(s>=e) return;

    int mid = s + (e-s)/2;

    // left part sort karana hai
    mergeSort(arr,s,mid);
    // right part sort karana hai
    mergeSort(arr,mid+1,e);

    // merge
    merge(arr,s,e);

}



int main(){
    int arr[5] = {2,5,1,6,9};
    int n = 5;

    mergeSort(arr,0,n-1);
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
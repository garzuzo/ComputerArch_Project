#include <iostream>
#include<stdlib.h>
#include<stdio.h>
#include<fstream>
#include <string>
using namespace std;
//TO COMPILE:
//1. g++ <name>.cpp
//2. ./a.out
void swap(int* a, int* b) 
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
} 
  
/* This function takes last element as pivot, places 
   the pivot element at its correct position in sorted 
    array, and places all smaller (smaller than pivot) 
   to left of pivot and all greater elements to right 
   of pivot */
int partition (int arr[], int low, int high) 
{ 
    int pivot = arr[high];    // pivot 
    int i = (low - 1);  // Index of smaller element 
  
    for (int j = low; j <= high- 1; j++) 
    { 
        // If current element is smaller than or 
        // equal to pivot 
        if (arr[j] <= pivot) 
        { 
            i++;    // increment index of smaller element 
            swap(&arr[i], &arr[j]); 
        } 
    } 
    swap(&arr[i + 1], &arr[high]); 
    return (i + 1); 
} 
  
/* The main function that implements QuickSort 
 arr[] --> Array to be sorted, 
  low  --> Starting index, 
  high  --> Ending index */
void quickSort(int arr[], int low, int high) 
{ 
    if (low < high) 
    { 
        /* pi is partitioning index, arr[p] is now 
           at right place */
        int pi = partition(arr, low, high); 
  
        // Separately sort elements before 
        // partition and after partition 
        quickSort(arr, low, pi - 1); 
        quickSort(arr, pi + 1, high); 
    } 
} 

int main()
{
int n;
//variation of n
n=4;
   int arr[n];

   // int arr_size = sizeof(arr)/sizeof(arr[0]);
cout<<"now the array from the file"<<endl;

ifstream myReadFile;
myReadFile.open("inversoInt.txt");

for(int i=0;i<n;i++){

    myReadFile >> arr[i];
    cout<<arr[i]<<endl;


 }
myReadFile.close();

//sorting method and clocks per ms (*1000)
int start_s=clock();

        quickSort(arr,0,n-1);

int stop_s=clock();
cout << "time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000 << "ms"<<endl;

//print the result
cout<<"after sort"<<endl;
    for(int i=0;i<n;i++){
    
cout<<arr[i]<<endl;
    }




    
    return 0;
}

#include <iostream>
#include<stdlib.h>
#include<stdio.h>
#include<fstream>
#include <string>
using namespace std; 
  //TO COMPILE:
//1. g++ <name>.cpp
//2. ./a.out


// To heapify a subtree rooted with node i which is 
// an index in arr[]. n is size of heap 
void heapify(int arr[], int n, int i) 
{ 
    int largest = i; // Initialize largest as root 
    int l = 2*i + 1; // left = 2*i + 1 
    int r = 2*i + 2; // right = 2*i + 2 
  
    // If left child is larger than root 
    if (l < n && arr[l] > arr[largest]) 
        largest = l; 
  
    // If right child is larger than largest so far 
    if (r < n && arr[r] > arr[largest]) 
        largest = r; 
  
    // If largest is not root 
    if (largest != i) 
    { 
        swap(arr[i], arr[largest]); 
  
        // Recursively heapify the affected sub-tree 
        heapify(arr, n, largest); 
    } 
} 
  
// main function to do heap sort 
void heapSort(int arr[], int n) 
{ 
    // Build heap (rearrange array) 
    for (int i = n / 2 - 1; i >= 0; i--) 
        heapify(arr, n, i); 
  
    // One by one extract an element from heap 
    for (int i=n-1; i>=0; i--) 
    { 
        // Move current root to end 
        swap(arr[0], arr[i]); 
  
        // call max heapify on the reduced heap 
        heapify(arr, i, 0); 
    } 
} 


int main()
{


int n;
//variation of n
n=5;
   int arr[n];

   // int arr_size = sizeof(arr)/sizeof(arr[0]);
cout<<"now the array from the file"<<endl;

ifstream myReadFile;
myReadFile.open("text.txt");

for(int i=0;i<n;i++){

    myReadFile >> arr[i];
    cout<<arr[i]<<endl;


 }
myReadFile.close();

//sorting method and clocks per ms (*1000)
int start_s=clock();

    heapSort(arr,n-1);

int stop_s=clock();
cout << "time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000 << "ms"<<endl;

//print the result
cout<<"after sort"<<endl;
    for(int i=0;i<n;i++){
    
cout<<arr[i]<<endl;
    }


    return 0;
}

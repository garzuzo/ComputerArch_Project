#include <iostream>
#include<stdlib.h>
#include<stdio.h>
#include<fstream>
#include <string>
#include <time.h>
using namespace std;

#define GetSize(array_enteros) (sizeof(array_enteros)/sizeof(*(array_enteros)))

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


void swap(double* a, double* b)
{
    double t = *a;
    *a = *b;
    *b = t;
}

/* This function takes last element as pivot, places
   the pivot element at its correct position in sorted
    array, and places all smaller (smaller than pivot)
   to left of pivot and all greater elements to right
   of pivot */
int partition (double arr[], int low, int high)
{
    double pivot = arr[high];    // pivot
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
void quickSort(double arr[], int low, int high)
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

void swap(float* a, float* b)
{
    float t = *a;
    *a = *b;
    *b = t;
}

/* This function takes last element as pivot, places
   the pivot element at its correct position in sorted
    array, and places all smaller (smaller than pivot)
   to left of pivot and all greater elements to right
   of pivot */
int partition (float arr[], int low, int high)
{
    float pivot = arr[high];    // pivot
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
void quickSort(float arr[], int low, int high)
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


    string pc;


    string tipoOrdenamiento;

    int replica;


//CAMBIO
pc="PC C";
  tipoOrdenamiento="MergeSort";
replica=1;

string text=".txt";


int tam[6]={20000,100000,800000,5000000,50000000,85000000};
string arrTipoOrd[3]={"inverso","aleatorio","pseudo"};
string arrTipoDato[3]={"FLOAT","DOUBLE","INTEGER"};



string csv;


for(int j=0; j <GetSize(tam) ;j++){

int n=tam[j];

for(int k=0;k<GetSize(arrTipoOrd);k++){
    string tipoOrd = arrTipoOrd[k];

for(int w=0;w<GetSize(arrTipoDato);w++){
    string tipoDato = arrTipoDato[w];

    int arrInt[n];
    float arrFloat[n];
    double arrDouble[n];




if(tipoDato.compare("FLOAT")){

    ifstream myReadFile;
    string ruta;
    ruta.append(tipoOrd);
    ruta.append(tipoDato);
    ruta.append(to_string(n));
    ruta.append(text);
    myReadFile.open(ruta);

for(int i=0;i<n;i++){

    myReadFile >> arrFloat[i];
    cout<<arrFloat[i]<<endl;


 }
myReadFile.close();

}

else if(tipoDato.compare("DOUBLE")){

   ifstream myReadFile;
   string ruta;
    ruta.append(tipoOrd);
    ruta.append(tipoDato);
    ruta.append(to_string(n));
    ruta.append(text);
    myReadFile.open(ruta);
for(int i=0;i<n;i++){

    myReadFile >> arrDouble[i];
    cout<<arrDouble[i]<<endl;


 }
myReadFile.close();

}

else if(tipoDato.compare("INTEGER")){

   ifstream myReadFile;
   string ruta;
    ruta.append(tipoOrd);
    ruta.append(tipoDato);
    ruta.append(to_string(n));
    ruta.append(text);
    myReadFile.open(ruta);

for(int i=0;i<n;i++){

    myReadFile >> arrInt[i];
    cout<<arrInt[i]<<endl;


 }
myReadFile.close();
}







for(int z=0;z<3;z++){

if(tipoDato.compare("FLOAT")){

int start_s=clock();

   quickSort(arrFloat, 0, n-1);

int stop_s=clock();

 string ruta;
    ruta.append(pc);
    ruta.append(";");
    ruta.append(to_string(n));
    ruta.append(";");
    ruta.append(tipoOrdenamiento);
    ruta.append(";");
    ruta.append(tipoDato);
    ruta.append(";");
    ruta.append(tipoOrd);
    ruta.append(";");
    ruta.append(to_string(replica));
    ruta.append(";");

cout << ruta<< (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000<<endl;

}else if(tipoDato.compare("DOUBLE")){

int start_s=clock();

   quickSort(arrDouble, 0, n-1);

int stop_s=clock();
 string ruta;
    ruta.append(pc);
    ruta.append(";");
    ruta.append(to_string(n));
    ruta.append(";");
    ruta.append(tipoOrdenamiento);
    ruta.append(";");
    ruta.append(tipoDato);
    ruta.append(";");
    ruta.append(tipoOrd);
    ruta.append(";");
  ruta.append(to_string(replica));
    ruta.append(";");

cout << ruta<< (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000<<endl;

}else if(tipoDato.compare("INTEGER")){

int start_s=clock();


    quickSort(arrInt, 0, n-1);


int stop_s=clock();
 string ruta;
    ruta.append(pc);
    ruta.append(";");
    ruta.append(to_string(n));
    ruta.append(";");
    ruta.append(tipoOrdenamiento);
    ruta.append(";");
    ruta.append(tipoDato);
    ruta.append(";");
    ruta.append(tipoOrd);
    ruta.append(";");
      ruta.append(to_string(replica));
    ruta.append(";");

cout << ruta<< (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000<<endl;

}
}


}
}
}


    return 0;
}

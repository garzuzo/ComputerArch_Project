#include <iostream>
#include<stdlib.h>
#include<stdio.h>
#include<fstream>
#include <string>
#include <time.h>
using namespace std;

//TO COMPILE:
//1. g++ <name>.cpp
//2. ./a.out

#define GetSize(array_enteros) (sizeof(array_enteros)/sizeof(*(array_enteros)))

void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;

    /* create temp arrays */
    int L[n1], R[n2];

    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];

    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    /* Copy the remaining elements of L[], if there
       are any */
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there
       are any */
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

/* l is for left index and r is right index of the
   sub-array of arr to be sorted */
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l+(r-l)/2;

        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);

        merge(arr, l, m, r);
    }
    }


void merge(float arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;

    /* create temp arrays */
    float L[n1], R[n2];

    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];

    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    /* Copy the remaining elements of L[], if there
       are any */
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there
       are any */
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

/* l is for left index and r is right index of the
   sub-array of arr to be sorted */
void mergeSort(float arr[], int l, int r)
{
    if (l < r)
    {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l+(r-l)/2;

        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);

        merge(arr, l, m, r);
    }
    }


void merge(double arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;

    /* create temp arrays */
    double L[n1], R[n2];

    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];

    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    /* Copy the remaining elements of L[], if there
       are any */
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there
       are any */
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

/* l is for left index and r is right index of the
   sub-array of arr to be sorted */
void mergeSort(double arr[], int l, int r)
{
    if (l < r)
    {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l+(r-l)/2;

        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);

        merge(arr, l, m, r);
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

   mergeSort(arrFloat, 0, n-1);

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

   mergeSort(arrDouble, 0, n-1);

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


mergeSort(arrInt, 0, n-1);


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

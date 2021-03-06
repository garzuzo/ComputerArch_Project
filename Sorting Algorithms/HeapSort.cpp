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


// To heapify a subtree rooted with node i which is
// an index in arr[]. n is size of heap

#define GetSize(array_enteros) (sizeof(array_enteros)/sizeof(*(array_enteros)))

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

void heapify(float arr[], int n, int i)
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
void heapSort(float arr[], int n)
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

void heapify(double arr[], int n, int i)
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
void heapSort(double arr[], int n)
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


    string pc;


    string tipoOrdenamiento;

    int replica;


//CAMBIO
pc="PC C";
  tipoOrdenamiento="HeapSort";
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

   heapSort(arrFloat, n);

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

  heapSort(arrDouble, n);

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

  heapSort(arrInt, n);

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


//sorting method and clocks per ms (*1000)


//print the result
//cout<<"after sort"<<endl;
  //  for(int i=0;i<n;i++){

//cout<<arr[i]<<endl;
  //  }


    return 0;
}

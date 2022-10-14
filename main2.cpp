#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;
#include "bubble.h"
#include "insertion.h"
#include "selection.h"
#include "function.h"

int main(int argc, char** argv) {
  int *a, i, N = argc-2;
  
  a=new int [N];
  for(i=1;i<=N;i++){
    a[i-1]=atoi(argv[i+1]);
  }
  cout<<endl;

  cout<<"Before Sorting"<<endl;
  display(a, N);

  cout<<endl<<"Sorting"<<endl;
  if(strcmp(argv[1], "bubble") == 0){
    bubbleSort(a,N);
  }else if(strcmp(argv[1], "insert") == 0){
    insertionSort(a, N);
  }else if(strcmp(argv[1], "select") == 0){
    selectionSort(a, N);
  }else{
    cout<<"Enter type of sorting"<<endl;
  }
  cout<<"\nAfter sorting"<<endl;
  display(a, N);
}
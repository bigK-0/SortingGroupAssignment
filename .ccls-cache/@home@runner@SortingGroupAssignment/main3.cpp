#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;
#include "bubble.h"
#include "insertion.h"
#include "selection.h"
#include "function.h"

int main(int argc, char** argv) {
  int *a, i, N = argc-1;
  
  a=new int [N];
  for(i=1;i<=N;i++){
    a[i-1]=atoi(argv[i]);
  }
  cout<<endl;

  bubbleSort(a,N);

  //insertionSort(a, N);
  
  //selectionSort(a, N);
}
#include <iostream>
#include <iomanip>
#include "function.h"
using namespace std;

void selectionSort(int a[], int N){
  int i, j, value;

  cout<<endl<<"Before Sorting"<<endl;
  display(a, N);
  
  int min, m, move; 
  move =0;
  for (i=0; i<N-1; i++){
    m=i;
    for(j=i+1;j<N;j++){
      if(a[m]>a[j]){
        m=j;
      }
    }
    if(m!=i) { swap(a[m],a[i]); move+=3; }
    //display(a,N);
  }

  cout<<endl<<"Sorted"<<endl;
  display(a, N);
  cout<<endl<<"Move required: "<<move<<endl;
  }

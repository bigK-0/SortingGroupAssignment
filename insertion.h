#include "function.h"

void insertionSort(int a[], int N){
  int i, j, value, move;
  move=0;
  
  cout<<endl<<"Before Sorting"<<endl;
  display(a, N);

  cout<<endl<<"Sorting"<<endl;
  for ( i = 1; i<N; i++){
    value = a[i];
    for(j = i-1 ; j >= 0; j--){
      if (a[j]>value){ a[j+1] = a[j]; move++;}
      else break;
    }
    a[j+1] = value;
    display(a, N);
    move++;  
  }
  
  cout<<endl<<"Sorted"<<endl;
  display(a, N);
  cout<<endl<<"Move required: "<<move<<endl;
}

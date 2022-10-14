#include "function.h"

void bubbleSort(int a[], int N){
  int i,j,sorted,move;
  move = 0;
  
  cout<<endl<<"Before Sorting"<<endl;
  display(a, N);

  cout<<endl<<"Sorting"<<endl;
  for(i=0;i<N-1;i++){
    sorted=0;
    for(j=0;j<N-(i+1);j++){
      if(a[j]>a[j+1]){
        swap(a[j],a[j+1]);
        sorted=1;
        move += 3;
      }
      display(a, N);
    }
    if(sorted==0) break;
    cout<<endl;
    
  }
  
  cout<<endl<<"Sorted"<<endl;
  display(a, N);
  cout<<"Move required: "<<move<<endl;
}

#ifndef function_h
#define function_h
#include <iostream>
#include <iomanip>
using namespace std;

void swap(int &a, int &b){
  int t;
  t=a;
  a=b;
  b=t;
}

void display(int a[], int n){
  int i;
  for(i=0;i<n;i++) {
    cout<<setw(5)<<a[i];
  }
  cout<<endl;
}
#endif
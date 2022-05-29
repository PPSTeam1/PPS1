#include <stdio.h>

//function to print array
int printArray(int a[],int n){
  for(int i=0;i<n;i++){
    printf("%d ",a[i]);
  }
}

//insertion sort
int insertionSort(int a[],int n){
  for(int i=1;i<n;i++){
    int element  = a[i];
    int j=i-1;
    while(a[j]>element && j>=0){
      a[j+1] = a[j];
      j--;
    }
    a[j+1] = element;
  }
}
int main() {
  int a[] = {12,23,1,6,56,11,45,99,97,104,5};
  int size = sizeof(a)/sizeof(int);
  
  printf("\n Array Before sorting : ");
  printArray(a,size);
  
  insertionSort(a,size);
  
  printf("\n Array After Sorting : ");
  printArray(a,size);

  return 0;
}
#include <stdio.h>

//function to print array
int printArray(int a[],int n){
  for(int i=0;i<n;i++){
    printf("%d ",a[i]);
  }
}

//bubble sort
int bubbleSort(int a[],int n){
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      if(a[j] < a[i]){
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    }
  }
}
int main() {
  int a[] = {12,23,1,6,56,11,45,99,97,104,5};
  int size = sizeof(a)/sizeof(int);
  
  printf("\n Array Before sorting : ");
  printArray(a,size);
  
  bubbleSort(a,size);
  
  printf("\n Array After Sorting : ");
  printArray(a,size);

  return 0;
}
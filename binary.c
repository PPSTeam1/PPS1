#include <stdio.h>

int binarySearch(int a[], int size, int element){
    int low = 0;
    int high = size-1;
    int mid;
    while(low<=high){
        mid = (low + high)/2;
        if (element < a[mid]){
          high = mid - 1;
        }
        else if (element > a[mid]){
          low = mid + 1;
        }
        else {
          return mid;
        }
    }
    return -1;
}

int main()
{   int a[] = {12,23,43,45,776,7565,8353,35355,77887};
    int size = sizeof(a)/sizeof(int);
    int element = 7565;
    
    int binSearchIndex = binarySearch(a, size, element);
    if(binSearchIndex == -1){
        printf("%d not Found",element);
    }
    else {
        printf("%d Found at %d",element,binSearchIndex);
    }
    
    return 0;
}
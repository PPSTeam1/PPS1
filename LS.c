//Peroforming linear search

#include <stdio.h>

int main()
{
    int n, arr[] = {10,33,45,233,555};
    printf("Enter a number to search : ");
    scanf("%d",&n);
    int flag=0;
    
    for(int i=0;i<=5;i++){
        if(arr[i] == n){
           flag=1;
           if (flag==1){
                printf(" %d Found At Position %d ",n,i);
    }
            else {
                printf("Not Found");
            } 
        }
    }
    
    return 0;
}




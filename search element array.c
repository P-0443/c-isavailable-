#include<stdio.h>
int arraySearch(int arr[],int size, int n)
{


    int i;
    for(int i=0;i<size;i++){
        if(n==arr[i]){
             return 1;
        }
    }
    return 0;
}
    int main()
    {
      int arr[5]={20,15,25,10,30};
      int n;
      printf("Enter a number:");
      scanf("%d",&n);
      if(arraySearch(arr,5,n))
           printf("num is present in the array\n");
    else
         printf("num is not present in the array\n");
         return 0;
         }

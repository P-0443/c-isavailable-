#include<stdio.h>
int arrayinsert(int arr[], int position, int n, int value)
{
    for(int i=0;i<position;i++){
        if(n==arr[i]){
            return 1;
       }
    }
    return 0;
}
int main()
{

    int arr[50],position,i,n,valve;
    printf("Enter the number of elements in the array;\n");
    scanf("%d",&n);
    printf("enter%d elements\n",n);
    for(Int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("enter the location where if you want to insert\n");
    scanf("%d",&position);
    printf("enter the values\n");
    scanf("%d,&value");
    for(i=n-1;i>=position-1;i--)
        arr[i+1]=arr[i];
    arr[position-1]=value;
    printf("final array is \n");
    for(i=0;i<n;i++)
        printf("%d",arr[i]);
}

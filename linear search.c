#include<stdio.h>
int main()
{
    int a[50],i,n,key;
    printf("Enter no. of elements: ");
    scanf("%d",&n);
    printf("\nEnter %d elements: ",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("\nEnter element to search: ");
    scanf("%d",&key);
    for(i=0;i<n;i++){
        if(a[i]==key){
            printf("\nElement is found at a[%d]",a[i],i+1);
            break;
        }
        if(a[i]==n){
            printf("\nElement is not found");
        }
        return 0;
    }
}

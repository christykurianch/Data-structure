#include<stdio.h>
 int main()
 {
 int n,i,key,found=0;
 printf("enter the size:");
 scanf("%d",&n);
   
     int arr[n];
     
    printf("enter %d element:",n);
    for (int i=1; i<n ;i++) { 
    scanf("%d",&arr[n]);
    }
    printf("enter the search element:");
    scanf("%d",&key);
     for ( int i=1; i<n; i++){
     if (arr[i]==key)
     {
     printf("the element %d found at position %d ",key,i+1);
     found=1;
      break;
    }
   }
   if(found==0)
   {
   printf("enter element %d found in the array ", key);
   }
   return 0;
   }


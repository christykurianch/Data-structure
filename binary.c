#include<stdio.h>
 int main()
 {
 int n,i,key,low,high,mid,found=0;
 printf("enter the size:");
 scanf("%d",&n);
   
     int arr[n];
     
    printf("enter %d element:",n);
    for (int i=1; i<n ;i++) { 
    scanf("%d",&arr[n]);
    }
    printf("enter the search element:");
    scanf("%d",&key);
    low=0;
    high=n-1;
    while(low<= high)
    {
     mid=(low+high)/2;
     if(arr[mid]==key)
     {
      printf("Element %d is found ",n);}
      found=1;
      break;
      }
      else if(arr[mid]<key)
      {
           low=mid+1;

      }
      else
      {
       high=mid-1;	
      }
      }
      if(found==0)
      {
      print("the element %d not found", key);
      }
      return 0;
      
     }
     
      

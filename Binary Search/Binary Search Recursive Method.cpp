#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

#define          S(a)            scanf("%d",&a)
#define          SS(a,b)            scanf("%d %d",&a,&b)
#define          Sc(a)            scanf("%s",&a)
#define          SSc(a,b)            scanf("%s %s",&a,&b)


int binarySearch(int a[],int left,int right, int key)
{
     while(left<=right)
     {
      int mid=(left+right)/2;
         if(a[mid]==key)
                return mid;

         if(a[mid]<key)
              return binarySearch(a,mid+1,right,key);
         else
               return binarySearch(a,left,mid-1,key);
     }

     return -1;

}


int main()
{
    int a[]={10,20,25,25,27,30,30,30,40,50};
    int left,right,mid,key;
    int n = sizeof(a)/sizeof(a[0]);
    left =  0;
    right =  n-1;
    key   = 40;
    int result = binarySearch(a,left,right,key);

    if(result==  -1)
         printf("Not Found");
    else
        printf("Search value in index : %d",result);

}



#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

#define          S(a)            scanf("%d",&a)
#define          SS(a,b)            scanf("%d %d",&a,&b)
#define          Sc(a)            scanf("%s",&a)
#define          SSc(a,b)            scanf("%s %s",&a,&b)



int upperbound(int arr[],int left,int right,int key)
{
     while(left<=right)
     {
         int mid = left +(right-left)/2;

        if(arr[mid]<=key)

                left = mid +1;
          //  return upperbound(arr,mid+1,right,key);

        else
               right = mid -1;
           // return upperbound(arr,left,mid-1,key);

     }
  return left -1;


}


int main()
{
    int arr[]={10,20,25,25,27,30,30,30,40,50,60,60,60,60,70,100};
    int n=sizeof(arr)/sizeof(arr[0]);
    int left,right,key;
    left=0;
    right=n-1;
    key=60;
    int result= upperbound(arr,left,right,key);

    printf("%d",result);

}



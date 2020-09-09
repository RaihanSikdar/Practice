#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

#define          S(a)            scanf("%d",&a)
#define          SS(a,b)            scanf("%d %d",&a,&b)
#define          Sc(a)            scanf("%s",&a)
#define          SSc(a,b)            scanf("%s %s",&a,&b)



int lowerbound(int arr[],int left,int right,int key)
{
     while(left<=right)
     {
         int mid = (right + left)/2;

        if(arr[mid]<key)
             //left = mid +1;
            return lowerbound(arr,mid+1,right,key);
        else
               //right = mid -1;
               return lowerbound(arr,left,mid-1,key);

     }
  return right + 1;


}


int main()
{
        int arr[]={10,20,25,25,27,30,30,30,40,50,60,60,60,60,70,100};
    int n=sizeof(arr)/sizeof(arr[0]);
    int left,right,key;
    left=0;
    right=n-1;
    key=60;
    int result= lowerbound(arr,left,right,key);

    printf("%d",result);

}




#include<stdio.h>
#include<conio.h>

//int linearsearch(int arr[], int size, int element)
//{
  //  for(int i=0; i<size; i++)
    //{
      //  if(arr[i]==element)
        //{
          //  return i;
        //}
    //}
    //return -1;
//}

int binarysearch(int arr[], int size, int element)
{
    int low , mid, high;
    low = 0;
    high = size-1;
     //start searching
     while(low<=high)
     {
        mid=(low+(high-low))/2;
        if(arr[mid] == element)
        {
            return mid;
        }
        if(arr[mid] < element)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
     } return -1;
     
}

int main()
{
    int arr[] = {1,3,6,8,34,56,122,145};
    int size = sizeof(arr)/sizeof(int);
    int element = 122;
    //int searchindex = linearsearch(arr,size,element);
    int searchindex = binarysearch(arr,size,element);
    printf("the element of %d find at index %d\n ", element, searchindex);
    return 0;
}
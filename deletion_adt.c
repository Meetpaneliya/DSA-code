#include<stdio.h>
#include<conio.h>

void display(int arr[], int n)
{
    //traversal
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
      printf("\n");
}

void inddeletion(int arr[], int size, int index)
{
    //deletion
   for(int i=index; i<size-1; i++)
   {
      arr[i]=arr[i+1];
   }
}

int main()
{
   int arr[100] = {1,3,5,7,8,9};
   int size =6, index =3;
   display(arr,size);
   inddeletion(arr, size, index);
   size -=1;
   display(arr,size);
   return 0;
}
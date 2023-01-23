#include<stdio.h>

void display(int arr[], int n)
{
    //traversal(visit)
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
     printf("\n");
    
}

int indInsertion(int arr[], int size, int element, int capacity, int index)
{
    //insertion
    if(size>=capacity){
        
        return-1;
    }
    for(int i=size-1; i >=index; i--)
    {
      arr[i+1]= arr[i];
      
     }
    arr[index] = element;

    return 1;
}

int main()
{
    int arr[100] = {1, 2, 3, 4, 8};
    int size =5, element =45, index =3;
    display(arr, size);
    indInsertion(arr, size, element, 100, index);
    size +=1;
    display(arr, size);
    return 0;
}
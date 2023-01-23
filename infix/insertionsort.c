#include<stdio.h>

void printarray(int*a ,int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d",a[i]);
    }
    printf(" \n");
  
}

void insertionsort(int*a , int n)
{
    int key,j;
    // loor for passes

    for(int i=1; i<=n-1; i++){
        key = a[i];
        j = i-1;

        // loop for each pass
        while(j>=0 && a[j] > key){
             a[j+1] = a[j];
             j--;
        }
        a[j+1] = key;
    }
}
int main()
{
    int a[] = {12,54,65,7,23,9};
    int n = 6;
    printarray(a,n); //before bubblesort...
    insertionsort(a,n);
    printarray(a,n); // after bubblesort...
     return  0;
}

// Note : 1. in the for loop we write i<=n-1 to i<n...
//  2.   i= -1 0 1 2 3 4 5 
//             1 4 6 2 7 5  so write (j>=0) bcz in remaining searching (j != -1)

//    1 4 6(j) | 2 7 5(key)....
//  j means pass cases i-1...


   // -1   0    1   2   3   4   5
   //      12,| 54, 65, 07, 23, 09 --> i=1, key=54, j=0
   //      12,| 54, 65, 07, 23, 09 --> 1st pass done (i=1)!

   //      12, 54,| 65, 07, 23, 09 --> i=2, key=65, j=1
   //      12, 54,| 65, 07, 23, 09 --> 2nd pass done (i=2)!

   //      12, 54, 65,| 07, 23, 09 --> i=3, key=7, j=2
   //      12, 54, 65,| 65, 23, 09 --> i=3, key=7, j=1
   //      12, 54, 54,| 65, 23, 09 --> i=3, key=7, j=0
   //      12, 12, 54,| 65, 23, 09 --> i=3, key=7, j=-1
   //      07, 12, 54,| 65, 23, 09 --> i=3, key=7, j=-1--> 3rd pass done (i=3)!

   // Fast forwarding and 4th and 5th pass will give:
   //      07, 12, 54, 65,| 23, 09 --> i=4, key=23, j=3
   //      07, 12, 23, 54,| 65, 09 --> After the 4th pass

   //      07, 12, 23, 54, 65,| 09 --> i=5, key=09, j=4
   //      07, 09, 12, 23, 54, 65| --> After the 5th pass 
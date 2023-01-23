#include<stdio.h>

void printarray(int*a ,int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d",a[i]);
    }
    printf("\n");
  
}

void bubblesort(int*a , int n)
{
     int temp;
     int issorted=0;
    for(int i=0; i<n-1; i++)
    {
        issorted=1;
        for(int j=0; j<n-1-i; j++)
        {
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1 ]=temp;
                issorted=0;

            }
        }
        if(issorted){
            return;
        }
    }
}
int main()
{
    int a[] = {1,4,6,2,7,5};
    int n = 6;
    printarray(a,n); //before bubblesort...
    bubblesort(a,n);
    printarray(a,n); // after bubblesort...
     return  0;
}
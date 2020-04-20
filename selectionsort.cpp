#include<iostream>
using namespace std;

void selectionsort(int A[], int n)
{
    for(int i = 0; i < n-1; i++)
    {
        int min = i;
        for( int j = i+1; j < n; j++)
        {
            if(A[j] < A[min])
            {
                min = j;
            }
        }
        int temp = A[i];
        A[i] = A[min];
        A[min] = temp;
    }
}

int main()
{
    int A[] = {9,5};
    selectionsort(A,2);
    for(int i = 0; i < 2; i++)
    {
        cout << A[i] << " ";
    }
}
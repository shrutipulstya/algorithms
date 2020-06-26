#include<iostream>
using namespace std;

void insertsort(int a[], int n)
{
    for(int i = 1; i < n; i++)
    {   
        int temp = a[i];
        int j = i - 1;
        while(j >= 0 && temp < a[j])
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = temp;
    }
    
}

int main()
{
    int a[] = {4,2,12,6,8,10};
    insertsort(a,6);
    for(int i = 0; i < 6; i++)
    {
        cout << a[i]<<" ";
    }
    return 0;
}   
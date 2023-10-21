#include<iostream>
using namespace std;
void merge(int arr[], int beg , int mid , int end);
void merge_sort(int arr[] , int beg, int end);
int main()
{
    int i,j;
    int n;
    cout<<"Enter the size of an array: "<<endl;
    cin>>n;
    
    int a[n];
    cout<<"Enter the value of any array: "<<endl;
    for( i = 0; i < n; i++)
    {
    cin>>a[i]; 
    }
    
    cout<<"Values of an array: "<<endl;
    for ( j = 0; j < n; j++)
    {
        cout<<a[j]<<endl;
    }
    merge_sort (a,0, n-1);
    cout<<"Sorted array is : "<<endl;
    for ( j = 0; j < n; j++)
    {
        cout<<a[j]<<endl;
    }
}
void merge(int arr[], int beg , int mid , int end)
{
    int i = beg;
    int j = mid+1;
    int index = beg;
    int k; 
    int size=10;
    int temp[size];
    while((i<=mid) && (j<=end))
    {
        if (arr[i] < arr[j])
        {
            temp[index]= arr[i];
            i++;
        }
        else
        {
            temp[index]=arr[j];
            j++;
        }
        index++;
    }
    if( i > mid)
    {
        while( j<=end)
        {
            temp[index]=arr[j];
            j++;
            index++;
        }
    }
    else
    {
        while(i<=mid)
        {
            temp[index]= arr[i];
            i++;
            index++;
        }
    }
    for( int k = beg; k < index; k++)
    {
        arr[k]= temp[k];
    }
    
}
    
void merge_sort(int arr[] , int beg, int end)
{
    int mid;
    if (beg < end)
    {
        mid = (beg + end)/2;
        merge_sort( arr, beg, mid);
        merge_sort( arr, mid+1, end);
        merge ( arr, beg, mid, end);    // merge after sorting
    }
}
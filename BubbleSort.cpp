// Given an Integer n and a list arr. Sort the array using bubble sort algorithm.
// Examples :

// Input: n = 5, arr[] = {4, 1, 3, 9, 7}
// Output: 1 3 4 7 9
// Input: n = 10, arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1}
// Output: 1 2 3 4 5 6 7 8 9 10

#include"iostream"
using namespace std;
int main(){
    int arr[1000];
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the element in array: ";
    for(int i=0; i<n; i++){
        cin>> arr[i];
    }
    for(int i = n-2; i>=0; i--)
    {
        bool swapped = 0;
        for(int j=0; j<=i;j++)
        {
            if(arr[j]> arr[j+1])
            {
                swapped = 1;
                swap(arr[j], arr[j+1]);
            }
        }
        if(swapped==0)
        {
            break;
        }
    }
    for(int i=0; i<n; i++)
    cout<<arr[i]<<" ";
}
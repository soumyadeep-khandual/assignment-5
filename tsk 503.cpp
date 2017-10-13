#include <iostream>
using namespace std;
void klarge(int s, int arr[],int k)
{
  for(int i=0;i<s;i++)
    for(int j=i+1;j<s;j++)
      if(arr[i]<arr[j])
      {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
      }
    cout<<"The Kth largest element is: "<<arr[k-1]<<":\n";
}

void ksmall(int s, int arr[],int k)
{
    for(int i=0;i<s;i++)
    for(int j=i+1;j<s;j++)
      if(arr[i]>arr[j])
      {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
      }
    cout<<"The Kth smallest element is: "<<arr[k-1]<<"\n";
}
  
int main()
{
  int size=0,K=0;
  cout<<"FIND Kth LARGEST AND Kth SMALLEST ELEMENT OF ARRAY \n";
  cout<<"Enter the size of the array: \n";
  cin>>size;
  int arr[size];
  cout<<"Enter the elements of array: \n";
  for(int a=0;a<size;a++)
  {
    cout<<"Element "<<(a+1)<<": \n";
    cin>>arr[a];
  }
  cout<<"Enter the value of k: \n";
  cin>>K;
  klarge(size, arr,K);
  ksmall(size, arr,K);
  return 0;
}

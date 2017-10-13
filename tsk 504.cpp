#include <iostream>
using namespace std;

void max(int s, int arr[])
{
  int maxi=arr[0];
  for(int i=0; i<s;i++)
  {
    if(arr[i]>maxi)
      maxi=arr[i];
  }
  cout<<"The maximum element of the array is: "<<maxi<<"\n";
}

void min(int s, int arr[])
{
int mini=arr[0];
  for(int i=0; i<s;i++)
  {
    if(arr[i]<mini)
      mini=arr[i];
  }
  cout<<"The minimum element of the array is:"<<mini<<"\n";
}
int main()
{
  int size1=0,size2=0;
  cout<<"TO MERGE TWO ARRAYS\n";
  cout<<"Enter the size of the first array: \n";
  cin>>size1;
  int arr1[size1];
  cout<<"Enter the elements of first array: \n";
  for(int a=0;a<size1;a++)
  {
    cout<<"Element "<<(a+1)<<": \n";
    cin>>arr1[a];
  }
  cout<<"Enter the size of the second array: \n";
  cin>>size2;
  int arr2[size2];
  cout<<"Enter the elements of second array: \n";
  for(a=0;a<size2;a++)
  {
    cout<<"Element "<<(a+1)<<": \n";
    cin>>arr2[a];
  }
  int m=size1+size2;
  int newarr[m];
  for(int x=0;x<size1;x++)
   newarr[x]=arr1[x];
  for(int x=size1;x<size1+size2;x++)
   newarr[x]=arr2[x-size1];
  max(m,newarr);
  min(m,newarr);
  return 0;
}

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
  cout<<"The minimum element of the array is: "<<mini<<"\n";
}

void mean(int s, int arr[])
{
 int sum=0;
 for(int i=0;i<s;i++)
  {
    sum=sum+arr[i];
  }
  float mean=0;
  mean=((float)sum/5);
  cout<<"The mean of array elements is: "<<mean<<"\n";
}


void median(int s, int arr[])
{
  int median;
  if(s%2==0)
  {
    median=(arr[s/2]+arr[(s+1)/2])/2;
  }
  else
  {
    int index=(s+1)/2;
    median=arr[index];
  }
  cout<<"The median of the array elements is: "<<median<<"\n";
}

void mode(int s, int arr[])
{
 int number = arr[0];
 int mode = number;
 int count = 1;
 int countMode = 1;
 for (int i=1; i<s; i++)
 {
      if (arr[i] == number) 
      { 
         ++count;
      }
      else
      {
            if (count > countMode) 
            {
                  countMode = count;
                  mode = number;
            }
           count = 1;
           number = arr[i];
       }  
  }
 cout << "The mode of the array elements is: " << mode << endl<<"\n";
}
int main()
{
  int size=0;
  cout<<"TO FIND LARGEST, SMALLEST, MEAN, MEDIAN, MODE OF THE ELEMENTS OF THE ARRAY\n";
  cout<<"Enter the size of the array: \n";
  cin>>size;
  int arr[size];
  cout<<"Enter the elements of array: \n";
  for(int a=0;a<size;a++)
  {
    cout<<"Element "<<(a+1)<<": \n";
    cin>>arr[a];
  }
  max(size, arr);
  min(size, arr);
  mean(size, arr);
  median(size, arr);
  mode(size, arr);
  return 0;
}

 #include <iostream>
using namespace std;


int sumarr(int sz,int array[])
{
  int s=0;
  for(int i=0;i<sz;i++)
  {
    s=s+array[i];
  }
  return s;
}
int main()
{
  int size=0,sum=0;
  cout<<"TO FIND SUM OF ALL ELEMENTS OF AN ARRAY USING FUNCTIONS"<<"\n";
  cout<<"Enter the size of the array: "<<"\n";
  cin>>size;
  int arr[size];
  cout<<"Enter the elements of array: "<<"\n";
  for(int a=0;a<size;a++)
  {
    cout<<"Element "<<(a+1)<<": "<<"\n";
    cin>>arr[a];
  }
  sum=sumarr(size,arr);
  cout<<"The sum of elements of the array is: "<<sum;
  return 0;
}

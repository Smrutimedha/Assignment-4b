#include<iostream>
using namespace std;
int arrdisp(int arr[],int size)
{
   if(size==1)
   cout<<arr[0]<<endl;
   else
   {
      arrdisp(arr,size-1);
      cout<<arr[size-1]<<endl;
   }
}

int main()
{
   int size;
   cout<<"Please Enter The Size Of The Array ?"<<endl;
   cin>>size;
   int arr[size];
   cout<<"Please Enter The Elament of the Array :";
   for(int i=0;i<size;i++)
   {
   cin>>arr[i]<<endl;
   }   
   cout<<"The elements of array are : \n";
   arrdisp(arr,size);
  
}

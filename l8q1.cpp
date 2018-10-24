//1.write a program to find sum of all elements of an array
#include <iostream>
using namespace std;
int sumElements(int a[],int s)
{
	int sum=0;
	for(int i=0;i<s;i++)
	sum+=a[i];
	return sum;
}
	
int main()
{
	int size=0;
//ask the size of array
	cout<<"Enter the size of the array."<<endl;
	cin>>size;
	int arr[size];
//ask the elements of the array
	cout<<"Enter the elements of the array."<<endl;
	for(int i=0;i<size;i++)
	cin>>arr[i];
	int sum=sumElements(arr,size);
	cout<<"The sum of the elements of the array is "<<sum<<endl;
	return 0;
}


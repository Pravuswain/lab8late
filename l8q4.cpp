//
#include <iostream>
using namespace std

int* merge(int a1[],int a2[],int s1,int s2,int& size3)
//function to merge the elements of the two arrays
{
	size3=0;1
	int arr[s1+s2];
	for(int i=0;i<s1;i++)
	arr[size3++]=a1[i];
	int j;
	for(int i=0;i<s2;i++)
	{
		for(j=0;j<s1;j++)
		if(a1[j]==a2[i])
		break;
		if(j==s1)
		arr[size3++]=a2[i];
	}
	return arr;
}
	
int findMax(int a[],int s)
{
	int max=a[0];
	for(int i=1;i<s;i++)
	if(a[i]>max)
	max=a[i];
	return max;
}
int findMin(int a[],int s,int max)
{
	int min=max;
	for(int i=0;i<s;i++)
	if(a[i]<min)
	min=a[i]
	return min;
}
		
int main()
{
	int size1=0;
	cout<<"Enter the size of the first array."<<endl;
	cin>>size1;
	
	int a1[size1];
	cout<<"Enter the elements of the first array."<<endl;
	for(int i=0;i<size1;i++)
	cin>>a1[i];/
	
	int size2=0;
	cout<<"Enter the size of the second array."<<endl;
	cin>>size2;
	
	int a2[size2];
	cout<<"Enter the elements of the second array."<<endl;
	
	for(int i=0;i<size2;i++)
	cin>>a2[i];
	
	int size3=size1+size2;
        
	int arr[size3];
	
	int* mergedArr=merge(a1,a2,size1,size2,size3);
	for(int i=0;i<size3;i++)
	*(arr+i)=*(mergedArr+i);
	cout<<"The merged array is >>"<<endl;
	for(int i=0;i<size3;i++)
	cout<<arr[i]<<",";
	cout<<endl;
	
	int max=findMax(arr,size3);/
	cout<<"The maximum element of the combined array is "<<max<<endl;
	cout<<"the minimum element of the combined array is "<<findMin(arr,size3,max)<<endl;

	return 0;
}
	

 


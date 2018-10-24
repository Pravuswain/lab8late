//write a program to find the largest, smallest ,mean , median , elements with highest frequency of the elements of all elements of an array
#include <iostream>
using namespace std;
//using different functions for each task
int Max(int x[],int y)
{
	return x[y-1];
}

int Min(int x[])
{
	return x[0];
}

float Mean(int x[],int y)
{
	float sum=0.0;
	for(int i=0;i<y;i++)
	sum+=x[i];
	return (sum/y);
}

float Median(int x[],int y)
{
	if(y%2==0)
	return ((x[y/2-1]+x[y/2])/2);
	else
	return x[(y-1)/2];
}

int Mode(int x[],int y)
{
	int maxFreq=1;
	int freq=1;
	int mode=x[0];
	int num=x[0];
	for(int i=1;i<y;i++)
	{
		if(x[i]==num)
		freq++;
		else
		{
			if(freq>maxFreq)
			{
				mode=num;
				maxFreq=freq;
			}
			freq=1;
			num=x[i];
		}
	}
	if(freq>maxFreq)
	mode=num;
	return mode;
}
//main function

int main()
{
	int size=0;
	cout<<"Enter no. of arrays:"<<endl;
	cin>>size;
	int arr[size];
	cout<<"Enter the elements of the array:"<<endl;
	for(int i=0; i<size;i++)
	cin>>arr[i];
	int temp=0;
	for (int i=0; i<size-1;i++)    
        for (int j=0; j<size-i-1;j++)  
		if(arr[j]>arr[j+1]) 
		{
			arr[j]=arr[j]+arr[j+1];
			arr[j+1]=arr[j]-arr[j+1];
			arr[j]=arr[j]-arr[j+1];
		} 
	int max=Max(arr,size);
	int min=Min(arr);
	float mean=Mean(arr,size);
	float median=Median(arr,size);
	int mode=Mode(arr,size);
	cout<<"The maximum element: "<<max<<endl;
	cout<<"The minimum elememt : "<<min<<endl;
	cout<<"The mean element: "<<mean<<endl;
	cout<<"The median element:  "<<median<<endl;
	
	if(mode>1)
	cout<<"The modal element in the array is "<< Mode(arr,size)<<endl;
	else
	cout<<"The is no specific mode as all elements are present once."<<endl;
	return 0;
}

   


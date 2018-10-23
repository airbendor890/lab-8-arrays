//program to find sum of all elements of an array
#include<iostream>
using namespace std;


int  Asum(int k)
{ int arr[k];
	//accepting array elements using lop
	cout<<"give array elements"<<endl;
	for(int i=0;i<k;i++)
	{cin>>arr[i];}
  int sum=0;
	//adding all elements into sum
	for(int i=0;i<k;i++)
	{sum+=arr[i];}

	return sum;
}

//////////////////////////////////////////////

int main()
{	int  Asum(int k);
	int k,sum;
	cout<<"\n give array size   ";cin>>k;cout<<endl;
	sum= Asum(k);
	cout<<"\n the sum of the array element is  "<<sum;
	cout<<endl;

return 0;	
}













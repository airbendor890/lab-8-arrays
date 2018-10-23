/*4. Write a program to merge 2 arrays (just one after another into another array), find maximum of 2 arrays [maximum element of all the elements in both the arrays], find minimum of 2 arrays [similar to maximum]. (Use functions for each)
*/

#include<iostream>
using namespace std;

void Amerge(int arr1[],int m,int arr2[],int n,int Arr[])
{  for(int i=0;i<m+n;i++)//loop for merging
	{	if(i<m)
		Arr[i]=arr1[i];
		else
		Arr[i]=arr2[i-m];
	}
}
////////////////////////////////////////////////
int Alarge(int arr[],int k)
{ int temp=arr[0];
	for(int i=0;i<k;i++)
	{if(arr[i]>temp)
		temp=arr[i];	
	}

	return temp;
}
////////////////////////////
int Asmall(int arr[],int k)
{ int temp=arr[0];
	for(int i=0;i<k;i++)
	{if(arr[i]<temp)
		temp=arr[i];
	}

	return temp;
}
///////////////////////////////

int main()
{ cout<<"\n size of array 1  ";int m;cin>>m;
  cout<<"enter array elements\n";int arr1[m];
  for(int i=0;i<m;i++)
	{cin>>arr1[i];}

  cout<<"\n size of array 2  ";int n;cin>>n;
  cout<<"enter array elements\n";int arr2[n];
  for(int i=0;i<n;i++)
	{cin>>arr2[i];}
 //calling merging funcn
 int Arr[m+n];
 Amerge(arr1,m,arr2,n,Arr);
 int max=Alarge(Arr,m+n);
 int small=Asmall(Arr,m+n); 
 cout<<"\nlargest element of two array is = "<<max<<endl;
 cout<<"smallest element of two array is = "<<small<<endl;

}


/* program for kth largest, kth smallest element of an array. (Use /functions : e.g. klarge (int array[], int size, int k), similarly for smallest)
*/

//using sorting process

#include<iostream>
using namespace std;

void sort(int arr[],int k)
{ for(int i=0;i<k;i++)	//first sorting..............
	{for(int j=0;j<k;j++)
	   if(arr[i]<arr[j])
	     {   int temp;
		 temp=arr[i];
		 arr[i]=arr[j];
		 arr[j]=temp;
	     }
	     //this is happening in ascending order.
	}

}

//now funcn to find kth largest or smallest
void ksmall(int arr[],int size,int k)
{  sort(arr,size);
   cout<<k<<" 'th smallest elemnt is = "<<arr[k-1];
   cout<<endl;	
}
void klarge(int arr[],int size,int k)
{  sort(arr,size);
   cout<<k<<" 'th largest element is = "<<arr[size-k];
   cout<<endl;	
}

int main()
{	int l,m,n;
	cout<<"\ngive array size   ";
	cin>>l;		//array size = l
	cout<<"\n give array elements"<<endl;
	int arr[l];
	for(int i=0;i<l;i++)
	{cin>>arr[i];}
	cout<<"give m and n for m th smallest and mth largest element respectively"<<endl;
	cin>>m>>n;
	ksmall(arr,l,m);
	klarge(arr,l,n);

	return 0;
}















//program to find largest/smallest/mean/median/heighest frequency element of all elements of array
//------------------------------------------------------------------------------------------------
#include<iostream>
using namespace std;
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
float Amean(int arr[],int k)
{float sum=0;
	
	for(int i=0;i<k;i++)
	{sum+=arr[i];}

	
	return sum/k;
}
////////////////////////////
float Amedian(int arr[],int k)
{ float mid;
//---------------------------------------------------

	for(int i=0;i<k;i++)	//first sorting
	//this sorting is happening in asndng order....
	{for(int j=0;j<k;j++)
	 if(arr[i]<arr[j])
		{int temp;
		 temp=arr[i];
		 arr[i]=arr[j];
		 arr[j]=temp;
		}
	}
//----------------------------------------------------
//determining median with sorted array
	if(k%2!=0)
	{mid=arr[(k-1)/2];}
	if(k%2==0)
	{mid=(arr[k/2-1]+arr[k/2])*0.5;}
	
 return mid;

}
/////////////////////////////////////
//funcn to find array element with heighest frequency

int  Afrq(int arr[],int k)
{int varr[k];// new array to store the freq of corspndng ele
	for(int i=0;i<k;i++)
	{int temp=1;
	  for(int j=0;j<k;j++)
		{if(arr[i]==arr[j])
			temp++;
		}
	  varr[i]=temp-1;
	}
//now below codes will be to find heigst freq in varr
	int s=Alarge(varr,k);	
	for(int i=0;i<k;i++)
	{if(varr[i]==s)
		return arr[i];
	 }

}





//////////////////////////////////////////

int main()
{int Alarge(int arr[],int k);
 int Asmall(int arr[],int k);
 float Amean(int arr[],int k);
 float Amedian(int arr[],int k);
 int  Afrq(int arr[],int k);
 	int k,largest,smallest;
	float mean,median;
	cout<<"enter array size ";cin>>k;cout<<endl;
	int arr[k];
	cout<<"enter array elements "<<endl;
	for(int i=0;i<k;i++)
	{cin>>arr[i];}
   	largest= Alarge(arr,k);
	smallest= Asmall(arr,k);
	mean= Amean(arr,k);
 	median= Amedian(arr,k);
	int hfreq=Afrq(arr,k);
	cout<<"largest = "<<largest<<endl;
	cout<<"smallest = "<<smallest<<endl;
	cout<<"mean = "<<mean<<endl;
	cout<<"median= "<<median<<endl;
	cout<<"element with heighest frequency = "<<hfreq<<endl;
 
return 0;

}





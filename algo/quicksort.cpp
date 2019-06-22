#include<bits/stdc++.h>
using namespace std;
int partition(int *a,int low,int high)
{
   int i,j;
   i=low-1;
   
   int pivot,tmp;
   pivot=a[high];
  // cout<<pivot<<" ";
   for(j=low;j<high;j++)
   {
	   	if(a[j] <= pivot)
	   	{
	   	  i++;
		  tmp=a[i];
		  a[i]=a[j];
		  a[j]=tmp;	 	
		}
   }
   
   	  i++;
	  tmp=a[i];
	  a[i]=a[high];
	  a[high]=tmp;  	
    
   // cout<<i;
   return i+1;  
}
void quick(int *a,int start,int end)
{
	if(start < end)
	{
		int pi;
		pi=partition(a,start,end);
	
	  // cout<<pi;
	
		quick(a,start,pi-1);
   		quick(a,pi+1,end);
	}
}
int main()
{
	int n,i;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	   cin>>a[i];
	   
	   quick(a,0,n-1); // mistake
	   
	   for(i=0;i<n;i++)
	      cout<<a[i];
}

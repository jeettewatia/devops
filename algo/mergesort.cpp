#include<bits/stdc++.h>
using namespace std;
void merge(int *a,int s,int m,int e)
{
    int b[m-s+1],i,n1,j,k;
	int c[e-m],n2;
	 n1=m-s+1;
	 n2=e-m;
	 
	 
	 
	for(i=0;i<n1;i++)  // copy of first half array
	   b[i]=a[s+i];
	   
	 for(i=0;i<n2;i++)  // copy of 2nd half array
	   c[i]=a[m+1+i];  
	   
	   i=0;
	   j=0;	  
	   k=s;   //mistake
	   while(i<n1 && j<n2)
	   {
		   	if(b[i]<=c[j]) // mistake
		   	{
		   	   a[k]=b[i];
				  k++;
				  i++;
				  	
			}
			
			if(b[i]>c[j])
		   	{
		   	   a[k]=c[j];
				  k++;
				  j++;	
			}
		
	   }
	   
	   while(i<n1)
	   {
	   	a[k]=b[i];
	   	k++;
	   	i++;
	   }
	   
	   while(j<n2)
	   {
	   	a[k]=c[j];
	   	k++;
	   	j++;
	   }
	   
	  // for(i=0;i<k;i++)
	     // cout<<a[i];
}
void msort(int *a,int start,int end)
{
	if(start<end)
	{
		int mid;
		mid=start+(end-start)/2;
//		mid=start+end/2;	
		msort(a,start,mid);
		msort(a,mid+1,end);
		
		merge(a,start,mid,end);
	}
}
int main()
{
	int n,i;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	   cin>>a[i];
	   
	   msort(a,0,n-1); // mistake
	   for(i=0;i<n;i++)
	      cout<<a[i];
}

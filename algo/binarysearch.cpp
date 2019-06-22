#include<bits/stdc++.h>
using namespace std;
bool bsearch(int *a,int low,int high,int key)  // binary search in only sorted array
{
	int mid;
	mid=(low+high)/2;
	if(a[mid]==key)
	  return true;
	  
	if(a[mid] > key)
	  bsearch(a,low,mid-1,key);
	else
	  bsearch(a,mid+1,high,key);
	  
	return false;
}
int main()
{
	int n,i,k,x;
	cin>>n>>k;
	int a[n];
	for(i=0;i<n;i++)
	   cin>>a[i];
	   
	  bsearch(a,0,n-1,k); 
	   if(true)
	     cout<<"FOUND";
	     
	    else
	      cout<<"NOT FOUND";
}

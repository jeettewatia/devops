#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n1,n2,i,j,k,mid;
	cin>>n1>>n2;
	int a[n1],b[n2],c[n1+n2];
	for(i=0;i<n1;i++)  
	  cin>>a[i];
	  
	for(i=0;i<n2;i++)  
	  cin>>b[i];
	  
	  i=0;
	  j=0;
	  k=0;
	  while(i<n1 && j<n2)
	  {
	  	if(a[i]>=b[j])
	  	   {
	  	   	 c[k]=b[j];
	  	   	 k++;
	  	   	 j++;
			}
		if(a[i]<b[j])
	  	   {
	  	   	 c[k]=a[i];
	  	   	 k++;
	  	   	 i++;
			}
	  }
	  while(i<n1)
	  {
	  	c[k]=a[i];
	  	i++;
	  	k++;
	  }
	   while(j<n2)
	  {
	  	c[k]=b[j];
	  	j++;
	  	k++;
	  }
	  for(i=0;i<n1+n2;i++)
	    cout<<c[i];    
	    
	    if((n1+n2)%2)
	     {
	       mid=(n1+n2+1)/2;
		 }
		 else
		 mid=(n1+n2)/2;
		 
		 cout<<endl<<"MEDIAN :";
		 cout<<c[mid];
	    
	    return 0;
}

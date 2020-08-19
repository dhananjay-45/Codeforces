#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	long int t,i;
	cin>>t;
	for(i=0;i<t;i++)
	{
	    long int n,diff,j,flag=0;
	    cin>>n;
	    long int a[n];
	    for(j=0;j<n;j++)
	    {
	        cin>>a[j];
	    }
	    sort(a,a+n);
	    for(j=0;j<n-1;j++)
	    {
	        diff=a[j+1]-a[j];
	        if(diff<0)
	        {
	            diff=(-1)*diff;
	        }
	        if(diff>1)
	        {
	            flag=1;
	            break;
	        }
	    }
	    if(flag==0)
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}

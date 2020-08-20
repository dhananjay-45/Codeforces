#include <iostream>
using namespace std;
 
int main() {
	// your code goes here
	long int t,i,j,n;
	cin>>t;
	for(i=0;i<t;i++)
	{
	    cin>>n;
	    long long int a[n],b[n],a_min=9999999999,b_min=9999999999,sum=0;
	    for(j=0;j<n;j++)
	    {
	        cin>>a[j];
	        if(a_min>a[j])
	        {
	            a_min=a[j];
	        }
	    }
	    for(j=0;j<n;j++)
	    {
	        cin>>b[j];
	        if(b_min>b[j])
	        {
	            b_min=b[j];
	        }
	    }
	    for(j=0;j<n;j++)
	    {
	        if(a[j]==a_min && b[j]==b_min)
	        {
	            continue;
	        }
	        else if(a[j]==a_min && b[j]!=b_min)
	        {
	            sum=sum+(b[j]-b_min);
	        }
	        else if(a[j]!=a_min && b[j]==b_min)
	        {
	            sum=sum+(a[j]-a_min);
	        }
	        else
	        {
	            if(a[j]-a_min>=b[j]-b_min)
	            {
	                sum=sum+b[j]-b_min;
	                sum=sum+(a[j]-b[j]+b_min)-a_min;
	            }
	            else
	            {
	                sum=sum+a[j]-a_min;
	                sum=sum+(b[j]-a[j]+a_min)-b_min;
	            }
	        }
	    }
	    cout<<sum<<endl;
	}
	return 0;
}

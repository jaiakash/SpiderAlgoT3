#include <bits/stdc++.h>
using namespace std;

bool weak_wall(long mid,long b,long a[],long n)
{
    long long sr=1,sum=0;
    for(int i=0;i<n;i++){
        if(a[i]>mid){
            return false;
        }
        if(sum+a[i]<=mid)
        	sum=sum+a[i];
        else{
            sum=a[i];
            sr++;
        }
        if(sr>b)
        	return false;
    }
    if(sr>b)
        return false;
    return true;
}

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	
    long k,n;
    cin>>k>>n;
    long A[n]={};
    long start=0,end=0;
    for(long i=0;i<n;i++){
    	cin>>A[i];
    	end+=A[i];
    }
    
    long ans = LONG_MAX;
    while(start<=end){
        long mid =(start+end)/2;
            if(weak_wall(mid, k, A, n)) {
                ans = min(ans, mid);
                end = mid-1;
            } 
            else {
                start=mid+1;
            }
    }
    cout<<ans;
    return 0;
}
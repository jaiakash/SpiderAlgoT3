#include <bits/stdc++.h>
using namespace std;

long divide(long arr[], long n, long sum)
{
    bool list[n+1][sum+1]={};
  	for(long i=0;i<=n;i++)list[i][0]=true;
  	for(long i=1;i<=sum;i++)list[0][i]=false;
  
    for (long i = 1; i <= n; i++) {
        for (long j = 1; j <= sum; j++) {
            list[i][j]=list[i-1][j];
  
            if (arr[i-1]<=j)list[i][j]|=list[i-1][j-arr[i-1]];
        }
    }
  
    long ans = LONG_MAX;

    for (long j=sum/2;j>=0;j--) {
        if (list[n][j]) {
            ans=j;
            break;
        }
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    long N,M,sum=0;
    cin>>N>>M;
    long A[M]={0};
    for(long i=0;i<M;i++){
        cin>>A[i];
        sum+=A[i];
    }
    if(N==1){
        cout<<sum;
        return 0;
    }
    
    cout<<divide(A,M,sum);
}
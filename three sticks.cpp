#include <iostream>
#include <bits/stdc++.h>

#define ll long long int
using namespace std;
int main(){

int t, i;
cin>>t;
while(t--){
		int n;
        cin>>n;
	    vector<int> arr(n);
	    for(i=0;i<n; i++){
			cin>>arr[i];
	    }

	sort(arr.begin(), arr.end());
ll ans=LLONG_MAX;
	for(i=1; i<=n-2; i++){
		if(arr[i-1]==arr[i]  && arr[i]==arr[i+1]){
			ans = 0;
			break;
		}

		  if(arr[i-1]==arr[i]){
                ans=arr[i+1]-arr[i];
            }
            else if(arr[i+1]==arr[i]){
                ans=arr[i]-arr[i-1];
            }
            else{
                ans=(arr[i]-arr[i-1])+(arr[i+1]-arr[i]);
            }
	}

	cout<<ans<<endl;

}






}

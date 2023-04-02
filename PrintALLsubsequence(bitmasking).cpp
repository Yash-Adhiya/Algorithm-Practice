#include <bits/stdc++.h>
using namespace std;


#define forn(i,n) for(int i=0;i<n;i++)
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ln "\n"
#define pb push_back
#define fi first
#define se second
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

vector<vector<int>> genratess(vector<int> &arr){
	vector<vector<int>> ans;
	for(int num = 0;num<(1<<arr.size());num++){
		vector<int> temp;
		for(int i = 0;i<arr.size();i++){
			if(num&(1<<i)){
				temp.push_back(arr[i]);
			}
		}
		if(temp.size()>0) ans.push_back(temp); 
	}
	sort(ans.begin(),ans.end());
	return ans;
}


int main(){
	fastio();
	
	// genrate all the subsequneces of an array using bit masking 
	vector<int> arr = {1,2,3};

	vector<vector<int>> ans; 
	ans = genratess(arr);

	for(auto v:ans){
		for(auto ele:v){
			cout<<ele<<" ";
		}
		cout<<endl;
	}



}
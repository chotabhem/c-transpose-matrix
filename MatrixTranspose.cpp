#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<ll>
#define vc vector<char> 

int main(){
	ll n,m;
	cout<<"Enter no of rows of matrix ";
	cin>>n;
	cout<<"Enter no of columns of matrix ";
	cin>>m;
	vector<vector<ll>>mat(n,vector<ll>(m));
	cout<<"Enter the numbers of matrix"<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>mat[i][j];
		}
	}
	vector<vector<ll>>trans(m,vector<ll>(n));
    for(int i=0;i<n;i++){
       for(int j=0;j<m;j++){
		trans[j][i]=mat[i][j];
	   }
	}
	cout<<"Transposed matrix: "<<endl;
	for(auto it: trans){
	   for(auto ip: it)
	   cout<<ip<<' ';
	   cout<<endl;
	}
	return 0;
}

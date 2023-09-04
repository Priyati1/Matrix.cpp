#include<iostream>
using namespace std;
int main(){
	int n,m;
	int arr[100][100];
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>arr[i][j];
		}
	}

	for(int i=0;i<n;i++){
		int max=INT_MIN;
		for(int j=0;j<m;j++){
			if(max < arr[i][j]){ 
				max=arr[i][j];
			}

		}
		cout<<max<<endl;
	}
	
	return 0;
}


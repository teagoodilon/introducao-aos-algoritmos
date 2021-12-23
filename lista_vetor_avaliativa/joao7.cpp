#include <iostream>

using namespace std;
	
int main(){
	
int n, n1,c=0,l=0;
cin>>n;
cin>>n1;
int m[n][n1];

for(int l=0;l < n; l++){
	for(int c = 0; c < n1; c++){
		cin>>m[l][c];
	}
}
l=n-1;
while(l>=0){
	while(c<n1){
		cout<<m[l][c]<<" ";
		c++;
		}
    cout<<"aqui"<<endl;
    l--;
	while(c>=0 and l>=0){
        cout<<"aqui2";
        cout<<m[l][c]<<" ";
		c--;
	}
    l--;
	c=0;
}
return 0;

}
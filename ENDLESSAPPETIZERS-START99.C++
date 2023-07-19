#include <iostream>
using namespace std;

int main() {int t;
cin>>t;
while(t--){
    

    int x,y,z;
    cin>>x>>y>>z;
    int s= (z/30);
    int p= (s+x);
    if(p%y==0){
        cout<<(p/y)<<endl;
    }else{
        cout<<((p/y)+1)<<endl;
    }
    
	// your code goes here
}	return 0;
}

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test , a;
	cin>>test;
	for(int i = 0 ; i<test ;i++ ){
	    cin>>a;
	    if((a%4) == 0){
	        for(int j = 0 ; j<(a/4); j++){
	           if(j%2 == 0){

	            cout<<"1001";
                }
                else{
                    cout<<"0110";
                }
	        }
	        cout<<endl;
	    }
	    if((a%2) == 1){
	        for(int j = 1; j<=a; j++){
	            cout<<(j%2);
	        }
	        cout<<endl;
	    }
	    if(((a%2) == 0 )&& ((a%4) != 0)){
	        for(int j = 0; j<a/4 ; j++){
                if(j%2 == 0){

	            cout<<"1001";
                }
                else{
                    cout<<"0110";
                }
	        }
	        cout<<"01"<<endl;
	        
	    }
	}
	return 0;
}
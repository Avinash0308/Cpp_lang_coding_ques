#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;
    cout<<hex<<showbase<<left;
    cout<<(int)A<<endl;
    cout<<setw(15)<<showpos<<dec<<setprecision(2)<<right<<setfill('_')<<fixed;
    cout<<B<<endl;
    cout<<scientific<<noshowpos<<setprecision(9);
    cout<<C<<endl;


    }	
	return 0;
	}
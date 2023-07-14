#include <iostream>

#include <string>
using namespace std; int main()
{
int test; cin >> test; // Reading input from STDIN
while (test--)
{ 
    string st;
 cin >> st; 
char n;
 int i = 0, j, s = 0; 
    for (j = 0; j < st.size(); j++) {
     n = st.at(j);  
 if (n == '0' || n == '6' || n == '9') 
i = 6; 
else if (n == '5' || n == '3' || n == '2') i = 5; 
else if (n == '1') i = 2;
 else if (n == '4') i = 4; 
else if (n == '7') i = 3; 
else if(n == '8') i = 7; 
else i=9;
 s += i; 
} 
if (s % 2 == 0) 
{ 
    for (i = s; i > 0; i -= 2)
 { 
    cout << "1"; 
}
 } 
else { cout << "7";
 for (i = s - 3; i > 0; i -= 2) 
{
     cout << "1"; } 
} 
cout << endl;
 }
 }

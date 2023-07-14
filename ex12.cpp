#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Matrix{
    public:
    vector<vector<int>> a;
    Matrix & operator +(const Matrix  &obj){
        Matrix *result;
        Matrix ab;
        result = &ab;
        for (int i = 0; i<obj.a.size(); ++i) {
        for (int j = 0; j<obj.a[0].size(); ++j) {
            result->a[i][j] = this->a[i][j] + obj.a[i][j];
        }
        }
        return *result;
    }
};
int main () {
   int cases,k;
   cout<<"put cases : ";
   cin >> cases;
   for(k=0;k<cases;k++) {
      Matrix x;
      Matrix y;
      Matrix result;
      int n,m,i,j;
      cout<<"put n and m : ";
      cin >> n >> m;
      for(i=0;i<n;i++) {
         vector<int> b;
         int num;
         for(j=0;j<m;j++) {
             cout<<"put num : ";
            cin >> num;
            b.push_back(num);
         }
         x.a.push_back(b);
      }
      for(i=0;i<n;i++) {
         vector<int> b;
         int num;
         for(j=0;j<m;j++) {
             cout<<"put num : ";
            cin >> num;
            b.push_back(num);
         }
         y.a.push_back(b);
      }
      result = x+y;
      for(i=0;i<n;i++) {
         for(j=0;j<m;j++) {
            cout << result.a[i][j] << " ";
         }
         cout << endl;
      }
   }  
   return 0;
}

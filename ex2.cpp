#include<iostrem>
using namespace std;

int main(){
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cout<<"Please enter the marks obtained in the subject "<<(i+1)<<" : ";
        cin>>arr[i];
    }
    cout<<endl<<endl<<endl;
        int r =0;
    for (int i = 0; i < 5; i++)
    {
        r = r + arr[i];
    }
    cout<<"Total marks obtained : "<<r<<endl;
    cout<<"Percentage obtained  : "<<((float)r/5)<<"%"<<endl;
    return 0;
}
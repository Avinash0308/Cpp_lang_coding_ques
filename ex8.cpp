#include<iostream>
#include<fstream>
using namespace std;

int main(){
    //Hello this is my self made exercise try as i want to check whatever i had read
    ofstream tum;
    tum.open("ex8.txt");
    tum<<"This is all what i want to say else everyting is all normal , and yes this is what i want to say, and yes i want to say that this is what i want to say and finally a bye\nand this is all\nbye to all\nyes i am going \nare you happy\ni don't think you are";
    tum.close();
    ifstream mai;
    mai.open("ex8.txt");
    string a ;
    while (mai.eof() == 0)
    {
        getline(mai,a);
        cout<<a<<endl;
    }
    cout<<"stop it here only";
    mai.close();
return 0;
}
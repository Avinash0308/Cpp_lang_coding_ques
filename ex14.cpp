#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Person{
    protected:
    string name; 
    int age;
    public:
    Person(){}
   virtual void getdata(){}
   virtual void putdata(){}
};
class Professor : public virtual Person{
    int publications , cur_id;
     static int a ;
    public: 
    void getdata(){
        a++;
        cin>>name>>age>>publications;
        cur_id = a;
    }
    void putdata(){
        cout<<name<<" "<<age<<" "<<publications<<" "<<cur_id<<endl;
    }
};

class Student :  public virtual Person{
    int marks[6];
    int cur_id;
    static int a;
    public:
    void getdata(){
        a++;
        cin>>name>>age;
        for (int i = 0 ; i<6; i++) {
            cin>>marks[i];
        }
        cur_id =a;
    }
    void putdata(){
        int x = 0;
        for (int i = 0; i<6; i++) {
        x = x + marks[i];
        }
        cout<<name<<" "<<age<<" "<<x<<" "<<cur_id<<endl;
    }
};
int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
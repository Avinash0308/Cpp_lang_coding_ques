#include <iostream>
#include <string>
using namespace std;

class Animals
{
private:
  string name;

public:
  int no_of_legs;
  string voice;
  void details(string his_name, int his_legs, string his_voice);
  void print_the_details()
  {
    cout << "The name of the animal is " << name << endl;
    cout << "The no. of legs of the animal is " << no_of_legs << endl;
    cout << "The voice of the animal is " << voice << endl;
  }
};
void Animals ::details(string his_name, int his_legs, string his_voice)
{
  name = his_name;
  no_of_legs = his_legs;
  
  voice = his_voice;
}
int main()
{
  Animals cow;
  cow.no_of_legs = 4;
  cow.voice = "Hnn";
  // cow.name = "f";
  cow.details("Cow",cow.no_of_legs,cow.voice);
  cow.print_the_details();
  return 0;
}
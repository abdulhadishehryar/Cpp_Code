# include <iostream>
# include <iomanip>
using namespace std;
int main (){
    // const int a = 100;
    // cout << a ;

    // manipulators in c++
    /*
    int a = 100,b= 150;
    cout << "The value of a is " << a << endl; // here we have added an endl whoch is use to set a line break and it is a manipulator in c++
    cout << "The value of b is " << b ;
    */
   /*
   int a = 24, b=84;
    cout << "The value of a is " << setw(5) << a << "The value of b is " << setw(5) << b; // The setw is also a manipulator in c++ whch s use to set a width of certain charactore thatg we have enclosed in ()
   */
  //Operator precedence in c++
  int a = 10, b = 40;
  int c = (((a*5)+b*2)+22); // operator precedence in c++ means that which operator wll execute first
  cout << c;
    return 0;
}


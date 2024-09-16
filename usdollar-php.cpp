#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  
  int money, converted;
  char unit;

  cout << "D = US dollar\n";
  cout << "P = Philippine peso\n";
  cout << "Enter unit of what you like to convert to: ";
  cin >> unit;

  if(unit == 'D' || unit == 'd'){
    cout << "Enter money in peso: \n";
    cin >> money;

    converted = money / 56.3157;
    cout << converted << " $\n";
    cout << fixed << setprecision(2);

  } else if(unit == 'P' || unit == 'p'){
    cout << "Enter money in dollar: \n";
    cin >> money;

    converted = money * 56.3157;
    cout << converted << " P\n";
    cout << fixed << setprecision(2);
  }
    else{
      cout << "INVALID RESPONSE!";
    }



  


  
  

  return 0;
}
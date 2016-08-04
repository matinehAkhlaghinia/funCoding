#include <iostream>
#include <sstream>
#include <string>
using namespace std;

void urlify(string a, int length)
{ 
  string b = "";
  int char_count = 0;
  
  for(int i = 0; i < a.length() and char_count < length; i++) {
    if(a[i] != ' ') {  
      b += a[i];
    }
    else {
      b += "%20";
    }
    char_count++;
  }

  cout << b << endl;
}
int main()
{
  int length;
  string myString;

  getline(cin, myString, ',');
  cin >> length;
  urlify(myString, length);
  return 0;
}
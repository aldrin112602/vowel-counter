#include <iostream>

#include <cstring>

#include <cctype>

using namespace std;
int vowelCount(char * s) {
  int count = 0;
  while (( * s) != '\0') {
    if ( * s == 'a' || * s == 'A' || * s == 'e' || * s == 'E' || * s == 'i' || * s == 'I' || * s == 'o' || * s == 'O' || * s == 'u' || * s == 'U') {
      count++;
    }
    s++;
  }
  return count;
}
int main() {
  int n;
  cout << "How many names you'd like to enter?: ";
  cin >> n;
  string str[n];
  int j = 1;
  for (int i = 0; i < n; i++) {
    cout << "Enter name " << j << ": ";
    cin >> str[i];
    j++;
  }
  cout << endl << endl;
  for (int i = 0; i < n; i++) {
    char char_array[str[i].length()];
    strcpy(char_array, str[i].c_str());
    cout << "The total vowels in ";
    for (int k = 0; k < sizeof(char_array); k++) {
      char ch = toupper(char_array[k]);
      cout << ch;
    }
    cout << " is: " << vowelCount(char_array) << endl;
  }

}

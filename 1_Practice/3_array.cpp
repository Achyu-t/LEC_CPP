#include <iostream>
using namespace std;

int main() {

  int marks[5];
  int total,i;

  cout << "Enter marks in five subjects: " << endl;

  for (i = 0; i < 5; i++) {
    cin >> marks[i];
  }

  for (i = 0; i < 5; i++) {
      total = total +marks[i];
  }
    cout << "The total marks are: "<<total;
  return 0;
}
# include <iostream>
using namespace std;

int main() {

  char op;
  float num1, num2;

  cout << "Enter the 1st number:";
  cin >> num1;
  cout<<  "Enter the 2nd number:";
  cin >> num2;
  cout << " Enter operator: +, -, *, / ";
  cin >> op;
  switch(op) {

    case '+':
      cout << num1 << " + " << num2 << " = " << num1 + num2;
      break;

    case '-':
      cout << num1 << " - " << num2 << " = " << num1 - num2;
      break;

    case '*':
      cout << num1 << " * " << num2 << " = " << num1 * num2;
      break;

    case '/':
      cout << num1 << " / " << num2 << " = " << num1 / num2;
      break;

    default:
      cout << "Error! operator is not correct";
      break;
  }

  return 0;
}
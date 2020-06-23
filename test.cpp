#include <iostream>
#include "calc.h"
 
using namespace std;

int main()
{
   char operation = 'c';
   int num1, num2;
 
   while(operation != 'e')
   {
      cout << "Выберите операцию: сложение(+), вычитание(-), деление(/), умножение(*), выход (e):";
      cin >> operation;
 
      switch(operation)
      {
         case '+':
                  cin >> num1;
                  cin >> num2;
                  cout << num1 << "+" << num2 << "=" << sum(num1,num2) << endl;
                  break;
         case '-':
                  cin >> num1;
                  cin >> num2;
                  cout << num1 << "-" << num2 << "=" << subtraction(num1,num2) << endl;
                  break;
         case '/':
                  cin >> num1;
                  cin >> num2;
                  cout << num1 << "/" << num2 << "=" << division(num1,num2) << endl;
                  break;
         case '*':
                  cin >> num1;
                  cin >> num2;
                  cout << num1 << "*" << num2 << "=" << multi(num1,num2) << endl;
                  break;
         case 'e':
                  return 0;
         default:
                  cout << "Неправильный ввод" << endl;
      }
   }
 
   return 0;
}

#include <iostream>
#include <fstream>
extern "C" {
	#include "calc.h"
}
 
using namespace std;

int main()
{
   ofstream fout;
   fout.open("file.json");
  
   char operation = 'c';
   float num1, num2;
   int k = 0;
 
   while(operation != 'e')
   {
      cout << "Выберите операцию: сложение(+), вычитание(-), деление(/), умножение(*), выход (e):";
      cin >> operation;
 
      switch(operation)
      {
         case '+':
                  cin >> num1;
                  cin >> num2;
		  k++;
                  fout << k << ")." << num1 << "+" << num2 << "=" << sum(num1,num2) << endl;
                  break;
         case '-':
                  cin >> num1;
                  cin >> num2;
		  k++;
                  fout << k << ")." << num1 << "-" << num2 << "=" << subtraction(num1,num2) << endl;
                  break;
         case '/':
                  cin >> num1;
                  cin >> num2;
		  k++;
                  fout << k << "). " <<  num1 << "/" << num2 << "=" << division(num1,num2) << endl;
                  break;
         case '*':
                  cin >> num1;
                  cin >> num2;
		  k++;
                  fout << k << "). " << num1 << "*" << num2 << "=" << multi(num1,num2) << endl;
                  break;
         case 'e':
		  fout.close();
                  return 0;
         default:
                  fout << "Неправильный ввод" << endl;
      }
   }
 
   return 0;
}

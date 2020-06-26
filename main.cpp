#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <nlohmann/json.hpp>
extern "C" {
	#include "calc.h"
}
using json = nlohmann::json; 
using namespace std;

namespace ns {
        struct expression {
                int exprnumber;
                float number1;
                string operation;
                float number2;
                float result;
        };
}

int main(int argc, char *argv[] )
{

    if (argc!=4){
        cout << "Вы ввели неправильное количество аргументов";
    }else{
    json js;

    ofstream ojs("out.json");

 
    char operation = 'c';
    float num1, num2, result;
    int k = 0;

       operation = argv[2][0];
       num1 = atoi(argv[1]);
       num2 = atoi(argv[3]);
 
     switch(operation){
     case '+':{
//                  cin >> num1;
//                  cin >> num2;
                  k++;
                  result = num1 + num2;
                  ns::expression ex = {k, num1, "+", num2, result};
                  js["exprnumber"] = ex.exprnumber;
                  js["number1"] = ex.number1;
                  js["operation"] = ex.operation;
                  js["number2"] = ex.number2;
                  js["result"] = ex.result;
                  ojs << setw(4) << js << endl;
     }break;
     case '-':{
//                  cin >> num1;
//                  cin >> num2;
		  k++;
                  result = num1 - num2;
                  ns::expression ex = {k, num1, "-", num2, result};
                  js["exprnumber"] = ex.exprnumber;
                  js["number1"] = ex.number1;
                  js["operation"] = ex.operation;
                  js["number2"] = ex.number2;
                  js["result"] = ex.result;
                  ojs << setw(4) << js << endl;
                 // fout << k << ")." << num1 << "-" << num2 << "=" << subtraction(num1,num2) << endl;
     }break;
     case '/':{
//                  cin >> num1;
//                  cin >> num2;
		  k++;
                  result = num1 / num2;
                  ns::expression ex = {k, num1, "/", num2, result};
                  js["exprnumber"] = ex.exprnumber;
                  js["number1"] = ex.number1;
                  js["operation"] = ex.operation;
                  js["number2"] = ex.number2;
                  js["result"] = ex.result;
                  ojs << setw(4) << js << endl;
     }break;
     case '*':{
//                  cin >> num1;
//                  cin >> num2;
		  k++;
                  result = num1 * num2;
                  ns::expression ex = {k, num1, "*", num2, result};
                  js["exprnumber"] = ex.exprnumber;
                  js["number1"] = ex.number1;
                  js["operation"] = ex.operation;
                  js["number2"] = ex.number2;
                  js["result"] = ex.result;
                  ojs << setw(4) << js << endl;
     }break;
     case 'e':{
                  ojs.close();
                  break;
     }default:
                  ojs << "Неправильный ввод" << endl;
     }
    }
    return 0;
}

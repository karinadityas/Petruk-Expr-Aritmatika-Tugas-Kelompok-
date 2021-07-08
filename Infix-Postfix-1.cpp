#include <iostream>
#include <string>
using namespace std;


bool operand(char a){
int asci = (int)a;
if (asci >= 48 && asci <= 57){
    return true;
} else {return false;}

}

bool is_operator(char a){
int asci = (int)a;
if (!(asci >= 48 && asci <= 57)){
    return true;
} else {return false;}

}

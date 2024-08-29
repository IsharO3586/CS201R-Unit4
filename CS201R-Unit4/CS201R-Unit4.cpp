// CS201R-Unit4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <string>    //for stoi function
#include "arrayFunctions.h"
#include "vectorFunctions.h"
int main()
{
    
    cout << "REVIEW EXAMPLES\n";
    //REVIEW - INTEGER DIVISION & STATIC CASTING
    int a = 10, b = 3;
    float result = a / b;
    cout << "result = " << result << endl;

    //REVIEW STRING TO INTEGER
    string str1 = "1234";
    a = stoi(str1);
    cout << "string is now an integer: " << a << endl;

    //REVIEW INTEGER TO ASCII CHAR
    char char1;
    cout << char(84) << char(104) << char(105) << char(115);
    cout << " is printing some stuff\n";
    for (int i = 0; i < 6; i++) {
        char1 = char('A' + i);
        cout << char1 << " ";
    }
    cout << endl;
    /*
    //BINARY STRING TO DECIMAL VALUE
    str1 = "1110";  //binary string
    int dec = 0, pow = 1;
    for (int i = str1.length() - 1; i >= 0; --i) {
        if (str1.at(i) == '1')
            dec += pow;
        pow *= 2;
    }
    cout << "String: " << str1 << " = " << dec << " in decimal\n";


    //DECIMAL VALUE TO BINARY
    str1 = "";  //binary string
    int holdValue, decValue = 17, newBase = 2, remainder;
    holdValue = decValue;
    while (decValue > 0) {
        remainder = decValue % newBase;
        str1 = to_string(remainder) + str1;
        decValue /= newBase;
    }
    cout << "Decimal Value " << holdValue << " = " << str1 << " in binary\n";

    cout << endl << endl << endl;
    arrayExample1();
    arrayExample2();
    arrayExample3();
    //arrayExample4();
    //arrayExample5();
    */
    cout << endl << endl << endl;
    //vectorExample1();  //find smallest;add values;print
    //vectorExample2();  //2-D vector (matrix)
}
 

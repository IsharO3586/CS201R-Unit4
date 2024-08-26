#pragma once
 

#include <iostream>  //used for standard i/o
#include <iomanip>   //used to format output
#include <utility>   //for swap function


using namespace std;

//ARRAY FUNCTION DECLARATIONS
void getArray(int a[], const int size);
void printArray(int a[], const int size);
double average(int a[], const int size);
void arrayExample1(); //input, manipulate, print, pass array
void arrayExample2(); //ex1 plus unsafe demo
void arrayExample3(); //ex1 plus declare size using const variable
void arrayExample4(); //2-D mult chart
void arrayExample5(); //ex1 plus sort array
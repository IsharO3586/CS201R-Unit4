#include "vectorFunctions.h"

void printVector(vector<int> v1) {
    for (int i = 0; i < v1.size(); ++i)  
        cout << v1.at(i) << " ";

    cout << endl;
}

void vectorExample1() {
    cout << "\nVECTOR - EXAMPLE 1\n";
    int numb, val, smallest = 0;
    vector<int> listNumb = {16, 15, 71, 8, -9, 100};

    cout << "   Enter the number of additional values for vector: ";
    cin >> numb;

    //add logic to find smallest element
    cout << "   Enter " << numb << " values: ";
    for (int i = 0; i < numb; i++) {
        cin >> val;
        listNumb.push_back(val);
    }
    cout << "   The smallest value is: " << smallest << endl;
}

void readVector(string str1, vector<vector<int>> &v1){

    int row, col, tempValue;
    vector<int> currRow;
    stringstream ss(str1);
    v1.clear();
    
    //first 2 values are row & col
    ss >> row >> col;
    //read each row
    for (int i = 0; i < row; ++i) {
        //for each row - clear currRow
        //read 'col' numbers into the currRow
        currRow.clear();

        for (int j = 0; j < col; ++j) {
            ss >> tempValue;
            currRow.push_back(tempValue);
        }
        //add currRow to v1
        v1.push_back(currRow);
    }
}
void printVector(vector<vector<int>> v1) {
    cout << "   Printing vector: " << v1.size() << ":" << v1.at(0).size() << endl;
    for (int i = 0; i < v1.size(); ++i) {
        for (int j = 0; j < v1.at(i).size(); ++j)
            cout << v1.at(i).at(j) << " ";
        cout << endl;
    }
    cout << endl;
}

void addVectors(vector<vector<int>> v1, vector<vector<int>> v2) {
 //write logic to add v1 & v2 and print result 



}
void vectorExample2() {
    cout << "\nVECTOR - EXAMPLE 2\n";
    vector<vector<int>> listNumb;
    string str1;
    ifstream inFile;
    inFile.open("data.txt");
    if (!inFile.good()) {
        cout << "  Unable to open file\n";
        return;
    }
    while (getline(inFile, str1)) {
        readVector(str1, listNumb);
        printVector(listNumb);
    }
    inFile.close();
}
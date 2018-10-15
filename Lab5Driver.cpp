// Lab5Driver.cpp
// Jeremiah Vaskis
// Lab 05
// 10/15/2018

#include <iostream>
using namespace std;

#include "Lab5MyStack.h"

int main() {

	string StringInput1 = "ABC";
	string StringInput2 = "TRUMP 2020 BABY!";


	cout << "Input String: \t" << StringInput1 << endl << endl;
	cout << "SR 1\t" << stringReversal1(StringInput1) << endl;
	cout << "SR 2\t" << stringReversal2(StringInput1) << endl;
	cout << "SR 3\t" << stringReversal3(StringInput1) << endl;
	cout << "SR 4\t" << stringReversal4(StringInput1) << endl << endl;

	cout << "Input String: \t" << StringInput2 << endl << endl;
	cout << "SR 1\t" << stringReversal1(StringInput2) << endl;
	cout << "SR 2\t" << stringReversal2(StringInput2) << endl;
	cout << "SR 3\t" << stringReversal3(StringInput2) << endl;
	cout << "SR 4\t" << stringReversal4(StringInput2) << endl << endl;


	system("pause");
	return 0;
}

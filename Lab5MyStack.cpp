// Lab5MyStack.cpp
// Jeremiah Vaskis
// Lab 05
// 10/15/2018

#include "Lab5MyStack.h"
#include <iostream>
#include <stack>
#include <string>
#include <vector>
#include <list>

using namespace std;



string stringReversal1(string input)
{
	stack <char> Stack1;
	string output = "";

	// Take and put every character from string "input" and push onto Stack1
	for (int i = 0; i < input.length(); i++) {
		Stack1.push(input.at(i));
	}

	// If the Stack is not empty
	while (!(Stack1.empty())) {
		output.push_back(Stack1.top());
		Stack1.pop();
	}

	return output;
}



string stringReversal2(string input){
	vector <char> Vector1;
	string output = "";

	// Take and put every character from string "input" and push onto Vector1
	for (int i = 0; i < input.length(); i++) {
		Vector1.push_back(input.at(i));
	}

	// If the Vecotr is not empty
	while (!(Vector1.empty())) {
		output.push_back(Vector1.back());
		Vector1.pop_back();
	}

	return output;
}



string stringReversal3(string input){
	list <char> List1;
	string output = "";

	// Take and put every character from string "input" and push onto List1
	for (int i = 0; i < input.length(); i++) {
		List1.push_back(input.at(i));
	}

	// If the List is not empty
	while (!(List1.empty())) {
		output.push_back(List1.back());
		List1.pop_back();
	}

	return output;
}



string stringReversal4(string input){
	MyStack MyStack1;
	string output = "";

	for (int i = 0; i < input.length(); i++) {
		MyStack1.push(input.at(i));
	}

	while (!(MyStack1.isEmpty())) {
		output.push_back(MyStack1.pull());
	}

	return output;
}
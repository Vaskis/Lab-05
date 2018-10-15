// Lab5MyStack.h
// Jeremiah Vaskis
// Lab 05
// 10/15/2018


#pragma once
#ifndef LAB5MYSTACK_H_
#define LAB5MYSTACK_H_
#endif
#include <iostream>
#include <string>
#include <vector>

using namespace std;

string stringReversal1(string input);

string stringReversal2(string input);

string stringReversal3(string input);

string stringReversal4(string input);

class MyStack {
private:
	vector <char> store;

public:
	MyStack() {};
	~MyStack() {};

	bool isEmpty() const {
		return store.size() == 0;
	}

	void push(char& item) {
		store.push_back(item);
	}

	// Responsible for both top and pop (will give the top value and then delete it afterwards)
	char pull() {
		char item = store.back();
		store.pop_back();
		return item;
	}
};

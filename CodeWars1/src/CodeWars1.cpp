//============================================================================
// Name        : CodeWars1.cpp
// Author      : grec88
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <math.h>

using namespace std;

vector<string> solution(const string &s) {
	vector<string> res;
	stringstream ss(s);
	for (size_t i = 0; i < ceil(s.size() / 2.); ++i) {
		char a, b;
		string temp;
		ss.get(a);
		ss.get(b);
		if (!ss) {
			b = '_';
		}
		res.push_back({a, b});
	}
	return res; // Your code here
}

void PrintVector(const vector<string> &v) {
	for (const auto &c : v) {
		cout << c << " ";
	}
}

int main() {

	return 0;
}

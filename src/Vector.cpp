//============================================================================
// Name        : Vector.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <iostream>
#define  HI "hi"
#define SIZE 10
using namespace std;
typedef vector<int>::size_type v_size;
extern bool search(vector<int>::iterator start, vector<int>::iterator end, int aim);
int main2() {
//	vector<string> ivec(SIZE, HI);
//	for (vector<string>::iterator iter = ivec.begin(); iter != ivec.end();
//			++iter) {
//		cout << *iter << endl;
//	}
//	cout << endl;
//	for (v_size ix = 0; ix != ivec.size(); ++ix) {
//		cout << ivec[ix] << endl;
//	}
//	return 0;
	vector<int> target(10);
	for(v_size i=0;i!=target.size();i++){
		target[i]=i;
	}
	bool flag = search(target.begin(),target.end(),5);
	cout<<flag<<endl;
	return 0;
}
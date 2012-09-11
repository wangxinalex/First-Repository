/*
 * testodd.cpp
 *
 *  Created on: 2012-8-20
 *      Author: Administrator
 */

#include <list>
#include <deque>
#include <iostream>

using namespace std;
int main3() {
	list<int> li;
	deque<int> odd, even;
	for (size_t i = 0; i < 10; i++) {
		li.push_back(i);
	}
	list<int>::iterator iter;
	for (iter = li.begin(); iter != li.end(); iter++) {
		if (*iter % 2 == 0) {
			even.push_back(*iter);
		} else {
			odd.push_back(*iter);
		}
	}
	deque<int>::size_type size;
	for (size = 0; size != odd.size(); size++) {
		cout << odd[size] << " ";

	}
	cout<<endl;
	size = 0;
	for (size = 0; size != even.size(); size++) {
		cout << even[size] << " ";

	}
	return 0;

}


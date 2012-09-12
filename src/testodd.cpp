/*========================================================================
#   FileName: testodd.cpp
#     Author: wangxinalex
#      Email: wangxinalex@gmail.com
#   HomePage: wangxinalex@gmail.com
# LastChange: 2012-09-11 21:58:31
========================================================================*/
#include <iostream>
#include <list>
#include <deque>
#include <iostream>

using namespace std;
int main() {
	list<int> li;
	deque<int> odd, even;
	for (size_t i = 0; i < 100; i++) {
		li.push_back(i);
	}
/*This is a test comment*/
	list<int>::iterator iter;
	for (iter = li.begin(); iter != li.end(); iter++) {
		if (*iter % 2 == 0) {
			even.push_back(*iter);
		} else {
			odd.push_back(*iter);
		}
	}
	int flag;
	deque<int>::size_type size;
	cin>>flag;
	if(flag==1){
		for (size = 0; size != odd.size(); size++) {
			cout << odd[size] << " ";
		}
		cout<<endl;
	}
	else{
		for (size = 0; size != even.size(); size++) {
			cout << even[size] << " ";
		}
	}
	return 0;
}


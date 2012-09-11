/*========================================================================
#   FileName: search.cpp
#     Author: wangxinalex
#      Email: wangxinalex@gmail.com
#   HomePage: wangxinalex@gmail.com
# LastChange: 2012-09-11 23:55:55
========================================================================*/
#include <vector>
#include <iostream>
using namespace std;

bool search(vector<int>::iterator start, vector<int>::iterator end, int aim) {
	while (start != end) {
		if(*start == aim){
			return true;
		}else{
			start++;
		}
	}
	return false;
}


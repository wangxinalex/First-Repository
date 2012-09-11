/*
 * search.cpp
 *
 *  Created on: 2012-8-20
 *      Author: Administrator
 */
#include <vector>
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


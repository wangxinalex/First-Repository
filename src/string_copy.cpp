/*
 * string_copy.cpp
 *
 *  Created on: 2012-8-21
 *      Author: Administrator
 */

#include <list>
#include <vector>
#include <iostream>
using namespace std;
int main(){
	char* sa[] = {"do","re","mi","fa"};
	list<char*> c_list(sa,sa+4);
	vector<string> str_vector;
	str_vector.assign(c_list.begin(),c_list.end());

	for(vector<string>::iterator iter = str_vector.begin();iter!=str_vector.end();iter++){
		cout<<*iter<<endl;
	}
	return 0;
}



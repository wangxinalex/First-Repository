/*========================================================================
#   FileName: string_copy.cpp
#     Author: wangxinalex
#      Email: wangxinalex@gmail.com
#   HomePage: wangxinalex@gmail.com
# LastChange: 2012-09-11 21:55:53
========================================================================*/
#include <iostream>
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



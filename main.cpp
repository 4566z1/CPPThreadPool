#include "ThreadPool.hpp"

#include <iostream>

using std::cout;
using std::endl;

int test(){
	cout << "testdsf" << endl;
	return 0;
}

int main(){
	ThreadPool thread_pool(10);
	thread_pool.join(test);
	thread_pool.join(test);
	thread_pool.join(test);
	thread_pool.join(test);

	while(true) { }
	return 0;
}
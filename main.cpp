#include <iostream>
#include "IPCQueue.h"
#include <unistd.h>

using namespace std;


int main()
{
	// test if file creation works
	IPCQueue a("test");
	IPCQueue b("test");
	sleep(4);	
	cout << "main: done" << endl;

	return 0;
}


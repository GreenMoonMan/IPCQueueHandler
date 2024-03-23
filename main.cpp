#include <iostream>
#include "IPCQueue.h"
#include <unistd.h>

using namespace std;


int main()
{
	// test if file creation works
	IPCQueue a("test");
	IPCQueue b("test");
	a.write("a wrote a command");
	cout << b.read() << endl;
	b.write("b wrote a command");
	cout << a.read() << endl;

	// sleep(4);	
	cout << "main: done\n\n" << endl;
	return 0;
}


#include "IPCQueue.h"
#include <filesystem>
#include <fstream>
#include <iostream>

namespace fs = std::filesystem;
using std::cout;
using std::endl;


IPCQueue::IPCQueue(const std::string IPCName)
{
	fs::create_directories(QUEUES_DIR);
	_queueFile = QUEUES_DIR / IPCName;
	// write/read proj_ids
	int outNum;
	int inNum;

	// if queue already created
	if(fs::exists(_queueFile))
	{
		cout << "queue file already exists" << endl;
		_first_instance = false;
		outNum = 1;
		inNum = 0;
	}

	else
	{
		_first_instance = true;
		// create queue file
		cout << "queue file does not exist, creating" << endl;
		std::ofstream qf(_queueFile);
		qf << "queue created!" << endl;
		qf.close();
		// order swapped compared to existing queue
		outNum = 0;
		inNum = 1;
	}
}


IPCQueue::~IPCQueue()
{
	// delete queue file if this object created it
	if(_first_instance)
	{
		fs::remove(_queueFile);
	}
}


std::string IPCQueue::read() const
{

}


void IPCQueue::write(std::string command)
{

}



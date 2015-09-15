#include "spnSimulator.h"
#include "spnUtils.h"
#include <thread>

void spnSimulator::runTransition(spnTransition const& trans, int id) {
	SPN_LOG1("Transition thread started: ", id);
}

void spnSimulator::startSimulation() {
	SPN_LOG("Start simulation");
	int i = 0;
	for (auto it = trans.begin(); it != trans.end(); it++, i++) {
		t[i] = std::thread(runTransition, *it, i);
	}
}

void spnSimulator::stopSimulation() {
	SPN_LOG("Stop simulation");
	for(auto i = 0;i<SPN_THREAD_NUM;i++)
		t[i].join();
}

void spnSimulator::addTransition(spnTransition const& tran) {
	trans.push_back(tran);
}

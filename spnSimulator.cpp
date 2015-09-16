#include "spnSimulator.h"
#include "spnUtils.h"
#include <thread>

void spnSimulator::runTransition(spnTransition* trans, int id) {
	SPN_LOG1("Transition thread started: ", id);
	while (isRunning[id]) {
		mtx.lock();
		trans->fire();
		mtx.unlock();
		std::this_thread::sleep_for(
				std::chrono::microseconds((1000000 / trans->getFireRate())));
	}
}

void spnSimulator::startSimulation() {
	SPN_LOG("Start simulation");
	int i = 0;
	for (auto it = trans.begin(); it != trans.end(); it++, i++) {
		isRunning[i] = true;
		t[i] = std::thread(&spnSimulator::runTransition, this, (*it), i);
	}
}

void spnSimulator::stopSimulation() {
	SPN_LOG("Stop simulation");
	int i = 0;
	for (auto it = trans.begin(); it != trans.end(); it++, i++) {
		isRunning[i] = false;
		t[i].join();
	}
}

void spnSimulator::addTransition(spnTransition* tran) {
	trans.push_back(tran);
}

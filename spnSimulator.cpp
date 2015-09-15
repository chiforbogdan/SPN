#include "spnSimulator.h"
#include "spnUtils.h"

void spnSimulator::startSimulation() {
	SPN_LOG("Start simulation");
}

void spnSimulator::addTransition(spnTransition const& tran) {
	trans.push_back(tran);
}

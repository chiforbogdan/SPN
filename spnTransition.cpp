#include "spnTransition.h"

spnTransition::spnTransition(std::string const& name) {
	this->name = name;
	rate = 0;
	fires = 0;
}

spnTransition::~spnTransition() {
	rate = 0;
}

uint32_t spnTransition::getFireRate() const {
	return rate;
}

void spnTransition::setFireRate(uint32_t rate) {
	this->rate = rate;
}

void spnTransition::addInputPlace(spnPlace* p) {
	inp.push_back(p);
}

void spnTransition::addOutputPlace(spnPlace* p) {
	outp.push_back(p);
}

void spnTransition::fire() {
	/*See if transition can fire*/
	if (!inp.empty()) {
		for (auto it = inp.begin(); it != inp.end(); it++) {
			/*Transition is disabled*/
			if (!(*it)->getTokens()) {
				return;
			}
		}
		/*Decrement input tokens*/
		for (auto it = inp.begin(); it != inp.end(); it++) {
			(*it)->decrementTokens();
		}
	}
	/*Increment output tokens*/
	for (auto it = outp.begin(); it != outp.end(); it++) {
		(*it)->incrementTokens();
	}
	fires++;
}

uint32_t spnTransition::getFires() const {
	return fires;
}

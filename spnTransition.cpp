#include "spnTransition.h"

spnTransition::spnTransition() {
	rate = 0;
}

spnTransition::~spnTransition() {
	rate = 0;
}

uint32_t spnTransition::getFireRate() {
	return rate;
}

void spnTransition::setFireRate(uint32_t rate) {
	this->rate = rate;
}

void spnTransition::addInputPlace(spnPlace const &p) {
	inp.push_back(p);
}

void spnTransition::addOutputPlace(spnPlace const &p) {
	outp.push_back(p);
}

void spnTransition::fire() {
	/*See if transition can fire*/
	for (auto it = inp.begin(); it != inp.end(); it++) {
		/*Transition is disabled*/
		if (!it->getTokens())
			return;
	}
	/*Decrement input tokens*/
	for (auto it = inp.begin(); it != inp.end(); it++) {
		it->decrementTokens();
	}
	/*Increment output tokens*/
	for (auto it = outp.begin(); it != outp.end(); it++) {
		it->decrementTokens();
	}

}

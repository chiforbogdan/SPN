#include "spnPlace.h"

spnPlace::spnPlace() {
	tokens = 0;
}

spnPlace::spnPlace(uint32_t tokens) {
	this->tokens = tokens;
}

spnPlace::~spnPlace() {
}

void spnPlace::incrementTokens() {
	tokens++;
}

void spnPlace::decrementTokens() {
	tokens--;
}

uint32_t spnPlace::getTokens() {
	return tokens;
}

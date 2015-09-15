#ifndef SPN_SIMULATOR_H
#define SPN_SIMULATOR_H

#include <vector>
#include "spnTransition.h"

class spnSimulator {
private:
	std::vector<spnTransition> trans; /*Transitions*/
public:
	/**
	 * @brief Start simulation
	 * @return none
	 */
	void startSimulation();
	/**
	 * @brief Add transition
	 * @return none
	 */
	void addTransition(spnTransition const& tran);
};

#endif

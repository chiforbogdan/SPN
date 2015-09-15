#ifndef SPN_SIMULATOR_H
#define SPN_SIMULATOR_H

#include <vector>
#include <thread>
#include "spnTransition.h"

#define SPN_THREAD_NUM 1000

class spnSimulator {
private:
	std::vector<spnTransition> trans; /*Transitions*/
	std::thread t[SPN_THREAD_NUM]; /*Transition threads*/
	/**
	 * @brief Run transition
	 * @param[in] trans Transition
	 * @param[in] id Transition id
	 * @return none
	 */
	static void runTransition(spnTransition const& trans, int id);
public:
	/**
	 * @brief Start simulation
	 * @return none
	 */
	void startSimulation();
	/**
	 * @brief Stop simulation
	 * @return none
	 */
	void stopSimulation();
	/**
	 * @brief Add transition
	 * @return none
	 */
	void addTransition(spnTransition const& tran);
};

#endif

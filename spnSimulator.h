#ifndef SPN_SIMULATOR_H
#define SPN_SIMULATOR_H

#include <vector>
#include <thread>
#include <chrono>
#include <mutex>
#include "spnTransition.h"

#define SPN_THREAD_NUM 1000

class spnSimulator {
private:
	std::vector<spnTransition*> trans; /*Transitions*/
	std::thread t[SPN_THREAD_NUM]; /*Transition threads*/
	std::mutex mtx; /*Transition fire mutex*/
	bool isRunning[SPN_THREAD_NUM]; /*Specify if the thread should be running*/
	/**
	 * @brief Run transition
	 * @param[in] trans Transition
	 * @param[in] id Transition id
	 * @return none
	 */
	void runTransition(spnTransition* trans, int id);
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
	void addTransition(spnTransition* tran);
};

#endif

#ifndef SPN_TRANSITION_H
#define SPN_TRANSITION_H

#include <vector>
#include <stdint.h>
#include "spnPlace.h"

class spnTransition {
private:
	uint32_t rate; /*Fire rate*/
	std::vector<spnPlace> inp; /*Input places*/
	std::vector<spnPlace> outp; /*Output places*/
	spnTransition& operator=(spnTransition const& spnTran);
public:
	/**
	 * @brief Ctor
	 * @return none
	 */
	spnTransition();
	/**
	 * @brief Dtor
	 * @return none
	 */
	~spnTransition();
	/**
	 * @brief Get fire rate
	 * @return fire rate
	 */
	uint32_t getFireRate();
	/**
	 * @brief Set fire rate
	 * @param[in] rate Fire rate
	 * @return none
	 */
	void setFireRate(uint32_t rate);

	/**
	 * @brief Add input place
	 * @param[in] p Place
	 * @return none
	 */
	void addInputPlace(spnPlace const &p);
	/**
	 * @brief Add output place
	 * @param[in] p Place
	 * @return none
	 */
	void addOutputPlace(spnPlace const &p);
	/**
	 * @brief Fire transition
	 * @return none
	 */
	void fire();
};

#endif

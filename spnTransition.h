#ifndef SPN_TRANSITION_H
#define SPN_TRANSITION_H

#include <vector>
#include <stdint.h>
#include "spnPlace.h"

class spnTransition {
private:
	uint32_t rate; /*Fire rate*/
	std::vector<spnPlace*> inp; /*Input places*/
	std::vector<spnPlace*> outp; /*Output places*/
	spnTransition& operator=(spnTransition const& spnTran);
	std::string name;
	uint32_t fires;
public:
	/**
	 * @brief Ctor
	 * @return none
	 */
	spnTransition(std::string const& name);
	/**
	 * @brief Dtor
	 * @return none
	 */
	~spnTransition();
	/**
	 * @brief Get fire rate
	 * @return fire rate
	 */
	uint32_t getFireRate() const;
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
	void addInputPlace(spnPlace* p);
	/**
	 * @brief Add output place
	 * @param[in] p Place
	 * @return none
	 */
	void addOutputPlace(spnPlace* p);
	/**
	 * @brief Fire transition
	 * @return none
	 */
	void fire();
	/**
	 * @brief Get number of fires
	 * @return number of fires
	 */
	uint32_t getFires() const;
};

#endif

#ifndef SPN_PLACE_H
#define SPN_PLACE_H

#include<vector>
#include <stdint.h>

class spnPlace {
private:
	uint32_t tokens; /*Number of tokens*/
public:
	/**
	 * @brief Ctor
	 * @return none
	 */
	spnPlace();
	/**
	 * @biref Ctor
	 * @param[in] tokens Initial number of tokens
	 * @return none
	 */
	spnPlace(uint32_t tokens);
	/**
	 * @brief Dtor
	 * @return none
	 */
	~spnPlace();
	/**
	 * @brief Increment token number
	 * @return none
	 */
	void incrementTokens();
	/**
	 * @brief Decrement token number
	 * @return none
	 */
	void decrementTokens();
	/**
	 * @brief Get number of tokens
	 * @return Number of tokens
	 */
	uint32_t getTokens();
};
#endif

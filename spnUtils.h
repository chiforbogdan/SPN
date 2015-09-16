#ifndef SPN_UTILS_H
#define SPN_UTILS_H

#include <iostream>

#ifdef SPN_DBG
#define SPN_LOG(msg) std::cout<<__FUNCTION__<<"["<<__LINE__<<"]:"<<msg<<std::endl;
#define SPN_LOG1(msg, val) std::cout<<__FUNCTION__<<"["<<__LINE__<<"]:"<<msg<<val<<std::endl;
#else
#define SPN_LOG(msg)
#define SPN_LOG1(msg, val)
#endif
#endif

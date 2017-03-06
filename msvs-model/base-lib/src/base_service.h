#ifndef __ABSTRACT_BASE_SERVICE_H__
#define __ABSTRACT_BASE_SERVICE_H__

#include <abstract_service.h>

class AbstractServiceImpl
{
public:
	// internal usage
	explicit AbstractServiceImpl(std::string startState);
	virtual ~AbstractServiceImpl() = default;

	void SetState(std::string state);
	const char* GetState() const;

private:
	std::string state_;
};


#endif // __ABSTRACT_BASE_SERVICE_H__
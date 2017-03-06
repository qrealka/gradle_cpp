#ifndef __ABSTRACT_SERVICE_H__
#define __ABSTRACT_SERVICE_H__    

#include <string>
#include <memory>

class AbstractServiceImpl; 


class AbstractService 
{
protected:
	// internal usage
	explicit AbstractService(std::string startState);

public:
	void SetState(std::string state);
	const char* GetState() const;

	virtual const char* Resume() = 0;
	virtual const char* Suspend() = 0;

	virtual ~AbstractService() = default;

private:
	std::shared_ptr<AbstractServiceImpl> impl_;
};

#endif // __ABSTRACT_SERVICE_H__
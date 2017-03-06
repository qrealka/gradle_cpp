#ifndef __OLD_SERVICE_H__
#define __OLD_SERVICE_H__

#include <abstract_service.h>

class OldService : public AbstractService
{
public:
	static AbstractService* StartService();
	virtual ~OldService() = default;

private:
	// AbstractService implementation
	virtual const char* Resume() override;
	virtual const char* Suspend() override;

	// internal usage
	explicit OldService(std::string startState);

	// no copy
	OldService& operator=(const OldService&) = delete;
};

#endif //__OLD_SERVICE_H__
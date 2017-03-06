#include <algorithm>
#include "old_service.h"

AbstractService* OldService::StartService()
{
	return new OldService("'OldService' running");
}

const char* OldService::Resume()
{
	SetState("'OldService' resume");
	return GetState();
}

const char* OldService::Suspend()
{
	SetState("'OldService' sleep");
	return GetState();
}

OldService::OldService(std::string startState) 
	: AbstractService(std::move(startState))
{
}


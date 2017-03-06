#include <algorithm>
#include "base_service.h"

AbstractServiceImpl::AbstractServiceImpl(std::string startState)
	: state_(startState)
{
}

void AbstractServiceImpl::SetState(std::string state)
{
	state_ = std::move(state);
}

const char* AbstractServiceImpl::GetState() const
{
	return state_.c_str();
}

AbstractService::AbstractService(std::string startState)
	: impl_(std::make_shared<AbstractServiceImpl>(std::move(startState)))
{
}

void AbstractService::SetState(std::string state)
{
	impl_->SetState(std::move(state));
}

const char* AbstractService::GetState() const
{
	return impl_->GetState();
}


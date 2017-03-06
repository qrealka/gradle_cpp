#include <iostream>
#include "legacy/old_service.h"

int main()
{
	auto srv = OldService::StartService();
	std::cout << "Service state is '" << srv->Suspend()  << std::endl;
}
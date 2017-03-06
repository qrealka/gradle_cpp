#include <iostream>
#include "ft2build.h"

int main() {

#ifdef FT_BEGIN_HEADER
	std::cout << "Freetype found!\n";
#else
	std::cout << "Freetype not found!\n";
#endif

	return 0;
}

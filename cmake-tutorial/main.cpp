#include <iostream>
#ifndef CMAKEMACROSAMPLE
	#define CMAKEMACROSAMPLE "NO SYSTEM NAME"
#endif

#include "lib/math/operations.hpp"

int main() {
	std::cout<<"Hello CMake!"<<std::endl;        
	math::operations op;        
	int sum = op.sum(3, 4);	
	std::cout<<"Sum of 3 + 4 :"<<sum<<std::endl;	
	return 0;
}
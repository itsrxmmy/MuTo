
// developed by formik#6548
#include <iostream>
#include <vector>
#include <fstream>
#include <cmath>
#include <string>

#include "rydo.h"


int main(int argc, char* argv[])
{

	rydo::output::write("version", rydo::versionID);
	rydo::output::write("credit", rydo::credit);
	rydo::output::blank();
	return 0;

}



// developed by formik#6548
#include <iostream>
#include <vector>
#include <fstream>
#include <cmath>
#include <string>

#include "muto.h"


int main(int argc, char* argv[])
{

	muto::output::write("version", muto::versionID);
	muto::output::write("credit", muto::credit);
	muto::output::blank();
	return 0;

}




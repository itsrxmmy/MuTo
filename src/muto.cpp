
// developed by formik#6548
#include <iostream>
#include <vector>
#include <fstream>
#include <cmath>
#include <string>

#include "muto.h"


int main(int argc, char* argv[])
{
	// convert argv into a string vector for string comparison
	std::vector<std::string> args;
	for (int i=0 ; i < argc ; i++)
	{
		args.push_back(std::string(argv[i]));
	}

	bool sufficient_args = argc > 1;

	if (sufficient_args)
	{
		
		if (args[1] == "--version")
		{

			muto::output::write("version", muto::versionID);
		
		} else if (args[1] == "--credit")
		{

			muto::output::write("credit", muto::credit);
		
		} else if (args[1] == "--repo")
		{

			muto::output::write("repository", muto::repository);
		
		} else if (args[1] == "--docs")
		{

			muto::output::write("documentation", muto::documentation);
		
		} else
		{
		
			muto::output::errlog(201, "invalid argument(s) found");

		}

	} else
	{
		muto::output::errlog(211, "insufficient arguments");
	}

	return 0;

}





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

			muto::output::std("version", muto::versionID);
		
		} else if (args[1] == "--credit")
		{

			muto::output::std("credit", muto::credit);
		
		} else if (args[1] == "--repo")
		{

			muto::output::std("repository", muto::repository);
		
		} else if (args[1] == "--docs")
		{

			muto::output::std("documentation", muto::documentation);
		
		} else if (args[1] == "print" || args[1] == "echo")
		{

			std::string seperator = " ";
			bool endls;

			if (argc > 3)
			{

				bool endls = argv[3] == "--endl";
			
			} else
			{

				muto::output::errlog(211, "insufficient arguments");

			}

			std::string sprint_argv[argc];

			// organize & parse input
			for (int i=3 ; i < argc ; i++)
			{
				if (i == 3 && args[i] == "--endl")
				{
					
				} else
				{
					sprint_argv[i] = argv[i];
				}
			}

			muto::output::sprint(sprint_argv, endls);

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





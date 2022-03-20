
// developed by formik#6548
#include <iostream>
#include <vector>
#include <fstream>
#include <cmath>
#include <string>



namespace rydo
{

	

	std::string name = "rydo";
	std::string repository = "unreleased";
	std::string documentation = "unreleased";
	std::string credit = "developed by formik#6548";
	std::string version = "1.00.21";
	std::string build = "DB (Developer's Build)";
	std::string versionID = version + build;
	std::string string_starter = "\t->[" + name + "] ";

	std::string input(std::string title, std::string prompt)
	{
		std::string uinput;
		std::cout << string_starter << title << ": " << prompt << " ? [Y/n]: ";
		std::cin >> uinput;
		std::cout << std::endl;
	}

	namespace output
	{
		void write(std::string title, std::string message)
		{
			std::cout << string_starter << title << ": " << message << std::endl;
		}

		void errlog(int code, std::string message)
		{
			std::cout << string_starter << "err" << code << ": " << message << std::endl;
		}

		void blank()
		{
			std::cout << std::endl;
		}
	}
}











// developed by formik#6548
#include <iostream>
#include <vector>
#include <fstream>
#include <cmath>
#include <string>

template <typename T>
int len(T const & object);



namespace muto
{

	std::string name = "muto";
	std::string repository = "https://github.com/itsrxmmy/muto";
	std::string documentation = "https://github.com/itsrxmmy/muto/blob/main/DOCS.md";
	std::string credit = "developed by formik#6548";
	std::string version = "1.2.6";
	std::string build = "alpha";
	std::string versionID = version + "-" + build;
	std::string string_starter = "\t->[" + name + "] ";

	namespace input
	{
		std::string yninput(std::string title, std::string prompt)
		{
			std::string uinput;
			std::cout << string_starter << title << ": " << prompt << " ? [Y/n]: ";
			std::cin >> uinput;
			std::cout << std::endl;
		}

		std::string std(std::string title, std::string prompt)
		{
			std::string uinput;
			std::cout << string_starter << title << ": " << prompt << " -> ";
			std::cin >> uinput;
			std::cout << std::endl;
		}
	}

	namespace output
	{
		void std(std::string title, std::string message)
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

		void sprint(std::string outv[], bool endl)
		{

			std::string seperator = " ";

			for (int i=0 ; i < len(outv) ; i++)
			{
				if (endl)
				{
					std::cout << outv[i] << std::endl;
				} else 
				{

					std::cout << outv[i] << seperator;

				}
			}


			if (!endl)
			{

				std::cout << std::endl;

			}

			

		}

	}
}







template <typename T>
int len(T const & object)
{

	int length;

    try
	{

		int length = sizeof(object) / sizeof(int);

	} catch (...)
	{

		muto::output::errlog(314, "failed to get object size");

	}

	return length;
}











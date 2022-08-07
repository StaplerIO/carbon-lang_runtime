#include "models/cli/cli_options.h"

int main(int argc, char **argv)
{
    auto formatted_args = CliOptions(argc, argv);
    // std::cout << "Hello, World!" << std::endl;
	return 0;
}

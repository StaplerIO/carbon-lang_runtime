//
// Created by Jeb Feng on 2022/8/3.
// Copyright (c) 2022 StaplerIO All rights reserved.
//

#include "cli_options.h"
#include "../../logging.h"

#include <sstream>
#include <filesystem>

CliOptions::CliOptions(int argc, char **argv)
{
    if (argc >= 2)
    {
        executable_path = argv[1];
        for (int i = 2; i < argc; i++)
        {
            parameters.emplace_back(argv[i]);
        }

        if (std::filesystem::is_regular_file(executable_path))
        {
            std::stringstream log_stream;
            log_stream << "Executable path: "
                       << executable_path;
            logging::log_trace(log_stream.str().c_str());

            log_stream.str("");
            log_stream << argc - 2
                       << " parameter(s) found";
            logging::log_trace(log_stream.str().c_str());

            return;
        }
        else
        {
            logging::log_fatal("Executable path not found");
        }
    }
    else
    {
        logging::log_fatal("Too few arguments! Format: executable_path parameter1 parameter2 ...");
    }
}

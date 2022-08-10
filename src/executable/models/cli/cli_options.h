//
// Created by Jeb Feng on 2022/8/3.
// Copyright (c) 2022 StaplerIO All rights reserved.
//

#include <optional>
#include <string>
#include <vector>

#ifndef CARBON_LANG_RUNTIME_CLI_OPTIONS_H
#define CARBON_LANG_RUNTIME_CLI_OPTIONS_H

class CliOptions {
public:
    CliOptions(int argc, char *argv[]);

    const std::string &getExecutablePath() const;

    const std::vector<std::string> &getParameters() const;

private:
    std::string executable_path;
    std::vector<std::string> parameters;
};

#endif //CARBON_LANG_RUNTIME_CLI_OPTIONS_H

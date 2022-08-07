//
// Created by Jeb Feng on 2022/8/7.
// Copyright (c) 2022 StaplerIO All rights reserved.
//

#ifndef CARBON_LANG_RUNTIME_LOG_LEVEL_H
#define CARBON_LANG_RUNTIME_LOG_LEVEL_H

#include <string>

namespace logging
{
    enum class LogLevel
    {
        TRACE,
        INFO,
        WARNING,
        ERROR,
        FATAL
    };

    std::string log_level_to_string(LogLevel level);
}

#endif //CARBON_LANG_RUNTIME_LOG_LEVEL_H

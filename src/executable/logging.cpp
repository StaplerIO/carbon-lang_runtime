//
// Created by Jeb Feng on 2022/8/7.
// Copyright (c) 2022 StaplerIO All rights reserved.
//

#include <cstdio>
#include "logging.h"

namespace logging
{
    void log_message(logging::LogLevel level, const char *message)
    {
        printf("[%s] %s\n", log_level_to_string(level).c_str(), message);
    }

    void log_trace(const char *message)
    {
        log_message(LogLevel::TRACE, message);
    }

    void log_info(const char *message)
    {
        log_message(LogLevel::INFO, message);
    }

    void log_warning(const char *message)
    {
        log_message(LogLevel::WARNING, message);
    }

    void log_error(const char *message)
    {
        log_message(LogLevel::ERROR, message);
    }

    void log_fatal(const char *message)
    {
        log_message(LogLevel::FATAL, message);

        exit(-1);
    }
}

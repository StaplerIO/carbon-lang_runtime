//
// Created by Jeb Feng on 2022/8/7.
// Copyright (c) 2022 StaplerIO All rights reserved.
//

#include "log_level.h"

namespace logging
{
    std::string log_level_to_string(LogLevel level)
    {
        switch (level)
        {
            case LogLevel::TRACE:
                return "Trace";
            case LogLevel::INFO:
                return "Info";
            case LogLevel::WARNING:
                return "Warning";
            case LogLevel::ERROR:
                return "Error";
            case LogLevel::FATAL:
                return "Fatal";
        }
    }
}

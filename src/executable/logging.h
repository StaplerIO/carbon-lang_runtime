//
// Created by Jeb Feng on 2022/8/7.
// Copyright (c) 2022 StaplerIO All rights reserved.
//

#ifndef CARBON_LANG_RUNTIME_LOGGING_H
#define CARBON_LANG_RUNTIME_LOGGING_H

#include "models/log_level.h"

namespace logging
{
    void log_message(logging::LogLevel level, const char *message);

    void log_trace(const char *message);

    void log_info(const char *message);

    void log_warning(const char *message);

    void log_error(const char *message);

    void log_fatal(const char *message);
}

#endif //CARBON_LANG_RUNTIME_LOGGING_H

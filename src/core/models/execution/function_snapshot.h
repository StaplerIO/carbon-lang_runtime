//
// Created by Jeb Feng on 2022/8/11.
// Copyright (c) 2022 StaplerIO All rights reserved.
//

#ifndef CARBON_LANG_RUNTIME_FUNCTION_SNAPSHOT_H
#define CARBON_LANG_RUNTIME_FUNCTION_SNAPSHOT_H

#include <stack>
#include "domain_snapshot.h"

namespace execution
{
    class FunctionSnapshot
    {
    public:
        FunctionSnapshot();

    private:
        unsigned long current_location;
        std::stack<execution::DomainSnapshot> domain_data;
    };
}

#endif //CARBON_LANG_RUNTIME_FUNCTION_SNAPSHOT_H

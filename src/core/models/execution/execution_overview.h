//
// Created by Jeb Feng on 2022/8/11.
// Copyright (c) 2022 StaplerIO All rights reserved.
//

#ifndef CARBON_LANG_RUNTIME_EXECUTION_OVERVIEW_H
#define CARBON_LANG_RUNTIME_EXECUTION_OVERVIEW_H

#include <stack>
#include "../util/binary_base.h"
#include "function_snapshot.h"

namespace execution
{
    typedef std::stack<FunctionSnapshot> CallStack;

    class ExecutionOverview
    {
    public:
        explicit ExecutionOverview(const BinaryBase &packageBinary);

    private:
        BinaryBase package_binary;
        CallStack call_stack;
    };
}

#endif //CARBON_LANG_RUNTIME_EXECUTION_OVERVIEW_H

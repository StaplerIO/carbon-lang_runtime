//
// Created by Jeb Feng on 2022/8/10.
// Copyright (c) 2022 StaplerIO All rights reserved.
//

#include "pipeline.h"

execution::ExecutionOverview init_execution(BinaryBase binary, std::vector<std::string> params)
{
    auto result = execution::ExecutionOverview(binary);

    return result;
}

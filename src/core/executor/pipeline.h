//
// Created by Jeb Feng on 2022/8/10.
// Copyright (c) 2022 StaplerIO All rights reserved.
//

#ifndef CARBON_LANG_RUNTIME_PIPELINE_H
#define CARBON_LANG_RUNTIME_PIPELINE_H

#include <string>
#include <vector>
#include "../models/util/binary_base.h"
#include "../models/execution/execution_overview.h"

execution::ExecutionOverview init_execution(BinaryBase binary, std::vector<std::string> params);

#endif //CARBON_LANG_RUNTIME_PIPELINE_H

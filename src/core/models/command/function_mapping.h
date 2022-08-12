//
// Created by Jeb Feng on 2022/8/11.
// Copyright (c) 2022 StaplerIO All rights reserved.
//

#ifndef CARBON_LANG_RUNTIME_FUNCTION_MAPPING_H
#define CARBON_LANG_RUNTIME_FUNCTION_MAPPING_H

namespace mapping
{
    enum class FunctionCommand
    {
        Enter = 0x1,
        LeaveWithoutValue = 0x2,
        LeaveWithValue = 0x3,
    };
}

#endif //CARBON_LANG_RUNTIME_FUNCTION_MAPPING_H

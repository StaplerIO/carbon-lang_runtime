//
// Created by Jeb Feng on 2022/8/11.
// Copyright (c) 2022 StaplerIO All rights reserved.
//

#ifndef CARBON_LANG_RUNTIME_LOGICAL_MAPPING_H
#define CARBON_LANG_RUNTIME_LOGICAL_MAPPING_H

namespace mapping
{
    enum class MathLogicalCommand
    {
        And = 0x1,
        Or = 0x2,
        Not = 0x3,
    };
}

#endif //CARBON_LANG_RUNTIME_LOGICAL_MAPPING_H

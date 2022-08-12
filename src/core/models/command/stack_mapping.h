//
// Created by Jeb Feng on 2022/8/11.
// Copyright (c) 2022 StaplerIO All rights reserved.
//

#ifndef CARBON_LANG_RUNTIME_STACK_MAPPING_H
#define CARBON_LANG_RUNTIME_STACK_MAPPING_H

namespace mapping
{
    enum class StackCommand
    {
        Push = 0x1,
        PushFromObject = 0x2,
        Pop = 0x3,
        PopToObject = 0x4,
    };
}

#endif //CARBON_LANG_RUNTIME_STACK_MAPPING_H

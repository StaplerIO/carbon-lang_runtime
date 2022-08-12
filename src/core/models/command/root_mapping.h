//
// Created by Jeb Feng on 2022/8/11.
// Copyright (c) 2022 StaplerIO All rights reserved.
//

#ifndef CARBON_LANG_RUNTIME_ROOT_MAPPING_H
#define CARBON_LANG_RUNTIME_ROOT_MAPPING_H

namespace mapping
{
    enum class RootCommand
    {
        Object = 0xA,
        Stack = 0xB,
        Domain = 0xC,
        Jump = 0xD,
        Function = 0xE,
        Math = 0xF,
    };
}

#endif //CARBON_LANG_RUNTIME_ROOT_MAPPING_H

//
// Created by Jeb Feng on 2022/8/11.
// Copyright (c) 2022 StaplerIO All rights reserved.
//

#ifndef CARBON_LANG_RUNTIME_CALC_MAPPING_H
#define CARBON_LANG_RUNTIME_CALC_MAPPING_H

namespace mapping
{
    enum class MathCalcCommand
    {
        Plus = 0x1,
        Minus = 0x2,
        Times = 0x3,
        Divide = 0x4,
        Mod = 0x5,
        Inverse = 0x6,
    };
}

#endif //CARBON_LANG_RUNTIME_CALC_MAPPING_H

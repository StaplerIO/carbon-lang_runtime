//
// Created by Jeb Feng on 2022/8/11.
// Copyright (c) 2022 StaplerIO All rights reserved.
//

#ifndef CARBON_LANG_RUNTIME_UTILS_H
#define CARBON_LANG_RUNTIME_UTILS_H

constexpr char combine_command(char master, char sub)
{
    return master * 0x10 + sub;
}

#endif //CARBON_LANG_RUNTIME_UTILS_H

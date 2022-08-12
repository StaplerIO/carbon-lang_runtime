//
// Created by Jeb Feng on 2022/8/11.
// Copyright (c) 2022 StaplerIO All rights reserved.
//

#ifndef CARBON_LANG_RUNTIME_DATA_SNAPSHOT_H
#define CARBON_LANG_RUNTIME_DATA_SNAPSHOT_H

namespace execution
{
    class DataSnapshot
    {
    private:
        unsigned int slot;
        void *data;
    };
}

#endif //CARBON_LANG_RUNTIME_DATA_SNAPSHOT_H

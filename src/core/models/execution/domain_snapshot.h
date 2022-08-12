//
// Created by Jeb Feng on 2022/8/11.
// Copyright (c) 2022 StaplerIO All rights reserved.
//

#ifndef CARBON_LANG_RUNTIME_DOMAIN_SNAPSHOT_H
#define CARBON_LANG_RUNTIME_DOMAIN_SNAPSHOT_H

#include <vector>
#include "data_snapshot.h"

namespace execution
{
    class DomainSnapshot
    {
    private:
        std::vector<execution::DataSnapshot> defined_data;
    };
}

#endif //CARBON_LANG_RUNTIME_DOMAIN_SNAPSHOT_H

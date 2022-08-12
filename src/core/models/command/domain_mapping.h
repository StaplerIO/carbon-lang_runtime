//
// Created by Jeb Feng on 2022/8/11.
// Copyright (c) 2022 StaplerIO All rights reserved.
//

#ifndef CARBON_LANG_RUNTIME_DOMAIN_MAPPING_H
#define CARBON_LANG_RUNTIME_DOMAIN_MAPPING_H

namespace mapping
{
    enum class DomainCommand
    {
        Create = 0x1,
        Destroy = 0x2,
    };
}

#endif //CARBON_LANG_RUNTIME_DOMAIN_MAPPING_H

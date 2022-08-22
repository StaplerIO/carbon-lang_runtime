//
// Created by Jeb Feng on 2022/8/15.
// Copyright (c) 2022 Jeb Feng. All rights reserved.
//

#ifndef CARBON_LANG_RUNTIME_DOMAIN_H
#define CARBON_LANG_RUNTIME_DOMAIN_H

#include "../defs.h"

#define DOMAIN_CREATE 0x1
#define DOMAIN_DESTROY 0x2

typedef struct domain_parse_result {
    BOOL gdf;
} domain_parse_result;

#endif //CARBON_LANG_RUNTIME_DOMAIN_H

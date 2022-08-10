//
// Created by Jeb Feng on 2022/8/7.
// Copyright (c) 2022 StaplerIO All rights reserved.
//

#ifndef CARBON_LANG_RUNTIME_METADATA_H
#define CARBON_LANG_RUNTIME_METADATA_H

#include <cstdint>
#include <vector>
#include "../util/binary_base.h"

class PackageMetadata
{
public:
    explicit PackageMetadata(const BinaryBase &stream);

private:
    uint8_t package_type;
    uint8_t data_alignment;
    uint8_t domain_layer_count_alignment;
    uint8_t data_slot_alignment;
    uint8_t address_alignment;
    uint8_t global_command_offset;
    long long entry_point_address;
};

#endif //CARBON_LANG_RUNTIME_METADATA_H

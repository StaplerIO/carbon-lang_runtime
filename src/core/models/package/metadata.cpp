//
// Created by Jeb Feng on 2022/8/7.
// Copyright (c) 2022 StaplerIO All rights reserved.
//

#include <algorithm>
#include "metadata.h"
#include "../../../executable/logging.h"

PackageMetadata::PackageMetadata(const BinaryBase &stream)
{
    if(stream.getLen() < sizeof(PackageMetadata))
    {
        logging::log_fatal("Package is too small for analyzing...");
    }
    package_type = stream.getContent()[0];
    data_alignment = stream.getContent()[1];
    domain_layer_count_alignment = stream.getContent()[2];
    data_slot_alignment = stream.getContent()[3];
    address_alignment = stream.getContent()[4];
    global_command_offset = stream.getContent()[5];

    // Get entry point
    auto entry_point_mem = stream.getContent() + 5;
    std::reverse_copy(entry_point_mem, entry_point_mem + address_alignment, reinterpret_cast<char*>(&entry_point_address));
}

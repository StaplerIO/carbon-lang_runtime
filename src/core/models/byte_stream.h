//
// Created by Jeb Feng on 2022/8/17.
// Copyright (c) 2022 StaplerIO All rights reserved.
//

#ifndef CARBON_LANG_RUNTIME_BYTE_STREAM_H
#define CARBON_LANG_RUNTIME_BYTE_STREAM_H

typedef struct byte_stream
{
    char *data;
    unsigned long size;
} byte_stream;

#endif //CARBON_LANG_RUNTIME_BYTE_STREAM_H

//
// Created by Jeb Feng on 2022/8/15.
// Copyright (c) 2022 StaplerIO All rights reserved.
//

#ifndef CARBON_LANG_RUNTIME_CMD_PARSE_RESULT_H
#define CARBON_LANG_RUNTIME_CMD_PARSE_RESULT_H

#include "byte_stream.h"

#define COMBINE_RS_CMD(root, sub) (root * 0x10 + sub)
#define GET_ROOT(cmd) (cmd / 0x10)
#define GET_SUB(cmd) (cmd % 0x10)

typedef struct {
    char root;
    char sub;
    byte_stream *cmd_raw;

    void *target;
} cmd_parse_result;

#endif //CARBON_LANG_RUNTIME_CMD_PARSE_RESULT_H

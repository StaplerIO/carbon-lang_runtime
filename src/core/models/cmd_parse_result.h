//
// Created by Jeb Feng on 2022/8/15.
// Copyright (c) 2022 StaplerIO All rights reserved.
//

#ifndef CARBON_LANG_RUNTIME_CMD_PARSE_RESULT_H
#define CARBON_LANG_RUNTIME_CMD_PARSE_RESULT_H

#define COMBINE_RS_CMD(root, sub) (root * 0x10 + sub)
#define GET_ROOT(cmd) (cmd / 0x10)
#define GET_SUB(cmd) (cmd % 0x10)

struct cmd_parse_result {
    char root;
    char sub;
    char *cmd_raw;
    int len;

    void *target;
};

#endif //CARBON_LANG_RUNTIME_CMD_PARSE_RESULT_H

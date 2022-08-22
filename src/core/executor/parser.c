//
// Created by Jeb Feng on 2022/8/15.
// Copyright (c) 2022 StaplerIO All rights reserved.
//

#include "parser.h"
#include "../cmd_mapping/root.h"
#include "../defs.h"
#include "../cmd_mapping/domain.h"

cmd_parse_result parse_cmd(byte_stream *cmd_raw)
{
    cmd_parse_result result;
    switch(GET_ROOT(cmd_raw->data[0]))
    {
        case ROOT_DOMAIN:
            return parse_domain_cmd(cmd_raw);
        case ROOT_FUNCTION:
            return parse_function_cmd(cmd_raw);
        case ROOT_OBJECT:
            return parse_object_cmd(cmd_raw);
        case ROOT_STACK:
            return parse_stack_cmd(cmd_raw);
        case ROOT_JUMP:
            return parse_jump_cmd(cmd_raw);
        case ROOT_MATH:
            return parse_math_cmd(cmd_raw);
    }

    result.root = FAIL;
    return result;
}

cmd_parse_result parse_domain_cmd(byte_stream *cmd_raw)
{
    cmd_parse_result result = {0};
    result.root = ROOT_DOMAIN;
    result.sub = GET_SUB(cmd_raw->data[0]);

    result.cmd_raw = cmd_raw;
    result.cmd_raw->size = 2;

    return result;
}

cmd_parse_result parse_function_cmd(byte_stream *cmd_raw)
{
    cmd_parse_result result;
    return result;
}

cmd_parse_result parse_object_cmd(byte_stream *cmd_raw)
{
    cmd_parse_result result;
    return result;
}

cmd_parse_result parse_stack_cmd(byte_stream *cmd_raw)
{
    cmd_parse_result result;
    return result;
}

cmd_parse_result parse_jump_cmd(byte_stream *cmd_raw)
{
    cmd_parse_result result;
    return result;
}

cmd_parse_result parse_math_cmd(byte_stream *cmd_raw)
{
    cmd_parse_result result;
    return result;
}

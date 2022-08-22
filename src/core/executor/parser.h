//
// Created by Jeb Feng on 2022/8/15.
// Copyright (c) 2022 StaplerIO All rights reserved.
//

#ifndef CARBON_LANG_RUNTIME_PARSER_H
#define CARBON_LANG_RUNTIME_PARSER_H

#include "../models/cmd_parse_result.h"

cmd_parse_result parse_cmd(byte_stream *cmd_raw);

cmd_parse_result parse_domain_cmd(byte_stream *cmd_raw);

cmd_parse_result parse_function_cmd(byte_stream *cmd_raw);

cmd_parse_result parse_object_cmd(byte_stream *cmd_raw);

cmd_parse_result parse_stack_cmd(byte_stream *cmd_raw);

cmd_parse_result parse_jump_cmd(byte_stream *cmd_raw);

cmd_parse_result parse_math_cmd(byte_stream *cmd_raw);

#endif //CARBON_LANG_RUNTIME_PARSER_H

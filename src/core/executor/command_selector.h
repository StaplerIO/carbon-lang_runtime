//
// Created by Jeb Feng on 2022/8/11.
// Copyright (c) 2022 StaplerIO All rights reserved.
//

#ifndef CARBON_LANG_RUNTIME_COMMAND_SELECTOR_H
#define CARBON_LANG_RUNTIME_COMMAND_SELECTOR_H

#include <optional>
#include <variant>
#include <vector>
#include "../models/command/root_mapping.h"
#include "../models/command/object_mapping.h"
#include "../models/command/stack_mapping.h"
#include "../models/command/domain_mapping.h"
#include "../models/command/jump_mapping.h"
#include "../models/command/function_mapping.h"
#include "../models/command/math_mapping.h"
#include "../models/command/math/calc_mapping.h"
#include "../models/command/math/logical_mapping.h"

using namespace mapping;

class CommandParsingResult
{
public:
    CommandParsingResult(RootCommand rootCommand,
                         const std::variant<ObjectCommand, StackCommand, DomainCommand, JumpCommand, FunctionCommand, MathCommand> &subCommand,
                         const std::optional<std::variant<MathCalcCommand, MathLogicalCommand>> &mathSecondSubCommand,
                         std::vector<char> rawCommandArray);

    CommandParsingResult(RootCommand rootCommand,
                         const std::variant<ObjectCommand, StackCommand, DomainCommand, JumpCommand, FunctionCommand, MathCommand> &subCommand,
                         std::vector<char> rawCommandArray);

private:
    RootCommand root_command;
    std::variant<ObjectCommand, StackCommand, DomainCommand, JumpCommand, FunctionCommand, MathCommand> sub_command;
    std::optional<std::variant<MathCalcCommand, MathLogicalCommand>> math_second_sub_command;

    std::vector<char> raw_command_array;
};

CommandParsingResult parse_command(const std::vector<char> &raw_command_array);

#endif //CARBON_LANG_RUNTIME_COMMAND_SELECTOR_H

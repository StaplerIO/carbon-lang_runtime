//
// Created by Jeb Feng on 2022/8/11.
// Copyright (c) 2022 StaplerIO All rights reserved.
//

#include "command_selector.h"

#include <utility>

CommandParsingResult::CommandParsingResult(RootCommand rootCommand,
                                           const std::variant<ObjectCommand, StackCommand, DomainCommand, JumpCommand, FunctionCommand, MathCommand> &subCommand,
                                           const std::optional<std::variant<MathCalcCommand, MathLogicalCommand>> &mathSecondSubCommand,
                                           std::vector<char> rawCommandArray) : root_command(rootCommand),
                                                                                sub_command(subCommand),
                                                                                math_second_sub_command(
                                                                                        mathSecondSubCommand),
                                                                                raw_command_array(
                                                                                        std::move(rawCommandArray))
{}

CommandParsingResult::CommandParsingResult(RootCommand rootCommand,
                                           const std::variant<ObjectCommand, StackCommand, DomainCommand, JumpCommand, FunctionCommand, MathCommand> &subCommand,
                                           std::vector<char> rawCommandArray) : root_command(rootCommand),
                                                                                       sub_command(subCommand),
                                                                                       raw_command_array(std::move(
                                                                                               rawCommandArray)),
                                                                                               math_second_sub_command(std::nullopt)
{}

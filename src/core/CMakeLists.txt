add_library(runtime_core executor/parser.c executor/parser.h)
add_library(command_mapping cmd_mapping/root.c cmd_mapping/root.h
        cmd_mapping/object.c cmd_mapping/object.h
        cmd_mapping/stack.c cmd_mapping/stack.h
        cmd_mapping/domain.c cmd_mapping/domain.h
        cmd_mapping/jump.c cmd_mapping/jump.h
        cmd_mapping/function.c cmd_mapping/function.h
        cmd_mapping/math.c cmd_mapping/math.h defs.c defs.h)
add_library(models models/cmd_parse_result.cpp models/cmd_parse_result.h models/byte_stream.c models/byte_stream.h)
target_link_libraries(runtime_core command_mapping models)

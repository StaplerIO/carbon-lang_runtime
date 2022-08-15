add_library(runtime_core executor/parser.c executor/parser.h)
add_library(command_mapping cmd_mapping/root.c cmd_mapping/root.h
        cmd_mapping/object.c cmd_mapping/object.h
        cmd_mapping/stack.cpp cmd_mapping/stack.h
        cmd_mapping/domain.cpp cmd_mapping/domain.h
        cmd_mapping/jump.cpp cmd_mapping/jump.h
        cmd_mapping/function.cpp cmd_mapping/function.h
        cmd_mapping/math.cpp cmd_mapping/math.h)
add_library(models models/cmd_parse_result.cpp models/cmd_parse_result.h)
target_link_libraries(runtime_core command_mapping models)

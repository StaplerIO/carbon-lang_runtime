add_library(runtime_core models/package/metadata.cpp models/package/metadata.h
        models/util/binary_base.cpp models/util/binary_base.h
        executor/pipeline.cpp executor/pipeline.h
        executor/utils.cpp executor/utils.h
        models/execution/execution_overview.cpp models/execution/execution_overview.h
        models/execution/function_snapshot.cpp models/execution/function_snapshot.h
        models/execution/domain_snapshot.cpp models/execution/domain_snapshot.h
        models/execution/data_snapshot.cpp models/execution/data_snapshot.h
        executor/command_selector.cpp executor/command_selector.h)

add_library(command_mapping models/command/root_mapping.cpp models/command/root_mapping.h
        models/command/object_mapping.cpp models/command/object_mapping.h
        models/command/stack_mapping.cpp models/command/stack_mapping.h
        models/command/domain_mapping.cpp models/command/domain_mapping.h
        models/command/jump_mapping.cpp models/command/jump_mapping.h
        models/command/function_mapping.cpp models/command/function_mapping.h
        models/command/math_mapping.cpp models/command/math_mapping.h
        models/command/math/calc_mapping.cpp models/command/math/calc_mapping.h
        models/command/math/logical_mapping.cpp models/command/math/logical_mapping.h)

target_link_libraries(runtime_core command_mapping)

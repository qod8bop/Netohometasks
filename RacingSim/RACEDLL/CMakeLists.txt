add_library(RACEDLL SHARED Base.cpp Base.h Ground.cpp Ground.h)
target_compile_definitions(RACEDLL 
    PRIVATE RACEDLL_EXPORTS
)

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS)
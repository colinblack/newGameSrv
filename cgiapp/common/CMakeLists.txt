# 查找当前目录下的所有源文件
# 并将名称保存到 DIR_LIB_SRCS 变量
cmake_minimum_required (VERSION 2.8) 

include_directories(${PROJECT_SOURCE_DIR}/cgiapp/common)
include_directories(${PROJECT_SOURCE_DIR}/baselib/include)
include_directories(${PROJECT_SOURCE_DIR}/proto/)
include_directories(${PROJECT_SOURCE_DIR}/save/)
#include_directories(../../app/common/)
#include_directories(../../app/kernel/)
include_directories(${PROJECT_SOURCE_DIR}/outerlib/dbc/include/)
include_directories(${PROJECT_SOURCE_DIR}/outerlib/pengyou/include/)
#include_directories(../../app/config/)
#include_directories(../../app/pb/)
include_directories(/usr/include/openssl)


link_directories(${PROJECT_SOURCE_DIR}/cgiapp/common)
link_directories(${PROJECT_SOURCE_DIR}/baselib/lib)
link_directories(${PROJECT_SOURCE_DIR}/proto)
link_directories(${PROJECT_SOURCE_DIR}/save)
#link_directories(../../app/common/)
#link_directories(../../app/kernel)
link_directories(${PROJECT_SOURCE_DIR}/outerlib/dbc/lib/)
link_directories(${PROJECT_SOURCE_DIR}/outerlib/pengyou/lib/)
#link_directories(../../app/config/)
#link_directories(../../app/pb/)
link_directories(/usr/lib64/openssl)

link_libraries(sg17base)
link_libraries(sg17proto)
link_libraries(sg17save)
link_libraries(dbs-gcc-4.4)
link_libraries(fcgi++)
link_libraries(fcgi)
link_libraries(nsl)
link_libraries(ssl)
link_libraries(sg17openapi)
link_libraries(curl)
link_libraries(z)
link_libraries(dl)

aux_source_directory(. DIR_LIB_SRCS)
# 生成链接库
add_library(sg17cgicommon SHARED ${DIR_LIB_SRCS})
#target_link_libraries(libsg17cgicommon fcgi)



cmake_minimum_required ( VERSION 2.4 )
project ( Vector_Fraction C:\Users\ablya\Projects\CFraction )

set ( SRC_DIR ${C:\Users\ablya\Projects\CFraction}/src ) 
set ( Vector_Fraction)
set( CMAKE_BUILD_TYPE RELEASE )


#include_directories ( fraction.h )
#include_directories (  vector.h )

list(APPEND SRC ${SRC_DIR}/main.cpp )

# list(APPEND SRC ${SRC_DIR}/fraction.cpp )
# list(APPEND SRC ${SRC_DIR}/vector.cpp )

add_executable ( ${Vector_Fraction} ${SRC} )

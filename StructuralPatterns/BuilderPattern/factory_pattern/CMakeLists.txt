cmake_minimum_required(VERSION 3.1)
project(FactoryPattern)
# -----------------------------------------------------------------------------------
#                                   package information                             -
# -----------------------------------------------------------------------------------
set (PROJECT_NAME        ${PROJECT_NAME})
set (PROJECT_VERSION     "1.0.1")
set (PROJECT_STRING      "${PROJECT_NAME} ${PROJECT_VERSION}")
set (PROJECT_TARNAME     "${PROJECT_NAME}-${PROJECT_VERSION}")
set (PROJECT_BUGREPORT   "https://github.com/EricJin101/design_pattern")
set (PROJECT_DESCRIPTION "factory pattern")
set (PROJECT_URL         "https://github.com/EricJin101/design_pattern")
set(RELEASE_VERSION "1.0")
set(CMAKE_CXX_STANDARD 11)

# -----------------------------------------------------------------------------------
#                                   install project                                 -
# -----------------------------------------------------------------------------------


#install(DIRECTORY src/
#        DESTINATION /opt/factory_pattern
#        FILES_MATCHING
#        PATTERN "*.hpp"
#        PATTERN "*.h"
#        )

# install binary file
add_executable(factory src/main.cc)
MESSAGE("DEBUG IS  " ${Debug})
install(TARGETS factory
#        CONFIGURATIONS Debug
        RUNTIME DESTINATION /opt/factory_pattern
        )
# ==========================================
# Lucian's Don't Repeat Yourself library
# Author: Lucian Carata <lc525@cam.ac.uk>
#
# C utility header files in a modular format
#
# ==========================================
cmake_minimum_required(VERSION 3.2)

set(header_files
    ${CMAKE_CURRENT_SOURCE_DIR}/include/ldry/macros/argstring.h
    ${CMAKE_CURRENT_SOURCE_DIR}/include/ldry/macros/bits.h
    ${CMAKE_CURRENT_SOURCE_DIR}/include/ldry/macros/foverload.h
    ${CMAKE_CURRENT_SOURCE_DIR}/include/ldry/macros/likely.h
    ${CMAKE_CURRENT_SOURCE_DIR}/include/ldry/macros/unused.h
    ${CMAKE_CURRENT_SOURCE_DIR}/include/ldry/kernel/priv_kallsyms.h
    ${CMAKE_CURRENT_SOURCE_DIR}/include/ldry/kernel/macros/debug.h
)

add_library(ldry INTERFACE)
target_sources(ldry INTERFACE $<BUILD_INTERFACE: ${header_files}>)
target_include_directories(ldry INTERFACE include/)


###
#
# BUILD
#
###
# Install target
install(DIRECTORY include/ldry DESTINATION include)

# Uninstall target, place it here because others might want to set
# dependencies on it
configure_file("${CMAKE_CURRENT_SOURCE_DIR}/cmake/uninstall.cmake.in"
               "${CMAKE_CURRENT_BINARY_DIR}/uninstall.cmake"
               IMMEDIATE @ONLY)
add_custom_target(uninstall_files
  COMMAND ${CMAKE_COMMAND} -P ${CMAKE_CURRENT_BINARY_DIR}/uninstall.cmake)
add_custom_target(uninstall DEPENDS uninstall_files)

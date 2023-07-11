cmake_minimum_required(VERSION 3.10...3.24)
project(mana-secretmanager CXX)

# find_package(google_cloud_cpp_secretmanager REQUIRED)

# MSVC requires some additional code to select the correct runtime library
if (VCPKG_TARGET_TRIPLET MATCHES "-static$")
    set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")
else ()
    set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>DLL")
endif ()

# Define your targets.
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
add_executable(mana-secretmanager secret_manager.cpp)

# target_link_libraries(mana-secretmanager google-cloud-cpp::secretmanager)

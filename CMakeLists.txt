cmake_minimum_required(VERSION 3.10)
project(MyGrowtopiaClone)

set(CMAKE_CXX_STANDARD 17)

# Tambahkan folder include dan src
include_directories(include src)

# Tambahkan SDL2 dari path lokal
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/lib/cmake")

# Temukan SDL2 menggunakan file config-nya
find_package(SDL2 REQUIRED)

# Tambahkan executable
add_executable(main src/main.cpp src/player.cpp)

# Link SDL2
target_link_libraries(main SDL2::SDL2main SDL2::SDL2)

# Copy SDL2.dll ke direktori build (otomatis)
add_custom_command(TARGET main POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
        "${CMAKE_SOURCE_DIR}/bin/SDL2.dll"
        $<TARGET_FILE_DIR:main>
)

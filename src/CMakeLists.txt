add_library (sqr sqr.cpp sqr.h)
add_executable (demo main.cpp)
target_link_libraries (demo sqr)
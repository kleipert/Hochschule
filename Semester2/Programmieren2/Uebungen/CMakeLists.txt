cmake_minimum_required(VERSION 3.10)
project(Programming2)

# Add executable targets

add_executable(Publication_Test 1_2/1_2_Test.cpp
        1_2/magazine.cpp
        1_2/publication.cpp
        1_2/book.cpp)

# Link Header Files
#target_include_directories(Vector_Test PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
#target_include_directories(Publication_Test PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

# Optionally, you can link additional libraries if needed
# target_link_libraries(Vector_Test ${OTHER_LIBRARIES})
# target_link_libraries(Vector_Test2 ${OTHER_LIBRARIES})
# target_link_libraries(executable3 ${OTHER_LIBRARIES})

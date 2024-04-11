cmake_minimum_required(VERSION 3.10)
project(AuDProject)

# Add executable targets
add_executable(Aufgabe4 Aufgabe4/Exercise4.cpp)
add_executable(Aufgabe5 Exercise5/Exercise5.cpp)

#add_executable(Publication_Test 1_2/1_2_Test.cpp)

# Link Header Files
#target_include_directories(Vector_Test PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
#target_include_directories(Publication_Test PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

# Optionally, you can link additional libraries if needed
# target_link_libraries(Vector_Test ${OTHER_LIBRARIES})
# target_link_libraries(Vector_Test2 ${OTHER_LIBRARIES})
# target_link_libraries(executable3 ${OTHER_LIBRARIES})

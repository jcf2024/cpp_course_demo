cmake_minimum_required(VERSION 3.23)
project(chapter_3)

set(CMAKE_CXX_STANDARD 20)

add_executable(mainboard
        mainboard.cpp
        component.h
        planning_component.h
        planning_component.cpp
        perception_component.h
        perception_component.cpp
        routing_component.h
        routing_component.cpp
)

cmake_minimum_required(VERSION 3.30)
project(4wins)

set(CMAKE_CXX_STANDARD 20)

add_executable(4wins main.cpp
        player.cpp
        player.h
        board.cpp
        board.h
        human.cpp
        human.h
        horizontalBot.cpp
        horizontalBot.h
        verticalBot.cpp
        verticalBot.h
        randomBot.cpp
        randomBot.h)

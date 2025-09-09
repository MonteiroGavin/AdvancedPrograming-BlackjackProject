cmake_minimum_required(VERSION 4.0)
project(M1OEP_gtmontei)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(M1OEP_gtmontei
        Deck.cpp
        Deck.h
        main.cpp
        Player.h
        Player.cpp
        Dealer.cpp
        Dealer.h
        Card.h
        Card.cpp)

cmake_minimum_required(VERSION 3.1...3.14)

if(${CMAKE_VERSION} VERSION_LESS 3.12)
  cmake_policy(VERSION ${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION})
endif()

project(CardGames  
        VERSION 0.0
        DESCRIPTION "Card Games"
        LANGUAGES CXX)

set(CMAKE_GENERATOR_PLATFORM, "Visual Studio 16 2019" x64)

set_property(GLOBAL PROPERTY USE_FOLDERS ON)

add_subdirectory(CardGames)
add_subdirectory(Baccarat)
add_subdirectory(app)


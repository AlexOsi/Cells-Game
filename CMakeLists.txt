cmake_minimum_required(VERSION 3.20)
project(untitled5)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled5 main.cpp GameObject.cpp GameObject.h HeroController.cpp HeroController.h GameMap.cpp GameMap.h GameObjectFactory.cpp GameObjectFactory.h Wall.cpp Wall.h Hero.cpp Hero.h Monster.cpp Monster.h IMovable.h Cell.h DisplayOfMap.cpp DisplayOfMap.h Image.cpp Image.h)

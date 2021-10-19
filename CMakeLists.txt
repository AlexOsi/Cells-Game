cmake_minimum_required(VERSION 3.20)
project(GameCells)

set(CMAKE_CXX_STANDARD 17)

add_executable(GameCells
        main.cpp
        GameObjects/GameObject.cpp
        GameObjects/GameObject.h
        Logic/HeroController.cpp
        Logic/HeroController.h
        GameMaps/WorldMap.cpp
        GameMaps/WorldMap.h
        Logic/GameObjectFactory.cpp
        Logic/GameObjectFactory.h
        GameObjects/Wall.cpp
        GameObjects/Wall.h
        GameObjects/Hero.cpp
        GameObjects/Hero.h
        GameObjects/Monster.cpp
        GameObjects/Monster.h
        IMovable.h DataObjects/Cell.h
        GUI/Display.cpp
        GUI/Display.h
        DataObjects/Image.cpp
        DataObjects/Image.h GameObjects/Character.cpp GameObjects/Character.h Logic/Spawner.cpp Logic/Spawner.h)

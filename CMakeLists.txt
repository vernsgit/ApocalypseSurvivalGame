cmake_minimum_required(VERSION 3.26)
project(kopie_opraveno)

set(CMAKE_CXX_STANDARD 17)

add_executable(kopie_opraveno main.cpp
        Demon.cpp
        Demon.h
        Entita.cpp
        Entita.h
        Had.cpp
        Had.h
        KouzelneJablko.cpp
        KouzelneJablko.h
        Lektvar.cpp
        Lektvar.h
        Mapa.cpp
        Mapa.h
        Mec.cpp
        Mec.h
        Nepritel.cpp
        Nepritel.h
        Postava.cpp
        Postava.h
        Predmet.cpp
        Predmet.h
        Ukol.cpp
        Ukol.h
        Zombie.cpp
        Zombie.h
        Hra.cpp
        Hra.h
        NPC.cpp
        NPC.h)

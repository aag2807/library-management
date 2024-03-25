cmake_minimum_required(VERSION 3.28)
project(LibraryManagement)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(CMAKE_PREFIX_PATH "/opt/homebrew/Cellar/qt@5/5.15.12/lib/cmake")

find_package(Qt5 COMPONENTS
        Core
        Gui
        Widgets
        Sql
        REQUIRED)

add_executable(LibraryManagement main.cpp
        components/MainWindow.cpp
        components/MainWindow.h
        components/Page.cpp
        components/Page.h
        core/Book/Book.cpp
        core/Book/Book.h
        boundary/persistance/BaseRepository.cpp
        boundary/persistance/BaseRepository.h
        boundary/persistance/Book/BookRepository.cpp
        boundary/persistance/Book/BookRepository.h
        core/User/User.cpp
        core/User/User.h
        core/Util/GuidGenerator.cpp
        core/Util/GuidGenerator.h
        lib/Triplex/Argument.cpp
        lib/Triplex/Argument.h
        lib/Triplex/State.cpp
        lib/Triplex/State.h
)

target_link_libraries(LibraryManagement
        Qt5::Core
        Qt5::Gui
        Qt5::Widgets
        Qt5::Sql
)


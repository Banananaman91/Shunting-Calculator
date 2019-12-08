cmake_minimum_required(VERSION 3.13 FATAL_ERROR) #cmake min version
project(SuperCalculatorConverter VERSION 0.0.1) #your project name and version

#sets the language version
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

# find Qt5 and required components
find_package(Qt5 COMPONENTS REQUIRED Core Gui Widgets)

# need this to include the auto generated ui_mainwindow.h
# file from the qt5_wrap_ui call below.
set(CMAKE_INCLUDE_CURRENT_DIR ON)

#creates the specified variables to be replaced when used elsewhere
set(project_sources main.cpp qtcalculatorconverter.cpp ProcessOutput.cpp ShuntingAlgorithm.cpp Token.cpp Converter.cpp)
set(project_headers qtcalculatorconverter.h ProcessOutput.h ShuntingAlgorithm.h Token.h Converter.h)
set(project_ui qtcalculatorconverter.ui)

# wrap the ui file to a c++ header
qt5_wrap_ui(ui_wrap ${project_ui})
qt5_wrap_cpp(moc_sources ${project_headers})

#creates an executable target for your project
add_executable(SuperCalculatorConverter
    ${project_sources} 
    ${project_headers}
    ${ui_wrap} 
    ${moc_sources})

#links the Qt libraries to any built project targets - only the executable exists as a valid target rn so it'll only perform linking once
target_link_libraries(SuperCalculatorConverter
    PUBLIC
    Qt5::Core
    Qt5::Gui 
    Qt5::Widgets)

# auto copy dlls if on windows
if(WIN32)
    add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_if_different $<TARGET_FILE:Qt5::Core> $<TARGET_FILE_DIR:${PROJECT_NAME}>
        COMMAND ${CMAKE_COMMAND} -E copy_if_different $<TARGET_FILE:Qt5::Gui> $<TARGET_FILE_DIR:${PROJECT_NAME}>
        COMMAND ${CMAKE_COMMAND} -E copy_if_different $<TARGET_FILE:Qt5::Widgets> $<TARGET_FILE_DIR:${PROJECT_NAME}> )
endif(WIN32)
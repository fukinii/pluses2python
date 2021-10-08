set(MODULE_NAME PlusesToPython)

message("PlusesToPython_build: " ${CMAKE_CURRENT_SOURCE_DIR})

file(GLOB_RECURSE SOURCES *.h *.cpp *.hpp)

list(FILTER SOURCES EXCLUDE REGEX "python_binding/*.*")

add_library(${MODULE_NAME} STATIC ${SOURCES})
target_link_libraries(${MODULE_NAME} PUBLIC eigen)
target_include_directories(${MODULE_NAME} PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/..")

if (BUILD_PYTHON)
    # Если не найти питон раньше, чем это сделает pybind11, то может произойти ошибка
    message("FIND_PYTHON")
    find_package(Python 3.9.5 EXACT COMPONENTS Interpreter Development)
endif ()

if (BUILD_PYTHON)
    message("BUILD_PYTHON__")
    set(PyTarget PyPlusesToPython)
    set(PyModuleName PyPlusesToPython)

    file(GLOB_RECURSE PlusesPythonWrapper_SOURCES python_binding/* (.h,.cpp,.hpp))
    message("Python binding sources:" ${PlusesPythonWrapper_SOURCES})

    add_library(${PyTarget} SHARED ${PlusesPythonWrapper_SOURCES})
    target_link_libraries(
            ${PyTarget}
            PRIVATE PlusesToPython
            PUBLIC
            pybind11_headers
            Python::Python
    )
    target_include_directories(${PyTarget} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
    target_compile_definitions(${PyTarget} PRIVATE MODULE_NAME=${PyModuleName})

    if(WIN32)
        # python will not import dll but expects pyd
        set_target_properties(${PyTarget}
                PROPERTIES
                SUFFIX ".pyd"
                )
    endif()
    if(APPLE)
        # python on macos will not import dylib but expects .so
        set_target_properties(${PyTarget}
                PROPERTIES
                SUFFIX ".so"
                )
    endif()
    set_target_properties(${PyTarget} PROPERTIES PREFIX "")

#    install(TARGETS ${PyIntegratorTarget} DESTINATION "C:\\Work\\environment_model\\src\\imitationmodelingorientationcontrol\\environmentmodel\\ballistic")
    #install(TARGETS ${PyIntegratorTarget} DESTINATION src)


endif()
include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/refs/tags/release-1.11.0.zip
)
FetchContent_MakeAvailable(googletest)

add_executable(test_Finder Finder.test.cpp ../finder.cpp)

target_link_libraries(test_Finder gtest gtest_main)

enable_testing()

add_test(NAME FinderTests COMMAND test_Finder)

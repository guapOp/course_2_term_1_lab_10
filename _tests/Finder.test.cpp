#include <gtest/gtest.h>
#include "../finder.h"
#include <string>

TEST(FinderTest, Count) {
    std::string str = "helo hello halo helow hello eeee";

    Finder finder;

    Finder::CountResult result = finder.count(str);

    EXPECT_EQ(result.chars_count, 32);

    EXPECT_EQ(result.words_count, 2);
}

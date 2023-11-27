#include "gtest.h"
#include "seu_programa.cpp"  // Substitua pelo nome real do seu arquivo

TEST(ValidationTest, Test1) {
    string s = "blabla bla bla";
    string t = "blablabcde";
    int k = 8;
    EXPECT_TRUE(validate(s, t, k));
}

TEST(ValidationTest, Test2) {
    string s = "abc";
    string t = "def";
    int k = 6;
    EXPECT_FALSE(validate(s, t, k));
}

TEST(ValidationTest, Test3) {
    string s = "hello";
    string t = "world";
    int k = 10;
    EXPECT_TRUE(validate(s, t, k));
}


int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

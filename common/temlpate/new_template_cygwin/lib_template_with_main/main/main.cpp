//
// Created by tao on 19-1-17.
//
#include "common_includes.h"
#include "test_func.h"

TEST(test_test, 1) {
    EXPECT_EQ(1, 1);
}
TEST(test_func, 100) {
    EXPECT_EQ(100, hundred());
}
int main(int argc, char **argv) {
    int result = 0;
    log_init();
    testing::InitGoogleTest(&argc, argv);
    result = RUN_ALL_TESTS();
    return result;
}
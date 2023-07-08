#include <helloworld.h>
#include <gtest/gtest.h>
#include <string>

using namespace std;

TEST(Helloworld, Msg) {
  EXPECT_TRUE(msg[0] == "Hello");
  EXPECT_TRUE(msg[1] == "C++");
  EXPECT_TRUE(msg[2] == "World");
  EXPECT_TRUE(msg[3] == "from");
  EXPECT_TRUE(msg[4] == "VS Code");
  EXPECT_TRUE(msg[5] == "and the C++ extension!");
}
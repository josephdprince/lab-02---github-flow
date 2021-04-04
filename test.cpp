#include "c-echo.h"

#include "gtest/gtest.h"

TEST(EchoTest, HelloWorld) {
    char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "hello"; test_val[2] = "world";
    EXPECT_EQ("hello world", echo(3,test_val));
}

TEST(EchoTest, EmptyString) {
    char* test_val[1]; test_val[0] = "./c-echo";
    EXPECT_EQ("", echo(1,test_val));
}

TEST(EchoTest, SingleChar) {
	char* test_val[2]; test_val[0] = "./c-echo"; test_val[1] = "a";
	EXPECT_EQ("a", echo(2, test_val));
}

TEST(EchoTest, NonAlphaChars) {
	char* test_val[2]; test_val[0] = "./c-echo"; test_val[1] = "12@#3";
	EXPECT_EQ("12@#3", echo(2, test_val));
}

TEST(EchoTest, NewlineChar) {
	char* test_val[2]; test_val[0] = "./c-echo"; test_val[1] = "/n";
	EXPECT_EQ("/n", echo(2, test_val));
} 

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

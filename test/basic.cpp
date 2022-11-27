//
//  Copyright 2022 Ilya Shchukin
//  Distributed under the Boost Software License, Version 1.0
//  See accompanying file LICENSE or copy at https://www.boost.org/LICENSE_1_0.txt
//

#include <gtest/gtest.h>

#include <args/args.h>

// Demonstrate some basic assertions.
TEST(ArgsTests, DummyTest) {
    // Expect equality.
    EXPECT_EQ(7 * 6, 42);
}

TEST(ArgsTests, ArgsTest) { EXPECT_EQ(args::parse_args(2, nullptr), true); }

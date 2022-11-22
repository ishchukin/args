//
//  Copyright 2022 Ilya Shchukin
//  Distributed under the Boost Software License, Version 1.0
//  See accompanying file LICENSE or copy at https://www.boost.org/LICENSE_1_0.txt
//

#include <args/args.h>

int main(int argc, char **argv) {
    return args::parse_args(argc, argv) ? 0 : -1;
}

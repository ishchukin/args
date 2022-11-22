//
//  Copyright 2022 Ilya Shchukin
//  Distributed under the Boost Software License, Version 1.0
//  See accompanying file LICENSE or copy at https://www.boost.org/LICENSE_1_0.txt
//

#ifndef ISHCHUKIN_ARGS_ARGS_H
#define ISHCHUKIN_ARGS_ARGS_H

namespace args {

inline bool parse_args(int argc, char** /*argv*/) {
    return argc > 1;
}

}

#endif // !ISHCHUKIN_ARGS_ARGS_H

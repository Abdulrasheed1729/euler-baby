project(
    'euler-baby',
    'cpp',
    default_options: [
        'cpp_std=c++23',
        'warning_level=2', # -Wall -Wextra on GCC/Clang
        # 'buildtype=release',
        # 'b_lto=true',
    ],
)

args = ['-Werror', '-Wextra', '-Wall']

executable(
    'prob-2',
    'src/prob-2.cpp',
    cpp_args: args,
)

executable(
    'prob-5',
    'src/prob-5.cpp',
    cpp_args: args,
)

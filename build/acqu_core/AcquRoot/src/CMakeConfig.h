// here we define preprocessor variables which
// are set by CMake

#define CMAKE_ACQU_VERSION "4v6"
#define CMAKE_ACQU_DATE "09.07.13"
#define CMAKE_ACQU_VERSION_ID "09.07.13.09.07.13"

// the path to the ROOT installation which has been
// used to build it
#define CMAKE_ROOTSYS "/opt/root_v6.36.00"

// the path to the core/sys AcquRoot and to the user part
// the former $acqu_sys env variable
#define CMAKE_ACQU_SYSCORE "/home/dave/opt/AR.CATS/acqu_core"
// the former $acqu env variable
#define CMAKE_ACQU_USER "/home/dave/opt/AR.CATS/acqu_user"


// this is a small macro which checks for environment
// variables and falls back to above defined strings if
// not found
// we do NOT use local variables to cache getenv(...) call
// since it is a preprocessor macro
#define ENV_OR_CMAKE(env_var, cmake_def) getenv(env_var)==NULL ? cmake_def : getenv(env_var)
// example to obtain the path to acqu_core:
// ENV_OR_CMAKE("acqu_sys", CMAKE_ACQU_SYSCORE)



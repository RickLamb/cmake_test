
CMake project layout test of executables and libraries

Pros
1) Each library can be a seperate git repo, a mixture of public or private or local server
2) Each library can have unit tests, but they don't pollute dependencies
3) Dependencies build libraries from source so you can debug and work on library from dependency
4) Repos may be submodules or not as wished

Cons
1) Each commit to libary repos isn't idempotent accross all projects
2) Commiting to multiple repos isn't great, but unavoidable if you want a mixture of repo types

Out of source builds recommended outside git repo folder
e.g cmake_layout_test/AppC -> cmake_layout_test/build/AppC
cmake_layout_test/LibA -> cmake_layout_test/build/LibA
etc..


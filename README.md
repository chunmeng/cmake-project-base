# cmake-project-base
A base repo for cmake-based project (Linux only)

# Build dependency
This was tested on a dev machine with many build essentials already installed.
So the actual needed packages for this project to build is not verified.

```
sudo apt install cmake -y
```
- [ ] Use a clean docker image to confirm the build dependency

# Reference
Here are some opensource works referenced when creating this project.

- https://gitlab.kitware.com/cmake/community/wikis/doc/ctest/Testing-With-CTest
- https://github.com/Crascit/DownloadProject (with older cmake)
- https://gist.github.com/johnb003/65982fdc7a1274fdb023b0c68664ebe4 (with newer cmake 3.9)

And ofcourse the ever so helpful stackoverflow.

# Build step

1. Generate the out of source Makefiles
```
// with cmake (< 3.13)
cmake -H. -Bbuild
// For cmake (> 3.13): cmake -S . -B build
```

2. Build the executable and test binaries
```
make -C ./build
```

3. The executable binary is under build/src/

4. The test binary is under build/test/
4.1 It can be runs individually
```
./build/test/Test
```
4.2 Using ctest (Need to change directory)
```
cd build && ctest -V
```
4.2 Using make with target under project root directory
```
make -C ./build test
```

# cmake-project-base
A base repo for cmake-based project (Linux only)

sudo apt install cmake curl -y

https://gitlab.kitware.com/cmake/community/wikis/doc/ctest/Testing-With-CTest
https://github.com/Crascit/DownloadProject
https://gist.github.com/johnb003/65982fdc7a1274fdb023b0c68664ebe4 (newer - with cmake 3.9)

To build executable:
cmake -H. -Bbuild

make -C build
make -C build test

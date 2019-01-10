# cmake-project-base
A base repo for cmake-based project (Linux only)

sudo apt install libgtest-dev cmake curl -y

To build executable:
cmake -H. -Bbuild

To build and run unittest:
ctest -V -O ut.log
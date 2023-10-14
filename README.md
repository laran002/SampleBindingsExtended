## Setup

To setup a virtual environment being able to build shiboken modules follow the instruction below. This specific instruction is intended to be used with PySide6 6.5.2

* Create a virtual environment
```bash
mkvirtualenv Shib6Gen
```

* The shiboken generator is not part of pip whhels, so need to be installed separatly ino the environment.
```bash
pip install \
    --index-url=https://download.qt.io/official_releases/QtForPython/ \
    --trusted-host download.qt.io \
    shiboken6_generator
```

* Install pyside6 of the same version as the shiboken generator. If the install above installed generator version 6.5.2, then run the line below
```bash
pip install pyside6==6.5.2
```

* Setup environmental variables for library parth and QT installed versions. These path will have to be adopted to your system setup.
```bash
PATH=~/Qt/6.5.2/gcc_64/bin:$PATH
export LD_LIBRARY_PATH=~/Qt/6.5.2/gcc_64/lib
export CLANG_INSTALL_DIR=~/Downloads/libclang/
```

## Build

To build the project

```bash
mkdir ./build
cd ./build/
cmake -H.. -B. -G Ninja -DCMAKE_BUILD_TYPE=Release
ninja
ninja install
```

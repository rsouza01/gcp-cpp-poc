# LIB

## Intalling gcp dependencies

git -C $HOME clone https://github.com/microsoft/vcpkg.git
env VCPKG_ROOT=$HOME/vcpkg $HOME/vcpkg/bootstrap-vcpkg.sh
<!-- cmake -H. -Bcmake-out/ -DCMAKE_TOOLCHAIN_FILE=$HOME/vcpkg/scripts/buildsystems/vcpkg.cmake -->

cd $HOME/vcpkg
./vcpkg install google-cloud-cpp[core,secretmanager]


* https://github.com/googleapis/google-cloud-cpp/tree/b7056e80092636d9bd0296e319b05b0e552d56d6/google/cloud/secretmanager/quickstart

## MATLAB REFERENCES

* https://nl.mathworks.com/matlabcentral/answers/285909-compiling-mex-file-that-depends-on-external-libraries-with-extension-so-n
* https://nl.mathworks.com/matlabcentral/answers/102592-how-do-i-link-against-external-library-files-when-compiling-my-matlab-file-with-the-matlab-compiler

## CMake REFERENCES
* https://medium.com/@onur.dundar1/cmake-tutorial-585dd180109b
* https://cmake.org/cmake/help/latest/guide/tutorial/A%20Basic%20Starting%20Point.html


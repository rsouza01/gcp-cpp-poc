# LIB

## Intalling gcp dependencies

git -C $HOME clone https://github.com/microsoft/vcpkg.git
env VCPKG_ROOT=$HOME/vcpkg $HOME/vcpkg/bootstrap-vcpkg.sh
<!-- cmake -H. -Bcmake-out/ -DCMAKE_TOOLCHAIN_FILE=$HOME/vcpkg/scripts/buildsystems/vcpkg.cmake -->

cd $HOME/vcpkg
./vcpkg install google-cloud-cpp[core,secretmanager]


* https://github.com/googleapis/google-cloud-cpp/tree/b7056e80092636d9bd0296e319b05b0e552d56d6/google/cloud/secretmanager/quickstart

## REFERENCES

* https://medium.com/@onur.dundar1/cmake-tutorial-585dd180109b
* https://cmake.org/cmake/help/latest/guide/tutorial/A%20Basic%20Starting%20Point.html


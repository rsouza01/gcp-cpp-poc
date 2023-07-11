#!/bin/bash

OUTPUT="./output"
rm -rf $OUTPUT/

cmake -H. -B${OUTPUT}
cd ${OUTPUT}
cmake --build .
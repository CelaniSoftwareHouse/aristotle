#!/bin/bash

mkdir -p build
cd build

#Utility function which show the command sintax
usage() {
  echo "Usage of build: $0 --type=[Release|Debug]"
  exit 1
}


# Default values for variables
TYPE=""

# Parse command line arguments
while [[ "$#" -gt 0 ]]; do
    case $1 in
        --type=*)
            TYPE="${1#*=}"
            ;;
        *)
            echo "Unknown parameter passed: $1"
            usage
            ;;
    esac
    shift
done

# Check if TYPE is set and has a valid value
if [ -z "$TYPE" ] || { [ "$TYPE" != "Release" ] && [ "$TYPE" != "Debug" ]; }; then
    usage
fi

#Cmake commands
cmake -DCMAKE_BUILD_TYPE="$TYPE" ..
cmake --build .
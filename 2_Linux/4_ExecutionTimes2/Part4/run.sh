#!/bin/bash
# Check if load parameter is given
if [ $1 == "" ]
then
  echo Please run like ./run.sh 5000000
fi
# compile the source code
gcc load.c -o load 

# create copies of executable with different names. This can help to identify them in top.
cp load load1
cp load load2
cp load load3
cp load load4
cp load load5

# just to make the parameter verbose
export LOAD=$1

# launch all programs in parallel. Without the '&' they would be executed sequentially.
./load1 1 10 100 $LOAD &
./load2 2 10 50000 $LOAD &
./load3 3 10 1000000 $LOAD &
./load4 4 10 500000000 $LOAD &
./load5 5 10 100000000000 $LOAD

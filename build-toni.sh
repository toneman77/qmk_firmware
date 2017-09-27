#!/bin/bash
# adjust for cpu 
# -j 16 gave best result on a hyperthreaded quad core core i7

LIMIT=10
THREADS="-j 16"
KMAP=iso_split_rshift
KEYB=$1

echo "We need sudo later"
sudo ls 2>&1 /dev/null

make ${KEYB}-${KMAP}-clean
make ${KEYB}-${KMAP} ${THREADS}
if [[ $? -eq 0 ]]
then
    echo "please trigger flashing!"
#   wait_bootloader
    sudo make ${KEYB}-${KMAP}-dfu ${THREADS}
else
    echo "make failed"
    exit 77
fi

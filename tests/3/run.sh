#!/bin/sh

qsub jobsript.sh 

if [ "$?" == "0" ]; then
	echo "CORRECT"
fi

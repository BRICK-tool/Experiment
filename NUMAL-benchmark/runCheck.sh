#!/bin/sh
time=300
space=2048
fname="test"
res="result_10_5"
mkdir $res
mkdir $res/CHAPTER1
mkdir $res/CHAPTER2
mkdir $res/CHAPTER3
mkdir $res/CHAPTER4
mkdir $res/CHAPTER5
mkdir $res/CHAPTER6
mkdir $res/CHAPTER7
cat handle.txt | while read line
do
	    name=${line%.*}
	    filename=$(basename $name)
		tofile=$res/${name}.txt
	    if [ -f ${tofile} ]; then
	    	continue
	    fi
	    echo " //~~~~~~~~~~~~~~~${name}~~~~~~~~~~~~~~~~~~~ "
	    runlim --time-limit=${time} --space-limit=${space} ./BRICK bench/${name}.c -f ${fname} -b 10 -p 0.01 -d > $tofile 2>&1
done

echo "check finished!-------------------------------------------"
mkdir Done

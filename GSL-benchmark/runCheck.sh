#!/bin/sh
urfile="FuncName.txt"
time=300
space=2048
resdir="result"

mkdir $resdir 
tac $urfile | while read line
do
	name=${line}
	if [ -d "${resdir}/$name" ];then
		if [ -f "${resdir}/$name/$name.txt" ];then
			continue
#		rm -rf "$resdir/$name"
		fi
	fi
	mkdir "$resdir/$name"
	echo "checking ${name}-------------------------"
	runlim --time-limit=${time} --space-limit=${space} ./BRICK gsl_sf.c -f ${name} -b 20 -d >> $resdir/${name}/${name}.txt 2>&1
	sudo echo 3 > /proc/sys/vm/drop_caches
done
echo "check complete-------------------------"

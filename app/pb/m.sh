#!/bin/sh
cd `pwd`
protoc -I=. --cpp_out=. $1.proto
mv $1.pb.cc $1.pb.cpp
Proto2AS $1.proto
mkdir $1
mv -f *.as $1
rm -rf ../../as/$1
mv -f $1/ ../../as
cp $1.proto ../../as

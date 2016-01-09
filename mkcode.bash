#/bin/bash
num=$1
mkdir $num
cd $num
if test -f a.cpp;
then
	codename="a.cpp"
elif test -f b.cpp;
then
	codename="b.cpp"
elif test -f main.cpp
then
	codename="main.cpp"
else
	cp ~/work/template/b.cpp a.cpp
	codename="a.cpp"
fi
#echo "cname=$codename "
if test "$codename" != "a.cpp";
then
	mv $codename a.cpp
	codename=a.cpp
fi
#echo "codename=$codename  num=$num"
if ! test -f "input.txt"
	then touch input.txt
fi
if ! test -f "output.txt"
	then touch output.txt
fi
vim -p a.cpp input.txt output.txt


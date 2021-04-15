if [ $1 = "-c" ]
then tar czf $2 ${@:3}
elif [ $1 = "-e" ] 
then tar -zxvf $2
fi